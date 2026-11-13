# Structures of the game layer (consolidated from the six regional passes)

Conventions: offsets hex from the object base; types u8/s8/u16/s16/s32/u32/f32/ptr; "ev" = evidence (a function or a table that proves it).
Characters (USA names, one id per roster slot, +4 of a player object): 0 Falcon, 1 Ryoma, 2 Wang-Tang (identifiers: wangtang), 3 Jack, 4 Gunrock, 5 Garuda, 6 Ayame, 7 Rouge, 8 Kraken, 9/10 Valgas (two forms).
Names of the globals are those of FINAL_GLOBALS.tsv / FINAL_NEWGLOBALS.tsv (`g_players` = array of 2 players at 0x0C7E40C4, `g_obj_pool` = 100 objects at 0x0C7D0980, `g_ai_slots`, `g_camera`/`g_cam_records`, `g_game_state` at 0x0C7F302C, `g_game_work` at 0x0C7F2EE0 ...).

Resolutions between passes: one object layout is shared by the 100 pool entries (0x31C bytes) and by the two players (0x72D0 bytes: the first 0x31C bytes follow the pool layout, then the character data); the object's byte +9 is called `sub_state` (an effect/stage object steps it in its tick; the player's fighter step uses it as control kind 0..3); `g_ai_slots` is the 0x254-byte CPU-brain record per player (script pc, timers), `g_ai_react_slots` (0x0C439E38, 36 bytes each) is the small reaction slot used by ai_update_slot / ai_run_reaction_script; the record at 0x0C7F302C is the game state `g_game_state` (byte 0 mode, byte 1 sub-state, stage index at +0x25, option and ranking tables) that is also what the save code packs; `g_game_work` (0x0C7F2EE0) is the work record of the screen modes (state, step counters, timers).

## Game object (pool entry `g_obj_pool[100]`, 0x31C bytes; also the first part of a Player)
| off | type | name | evidence |
|---|---|---|---|
| 0x00 | u8 | active | obj_tick_class skips 0; every spawner writes 1 |
| 0x01 | u8 | visible | spawners write 1, cull code toggles it |
| 0x02 | u8 | class | list index 0..9 (obj_create arg 1); contact lists test 0 = player, 2 = stage object |
| 0x03 | u8 | owner_slot | copied from the fighter; players: slot 0/1; 2 = none (stage objects) |
| 0x04 | u8 | kind | items/effects: kind or subtype (stage record types 1,2,3,4,8,11,12,13); players: char_id |
| 0x05 | u8 | draw_prio | 0x19 usual |
| 0x06 | u16 | flags | draw/update masks (0x80 skipped by the draw pass); players: 0x200 = tint on |
| 0x08 | u8 | state | every tick switches on it (players: 0 init, 1 run) |
| 0x09 | u8 | sub_state | idem; players: controller kind 0..3 (fighter step switch), 2/3 set during throws |
| 0x0A/0x0B/0x0C | u8 | step, step2, step3 | state-function sub-steps (players) |
| 0x10 | fnptr | tick | obj_tick_class calls it |
| 0x14 / 0x18 | ptr | prev / next | links in the class list (obj_create, obj_destroy) |
| 0x1C | ptr | owner / opponent | parent object; for a player: the other player (pl_reset_pair) |
| 0x20/0x24/0x28 | f32 | pos_x, pos_y (height), pos_z | |
| 0x2C/0x30/0x34 | s32 | rot_x, yaw, rot_z | yaw 0x10000 = 360 degrees; knock-back uses cos/sin(0x14000 - yaw) |
| 0x38/0x3C/0x40 | f32 | vel_x, vel_y, vel_z | pl_apply_velocity |
| 0x44/0x48/0x4C | f32 | acc_x, acc_y, acc_z | pl_apply_acceleration; acc_y = gravity |
| 0x50/0x54/0x58 | f32 | scale_x, scale_y, scale_z | pl_reset_scale |
| 0x60/0x64/0x68 | f32 | tint_r, tint_g, tint_b | tint setters |
| 0x6C/0x70/0x74 | f32 | node_scale | obj_node_scale_one |
| 0xEC | s16 | timer | countdown in nearly every state |
| 0xEE/0xF0/0xF2 | s16 | counter_a, counter_b, counter_c | per-state small constants |
| 0xF4 | ptr | attack_record | own move record (20-byte entries, g_attack_record_tab) |
| 0xF8 | ptr | recv_record | record of the attack received (obj_set_owner_hit_record) |
| 0x100/0x101/0x102 | u8 | record_id, hit_a, hit_b | obj_set_record |
| 0x105..0x107 | u8 | hit_enable_a..c | set by spawners |
| 0x108 | u8 | hit_count | pl_get_hit_count_of_opponent |
| 0x10A/0x10B | u8 | hit_effect_flag, hitstop | pl_tick_hitstop |
| 0x118 | ptr | attach_matrix | owner +0x300+slot*0xDC0+0x580 (item_attach_to_hand) |
| 0x11C | ptr[10] | hit_list | victims of the current attack; count at 0x144 |
| 0x274 | f32 | ground_contact | > 0 on the ground (landing test) |
| 0x27C | u8 | surface_type | |
| 0x294 | ptr[5] | touch_list | count at 0x2A8; obj_find_hitting_player |
| 0x2AE..0x2D8 | | contact_type[10], contact_id[8], contact_ptr[6], contact_count | |
| 0x2D4 | f32 | ground_height | |
| 0x2D9 | s8 | special_flag | 2 = special move in progress |
| 0x2DC | u32 | buttons_held | 0xF0 direction bits, A=4 B=2 X=0x400 Y=0x200; the AI writes its presses here; for pool objects +0x2DC/+0x2DD are part_count / part_kind |
| 0x2E0 | ptr[n] | parts | sprite/model child records bound with the sprite setter (obj_create) |
| 0x2E4 | u32 | buttons_pressed | edge bits (players) |
| 0x300 + n*0xDC0 | block | joint_block[form] | 176-byte joint matrices per power form (players) |
| 0x308/0x30C/0x30D | | layout_rec / item_kind / item_sub (mode) | placement record, item kind and mode of stage and item objects |
| 0x310 | u8[2] | touched_by_slot | obj_touched_by_slot |
| 0x314 | u8 | rec_index | obj_set_record index |

## Player extension (offsets >= 0x31C, array `g_players`, stride 0x72D0, opponent = g_players + (1 - slot) * 0x72D0)
| off | type | name | evidence |
|---|---|---|---|
| 0x710A..0x710C | u8 | effect_flag_a..c | pl_set_effect_at_frame |
| 0x7110..0x7118 | f32 | pose_offset (0x7118 hit shake) | pl_reset_pose, pl_update_hitstop_shake |
| 0x718C/0x7190/0x7194 | ptr | key_data, prev_key_data, older_key_data | pl_load_motion_key |
| 0x7198 | s16 | motion_base_index | pl_step_motion_impl |
| 0x719A..0x719D | | motion_prev_index, key_index, prev_key_index | |
| 0x719E | s16 | motion_frame | compared by the sound tables |
| 0x71A4/0x71A5 | u8 | motion_group, motion_id | (group<<8)+id switched on by the per-character sound tables |
| 0x71A6/0x71A7 | u8 | key_frames_left, key_length | |
| 0x71A8/0x71A9 | u8 | motion_dirty_a/b | set after every pl_start_motion |
| 0x71AA | u8 | key_flags | 0x40 = end of motion |
| 0x71BA/0x71BB | u8 | state_id, prev_state_id | index of g_pl_state_update_tbl / g_pl_state_enter_tbl (43 states) |
| 0x71BC | u8 | ground_mode | 0 ground, 2 air |
| 0x71BD | u8 | recv_attack_id | |
| 0x71C8 | ptr | near_obj | item in reach |
| 0x71CC | ptr | held_obj | held item |
| 0x71D4/0x71D6/0x71D8 | s16 | hp, hp_ref, hp_display | 0xF0 full, < 0 KO; hp bar easing |
| 0x71DD | u8 | hit_reaction_id | g_hit_reaction_tab |
| 0x71E4/0x71E8 | f32 | gravity, fall_speed | |
| 0x71ED | u8 | cpu_controlled | ai_reset_slot when set |
| 0x71F1 | u8 | power_form | 0 normal, 1 powered; selects char param row and joint block |
| 0x71F4 | s16 | power_gauge | 2400 when the form is on; thresholds in state 11 |
| 0x71F8 | u32 | buttons_buffered | input chords |
| 0x7206 | u8 | state_ticks | frame counter of the state |
| 0x7207..0x720A | u8 | cmd_a, cmd_b, special_index | special input hook; 0x7209 indexes the special tables |
| 0x720E | u8 | combo_count | cap 99; 0x720F hp regen timer |
| 0x7216 | u8 | state_flag | byte 0 of g_pl_state_flags_tbl[state] |
| 0x721D | u8 | power_level | 0..3 from the gauge |
| 0x721F | u8 | move_class | 0..15 switch of the attack init/update dispatchers |
| 0x7223 | u8 | attack_kind | 1..8 |
| 0x7234/0x7236 | | state_limit / held_kind | |
| 0x7238 | u8 | move_slot | index into the per-character move init/update tables |
| 0x723B/0x723C | | timer_enable / timer | |
| 0x723E.. | u8[] | input_buffer | |
| 0x7248 | s32 | target_yaw | stick heading + camera yaw |
| 0x7254 | f32 | move_speed | |
| 0x7264/0x7270 | f32[3] | prev_pos, pos_delta | pl_update_pos_delta |
| 0x7298 | f32 | body_scale | offsets when spawning projectiles |
| 0x72B0..0x72B8 | u8 | sfx_off, vibration timers | |
| 0x72BC..0x72C4 | | per-character script slots (Gunrock extras) | |

## VmuSlot (8 entries, 0x28 bytes, at 0c361a60; one per port)
| off | type | name | ev |
|---|---|---|---|
| 0x00 | int | port | vmu_event_handler writes arg 0 for event 18 |
| 0x04 | int | state | 18 = ready/mounted, 1 = attached, 2 = reset value; masks test 18 or 1 |
| 0x08 | int | status | 0xFFFF0000 = busy (every vmu_get_*_mask returns -1 when found), 0xFFFFFF01 after reset |
| 0x0C | int | arg_c | stored from event argument 3 (event 18) |
| 0x10 | int | arg_10 | stored from event argument 4 |
| 0x14 | int | savefile_state | 1 = missing, 2 = POWSTONE_DAT exists (buIsExistFile) |
| 0x18 | int | vmgame_state | 2 = POWSTONE__VM exists |
| 0x1C | int | foreign_exec_state | 2 = other exec file found by buFindExecFile |
| 0x20 | int | free_blocks | buGetDiskFree(port,0) |
| 0x24 | int | free_blocks_b | buGetDiskFree(port,1) |

## SaveBuffer (0c351948, 0xF8 bytes, packed by save_pack_data / unpacked by save_unpack_data)
| off | field | source in RAM |
|---|---|---|
| 0x00 | date/time (struct D10) | syRtcGetDate when first word is 0 |
| 0x0A | u8[10] | ranking table 1, character ids (rank_work+0x57) |
| 0x14 | char[10][4] | ranking table 1, names (init "CAP") (rank_work+0x61) |
| 0x3C | short[10][3] | ranking table 1, values (rank_work+0x8A) |
| 0x78 | u8[10] | ranking table 2, ids (rank_work+0x120) |
| 0x82 | char[10][4] | ranking table 2, names (rank_work+0x12A) |
| 0xAA | short[10] | ranking table 2, values (rank_work+0x152) |
| 0xBE.. | u8 x6 | system settings game_work+0x38,0x31,0x32,0x34,0x35,0x39 |
| 0xC8 | u8[9] | save_options+0 (omake unlock levels) |
| 0xD2 | short | save_options+0xA |
| 0xD4,0xD8 | int,int | save_options+0xC,+0x10 |
| 0xDC | u8[9] | save_options+0x14 (game option bytes) |
| 0xE5 | u8[2][8] | key_config (button maps, stride 8) |

## SaveOptions (0c7f4750 "s7f4750")
+0..8 unlock levels (read by omake_is_item_unlocked: s[0]>=1..4, s[3], s[4], s[2]>=1..3, s[1]>=1..3, s[6..8]); +0xA short bit mask of 10 flags;
+0x14..0x1C nine option bytes (defaults in opt_reset_game_options; screen copy at 0c7f4744+4..); +0x1D..0x2C key_config[2][8].

## PadRecord (2 entries, 0x14 bytes at 0c361bf0 "pad_state")
| off | type | name | ev |
|---|---|---|---|
| 0x00 | int | present | pad_state_clear zeroes |
| 0x04 | int | type | pad_get_type returns 1 or 2 from this word |
| 0x08 | u16 | held | pad_get_start_mask/other tests (+8, +0xA, +0xC are three bit fields tested with the same masks) |
| 0x0A | u16 | pressed_a | same |
| 0x0C | u16 | trigger | tested for START (0x8) and cursor masks by every menu |
| 0x10..0x13 | u8[4] | axes | initialised to 0x80 |
Button masks seen: 0x2 B/cancel, 0x4 A/decide, 0x8 START, 0x10 up, 0x20 down, 0x40 left, 0x80 right.

## FxObject (task object, layer 5; allocated by 0c059132, freed by 0c059330, updated through 0c05948c)
| off | type | name | ev |
|---|---|---|---|
| 0x00 | u8 | active | set to 1 by every spawner |
| 0x01 | u8 | flag_a | 0/1 |
| 0x03 | u8 | type | index into ending_obj_update_tab |
| 0x04 | u8 | arg | spawner argument (texture / script id) |
| 0x06 | u16 | priority/flags | 0xF, 0x61F, 0x41F |
| 0x08 | u8 | state | switch in updates |
| 0x09 | u8 | phase | script phase |
| 0x0B | u8 | step | table walk index |
| 0x0D | u8 | script_pos | command index in ending_obj_run_script |
| 0x0F | u8 | mode | selects motion helper |
| 0x10 | ptr | update_fn | set by spawners |
| 0x20 | float[3] | pos | script op 0 |
| 0x2C | int[3] | angle | script op 4,5,6 |
| 0x38 | float[3] | vel | script op 1; obj_apply_velocity |
| 0x44 | float[3] | accel | script op 3; obj_apply_accel |
| 0x50 | float[3] | scale | script op 2 |
| 0x5C | float | alpha | script op 24 |
| 0x60 | float[3] | scale_b | script op 23 |
| 0xEC | u16 | counter | incremented per update |
| 0xEE | u16 | wait | script wait counter |
| 0xF2 | u16 | group_mask | tested by *_obj_in_mask helpers |
| 0x2DC | u8 | child_count | loops in 0c016344 |
| 0x2E0 | ptr[] | children | sprite headers: +0 active, +2 0xF/0x1F, +4..C color A, +0x10..0x18 ints, +0x1C..0x24 color B, +0x28..0x30 rates |

## EndingScriptEntry (8 bytes, tables at 0c17ca88[character])
+0 short wait/frame, +2 u8 command (1..11 spawn, 0xF0 clear, 0xF1/F2/F5..F9 flags and sound, 0xFB..0xFF control), +3 u8 type, +4 u8 arg (see ending_exec_command).

## EndingObjCommand (20 bytes, tables 0c17e3b0[type])
+0 short wait, +2 u8 op (0 pos, 1 vel, 2 scale, 3 accel, 4..6 angles, 16..18 child color/rates, 20..22 child ints, 23 scale_b, 24 alpha, 25 byte 0xC, 32 byte 1, 0xF4/0xF5 sound, 0xFF end), +4 float[3] or int value.

## SpriteQueueEntry (192 entries, 0x40 bytes at ui_sprite_queue; count in ui_sprite_queue_count)
+0 u8 layer, +1 u8 flip, +4 int cell_ptr (= sheet cell table[index] + cell*28), +8 record of 56 bytes (x,y,z at +4..+0xC of record, scales, color, alpha).

## VmuCheckWork (0c361bc8, 0x24 bytes)
+0 init flag/state, +1 sub-state, +2 mode (0..9), +3 phase, +0x10 port mask, +0x18 selected port, +0x1C timer (0x78/0x258).

## HUD (0c366a70)
byte 0 enable; +0x2C.. gauges; +0xD4 per player blocks of 0xC0 (index at +1, life values from g_players+0x71D4..); hit counter slots at 0c366a9c (24 bytes each): +8 value, +9 total, +0x10 x position.

## Part (kind 0, 0xA4 bytes, pool of 300; kind 1: 0x9B8 x15; kind 2: 0xC0 x30)
+0 u8 visible, +2 s16 sprite/model id, +4/+0x1C/+0x28/+0x10/+0x34 vec3 templates written by 06233A (position, rotation, scale ...), +0x90 u32 cleared.

## AI slot (g_ai_slots[idx], stride 0x254; idx = g_ai_cur_slot)
| off | type | name | evidence |
|---|---|---|---|
| +0x00..+0x03 | u8 | op phase counters | cleared by ai_clear_op_state; movement ops switch on +0 |
| +0x04 | u8 | mode (debug "Mode") | 04C24C |
| +0x06 | u16 | interrupt level (debug "IntLv") | ai_think sets 0x100/0x200/.. |
| +0x08 | u16 | cmd mask (debug "Mask") | ai_op63/64 OR / clear bits; ai_think tests 0x1000..0x4 |
| +0x0C | ptr | script pc | ai_run_script, every op stores it back |
| +0x14 | u16 | timer (starts 600) | ai_think, ai_op75 |
| +0x16 | u16 | var16 | ai_script_branch |
| +0x18 | u16 | var18 | ai_op77/78/79 |
| +0x24 / +0x25 | u8 | flag24 / flag25 | ai_op35-41 |
| +0x26 | s16 | reg (scratch register for get_* / jump_if_* ops) | ai_op12-33 |
| +0x2C | u16 | current script id | ai_op9 |
| +0x44/+0x46/+0x48 | u16 | last seen own form / target form / own move state | ai_think |
| +0x4A | u16 | last difficulty (g_7f3050 copy; debug "NANDO") | ai_think |
| +0x4C | s32 | last goal angle | ai_op1 |
| +0x50 / +0x58 | f32 | saved x / z | ai_think, ai_calc_dist_to_saved_pos |
| +0x5C | u16 | idle frame counter | ai_think |
| +0x60/+0x64/+0x68 | f32 | goal point | ai_op44, ai_op72/73/85 |
| +0x6C | ptr | goal object | ai_op44/62/70/71 |
| +0x70 | u16 | stack depth | ai_push_state, ai_op10/11 |
| +0x74 + 12*n | vec3 | saved goal point | ai_push_state |
| +0x164 + 4*n | ptr | saved goal object | same |
| +0x1B4 + 4*n | ptr | saved script pc | ai_op10/11 |
| +0x204 + 2*n / +0x22C + 2*n | u16 | saved level / mask | same |

Script runtime globals: g_ai_pc (0C3673E8, pointer into script, advances by shorts), g_ai_run_flag (0C3673EC, 0 stops the run), g_ai_cur_slot, g_ai_script_group.

## Item (class 2 object)
+0x04 mode: 0 lying (bobbing, sparkles), 4 thrown/dropped, 5 held, 13, 16; +0x0D slot; +0x1C owner player; +0x30C kind (14 plays a sound); +0x30D sub; state bytes +8/+9.

## Resource record (24 bytes), used by res_*_load / res_*_release (arrays at 0xc664xxx, 0xc4cfaxx, 0xc17fxxx, g_0c6002d0)
| off | type | name | evidence |
|---|---|---|---|
| 0 | u8 | loaded | res_textures_register sets 1, res_textures_release clears 0; skipped when already in the wanted state |
| 2 | s16 | count | loop bound over the pointer list (and argument of FUN_0c0dd9e0) |
| 4 | ptr | model_or_base | argument of nl_sprite_set_register / 0c0e3bb2 |
| 8 | ptr | list | array of `count` entries passed to nl_model_bind_textures / 0c0dd6c0 |
| 12 | int | arg | second argument of nl_model_bind_textures |
| 16,20 | int | extra | filled by res_*_load from the loaded file header |

## FxSlot (144 bytes), array of 8 at 0xc7f3238 (fxslot_*)
| off | type | name | evidence |
|---|---|---|---|
| 0 | u8 | active | fxslot_clear_all clears, fxslot_start sets 1 |
| 1 | u8 | level | priority; a new start needs level >= current (fxslot_start) |
| 2 | u8 | frame | animation frame index into the table (32 bytes per frame) |
| 3 | u8 | arg3 | stored from the 3rd parameter |
| 8 | int | arg8 | |
| 12 | ptr | table | animation table; halfword at table[frame*32+1] -> 16 |
| 16,18 | s16 | duration, ... | |
| 80 | 4 words | position block | copied from the source argument |
| 116 | f32 | scale | |

## Model vertex (32 bytes) used by mdl_vtx_*
pos (0..11) float x,y,z; normal (12..23); u (24), v (28). Cursors at 0xc439dc8..0xc439de0 (see NAMES_NEWGLOBALS).

## Char parameter block (`g_pl_char_param_tbl`, 0x98 per char = 2 forms of 0x4C)
| off | type | field | evidence |
|---|---|---|---|
| 0x00 | f32 | gravity (-2.0) | pl_load_gravity |
| 0x18 | f32 | jump acceleration | pl_launch_jump |
| 0x28 | f32 | jump launch vy | pl_launch_jump |
| 0x2C | f32 | jump forward speed | pl_launch_jump |
| 0x34 | f32 | walk speed | 09f2e2 |

## Attack record (`g_attack_record_tab[char] + id*20`)
| off | type | field | evidence |
|---|---|---|---|
| 0 | u8 | type | 08e704 |
| 2 | u8 | hit-stop frames | 08dbc8 copies to +0x10B of both |
| 4 | u8 | kind | 08e4bc |
| 6 | u8 | reaction code | 091b5c |

## AI reaction slot (`g_ai_react_slots`, 36 bytes per player slot)
| off | type | field | evidence |
|---|---|---|---|
| 0x01/0x02 | u8 | phase, step | ai_run_script handlers |
| 0x04 | u8 | player slot | ai_reset_slot |
| 0x06 | u8 | 0x63 = no action | ai_reset_slot |
| 0x10 | ptr | script pointer | ai_run_script |
| 0x18 | u32 | button bits to press | ai_pick_reaction stores into player +2DC/+2E4 |

## Sprite child record (what FUN_0c06233a fills)
+0 active u8, +2 flags u16, +4 pos xyz f32, +0x10 rot xyz s32, +0x1C scale xyz f32, +0x28/0x2C/0x30 vel xyz (debris), +0x40 alpha f32, +0x94 float (frame timer in debris).

## Stage placement record (13 bytes, array g_stage_layout_tbl[stage_id] = {recs,count})
+0 type (1,2,3,4,8,11,12,13,15), +1 byte used by gimmicks (rec_byte1), +2 sprite/frame id (FUN_0c06233a arg), +4/+5 hit record id params, +6 record index for obj_set_record, +7 gimmick kind (index into 0xC33A09C), +8/+9 stored in object 0x2D9/0x2DA.

## Stage position entry (g_stage_obj_pos_tbl, 52 bytes per stage)
+24 pointer to pos table (3 ints each), +28 pointer to rot table; both indexed by record+2 (stage_obj_load_layout_pos).

## Game flow state (g_game_work at 0xC7F2EE0)
+4 mode, +5 phase, +6 step, +7 substep, +8 sub, +0x20 s16 timer; menu code compares/increments these bytes (e.g. 0xC7F2EE5 phase 0..3, 0x63 = leave).

## Select slot record (g_player_win_records 0xC7F2DF0, 0x78 bytes per slot)
+0x55 chosen character, +0x5A cursor state (0,1,2), +0x64 chosen palette/colour; read by the HUD task updates (0xC7F2E45/0xC7F2E54 are +0x55 / +0x64 of slot).

## Effect / shell object (created by 0c059132 with child sprites)
| off | type | name | evidence |
|---|---|---|---|
| 0x02 | u8 | kind id | alloc stores arg r4 here |
| 0x08 | s8 | state | switch state in fx_burst_update, fx_thrown_object_update |
| 0x09 | u8 | sub state | fx_burst_update clears it |
| 0x10 | fnptr | per-frame update callback | ctor stores update fn at +16 (fx_homing_shell_create) |
| 0x14/0x18 | ptr | list links | alloc links node in list heads c7e4070/c7e4098 |
| 0x1C | ptr | owner object | fx_follow_owner_update |
| 0x20 | vec3f | position | all fx update functions |
| 0x2C/0x30 | s32 | heading angles (16-bit units) | fx_homing_shell_update uses +0x30 with sin/cos |
| 0x38 | vec3f | velocity / direction | homing update (x40 scale) |
| 0xEC | s16 | age / timer | fx_burst_update `t` |
| 0xEE/0xF0/0xF2 | s16 | extra counters | burst (f1,f2,f3) |
| 0x2DC | u8 | child count | alloc loop bound |
| 0x2DD | u8 | child type | alloc switch 0/1/2 |
| 0x2E0.. | ptr[] | child sprite objects (kid0 at 0x2E0, kid1 at 0x2E4) | fx_burst_update `kid0`,`kid1` |

## Camera record (`g_cam_records`)
Now defined in C: `CamRecord` and `CamKey` in src/game/camera/camera.h (offsets in the field comments).

## Mode work record (`g_game_work`, symbol g_0c7f2ee0; shared by all screen modes)
| off | type | name | evidence |
|---|---|---|---|
| 0x00 | u8 | state (0 init, 1 run) | every mode function starts `switch (g_0c7f2ee0.s)` |
| 0x01 | u8 | sub state | FUN_0c0d7ff0 switch |
| 0x04 | u8 | step | attract_run_sequence `switch(+4)` then inner switch +5 |
| 0x05..0x0A | u8 | step counters (+9 phase byte, +0xA row count in test mode) | rank screens, testmode |
| 0x10 | s16 | screen timer (180 frames) | version_screen_draw |
| 0x14 | s16 | second timer | attract steps decrement it |
| 0x2D..0x37 | u8[11] | game config edit buffer | testmode_game_config_commit/load |
| 0x12B, 0x12E | u8 | blocking flags | m_0c0d7f30 |

## Pad state (`g_pad_state`, symbol g361bf0)
| off | type | name | evidence |
|---|---|---|---|
| 0x00 | u32 | pad 1 present | input_get_active_pads_mask |
| 0x08 | u16 | pad 1 pressed-this-frame buttons | testmode_check_exit_combo |
| 0x0C | u16 | pad 1 held buttons (0x08 = START, 0x04 = shot) | input_get_start_pressed_pad |
| 0x14 | u32 | pad 2 present | same |
| 0x20 | u16 | pad 2 buttons (second half of the pad 2 block; START tested in the same way) | input_get_start_pressed_pad reads +0x20 |

## Save data record (`g_game_state`, symbol g_302c, 0x174 bytes)
| off | type | name | evidence |
|---|---|---|---|
| 0x42,0x44,0x45,0x47 | u8 | option/continue flags (written 1 at 66/68 after attract) | 0c0d30f4, 0c0d74e6 |
| 0x57+i (i<10) | u8 | rank entry character | savedata_reset_keep_ranking copies byte +87+i |
| 0x61+4i | char[3]+pad | rank initials ("CAP" default) | rank_init_default_entries |
| 0x8A+6i | u16[3] | rank times (30, 0, 0 default) | rank_init_default_entries |
| 0x120+i | u8 | second rank table byte | same copy loop |
| 0x12A+4i | char[3]+pad | 1P points ranking initials | same |
| 0x152+2i | u16 | 1P points (default 2) | same |
| 0x171, 0x172 | u8 | flags cleared by FUN_0c0d54ac, read by cam_select_mode0_variant | m_0c0d54ac, cam d83c6 |
(medium; the first rows are the least certain)

## Win record (`g_player_win_records`, symbol g_2df0; 2 x 120 bytes, second at 0xC7F2E68)
| off | type | name | evidence |
|---|---|---|---|
| 0x09 | u8 | side (0/1) selecting text offset | ui_draw_win_count |
| 0x44 | u16 | win count | ui_draw_win_count prints it with "%2d WINS" |

## Debug text state (nl layer)
Globals c7f8bf0 (flags), c7f8bf4/bf8 (cursor x,y px), c7f8bfc/c00 (cell w,h), c7f8c04 (line start x), c7f8c5c (colour); see NAMES_NEWGLOBALS.tsv.

## Round flow record (c7f2664)
+0x08 phase, +0x09 sub, +0xEC timer (s16), +0x2E8/+0x2E0.. object pointers, +0x310..0x312 per-player flags, +0x318 object ptr[3], +0x32c count, +0x32e queue of 5 bytes. medium-low.

## Note on the two record views of 0x0C7F2664
One pass read it as the item state (`g_item_state`, cleared by item_clear_state), another as the battle-round flow record; the layout is shared (phase byte +8, sub +9, player flags at +0x310). Treat it as one record `g_item_state` until a later pass splits it.
