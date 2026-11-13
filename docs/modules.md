# Module overview of the game layer (consolidated)

Source files are named after the module; row n of a module is `<name>.c`, `<name>_2.c` ...; `_alt` files hold functions whose declarations disagree with their row neighbours; `_equiv` marks non-matching C that shares a row with a byte-matching unit.

## Function name prefixes (count of named functions)

pl 850, fx 386, stage 135, ai 122, menu 105, res 69, vmu 64, cam 62, math 48, nl 47, obj 46, ending 44, opt 38, game 34, hit 33, bgm 28, ui 25, item 21, fx31 17, keycfg 15, testmode 14, sys 13, snd 9, part 9, dbgedit 9, attract 9, gfx 9, mdl 8, dbg 8, rank 8, demo 6, dbgmotion 6, omake 5, pad 4, conv 4, printf 4, save 3, staffroll 3, fs 3, draw 3, boot 3, vec3s 2, fxslot 2, mot 2, vib 2

## Module map (file stem: address range, role)

- `vmu_save`: 0c010160..0c010160: VMU save/load: port table, LCD image, save pack/unpack, state machines, VMS CHECK boot screen
- `pad_input`: 0c012568..0c012870: controller records (pad_state), pad polling, pad type
- `ending_objects`: 0c0128a0..0c0128a0: ending sequence: scripted objects, update table, spawners, ending state/script
- `ending_scene`: 0c0158d8..0c01628c: ending scene state, groups of ending sprites, staff roll controller (same ending mode)
- `staff_roll`: 0c017240..0c0172e0: staff roll: fade object and credit line spawner
- `menu_keycfg`: 0c017a24..0c017a24: KEY CFG screen (two player columns, settings and button maps)
- `menu_game_options`: 0c0195f0..0c0195f0: game settings screen (7 option bytes, defaults item)
- `menu_option1`: 0c019bf4..0c019bf4: OPTION group screen 1
- `menu_option2`: 0c01a42c..0c01a42c: OPTION group screen 2
- `menu_option3`: 0c01ae48..0c01ae48: OPTION group screen 3
- `menu_option4`: 0c01b66c..0c01b66c: OPTION group screen 4
- `menu_omake`: 0c01b9f4..0c01d254: OMAKE menu screens and unlock query
- `menu_keycfg_edit`: 0c01d304..0c01d304: key config editing screen (state 0c362378, reset keys)
- `menu_vmu`: 0c01e798..0c020258: VMU save/load menu UI (handlers over the vmu_step_* state machines)
- `hit_boxes`: 0c0203d0..0c025958: hit box data converters, per-frame object lists, hit edit draw
- `misc_26c7c`: 0c026c7c..0c026c7c: not identified yet (keep old name)
- `misc_276c4`: 0c0276c4..0c0276c4: not identified yet (keep old name)
- `fs_dir`: 0c027b90..0c027b90: directory change helpers over gdFsChangeDir
- `misc_27c74`: 0c027c74..0c027c74: not identified yet (keep old name)
- `misc_27d50`: 0c027d50..0c027d50: not identified yet (keep old name)
- `ui_sprite_queue`: 0c027f90..0c027f90: 192-entry sprite queue used by all menu and HUD draws
- `misc`: 0c028030..0c028030: not identified yet (keep old name)
- `demo_attract`: 0c028524..0c02a1f4: attract/demo screen objects (bank SYUKYAKU/DEMO COMN)
- `logo_screens`: 0c02afc4..0c02b884: PSTONE LOGO bank objects and logo screens
- `draw_frame`: 0c02ca74..0c02ca74: scene render per frame (cameras, split screen), then HUD
- `ui_hud`: 0c02d774..0c02ff18: HUD: init, gauges, combo and hit counter, win marks, per-frame draw dispatcher
- `ui_fade`: 0c03148c..0c03148c: screen fade: start/reset/draw (full-screen coloured quad)
- `effects`: 0c0318e0..0c04b428: effect object spawn/tick pairs (obj_create class 5/6/1/3 + tick); consecutive rows are one module game_fx
- `snd_delayed_sound`: 0c04571c..0c04571c: delayed sound trigger object (spawn+tick)
- `effects_model`: 0c046798..0c047c6c: generic model effect (node table, linked to owner record); same module as neighbours
- `item_popup`: 0c049e68..0c049e68: item pickup text popup (POWER UP / LIFE UP): spawn + tick
- `effects_hit_effects`: 0c04b6b8..0c04b6b8: hit effect spawners (04B6B8..04BEF2) and kind dispatchers
- `ai_core`: 0c04bfd0..0c04bfd0: CPU fighter AI: slot helpers, debug overlay, script runner/selector, ai_think, first opcode handlers
- `ai_ops`: 0c04e94c..0c052150: AI script opcode handlers (table 0C32D7F8); consecutive rows are one module game_ai
- `ai_goal_ops`: 0c04fed8..0c04fed8: AI goal/angle helpers and movement/pick opcodes
- `flow_main`: 0c052708..0c052708: start-button poll, per-frame update, mode handlers 0..4
- `flow_stats`: 0c053680..0c053680: play-time/max-combo stats and mode handlers
- `flow_state`: 0c054114..0c054114: mode 5..9 handlers, state predicates, HP gauge tick
- `scene_obj`: 0c0559bc..0c058ba4: class-6 scene objects (spawn+tick pairs, table 0C4CFA80 parts); consecutive rows are one module
- `object_pool`: 0c058ef4..0c058ef4: object pool, class lists, part pools, obj_create/obj_destroy/obj_tick_class
- `damage_calc`: 0c059718..0c059718: damage scale (hit_calc_damage)
- `difficulty_level`: 0c05986c..0c0599fc: level/difficulty tables g_305c and random picks (0597CE..0599FC)
- `weapon_pose`: 0c059c44..0c059c44: float helper loops and weapon pose setup (059C44..05A6E8)
- `item`: 0c05a6e8..0c05d536: item objects (class 2): create, modes, held/thrown ticks; consecutive rows are one module game_item
- `actor_effects`: 0c05d970..0c05ec26: actor objects: reset/update routines sharing the entity header (counter byte 8, rotation 44..52, velocity 56..64); exact class not identified
- `fxslot`: 0c05eea0..0c05eea0: 8 record slots (144 bytes) at 0xc7f3238: clear, start by priority level, HUD/effect sprite helpers
- `lighting`: 0c05f6d8..0c05f6d8: light/ambient helpers (vector sub/normalize, nlObjPutSetGlobalAmbience) using the slot records
- `resload`: 0c05fc50..0c05fc50: resource loader: file load/unpack, texture and model register/release, per-scene sets, per-player model load
- `system_init`: 0c061094..0c061434: boot/init/shutdown of the system, file loader with retry (gd error handler), boot sequence returning the next scene
- `math_vec`: 0c062050..0c0620a4: float/int vector and matrix helpers
- `mdl_util`: 0c06231c..0c062de8: node transform defaults, table getter, model vertex cursor (mdl_vtx_*)
- `resload_player`: 0c062b1c..0c062b1c: per-player motion data and sound pointer table setup, model utilities
- `gfx_view`: 0c062f10..0c062f10: matrix/view computation helpers (invert, transform points)
- `player_state_common`: 0c063318..0c065cb4: shared fighter code: item pickup, mode enter/update handlers (modes 1..15), hit/knock-back states
- `player_special_common`: 0c06734c..0c06734c: three shared 2-phase special/grab moves (start, update, dispatch)
- `player_falcon`: 0c067870..0c06924c: character 0 (Falcon): frame hook, state dispatchers, start-action wrappers, specials, victim hooks
- `player_ryoma`: 0c069a98..0c06d8b0: character 1 (Ryoma)
- `player_wangtang`: 0c06dff0..0c071e60: character 2 (Wang Tang)
- `player_jack`: 0c072818..0c076d98: character 3 (Jack)
- `player_gunrock`: 0c077428..0c079386: character 4 (Gunrock)
- `gunrock_motion_sounds`: 0c07a1e4..0c07a1e4: tail of the Gunrock (char 4) block: motion sound table and effect-at-frame helper
- `garuda_frame_hook`: 0c07ac0c..0c07ac0c: Garuda (char 5) frame hook wrapper
- `garuda_moves`: 0c07ac20..0c07ac20: Garuda attack init/update dispatch and move init/update stubs
- `garuda_states`: 0c07c3ea..0c07d7b0: Garuda per-state update functions (states 11,21,22,31, specials) (part 1 of 6 of the same module)
- `garuda_hit_states`: 0c07d90c..0c07d90c: Garuda state helpers (sub-step switches)
- `garuda_motion_sounds`: 0c07dd0c..0c07dd0c: Garuda motion-id sound table
- `ayame_moves`: 0c07e774..0c07e930: Ayame (char 6) frame hook, move init stubs, attack init dispatch (part 1 of 3 of the same module)
- `ayame_states`: 0c07eb60..0c07eb60: Ayame state11 update (large) and specials
- `ayame_motion_sounds`: 0c080804..0c080804: Ayame motion-id sound table
- `rouge_moves`: 0c080ff4..0c081130: Rouge (char 7) frame hook, move init stubs and attack dispatch (part 1 of 2 of the same module)
- `rouge_states`: 0c081a46..0c08376c: Rouge state updates and specials (part 1 of 7 of the same module)
- `rouge_motion_sounds`: 0c083ce0..0c083ce0: Rouge motion-id sound table
- `kraken_moves`: 0c084168..0c084304: Kraken (char 8) frame hook, attack init dispatch, move init stubs (part 1 of 3 of the same module)
- `kraken_states`: 0c084310..0c086d98: Kraken attack update, class handlers and state updates (part 1 of 7 of the same module)
- `kraken_motion_sounds`: 0c087604..0c087604: Kraken motion-id sound table
- `valgas_moves`: 0c087c34..0c087d60: Valgas (chars 9/10) frame hook, attack dispatch, move init stubs (part 1 of 2 of the same module)
- `valgas_states`: 0c08975c..0c08a106: Valgas attack update and state updates (part 1 of 3 of the same module)
- `valgas_motion_sounds`: 0c08a140..0c08a140: Valgas motion-id sound table
- `actor_objects`: 0c08a6c0..0c08c648: secondary actor objects (arena clamp, angle helpers, owner transforms) (part 1 of 6 of the same module)
- `actor_motion_sounds`: 0c08c864..0c08c864: motion-id sound table of the secondary actors
- `hit_records`: 0c08d644..0c08d644: attack records, hit data setup, hit-stop shake, combo counter, damage helpers
- `hit_reactions`: 0c09111e..0c09153c: hit reaction handlers (table indexed by +71DD) and dispatcher (part 1 of 2 of the same module)
- `fighter_update`: 0c092814..0c093254: input snapshot, round-level update of the two fighters, per-player update (part 1 of 4 of the same module)
- `player_states`: 0c093998..0c09788c: state update functions of the player state machine (table 0xC3390D4) (part 1 of 14 of the same module)
- `player_state_misc`: 0c097c26..0c098160: state 41/42 phases, defaults, Valgas/boss specific handlers and setup helpers (part 1 of 2 of the same module)
- `player_setup`: 0c098c48..0c098c48: player object setup: list search, tint, scale, spawn positions, model nodes
- `player_matrix`: 0c099c08..0c099c08: model matrix building from euler angles and scale
- `player_motion`: 0c09a808..0c09a808: motion engine: start/step motion, key tables, attack record load
- `player_motion_math`: 0c09b068..0c09b0f8: motion length, key stream readers, angle deltas (part 1 of 2 of the same module)
- `vibration`: 0c09b7a4..0c09b7a4: controller vibration start/update/stop for both ports
- `player_util`: 0c09c974..0c09c974: player helper functions: lists, item class, combo, linked object placement
- `player_item_collision`: 0c09d544..0c09d544: item pickup and collision queries between fighters
- `player_move_physics`: 0c09d89c..0c09db78: velocity/acceleration/gravity, angle to opponent, stick direction (part 1 of 3 of the same module)
- `player_state_enter`: 0c09f6a8..0c0a16bc: player state enter handlers (table 0xC339490) and state-specific helpers; same module as the following rows up to 0c0a18f8
- `player_state_ctrl`: 0c0a18f8..0c0a18f8: player state change (pl_change_state) power form flags input chords and character move hooks
- `sound`: 0c0a2ee8..0c0a40e4: sound/BGM layer: ADX stream control bgm_play_* and snd_play_* table lookups
- `menu_select`: 0c0a41a0..0c0a41a0: player-select and stage-select flow (init update and VS announce); pad button helpers
- `menu_select_ui`: 0c0a71c4..0c0aba84: UI task objects (spawn/update pairs) of the player-select and stage-select screens
- `stage_object_base`: 0c0abd20..0c0abf64: stage object helpers: layout position load contact lists mode/owner setters
- `stage_layout_objects`: 0c0ac7f0..0c0ae77c: stage placement records: spawners and update/mode handlers for record types 1 2 3 4 8 11 12 and debris
- `stage_gimmicks`: 0c0aeab8..0c0b5a5c: stage gimmicks (record types 13/15): spawner table 0xC33A09C with their update functions
- `effects_impact`: 0c0b5d60..0c0b7590: short-lived effect objects spawned with position/angle/slot arguments (hit sparks etc)
- `effects_player`: 0c0b7998..0c0c6e6c: player-bound effect objects (layer 1): spawn + update pairs for transform/power/hit effects
- `effects_homing_shell`: 0c0c74bc..0c0c7668: character special-move effect: homing shell constructor (0c0c74bc) and per-frame update (0c0c7780 in next row)
- `effects_burst`: 0c0c7aa0..0c0c7c2c: burst effect constructor with two child sprites
- `effects_thrown_object`: 0c0c82b8..0c0c8460: thrown/spawned object constructor
- `effects_shells`: 0c0c8acc..0c0cb00c: effect object constructor and update pairs for character special moves (unidentified kinds)
- `effects_follow_owner`: 0c0cb50c..0c0cb50c: effects that follow their owner (constructor and update)
- `effects_swirl`: 0c0cb994..0c0cb994: swirling effect (constructor and updates)
- `round_flow`: 0c0cc074..0c0cc074: battle round flow record g_round_flow (init
- `dbg_text`: 0c0ccefc..0c0ccefc: debug text print entry dbg_print_at plus player part pointer helpers
- `testmode`: 0c0cdac0..0c0cdac0: NAOMI-style test mode (colour test
- `dbgmotion`: 0c0cf408..0c0cf408: debug motion viewer (Player No./Motion Kind)
- `dbgedit`: 0c0cfe04..0c0d2a70: debug work/player/stage editor (CHAR/EDIT/MENU mode); not a resource loader
- `dbgatk`: 0c0d24ec..0c0d24ec: debug attack/defence/hit parameter editor
- `dbgkey`: 0c0d2a8c..0c0d2a8c: debug key-frame viewer text
- `attract_ranking`: 0c0d2dd8..0c0d2dd8: attract sequence: ranking screens (time/1P points/VS)
- `ui_wins`: 0c0d46e4..0c0d46e4: win counter text
- `boot_screens`: 0c0d54c0..0c0d54c0: version and warning screens at boot
- `screen_mode`: 0c0d57a4..0c0d7f30: game mode function (unidentified)
- `result_screens`: 0c0d5bc0..0c0d5bc0: challenger / continue / the end screens and win text
- `menu_option`: 0c0d71f4..0c0d71f4: option menu: state machine and item handler table
- `camera`: 0c0d80d4..0c0dc9d4: camera records
- `nl_layer`: 0c0dca60..0c0dca60: nl layer-object control helpers (end-of-frame)
- `nl_objput`: 0c0dcae0..0c0dd2d0: nlObjPut family (object put with world or view matrix)
- `nl_texture`: 0c0dd310..0c0dd880: nl texture/strip slot management
- `nl_screen_math`: 0c0ddf30..0c0ddf30: nl screen/frame buffer wrappers
- `nl_debug_text`: 0c0dfe20..0c0dfe20: debug text printing (dbg_set_cursor_cell
- `nl_objasm_plain`: 0c0e7240..0c0e7240: nl object draw (plain vertex format) and its helpers
- `nl_objasm_ofst`: 0c0e8340..0c0e8340: nl object draw (offset colour format)
- `nl_objasm_spd`: 0c0e94ca..0c0e94ca: nl object draw (spd and spd_ofst formats)
- `nl_objasm_misc`: 0c0eacf0..0c0eacf0: stub
- `nl_texture_slots`: 0c0ead50..0c0eb0c0: texture slot helpers
- `system_rtc_internal`: 0c0eb0f0..0c0eb400: AICA RTC internals used by syRtc*
- `libc_printf_core`: 0c0eb758..0c0eb758: vsprintf formatting core and helpers
- `nl_objasm_vtxcol`: 0c0ec180..0c0ec180: nl object draw (vtxcol format)
- `nl_objasm_bump`: 0c0ecce0..0c0ecce0: nl object draw (bump format)

## Descriptions from the regional passes

# Modules found in 0c010160-0c03148c (names are the new file names of NAMES_FILES.csv)

## game_vmu_save (0c010160-0c012568)
Visual memory (VMU) layer. Entry points: vmu_init (registers vmu_event_callback/vmu_event_handler, which keep an 8-port slot table),
vmu_get_*_mask (which ports are ready, hold POWSTONE_DAT, hold the POWSTONE__VM mini-game, have free blocks), the state machines
vmu_step_save / vmu_step_load / vmu_step_write_vmgame / vmu_step_load_vmgame / vmu_step_rewrite_vmgame (mount, library call, unmount, LCD image
via vmu_lcd_set_*_image + vmu_lcd_refresh), and save_pack_data / save_unpack_data (RAM <-> 0xF8-byte save buffer, wrapped by vmu_make_save_image).
save_reset_all_data builds the default settings, key maps and ranking tables ("CAP"). vmu_check_task is the boot "VMS CHECK" task
(resource state 0xB): picks a port, loads or creates the save, shows message objects (vmu_check_show_message). File names seen: POWSTONE_DAT,
POWSTONE__VM, ICONDATA_VMS. Users: game_menu_vmu, mode functions through 0c0617xx tables.

## game_pad_input (0c012568-0c0128a0)
pad_state (2 records of 0x14 bytes): pad_state_clear, pad_poll_all (reads peripherals), pad_get_type. Menus read the three bit fields
at +8/+0xA/+0xC with the DC button masks. pad_get_start_mask is in game_menu_option4.

## game_ending_objects / game_ending_scene / game_staff_roll (0c0128a0-0c017a24)
Ending sequence (resource state 9: ENDING, END COMN, LOCAEND banks; textures in ending_tex_bank 0c6649d0). Objects are layer-5 task objects
(see NAMES_STRUCTS FxObject) whose update function comes from ending_obj_update_tab (15 entries, ending_obj_update_t00..t0e); ending_obj_run_script
interprets 20-byte commands (0c17e3b0). ending_script_update walks 8-byte script entries per character (0c17ca88[0c7f3081]) and
ending_exec_command executes each (spawn objects ending_spawn_obj_*, sound, flags). ending_main / ending_scene_main / ending_mode_frame drive it
(ending_main also holds the "SELECT ENDING" debug text); staffroll_task_update + staffroll_spawn_line create the credit lines from the pair table
0c17eb98 (strings at 0c116c49...). Small math helpers: obj_apply_velocity/accel/scale_rate, obj_step_pos_vel_acc, ending_fade_obj_update.

## game_menu_keycfg, game_menu_game_options, game_menu_keycfg_edit (0c017a24-0c019bf4, 0c01d304-0c01e798)
KEY CFG resource group (bank 0c664af0): keycfg_menu_main (two player columns, system settings via opt_reset_system_settings, key maps via
opt_reset_key_config), keycfg_settings_changed; game settings screen opt_game_settings_* (7 option bytes with value limits, default item calls
opt_reset_game_options, cursor skips locked items 0c7f4744..47, opt_game_settings_changed compares with saved copy). The editing screen
(state 0c362378) is unnamed but identified by key_config accesses.

## game_menu_option1..4 (0c019bf4-0c01b9f4)
Four screens whose objects use the OPTION bank (0c664ac0); each has init (memset of its work), main state machine, run_objects_in_mask /
obj_in_mask helpers and a pad_pressed test; sound ids 0x4B (move), 0x4C, 0x4D (decide) via 0c0a3796. Screen 3 also starts the ending
(it calls ending_main/ending_scene_main: an ending viewer). Titles of the screens are not determined.

## game_menu_omake (0c01b9f4-0c01d304)
OMAKE (extras) menu: omake_menu_main (bank 0c664aa8), omake_is_item_unlocked (15 items over save_options bytes), sprite drawing with
ui_draw_object_sprite / ui_draw_element_sprite.

## game_menu_vmu (0c01e798-0c020258)
Save/load menu on top of the VMU state machines: vmu_menu_init/reset, handlers vmu_menu_state_save / _load / _write_vmgame / _rewrite_vmgame,
vmu_menu_update_objs (object steps), vmu_menu_draw_buttons (five fixed sprites + pulsing cursor). Uses SYSTEM FONT bank 0c664b08.

## game_hit_boxes (0c0203d0-0c026c7c)
Per-frame update of the object lists (0c0203d6 calls list reset, three list processors, hit-edit drawing with nlPopMatrix), short->float record
converters (vec3f_to_vec3s, conv_s16xN_to_f32), table-driven record readers 0c022952-0c022ca8 keyed by the body kind (+2/+3 of the object) over
the table 0c7d08e0, with the HIT EDIT debug draw (0c025706 uses ending_rank_work and 0c33eaxx boxes). Mostly unnamed; kind of data inferred from
the converters and the P*_HIT.BIN files.

## game_fs_dir, game_ui_sprite_queue (0c027b90-0c027c74, 0c027f90-0c028030)
fs_change_dir_path walks a path with gdFsChangeDir (depth in fs_dir_depth), fs_change_dir_up undoes it. ui_sprite_queue_reset/add is the 192-entry
sprite queue used by every menu and HUD draw call (56-byte record, sheet descriptor + cell).

## game_demo_attract, game_logo_screens (0c028524-0c02ca74)
Objects using the SYUKYAKU/DEMO COMN banks (0c6649e8, 0c6649a0) with demo_attract_main; PSTONE LOGO bank (0c664a00/0c664a08) objects with
logo_spawn_overlay (spawned by several menu modes). Not examined in detail.

## game_draw_frame, game_ui_hud (0c02ca74-0c03148c)
game_draw_frame: per frame scene render (camera matrices, split screen flag 0c7f319e, fog/clear colour screen_fade_rgb), then ui_draw_hud which calls
ten HUD draws (gauges, time, wins, combo messages, hit counter, world numbers; ui_init_hud prepares the state). Strings seen in rodata:
HIT, WINS, TIME, FINE!/SPLENDID!/EXCELLENT!/... (combo praise), team names; the functions that draw them are in the 0c02e*/0c030* range.

# Modules found in 0c03148c-0c05d970 (function counts are from functions.txt)

Note on the existing row names: the old labels "debug info / debug print overlay" for 0C04BFD0-0C04EADE are true for the overlay (strings Kyori/Timer/Lever/NANDO...) but the code around it is the CPU-fighter AI, so the rows are named game_ai_*.

## game_object_pool (0c058ef4-0c0596e0) - the object system everything else uses
obj_system_init builds 100 objects (0x31C bytes) and 3 part pools; obj_create(class, dir, nparts, part_kind) pops an object, links it in one of 10 class lists and gives it parts; obj_tick_class / obj_tick_all call each active object's tick pointer (+0x10); obj_destroy unlinks and returns it. 369 and 373 callers: every effect/item/projectile uses it. Also pl_reset_pair (two player records, opponent links) and game_reset_objects.

## game_fx_* (0c0318e0-0c04bda4, 0c055cba..) and game_scene_obj_* (0c0559bc-0c058e62)
About 130 spawn/tick pairs. fx_spawn_X creates an object (mostly class 5, 2-10 parts), sets its sprite ids and stores fx_tick_X at +0x10; the tick is a state machine (+8/+9) with a countdown at +0xEC that follows a fighter node and ends with obj_destroy. Spawners are called from the character move code (0C06xxxx-0C0Bxxxx). Names are role + spawn address: the visual meaning was not provable without the callers. Special ones: fx_spawn_item_sparkle, snd_spawn_delayed_sound (class 6, plays a sound after a delay), fx_spawn_model_effect / fx_tick_model_effect (4438-byte generic model effect) with fx_spawn_on_player_part and fx_spawn_linked_effect, fx_spawn_hit_effect(_set) dispatching on a hit kind 0..9, item_spawn_pickup_popup (text POWER UP / LIFE UP).

## game_ui_fade (0c03148c-0c0318e0)
ui_fade_start(colour, ...), ui_fade_reset, ui_fade_draw (full-screen quad with alpha counter/duration).

## game_ai_* (0c04bfd0-0c052708) - CPU fighter AI as a script interpreter
ai_think runs per fighter per frame, compares the fighter with the AI slot copy (form, move state, opponent form), counts an idle timer and chooses an action by candidate bits (distance/height/angle tests, random with percentage), then ai_select_script picks a script. ai_run_script is a bytecode interpreter: shorts at g_ai_pc, handler table tab_ai_ops (88 entries, ai_opNN functions); ops load registers (own/target hp, form, move state, distances, random), jump conditionally, call/return scripts, set movement goals (random point, stage table, nearest item/object), press direction/buttons through pad_bits, wait until idle, print debug. ai_draw_debug_info prints the slot on screen (Kyori/Timer/Lever/Mode/Hitdt/Mask/IntLv/Table/Target/Pos/NANDO). Five table entries (opcodes 18, 34, 45, 53, 57) point to addresses that are not functions in functions.txt (04EDBC, 04EAC4, 04FA64, 04FC3C, 04EF24).

## game_flow_* (0c052708-0c055862) - game mode machine
g_game_mode (0C7F302C) indexes tab_game_mode_handlers (10 entries, game_mode_handler_N); each handler dispatches on g_game_substate. game_frame_update runs the handler then ticks all object classes. Also START-button polling, play-time and max-combo statistics per player (0x78-byte records at g_player_stats), assorted state predicates.

## game_damage_calc (0c059718)
hit_calc_damage: scale from level tables, combo counter, hp and power state.

## game_item_* (0c05a164-0c05d970) - items (class 2)
item_create, item_tick (mode switch), item_tick_held / item_tick_thrown, item_attach_to_hand, item_init_hold_pose, item_draw_marker (world marker when in front of the camera), item sparkles. State block g_item_state (0C7F2664) and per-player flags g_item_player_flags.

# Modules found in 0c05d970-0c07a1e4 (65 source rows, 597 functions; 318 named)

## game_actor_effects (0c05d970-0c05eea0, 4 rows)
Actor/entity objects that share the entity header (counter byte 8, rotation +44..52, velocity +56..64, accel +68..76).
Each group has a reset function (bumps counter byte 8, clears fields, copies two 12-byte vectors from fixed tables) and
update functions with sin/cos and a random helper. Class of the object not identified: no names given.

## game_fxslot (0c05eea0-0c05f6d8)
Eight 144-byte slots at 0xc7f3238 (priority level, animation table, position block). `fxslot_clear_all`, `fxslot_start`
(fills a slot when the new level >= current). Many menus/screens call FUN_0c05f2d4 / FUN_0c05f952 (not named).

## game_lighting (0c05f6d8-0c05fc50)
Vector helpers using math_vec3_sub / normalize plus a call to nlObjPutSetGlobalAmbience (FUN_0c05fb58). Not named.

## game_resload (0c05fc50-0c061094, 66 functions)  -- the resource manager
* 24-byte records (loaded flag, count, handle, texture list). `res_textures_register/release`, `res_model_register/release`.
* `res_load_file_raw` / `res_load_file_unpack` load a disc file via `sys_load_file` into 0x0cc00000 (unpack goes through a
  0x0ca00000 buffer and a halfword expander, FUN_0c0612f4).
* One `res_<name>_load` / `res_<name>_release` pair per asset group; the names come from the label strings the loaders pass
  (ITEM, COCKPIT, EYECATCH, TEST TEX, FONT, 3D FONT, PSTONE LOGO, CSEL OPEN/KSEL/CSEL/SSEL, SYUKYAKU, DEMO COMN, ENDING,
  END COMN, LOCAEND TEX, OMAKE, OPTION, ART MODEL, ART ART MODEL, KEY CFG, VMS CHECK MODEL, SYSTEM FONT, CAPCOM 3D/LOGO, KYOUTSUU,
  STAGE, SET BRK, PL EFFECT, CKPT FACE).
* `res_switch_scene(n)` (hand_FUN_0c060c88.c): for scene 0..15 releases the unneeded groups and loads the new scene's groups.
* Per player: `res_player_load(slot)` = `res_load_pl_models` + `res_load_pl_effect` + `res_load_pl_motion_data` + FUN_0c062cf4;
  `res_player_release(slot)` releases the textures and the player entry (g_res_player_entries, 24 bytes per slot).
* Cockpit (HUD) face models: `res_cockpit_face_load/release(char)` and `..._all` over the 11 characters.

## game_sys_init (0c061094-0c062050)
Boot code: `sys_load_file` (file-by-index loader with gd error retry), `sys_init_all` (gdFsInit, RTC, config), `sys_shutdown_all`,
FUN_0c0616f4 = boot-time state machine that returns the next scene number (pad polling of g361bf0/g361c04, GD-ROM status).
Not all named (only high/medium evidence).

## game_math_vec / game_mdl_util / game_gfx_view (0c062050-0c063318)
Float vector helpers (`math_vec3_*`, `math_vec2_cos_between`), matrix helpers on top of nlCalcVector/nlCalcPoint/nlGetTranslate
(`math_mat_*`), integer vector add/sub, node default transforms (5 vec3 at +4,+16,+28,+40,+52 reset from constant tables),
model-vertex cursor `mdl_vtx_*` (two cursors over 32-byte vertices at 0xc439dc8..0xc439de0). FUN_0c062f10 = view/matrix
computation (invert, transform points) used by effect code.

## game_pl_state_common (0c063318-0c06734c): shared fighter code
* Item interaction: 0c063318/36c/3c0 (check nearby item at +0x71c8, set item state 12/11/10), 0c063428/468/4b4 (held item at +0x71cc).
* Mode (byte +0x721f) handlers, selected by every character's state dispatchers:
  `pl_mode01_03_*`, `pl_mode04_*` ... `pl_mode15_*` (`enter` once, `update` per frame). Mode 5 is the knock-back
  (velocity from cos/sin of the facing angle), mode 15 sets the pose for the held weapon kind (FUN_0c09c6b8 = held item kind).
  Modes 0 and 2 are not handled here: they run the character's own action tables.
* `pl_wait_anim_end*`: animation step, leave state when it ends.

## game_pl_special_common (0c06734c-0c067870)
Three shared 2-phase moves (`pl_special_a/b/c_*`): the starter sets the fighter's motion 7 and the opponent's (pointer +28) motion 66 and
starts an effect, i.e. a grab/throw-like special; `_dispatch` switches on byte 10 (phase). `pl_special_b_dispatch` is slot 1 of
the special table of Falcon/Ryoma/Wang-Tang/Jack, `pl_special_c_dispatch` is slot 1 for Gunrock.

## game_pl_<character> (Falcon 0c067870, Ryoma 0c069a98, Wang-Tang 0c06dff0, Jack 0c072818, Gunrock 0c077428; next characters in the following region)
Per-character modules, reached through the char-indexed tables (index = Player.char_id) read by the fighter step FUN_0c093254 /
FUN_0c09468c. Naming pattern, same for all five:
* `pl_<c>_frame_hook` (table 0x0c339070), `pl_<c>_motion_sfx` (switch on move code (bank<<8|id) playing frame-triggered sounds).
* `pl_<c>_state_enter` / `pl_<c>_state_update` (tables 0x0c339468 / 0x0c339180): switch on mode byte; modes 0 and 2 run the
  character action chosen by byte 0x7238 from `pl_<c>_start_action_tbl` / `pl_<c>_update_action_tbl`.
* `pl_<c>_start_motion_<N>`: 8-byte wrappers that start motion N of bank 1; `_start_action` (Ryoma: one function for all actions).
* `pl_<c>_update_action_default` / `_update_action_<i>`: per-frame update of an action.
* `pl_<c>_special<k>_dispatch` / `_phase<j>` / `_start` / `_update`: special moves (3 or 4 per character); `pl_<c>_check_special_input`
  (table 0x0c3393e0) tests three 20-byte input patterns and returns the index or 99.
* `pl_<c>_special_move_dispatch` (table 0x0c339310): jumps through the table indexed by Player.special_index (+0x7209).
* `pl_<c>_victim_dispatch` / `_victim_phase<j>` (table 0x0c339338, indexed by the OPPONENT's char id): reaction hook when this
  character's grab-type special hits the other fighter.
* `pl_<c>_state11_update`, `pl_<c>_state12_update`, `pl_<c>_attack_state_update`: hooks behind state slots 11 and 12 and the attack state.
Character order (from the file-name table and PLxx_DATA order): 0 Falcon, 1 Ryoma, 2 Wang-Tang, 3 Jack, 4 Gunrock; 5 Garuda,
6 Ayame, 7 Rouge, 8 Kraken, 9-10 Valgas follow in the next regions.

## Hidden entry points (reached only through tables or tail jumps)
Some functions are reached only through tables or tail jumps and are not entries of functions.txt (for example the Falcon attack-state
update 0c067d10, Ryoma state enter/update 0c06a69e/0c06a8ac, Wang-Tang 0c06e004/0c06e2c0, vec3 cross product 0c0621a2). They are listed
with suggested names for the lead to add as functions.

# Modules found (0c07a1e4-0c09f6a8)

All of this is the fighter layer of POWER STONE: one big object per fighter (see NAMES_STRUCTS.md), a numbered state machine and per-character code.

- **Per-character blocks (game_garuda_*, game_ayame_*, game_rouge_*, game_kraken_*, game_valgas_*, tail of game_gunrock_*).** Char ids follow the sound-bank order: 0 Falcon, 1 Ryoma, 2 Wang-Tang-Tang, 3 Jack, 4 Gunrock, 5 Garuda, 6 Ayame, 7 Rouge, 8 Kraken, 9/10 Valgas. Each block holds: a frame hook (entry of g_char_frame_hook_tab), the attack state init/update dispatchers (switch on move class +0x721F; class 0/2 use the per-character move-slot tables indexed by +0x7238, other classes go to shared handlers in 0c063xxx-0c0671xx), the move init/update stubs (each init starts a motion of group 1), per-state update overrides (states 11/12, 21, 22, 31) and a large motion-id sound table that calls FUN_0c0a37da(o, frame, sound).
- **Player state machine (game_player_states, game_player_state_misc).** State id in +0x71BA; g_state_update_tab runs every frame, g_state_init_tab is called from set_state (0xC0A2E26). Identified: 0/1 idle, 2/3/20 walk, 10 attack, 14 fall, 6 landing.
- **Motion engine (game_player_motion, game_player_motion_math).** pl_start_motion (group, index) loads the key tables of the character (0xC664B50 + char*0xB5EC8), pl_step_motion advances frames, pl_apply_motion_translation applies root motion.
- **Physics and angles (game_player_move_physics).** velocity/acceleration/gravity, angle to opponent, stick direction and stick zone.
- **Move input (game_player_move_input).** matching of pressed buttons to the per-character move command list.
- **Hit data (game_hit_records, game_hit_reactions).** attack records, hit-stop, combo counter, hit reaction handlers dispatched through g_hit_reaction_tab[+0x71DD].
- **CPU player (game_ai).** ai_update_slot, ai_pick_reaction, ai_run_script, distance classes.
- **Vibration (game_vibration).** pdVib* wrappers per port.
- **Fighter update (game_fighter_update).** game_update_fighters (opponent distance, AI, vibration) and pl_update_frame (phase 0 init, phase 1 run).
- **Setup (game_player_setup, game_player_matrix).** scale reset, spawn positions, model matrix build.
- **Secondary actors (game_actor_objects).** projectile-like objects that share the fighter layout and use the owner pointer.

# Modules found in 0c09f6a8-0c0c74bc (game layer, 593 functions, ~160 KB)

Common data model: players are 0x72D0-byte objects in g_players[2]; everything else (stage objects, effects, UI) is a "task object" allocated with FUN_0c059132(layer, a, b, c) whose update function pointer is stored at +0x10 and whose state machine runs on o[8]/o[9]; it ends by calling the destroy routine FUN_0c059330. Most code in the region is spawner/update pairs of those objects.

## game_player_state_enter (0c09f6a8-0c0a18f8) and game_player_state_ctrl (0c0a18f8-0c0a2ee8)
Entry points `pl_enter_state_NN`: one function per player state, reached through `pl_change_state(o, state, arg)` (0c0a2e26) which saves the previous state (o[0x71BB]), clears per-state scratch bytes, reads flags from table 0xC338D38 and jumps through the enter table 0xC339490[state]. Each enter function writes o[0x71BA]=NN, zeroes or sets velocities, starts a motion with FUN_0c09a808(o, bank, motion), plays voice/se (snd_play_char_voice / snd_play_side_se) and sets timers (o+0xEC). States seen here: 7 (move/dodge with heading), 9 (burst away), 10, 11 (power gauge level), 15..19, 23 (power-up), 24..26, 27/28 (throw: attacker/victim, writes the opponent's state 29), 30..33, 34..42 (stage-object grabbing: 35 and 25 pick an object into o+0x71CC, 42 drops it). Helpers: pl_set_power_form_on/off (o[0x71F1], gauge o[0x71F4]), pl_update_pos_delta, pl_set_velocity_forward, pl_check_pickup_input, pl_try_char_special_move (per-character function table 0xC3393E0).

## game_sound (0c0a2ee8-0c0a41a0)
`snd_play_se` / `snd_play_side_se` / `snd_play_char_voice` / `snd_play_announcer` / `snd_play_stage_obj_se` wrap the sound trigger FUN_0c0e5d22 with tables of ids (side = slot&1, per-character voices). Two ADX stream handles live at 0xC494048/4C: `snd_init_adx`, `bgm_start_file(slot, id)` (file names come from the id table at 0xC180BD0), `bgm_stop_*`, `bgm_duck/unduck`, and one `bgm_play_*` function per stream: OPEN, DEMO_00, P_SELE, S_SELE, VS, HERE, CONT, OVER, LANK, WIN, DEMO_01, HEN_00/01, CAPCOM, E_STA, DEMO_W/E/M, OMAKE; `bgm_play_stage_theme(i)` picks ST_00..ST_0A.

## game_menu_select (0c0a41a0-0c0a71c4) and game_menu_select_ui (0c0a71c4-0c0abd20)
Player-select and stage-select flow. `menu_player_select_init` starts the P_SELE BGM and spawns the UI tasks; `menu_stage_select_init` the S_SELE BGM; `menu_player_select_slot_update` is the per-slot cursor state machine (slot records at 0xC7F2DF0, 0x78 bytes each); `menu_vs_intro_step` starts the VS BGM; `menu_vs_announce_names` calls the announcer at fixed frames. The game-flow bytes at 0xC7F2EE4.. (mode, phase, step, substep) drive every function. The UI is built from 38 spawn/update pairs (`menu_ui_spawn_NN`/`menu_ui_task_NN`): layer-5 task objects that bind sprites from sprite banks 0xC664A30/48/60/78 and animate them (slide in, cursor, stage arrows).

## game_stage_object_base (0c0abd20-0c0ac7f0)
Stage object helpers: `stage_obj_load_layout_pos` (position from the per-stage table g_stage_obj_pos_tbl), `obj_set_mode_owner` (mode byte o[0x30D] and owner player), `obj_can_interact`, `obj_touched_by_slot`, `obj_find_hitting_player`, `obj_clear_slot_contact`.

## game_stage_layout_objects (0c0ac7f0-0c0aeab8)
`stage_spawn_layout_objects` walks the 13-byte placement records of the stage (g_stage_layout_tbl[stage_id]) and creates objects by record type: `stage_spawn_type01/02/03/04/08/11/12` with their `stage_typeNN_update` and `stage_typeNN_mode_K_*` handlers (type 1 and 2 are carryable objects: mode 5/18 is "held by player", which sets the owner's o+0x71CC), plus debris/break effects (`stage_obj_on_break`, `fx_spawn_debris_sprites`, `fx_spawn_burst_sprites`).

## game_stage_gimmicks (0c0aeab8-0c0b5d60)
Placement records of type 13/15 are dispatched by `stage_spawn_gimmick_by_kind` through the table 0xC33A09C (kind = record byte 7, 3..41). Each kind has `stage_gimmick_KK_spawn`, `_update` and optional child spawn/update pairs (`_spawn_b`, `_update_b`). Typical behaviour: wait for a player hit (obj_find_hitting_player), play a cue, spawn a break effect, shrink and die.

## game_fx_impact (0c0b5d60-0c0b7998) and game_fx_player (0c0b7998-0c0c74bc)
Effect objects: `fx_spawn_NN`/`fx_update_NN` pairs. The first group are position/angle/slot-argument effects (spark and impact style, with random-in-box placement helpers); the second are layer-1 player-bound effects (o+0x1C = owner, effect dies when the owner state changes, e.g. `fx_update_state11_aura`), with joint attachment via FUN_0c062242 (reads the owner's joint block at o+0x300+form*0xDC0). `obj_integrate_motion` (pos += vel, vel += accel) is the shared physics step.

## Connections
Player states call sound, object and FX spawners; stage objects call back into player code through the owner pointer (o+0x1C) and the contact lists (o+0x294 / 0x2AE); menu code only uses the sound module, the task allocator and the sprite binder FUN_0c06233a. Unnamed 'FUN_' functions are mostly mode handlers inside the long gimmick/FX update functions and per-character hooks reached through function tables 0xC3393E0/0xC339468/0xC339338 (their code lives in 0c06.. - 0c08..).

# Modules found (region 0c0c74bc-0c0ed750)

## game_fx_* (0c0c74bc-0c0cc074): character special-move effect objects
Constructor / per-frame update pairs. A constructor calls the object allocator 0c059132 (kind, list, child count),
fills position and angles, installs the update callback at +16 and registers it with the object scheduler (tail call
0c0a1d88); the update runs a small state machine (state byte +8) and ends in the common finisher 0c059330. The
constructors are reached from the character special-move code at 0c08823a / 0c08a9a8 (pool words there).
Identified: homing shell (fx_homing_shell_create/update + fx_calc_aim_angles), burst (fx_burst_*), thrown object
(fx_thrown_object_*), follow-owner effect (fx_follow_owner_*), swirl (fx_swirl_*). Others left as FUN_.

## game_round_flow (0c0cc074-0c0ccefc)
Battle round flow record c7f2664 (init, phase handlers, per-player flags, hit point comparison of both players).
Not renamed: purpose only partly known.

## game_dbg_text / nl debug text (0c0ccefc, 0c0dfe20-0c0e0790)
Debug text system on the nl layer: dbg_print_at (pixel position, string) -> dbg_set_cursor_cell + dbg_print_string;
dbg_printf formats with vsprintf into c7f89f0. Glyph quads written by dbg_emit_glyph_quad. Used by test mode and
all debug screens (colour via dbg_set_text_color).

## game_testmode (0c0cdac0-0c0cf408)
Arcade (NAOMI) style test menu left in the build: colour test, memory check (ROM list), input test, game data,
game config. Screens are table driven (8-byte rows {x,y,attr,string}), drawn by testmode_draw_text_table. Not
referenced from other code (dead on Dreamcast); entry is testmode_main.

## game_dbgmotion / game_dbgedit / game_dbgatk / game_dbgkey (0c0cf408-0c0d2dd8)
Debug tools: motion viewer (Player No./Motion Kind/Key Frame), work/player/stage editor (CHAR/EDIT/MENU mode,
Work Change/Player Change/Save/Lode, character name list), attack/defence/hit parameter editor
("SELECT ATK DEF INDEX/KOUMOKU/SUUCHI") and key-frame info viewer. These live in the mode table handled by the
main loop at 0c0616f4.

## game_attract_ranking (0c0d2dd8-0c0d46e4)
Mode function attract_mode_update drives attract_run_sequence: steps for TIME RANKING, 1P POINT RANKING, VS RANKING,
ADX logo and the two web addresses. Rank rows are separate objects (rank_start_*_rows allocate, rank_draw_*_rows
update). rank_init_default_entries fills ten entries with initials CAP into the save data g_save_data.

## game_ui_wins / game_result_screens / game_boot_screens (0c0d46e4-0c0d7108)
Win counter text ("%2d WINS"), pad helpers (input_get_active_pads_mask, input_get_start_pressed_pad), the
end-of-match step sequence, CONTINUE? countdown, CHALLENGER / NO CHALLENGE / PLEASE WAIT / THE END texts, and the
boot screens (version string with build date, per-region warning text).

## game_menu_option (0c0d71f4-0c0d7f30)
Option menu: state machine on c7f4724, seven item handlers in a jump table c33f970 (sound mode calls syCfgSetSoundMode
and saves the config); entered after the attract step-3 flag.

## game_camera (0c0d80d4-0c0dca60)
Two camera records (g_cam_records, 0x1fc each). cam_update_by_mode dispatches on the mode byte (29 modes, modes 0 has
5 variants chosen by cam_select_mode0_variant); gameplay code switches modes with cam_request_mode(mode, target,
priority). cam_update_view_matrices builds nlLookAt matrices per record. cam_compute_follow (3.6 KB) is the shared
eye/target computation; mode 24 is the stage-select cursor camera and mode 27 the debug free camera.

## game_nl_* (0c0dca60-0c0e0790) and game_nl_objasm_* (0c0e7240-0c0ed750)
Ninja-library style 3D layer of the executable. 0c0dcae0 nlObjPut family; 0c0dd310-0c0dd880 texture/strip slot
management; 0c0ddf30-0c0defe0 screen/frame buffer/fog wrappers (gfx_set_*); 0c0df2b0-0c0dfe20 libm-like maths in
16-bit angle units (math_*), LCG random (math_rand_*). The object draw routines are assembly: for each vertex
format (plain, ofst, spd, spd_ofst, vtxcol, bump) a draw loop (nl_objasm_draw_obj*) calls displayStrip /
displayTriangle (clipped) or displayStrip_nc / displayTriangle_nc (using six vertex helpers: transform, send, save,
shift, send_saved, clip_send, plus transform_tri). Names of the plain/ofst/spd members follow the pattern of the
members already named in the binary (spd, spd_ofst, vtxcol, bump).

## Library pieces in the region
0c0e4af0-0c0e50c0 syRtc* (named), 0c0eb0f0-0c0eb5a4 AICA RTC internals, 0c0eb758 printf formatting core (vsprintf
caller), 0c0e7178-0c0e7224 C library (named), 0c0e0810-0c0e3040 nl matrix functions (named).

## Source layout after regroup.py
`regroup.py` writes one file per original source row (FINAL_FILES.csv new_name). Suffixes: `_2`, `_3`... later rows of the same module; `_alt`, `_alt2` functions of a row whose declarations of an outside function disagree with the rest (one C file cannot hold two prototypes of one name); `_asm` functions using `#pragma inline_asm` (kept apart because the assembly path needs the literal pools within reach); `_equiv` non-matching C that shares a row with a byte-matching unit (the unit keeps the plain name; extra units are `_unit2`...). The inline-asm functions of the rows nl_objasm_* stay in their old files (merged they exceed the pool reach).
