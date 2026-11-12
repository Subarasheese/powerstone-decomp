/* Straight-line functions with calls and guards (batch gen_gy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0a37da(int, int, int);
int FUN_0c0a3824(int, int, int, int);
int FUN_0c0a3988(int);
int FUN_0c08a140(int a4, int a5, int a6, int a7);

int FUN_0c08a140(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x72B0));
    if (t0 == 1) {
        return t0;
    }
    FUN_0c0a3824(a4, a5, a6, a7);
    FUN_0c0a3988(a4);
    t0 = *(signed char *)(((0x71A5 + a4) + 0x0));
    t1 = *(signed char *)((a4 + 0x71A4));
    if (((t1 << 8) + (unsigned char)t0) == 0x100) {
        FUN_0c0a37da(a4, 0xA, 0x9);
    } else {
        if (((t1 << 8) + (unsigned char)t0) == 0x103) {
            FUN_0c0a37da(a4, 0x8, 0x9);
        } else {
            if (((t1 << 8) + (unsigned char)t0) == 0x105) {
                FUN_0c0a37da(a4, 0x5, 0x7);
            } else {
                if (((t1 << 8) + (unsigned char)t0) == 0x10A) {
                    FUN_0c0a37da(a4, 0x4, 0x7);
                } else {
                    if (((t1 << 8) + (unsigned char)t0) == 0x10C) {
                        FUN_0c0a37da(a4, 0x4, 0x9);
                    } else {
                        if (((t1 << 8) + (unsigned char)t0) == 0x110) {
                            FUN_0c0a37da(a4, 0xA, 0x8);
                        } else {
                            if (((t1 << 8) + (unsigned char)t0) == 0x111) {
                                FUN_0c0a37da(a4, 0xA, 0x9);
                            } else {
                                if (((t1 << 8) + (unsigned char)t0) == 0x112) {
                                    FUN_0c0a37da(a4, 0x5, 0x7);
                                } else {
                                    if (((t1 << 8) + (unsigned char)t0) == 0x113) {
                                        FUN_0c0a37da(a4, 0xD, 0xA);
                                    } else {
                                        if (((t1 << 8) + (unsigned char)t0) == 0x114) {
                                            FUN_0c0a37da(a4, 0x9, 0xA);
                                        } else {
                                            if (((t1 << 8) + (unsigned char)t0) == 0x118) {
                                                FUN_0c0a37da(a4, 0x5, 0x8);
                                            } else {
                                                if (((t1 << 8) + (unsigned char)t0) == 0x119) {
                                                    FUN_0c0a37da(a4, 0x6, 0xA);
                                                } else {
                                                    if (((t1 << 8) + (unsigned char)t0) == 0x11D) {
                                                        FUN_0c0a37da(a4, 0x8, 0xA);
                                                    } else {
                                                        if (((t1 << 8) + (unsigned char)t0) == 0x139) {
                                                            FUN_0c0a37da(a4, 0xA, 0x9);
                                                        } else {
                                                            if (((t1 << 8) + (unsigned char)t0) == 0x147) {
                                                                FUN_0c0a37da(a4, 0x0, 0x7);
                                                            } else {
                                                                if (((t1 << 8) + (unsigned char)t0) == 0x14A) {
                                                                    FUN_0c0a37da(a4, 0xA, 0x9);
                                                                } else {
                                                                    if (((t1 << 8) + (unsigned char)t0) == 0x162) {
                                                                        FUN_0c0a37da(a4, 0x13, 0x9);
                                                                    } else {
                                                                        if (((t1 << 8) + (unsigned char)t0) == 0x163) {
                                                                            FUN_0c0a37da(a4, 0x8, 0x9);
                                                                        } else {
                                                                            if (((t1 << 8) + (unsigned char)t0) == 0x164) {
                                                                                FUN_0c0a37da(a4, 0xB, 0xA);
                                                                            } else {
                                                                                if (((t1 << 8) + (unsigned char)t0) != 0x197) {
                                                                                    if (((t1 << 8) + (unsigned char)t0) != 0x19D) {
                                                                                        if (((t1 << 8) + (unsigned char)t0) != 0x1A0) {
                                                                                            if (((t1 << 8) + (unsigned char)t0) != 0x1A2) {
                                                                                                if (((t1 << 8) + (unsigned char)t0) != 0x302) {
                                                                                                    if (((t1 << 8) + (unsigned char)t0) != 0x400) {
                                                                                                        if (((t1 << 8) + (unsigned char)t0) != 0x402) {
                                                                                                            if (((t1 << 8) + (unsigned char)t0) != 0x407) {
                                                                                                            } else {
                                                                                                                FUN_0c0a37da(a4, 0x1F, 0xB);
                                                                                                            }
                                                                                                        } else {
                                                                                                            FUN_0c0a37da(a4, 0x2F, 0xB);
                                                                                                        }
                                                                                                    } else {
                                                                                                        FUN_0c0a37da(a4, 0x2F, 0xB);
                                                                                                        FUN_0c0a37da(a4, 0x62, 0xB);
                                                                                                    }
                                                                                                } else {
                                                                                                    FUN_0c0a37da(a4, 0x1C, 0x23);
                                                                                                    FUN_0c0a37da(a4, 0x3A, 0x23);
                                                                                                    FUN_0c0a37da(a4, 0x62, 0x23);
                                                                                                }
                                                                                            } else {
                                                                                                FUN_0c0a37da(a4, 0x18, 0xB);
                                                                                            }
                                                                                        } else {
                                                                                            FUN_0c0a37da(a4, 0x0, 0xA);
                                                                                        }
                                                                                    } else {
                                                                                        FUN_0c0a37da(a4, 0x0, 0xA);
                                                                                    }
                                                                                } else {
                                                                                    FUN_0c0a37da(a4, 0x0, 0xA);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    t0 = *(signed char *)((a4 + 0x71A4));
    t1 = *(signed char *)(((0x71A5 + a4) + 0x0));
    if (((t0 << 8) + (unsigned char)t1) == 21) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x4, 0x10, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 22) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x4, 0x10, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 23) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x4, 0x10, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 41) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x4, 0x10, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 55) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x4, 0x10, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x100) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0xA, 0x5, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x103) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x8, 0x5, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x105) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x5, 0x3, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x10A) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x4, 0x3, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x10C) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x4, 0x3, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x110) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0xA, 0x4, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x111) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0xA, 0x5, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x112) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x4, 0x3, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x113) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0xD, 0x6, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x114) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x9, 0x6, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x118) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x5, 0x4, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x119) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x6, 0x6, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x11D) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x8, 0x6, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x139) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0xA, 0x5, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x147) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x0, 0x3, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x14A) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0xA, 0x5, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x160) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x12, 0x18, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x161) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x10, 0x18, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x162) {
        return ((int (*)(int, int, int, int))(0xC08A6B4))(a4, 0x8, 0x19, a7);
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x163) {
        return ((int (*)(void))(0xC08A61A))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x164) {
        return ((int (*)(void))(0xC08A620))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x165) {
        return ((int (*)(void))(0xC08A632))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x166) {
        return ((int (*)(void))(0xC08A638))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x168) {
        return ((int (*)(void))(0xC08A63E))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x16A) {
        return ((int (*)(void))(0xC08A644))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x16B) {
        return ((int (*)(void))(0xC08A64A))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x197) {
        return ((int (*)(void))(0xC08A626))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x19D) {
        return ((int (*)(void))(0xC08A650))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x1A0) {
        return ((int (*)(void))(0xC08A656))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x1A2) {
        return ((int (*)(void))(0xC08A62C))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x25B) {
        return ((int (*)(void))(0xC08A65C))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x300) {
        return ((int (*)(void))(0xC08A662))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x301) {
        return ((int (*)(void))(0xC08A668))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x302) {
        return ((int (*)(void))(0xC08A66E))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x303) {
        return ((int (*)(void))(0xC08A674))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x400) {
        return ((int (*)(void))(0xC08A67A))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x402) {
        return ((int (*)(void))(0xC08A690))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x407) {
        return ((int (*)(void))(0xC08A69E))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x600) {
        return ((int (*)(void))(0xC08A6A4))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x601) {
        return ((int (*)(void))(0xC08A6AA))();
    }
    if (((t0 << 8) + (unsigned char)t1) == 0x602) {
        return ((int (*)(void))(0xC08A6B0))();
    }
    return ((t0 << 8) + (unsigned char)t1);
}
