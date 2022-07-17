typedef struct {
    /* 0x00 */ Vec3f scale;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
    /* 0x14 */ Vec3f pos;
} ScaleRotPos;                                      /* size = 0x20 */

struct _struct_D_8085CC88_0x8 {
    /* 0x0 */ LinkAnimationHeader* unk_0;           /* inferred */
    /* 0x4 */ u8 unk_4;                             /* inferred */
    /* 0x5 */ char pad_5[3];                        /* maybe part of unk_4[4]? */
};                                                  /* size = 0x8 */

struct _struct_D_8085CD30_0x10 {
    /* 0x00 */ LinkAnimationHeader* unk_0;          /* inferred */
    /* 0x04 */ void* unk_4;                         /* inferred */
    /* 0x08 */ void* unk_8;                         /* inferred */
    /* 0x0C */ u8 unk_C;                            /* inferred */
    /* 0x0D */ u8 unk_D;                            /* inferred */
    /* 0x0E */ char pad_E[2];                       /* maybe part of unk_D[3]? */
};                                                  /* size = 0x10 */

struct _struct_D_8085CF88_0x10 {
    /* 0x00 */ u8 unk_0;                            /* inferred */
    /* 0x01 */ char pad_1[1];
    /* 0x02 */ u8 unk_2;                            /* inferred */
    /* 0x03 */ u8 unk_3;                            /* inferred */
    /* 0x04 */ u8 unk_4;                            /* inferred */
    /* 0x05 */ char pad_5[1];
    /* 0x06 */ u8 unk_6;                            /* inferred */
    /* 0x07 */ u8 unk_7;                            /* inferred */
    /* 0x08 */ char pad_8[2];                       /* maybe part of unk_7[3]? */
    /* 0x0A */ u8 unk_A;                            /* inferred */
    /* 0x0B */ u8 unk_B;                            /* inferred */
    /* 0x0C */ char pad_C[4];                       /* maybe part of unk_B[5]? */
};                                                  /* size = 0x10 */

struct _struct_D_8085D09C_0x8 {
    /* 0x0 */ s32 unk_0;                            /* inferred */
    /* 0x4 */ u8 unk_4;                             /* inferred */
    /* 0x5 */ u8 unk_5;                             /* inferred */
    /* 0x6 */ u8 unk_6;                             /* inferred */
    /* 0x7 */ u8 unk_7;                             /* inferred */
};                                                  /* size = 0x8 */

struct _struct_D_8085D13C_0x6 {
    /* 0x0 */ s8 unk_0;                             /* inferred */
    /* 0x1 */ u8 unk_1;                             /* inferred */
    /* 0x2 */ u8 unk_2;                             /* inferred */
    /* 0x3 */ u8 unk_3;                             /* inferred */
    /* 0x4 */ u16 unk_4;                            /* inferred */
};                                                  /* size = 0x6 */

struct _struct_D_8085D200_0xC {
    /* 0x0 */ LinkAnimationHeader* unk_0;           /* inferred */
    /* 0x4 */ LinkAnimationHeader* unk_4;           /* inferred */
    /* 0x8 */ u8 unk_8;                             /* inferred */
    /* 0x9 */ u8 unk_9;                             /* inferred */
    /* 0xA */ char pad_A[2];                        /* maybe part of unk_9[3]? */
};                                                  /* size = 0xC */

struct _struct_D_8085D714_0x8 {
    /* 0x0 */ u8 unk_0;                             /* inferred */
    /* 0x1 */ char pad_1[3];                        /* maybe part of unk_0[4]? */
    /* 0x4 */ LinkAnimationHeader* unk_4;           /* inferred */
};                                                  /* size = 0x8 */

struct _struct_D_8085D848_0x54 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Vec3f unk_18;                        /* inferred */
    /* 0x24 */ char pad_24[0x30];                   /* maybe part of unk_18[5]? */
};                                                  /* size = 0x54 */

struct _struct_D_8085E368_0xC {
    /* 0x0 */ s16 unk_0;                            /* inferred */
    /* 0x2 */ s16 unk_2;                            /* inferred */
    /* 0x4 */ s16 unk_4;                            /* inferred */
    /* 0x6 */ s16 unk_6;                            /* inferred */
    /* 0x8 */ s16 unk_8;                            /* inferred */
    /* 0xA */ s16 unk_A;                            /* inferred */
};                                                  /* size = 0xC */

? EffectSsFhgFlash_SpawnShock(PlayState*, Actor*, f32*, s16, s32); /* extern */
? EffectSsFireTail_SpawnFlameOnPlayer(f32, f32, PlayState*, f32, s16, f32); /* extern */
? EffectSsIcePiece_SpawnBurst(PlayState*, PosRot*, f32); /* extern */
? EffectSsStick_Spawn(PlayState*, void*, s16, Player*); /* extern */
s32 func_800DF86C(Camera*, ?);                      /* extern */
? func_801155B4(PlayState*, s16, s16, Player*);     /* extern */
? func_80115764(PlayState*, ?);                     /* extern */
? func_80165DCC(?);                                 /* extern */
? func_80165DF0();                                  /* extern */
? func_8019F780(Vec3f*, s32, f32);                  /* extern */
? func_8019FCB8(Vec3f*, ?, f32);                    /* extern */
? func_8019FD90(?, ?);                              /* extern */
? func_801A0184();                                  /* extern */
? func_801A01C4();                                  /* extern */
? func_801A3CF4(s8);                                /* extern */
? func_801A3E38(?);                                 /* extern */
? func_801A41F8(?);                                 /* extern */
s32 func_80834DFC(Player* arg0, PlayState* arg1, Vec3f*); /* static */
s32 func_808365DC(Player* arg0, PlayState* arg1, Vec3f*); /* static */
void func_80836988(Player* arg0, PlayState* arg1, SkelAnime*); /* static */
void func_80838A20(PlayState* arg0, Player* arg1);  /* static */
s32 func_80838A90(Player* arg0, PlayState* arg1, Player*, PlayState*); /* static */
s32 func_808391D8(Player* arg0, PlayState* arg1, Vec3f*); /* static */
s32 func_80839518(Player* arg0, PlayState* arg1, Vec3f*); /* static */
void func_80839978(PlayState* arg0, Player* arg1, s32, s32); /* static */
void func_80839A10(PlayState* arg0, Player* arg1, s32, s32); /* static */
s32 func_80839B18(Player* arg0, Player* arg1);      /* static */
s32 func_8083A0CC(Player* arg0, PlayState* arg1, Vec3f*); /* static */
s32 func_8083A114(Player* arg0, PlayState* arg1, Vec3f*); /* static */
s32 func_8083A274(Player* arg0, PlayState* arg1, Vec3f*); /* static */
s32 func_8083A580(Player* arg0, PlayState* arg1, Vec3f*); /* static */
void func_8083AD04(PlayState* arg1, Player* arg1, s32); /* static */
void func_8083AD8C(PlayState* arg1, Player* arg1, s32); /* static */
void func_8083ADB8(PlayState* arg1, Player* arg1, s32); /* static */
void func_8083ADF0(PlayState* arg1, Player* arg1, s32); /* static */
void func_8083AE38(PlayState* arg1, Player* arg1, s32); /* static */
s32 func_8083CCB4(Actor* arg0, PlayState* arg1);    /* static */
s32 func_8083D23C(Player* arg0, PlayState* arg1, Vec3f*); /* static */
s32 func_8083D78C(Player* arg0, PlayState* arg1, Vec3f*); /* static */
s32 func_8083DFC4(Actor* arg0, PlayState* arg1);    /* static */
void func_808412A0(PlayState* arg1, Player* arg1, s32); /* static */
void func_808412BC(PlayState* arg1, Player* arg1, s32); /* static */
void func_80841408(PlayState* arg1, Player* arg1, s32); /* static */
void func_808414E0(PlayState* arg1, Player* arg1, s32); /* static */
void func_80841528(Player* arg0, LinkAnimationHeader* arg1); /* static */
void func_808415A0(PlayState* arg1, Player* arg1, s32); /* static */
void func_808415E4(PlayState* arg1, Player* arg1, s32); /* static */
void func_80841624(PlayState* arg1, Player* arg1, s32); /* static */
void func_80841744(PlayState* arg1, Player* arg1, s32); /* static */
? func_80843EC0(PlayState*, Player*);               /* static */
void func_808484F0(Player* arg0);                   /* static */
s32 func_80848570(Player* arg0, PlayState* arg1, Vec3f*); /* static */
void func_808496AC(Player* arg0, PlayState* arg1);  /* static */
void func_808497A0(Player* arg0, PlayState* arg1);  /* static */
void func_80849A9C(Player* arg0, PlayState* arg1);  /* static */
void func_80849DD0(Player* arg0, PlayState* arg1);  /* static */
void func_80849FE0(Player* arg0, PlayState* arg1);  /* static */
void func_8084A26C(Player* arg0, PlayState* arg1);  /* static */
void func_8084A5C0(Player* arg0, PlayState* arg1);  /* static */
void func_8084A794(Player* arg0, PlayState* arg1);  /* static */
void func_8084A884(Player* arg0, PlayState* arg1);  /* static */
void func_8084A8E8(Player* arg0, PlayState* arg1);  /* static */
void func_8084AB4C(Player* arg0, PlayState* arg1);  /* static */
void func_8084AC84(Player* arg0, PlayState* arg1);  /* static */
void func_8084AEEC(Player* arg0, PlayState* arg1);  /* static */
void func_8084AF9C(Player* arg0, PlayState* arg1);  /* static */
void func_8084B0EC(Player* arg0, PlayState* arg1);  /* static */
void func_8084B288(Player* arg0, PlayState* arg1);  /* static */
void func_8084B3B8(Player* arg0, PlayState* arg1);  /* static */
void func_8084B4A8(Player* arg0, PlayState* arg1);  /* static */
void func_8084B5C0(Player* arg0, PlayState* arg1);  /* static */
void func_8084BAA4(Player* arg0, PlayState* arg1);  /* static */
void func_8084BBF0(Player* arg0, PlayState* arg1);  /* static */
void func_8084BC64(Player* arg0, PlayState* arg1);  /* static */
void func_8084BE40(Player* arg0, PlayState* arg1);  /* static */
void func_8084BF28(Player* arg0, PlayState* arg1);  /* static */
void func_8084BFDC(Player* arg0, PlayState* arg1);  /* static */
void func_8084C16C(Player* arg0, PlayState* arg1);  /* static */
void func_8084C6EC(Player* arg0, PlayState* arg1);  /* static */
void func_8084C94C(Player* arg0, PlayState* arg1);  /* static */
void func_8084CA24(Player* arg0, PlayState* arg1);  /* static */
void func_8084CB58(Player* arg0, PlayState* arg1);  /* static */
void func_8084CCEC(Player* arg0, PlayState* arg1);  /* static */
void func_8084CE84(Player* arg0, PlayState* arg1);  /* static */
void func_8084D18C(Player* arg0, PlayState* arg1);  /* static */
void func_8084D4EC(Player* arg0, PlayState* arg1);  /* static */
void func_8084D770(Player* arg0, PlayState* arg1);  /* static */
void func_8084E034(Player* arg0, PlayState* arg1);  /* static */
void func_8084E25C(Player* arg0, PlayState* arg1);  /* static */
void func_8084E334(Player* arg0, PlayState* arg1);  /* static */
void func_8084E434(Player* arg0, PlayState* arg1);  /* static */
void func_8084E4E4(Player* arg0, PlayState* arg1);  /* static */
void func_8084E58C(Player* arg0, PlayState* arg1);  /* static */
void func_8084E65C(Player* arg0, PlayState* arg1);  /* static */
void func_8084E724(Player* arg0, PlayState* arg1);  /* static */
void func_8084E980(Player* arg0, PlayState* arg1);  /* static */
void func_8084ED9C(Player* arg0, PlayState* arg1);  /* static */
void func_8084EE50(Player* arg0, PlayState* arg1);  /* static */
void func_8084EF9C(Player* arg0, PlayState* arg1);  /* static */
void func_8084F1B8(Player* arg0, PlayState* arg1);  /* static */
void func_8084F3DC(Player* arg0, PlayState* arg1);  /* static */
void func_8084F4E8(Actor* arg0, PlayState* arg1);   /* static */
void func_8084FC0C(Player* arg0, PlayState* arg1);  /* static */
void func_8084FE7C(Player* arg0, PlayState* arg1);  /* static */
void func_808505D0(Player* arg0, PlayState* arg1);  /* static */
void func_80850B18(Player* arg0, PlayState* arg1);  /* static */
void func_80850D68(Player* arg0, PlayState* arg1);  /* static */
void func_808513EC(Player* arg0, PlayState* arg1);  /* static */
void func_80851588(Player* arg0, PlayState* arg1);  /* static */
void func_808516B4(Player* arg0, PlayState* arg1);  /* static */
void func_808519FC(Player* arg0, PlayState* arg1);  /* static */
void func_80851B58(Player* arg0, PlayState* arg1);  /* static */
void func_80851BD4(Player* arg0, PlayState* arg1);  /* static */
void func_8085269C(Player* arg0, PlayState* arg1);  /* static */
void func_80852B28(Player* arg0, PlayState* arg1);  /* static */
void func_80852C04(Actor* arg0, PlayState* arg1);   /* static */
void func_80852FD4(Player* arg0, PlayState* arg1);  /* static */
void func_80853194(Player* arg0, PlayState* arg1);  /* static */
void func_808534C0(Player* arg0, PlayState* arg1);  /* static */
void func_80853754(Player* arg0, PlayState* arg1);  /* static */
void func_80853850(Player* arg0, PlayState* arg1);  /* static */
void func_80853A5C(Player* arg0, PlayState* arg1);  /* static */
void func_808540A0(Player* arg0, PlayState* arg1);  /* static */
void func_80854118(Player* arg0, PlayState* arg1);  /* static */
void func_8085421C(Player* arg0, PlayState* arg1);  /* static */
void func_8085437C(Player* arg0, PlayState* arg1);  /* static */
void func_8085439C(Player* arg0, PlayState* arg1);  /* static */
void func_80854614(Player* arg0, PlayState* arg1);  /* static */
void func_808546D0(Player* arg0, PlayState* arg1);  /* static */
void func_80854800(Player* arg0, PlayState* arg1);  /* static */
void func_808548B8(Player* arg0, PlayState* arg1);  /* static */
void func_80854C70(Player* arg0, PlayState* arg1);  /* static */
void func_808553F4(Player* arg0, PlayState* arg1);  /* static */
void func_80855A7C(Player* arg0, PlayState* arg1);  /* static */
void func_80855AF4(Player* arg0, PlayState* arg1);  /* static */
void func_80855B9C(Player* arg0, PlayState* arg1);  /* static */
void func_80855C28(Player* arg0, PlayState* arg1);  /* static */
void func_80855E08(Player* arg0, PlayState* arg1);  /* static */
void func_80856918(Player* arg0, PlayState* arg1);  /* static */
void func_808573A4(Player* arg0, PlayState* arg1);  /* static */
void func_80858DB4(? (*arg0)(), Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858DDC(? (*arg0)(), Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858DFC(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858E40(PlayState*, Player*, LinkAnimationHeader*); /* static */
void func_80858E60(? (*arg0)(), Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858E80(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858EA0(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858EC0(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858EFC(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858F1C(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858F3C(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858F5C(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858F7C(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858F9C(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80858FBC(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80859028(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80859168(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_808591BC(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_80859210(PlayState* arg0, Player* arg1, struct_8082E224_arg1* arg2); /* static */
void func_80859414(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_808594D0(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_808595B8(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_8085968C(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_80859708(PlayState* arg0, void* arg1, ? arg2); /* static */
void func_8085978C(void* arg0, void* arg1, ? arg2); /* static */
void func_80859890(void* arg1, ? arg2);             /* static */
void func_80859990(s32 arg0, void* arg1, ? arg2);   /* static */
void func_808599DC(? arg2);                         /* static */
void func_80859A10(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_80859A44(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_80859AD0();                               /* static */
void func_80859AF8(void* arg1);                     /* static */
void func_80859B28();                               /* static */
void func_80859B54(PlayState* arg1, ? arg2);        /* static */
void func_80859C60(PlayState* arg0, Player* arg1, s32 arg2); /* static */
void func_80859CA0(PlayState* arg0, Player* arg1, s32 arg2, Player*); /* static */
void func_80859CE0(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_80859CFC(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_80859D44(PlayState* arg0, s32 arg1, ? arg2); /* static */
void func_80859D70(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_80859EBC(PlayState* arg0, Player* arg1, s32 arg2); /* static */
void func_80859F4C(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_80859FCC(s32 arg0, void* arg1, ? arg2);   /* static */
void func_80859FF4(PlayState* arg0, void* arg1, ? arg2); /* static */
void func_8085A04C(PlayState* arg0, void* arg1, void* arg2); /* static */
void func_8085A120(s32 arg0, void* arg1, ? arg2);   /* static */
void func_8085A144(PlayState* arg0, void* arg1, ? arg2); /* static */
void func_8085A19C(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_8085A1D4(PlayState* arg0, void* arg1, ? arg2); /* static */
void func_8085A24C(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_8085A2AC(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_8085A330(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_8085A364(PlayState* arg0, Player* arg1);  /* static */
void func_8085A40C(PlayState* arg0, Player* arg1, s32 arg2); /* static */
void func_8085A4A4(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_8085A530(PlayState* arg0, s32 arg1, ? arg2); /* static */
void func_8085A5DC(PlayState* arg0, void* arg1, ? arg2); /* static */
void func_8085A66C(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_8085A6C0(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2); /* static */
void func_8085A710(PlayState* arg0, Player* arg1);  /* static */
void func_8085A768(PlayState* arg0, Player* arg1, ? arg2); /* static */
void func_8085A7C0(PlayState* arg0, Actor* arg1, ? arg2); /* static */
void func_8085A8C4(void* arg0, void* arg1, ? arg2); /* static */
void func_8085A940(PlayState* arg0, void* arg1, ? arg2); /* static */
void func_8085AA10(PlayState* arg0, s32 arg1, ? arg2); /* static */
void func_8085AA60(? arg2);                         /* static */
void func_8085AA84(PlayState* arg0, void* arg1, ? arg2); /* static */
void func_8085AACC(PlayState* arg0, Player* arg1, s32 arg2, PlayState*); /* static */
void func_8085AB58(Player* arg0, CsCmdActorAction* arg1); /* static */
void func_8085ADA0(PlayState* arg0, Player* arg1, ? arg2); /* static */
extern ? D_0400CF48;
extern ? D_0400CF58;
extern ? D_0400D028;
extern ? D_0400D030;
extern ? D_0400D090;
extern ? D_0400D0B8;
extern ? D_0400D108;
extern LinkAnimationHeader D_0400D2D0;
extern LinkAnimationHeader D_0400D520;
extern ? D_0400D728;
extern ? D_0400DC50;
extern ? D_0400DCD8;
extern ? D_0400DD50;
extern ? D_0400DD58;
extern ? D_0400DD68;
extern Player D_0400DDB0;
extern ? D_0400DE48;
extern ? D_0400DE58;
extern ? D_0400E118;
extern ? D_0400E120;
extern ? D_0400E150;
extern PlayState D_0400E2D0;
static u8 D_8085B9F0[0x18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 };
static u8 D_8085BA08[0x18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 };
static u8 D_8085BA20[0x18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0 };
static ? D_8085C2A4;                                /* unable to generate initializer */
static ? D_8085C2A8;                                /* unable to generate initializer */
static ? D_8085C2AC;                                /* unable to generate initializer */
static s32 D_8085C84C[0x1E] = {
    0x0400DF30,
    0x0400DEE8,
    0x0400DF40,
    0x0400DEF8,
    0x0400DF38,
    0x0400DEF0,
    0x0400DF38,
    0x0400DEF0,
    0x0400E100,
    0x0400E0C0,
    0x0400E100,
    0x0400E0C0,
    0x0400E100,
    0x0400E0C0,
    0x0400E0C8,
    0x0400E0A0,
    0x0400E0D0,
    0x0400E0A8,
    0x0400E0F0,
    0x0400E0F0,
    0x0400E0D8,
    0x0400E0B0,
    0x0400E0E0,
    0x0400E0B8,
    0x0400E0E8,
    0x0400E0E8,
    0x0400E0F8,
    0x0400E0F8,
    0x0400D0B0,
    0x0400D0B0,
};
static ? D_8085C928;                                /* unable to generate initializer */
static struct _struct_D_8085CC88_0x8 D_8085CC88[0xF] = {
    { (LinkAnimationHeader* )0x0400DC70, 0xC },
    { (LinkAnimationHeader* )0x0400DD90, 6 },
    { (LinkAnimationHeader* )0x0400D9B8, 8 },
    { (LinkAnimationHeader* )0x0400DDA0, 8 },
    { (LinkAnimationHeader* )0x0400D820, 8 },
    { (LinkAnimationHeader* )0x0400DC50, 0xA },
    { (LinkAnimationHeader* )0x0400D9A8, 7 },
    { (LinkAnimationHeader* )0x0400D9B0, 0xB },
    { (LinkAnimationHeader* )0x0400DC70, 0xC },
    { (LinkAnimationHeader* )0x0400DD88, 4 },
    { (LinkAnimationHeader* )0x0400DD48, 4 },
    { (LinkAnimationHeader* )0x0400DC58, 4 },
    { (LinkAnimationHeader* )0x0400D3E0, 5 },
    { (LinkAnimationHeader* )0x0400DC68, 0xD },
    { (LinkAnimationHeader* )0x0400E350, 4 },
};
static ? D_8085CD00;                                /* unable to generate initializer */
static struct _struct_D_8085CD30_0x10 D_8085CD30[0x10] = {
    {
        (LinkAnimationHeader* )0x0400D868,
        (void* )0x0400D878,
        (void* )0x0400D870,
        1,
        4,
    },
    {
        (LinkAnimationHeader* )0x0400D6E0,
        (void* )0x0400D6E8,
        (void* )0x0400D398,
        1,
        4,
    },
    {
        (LinkAnimationHeader* )0x0400D880,
        (void* )0x0400D888,
        (void* )0x0400D428,
        0,
        5,
    },
    {
        (LinkAnimationHeader* )0x0400D6F0,
        (void* )0x0400D6F8,
        (void* )0x0400D3A0,
        1,
        7,
    },
    {
        (LinkAnimationHeader* )0x0400D788,
        (void* )0x0400D790,
        (void* )0x0400D3C0,
        1,
        4,
    },
    {
        (LinkAnimationHeader* )0x0400D6A0,
        (void* )0x0400D6A8,
        (void* )0x0400D378,
        0,
        5,
    },
    {
        (LinkAnimationHeader* )0x0400D798,
        (void* )0x0400D7A0,
        (void* )0x0400D3C8,
        2,
        8,
    },
    {
        (LinkAnimationHeader* )0x0400D6B0,
        (void* )0x0400D6B8,
        (void* )0x0400D380,
        3,
        8,
    },
    {
        (LinkAnimationHeader* )0x0400D7C0,
        (void* )0x0400D7C8,
        (void* )0x0400D3D0,
        0,
        4,
    },
    {
        (LinkAnimationHeader* )0x0400D6C0,
        (void* )0x0400D6C8,
        (void* )0x0400D388,
        0,
        5,
    },
    {
        (LinkAnimationHeader* )0x0400D7D0,
        (void* )0x0400D7D8,
        (void* )0x0400D3D8,
        0,
        6,
    },
    {
        (LinkAnimationHeader* )0x0400D6D0,
        (void* )0x0400D6D8,
        (void* )0x0400D390,
        1,
        5,
    },
    {
        (LinkAnimationHeader* )0x0400D890,
        (void* )0x0400D898,
        (void* )0x0400D430,
        0,
        3,
    },
    {
        (LinkAnimationHeader* )0x0400D700,
        (void* )0x0400D708,
        (void* )0x0400D3A8,
        0,
        3,
    },
    {
        (LinkAnimationHeader* )0x0400D8A0,
        (void* )0x0400D8A8,
        (void* )0x0400D438,
        1,
        9,
    },
    {
        (LinkAnimationHeader* )0x0400D710,
        (void* )0x0400D718,
        (void* )0x0400D3B0,
        1,
        8,
    },
};
static ? D_8085CE30;                                /* unable to generate initializer */
static ? D_8085CE60;                                /* unable to generate initializer */
static LinkAnimationHeader* D_8085CF50[2] = { (LinkAnimationHeader* )0x0400D8C8, (LinkAnimationHeader* )0x0400D740 };
static LinkAnimationHeader* D_8085CF58[2] = { (LinkAnimationHeader* )0x0400D8C0, (LinkAnimationHeader* )0x0400D740 };
static LinkAnimationHeader* D_8085CF60[2] = { (LinkAnimationHeader* )0x0400D8D0, (LinkAnimationHeader* )0x0400D748 };
static LinkAnimationHeader* D_8085CF68[2] = { (LinkAnimationHeader* )0x0400D8D8, (LinkAnimationHeader* )0x0400D750 };
static LinkAnimationHeader* D_8085CF70[2] = { (LinkAnimationHeader* )0x0400D8E0, (LinkAnimationHeader* )0x0400D758 };
static LinkAnimationHeader* D_8085CF78[2] = { (LinkAnimationHeader* )0x0400D8B8, (LinkAnimationHeader* )0x0400D738 };
static ? D_8085CF80;                                /* unable to generate initializer */
static ? D_8085CF84;                                /* unable to generate initializer */
static struct _struct_D_8085CF88_0x10 D_8085CF88[2]; /* unable to generate initializer */
static ? D_8085CFB8;                                /* unable to generate initializer */
static LinkAnimationHeader* D_8085CFBC[2] = { (LinkAnimationHeader* )0x0400D470, (LinkAnimationHeader* )0x0400D478 };
static LinkAnimationHeader* D_8085CFC4[2] = { (LinkAnimationHeader* )0x0400D458, (LinkAnimationHeader* )0x0400D460 };
static LinkAnimationHeader* D_8085CFCC[2] = { (LinkAnimationHeader* )0x0400D400, (LinkAnimationHeader* )0x0400D408 };
static LinkAnimationHeader* D_8085CFD4[2] = { (LinkAnimationHeader* )0x0400D400, (LinkAnimationHeader* )0x0400D410 };
static LinkAnimationHeader* D_8085CFDC[2] = { (LinkAnimationHeader* )0x0400DBE0, (LinkAnimationHeader* )0x0400D818 };
static s8 D_8085CFE4[8] = { 0xD, 2, 4, 9, 0xA, 0xB, 8, -7 };
static s8 D_8085CFEC[0xC] = { 0xD, 1, 2, 5, 3, 4, 9, 0xA, 0xB, 7, 8, -6 };
static s8 D_8085CFF8[0xC] = { 0xD, 1, 2, 3, 4, 9, 0xA, 0xB, 8, 7, -6, 0 };
static s8 D_8085D004[8] = { 0xD, 2, 4, 9, 0xA, 0xB, 8, -7 };
static s8 D_8085D00C[0xC] = { 0xD, 2, 4, 9, 0xA, 0xB, 0xC, 8, -7, 0, 0, 0 };
static s8 D_8085D018 = -7;
static s8 D_8085D01C[0xC] = { 0, 0xB, 1, 2, 3, 5, 4, 9, 8, 7, -6, 0 };
static s8 D_8085D028[0xC] = { 0, 0xB, 1, 2, 3, 0xC, 5, 4, 9, 8, 7, -6 };
static s8 D_8085D034[0x10] = { 0xD, 1, 2, 3, 0xC, 5, 4, 9, 0xA, 0xB, 8, 7, -6, 0, 0, 0 };
static s8 D_8085D044[4] = { 0xA, 8, -7, 0 };
static s8 D_8085D048[8] = { 0, 0xC, 5, 4, -0xE, 0, 0, 0 };
static s8 D_8085D050[4] = { 0xD, 2, -4, 0 };
static s32 (*D_8085D054[0xF])(Player*, PlayState*, Vec3f*) = {
    func_80839518,
    func_808365DC,
    func_8083D23C,
    ((s32 (*)(Player*, PlayState*, Vec3f*)) func_8083CCB4),
    func_808391D8,
    ((s32 (*)(Player*, PlayState*, Vec3f*)) func_8083DFC4),
    func_8083A114,
    func_80848570,
    func_8083A580,
    func_8083D78C,
    ((s32 (*)(Player*, PlayState*, Vec3f*)) func_80839B18),
    func_8083A274,
    func_80834DFC,
    ((s32 (*)(Player*, PlayState*, Vec3f*)) func_80838A90),
    func_8083A0CC,
};
static ? D_8085D090;                                /* unable to generate initializer */
static ? D_8085D094;                                /* unable to generate initializer */
static ? D_8085D097;                                /* unable to generate initializer */
static struct _struct_D_8085D09C_0x8 D_8085D09C[7] = {
    { 0x100, 2, 2, 0, 0 },
    { 0x200, 4, 8, 1, 2 },
    { 0x200, 4, 8, 2, 4 },
    { 0x200, 4, 8, 3, 6 },
    { 0x200, 4, 8, 4, 8 },
    { 2, 0, 0, 2, 4 },
    { 0x800000, 1, 2, 0, 0 },
};
static LinkAnimationHeader* D_8085D0D4[4] = {
    (LinkAnimationHeader* )0x0400DCA0,
    (LinkAnimationHeader* )0x0400DC98,
    (LinkAnimationHeader* )0x0400DB00,
    (LinkAnimationHeader* )0x0400DAF8,
};
static LinkAnimationHeader* D_8085D0E4[4] = {
    (LinkAnimationHeader* )0x0400DC90,
    (LinkAnimationHeader* )0x0400D418,
    (LinkAnimationHeader* )0x0400DAE8,
    (LinkAnimationHeader* )0x0400D3F0,
};
static s32 D_8085D0F4 = 0x20101;
static ? D_8085D0F8;                                /* unable to generate initializer */
static Vec3f D_8085D100 = { 0.0f, 50.0f, 0.0f };
static Vec3f D_8085D10C;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D114 = 20.0f;
static LinkAnimationHeader* D_8085D118[3] = {
    (LinkAnimationHeader* )0x0400E1B8,
    (LinkAnimationHeader* )0x0400E3C8,
    (LinkAnimationHeader* )0x0400E280,
};
static LinkAnimationHeader* D_8085D124[3] = {
    (LinkAnimationHeader* )0x0400E1C0,
    (LinkAnimationHeader* )0x0400E3D0,
    (LinkAnimationHeader* )0x0400E288,
};
static Vec3f D_8085D130;                            /* type too large by 8; unable to generate initializer */
static f32 D_8085D134 = 0.0f;
static struct _struct_D_8085D13C_0x6 D_8085D13C[2] = { { -8, 0xB4, 0x28, 0x64, 0x681A }, { -0x10, 0xFF, 0x8C, 0x96, 0x681A } };
static Vec3f D_8085D148 = { 0.0f, 50.0f, 0.0f };
static Vec3f D_8085D154 = { 0.0f, 0.0f, 100.0f };
static LinkAnimationHeader* D_8085D17C[5] = {
    (LinkAnimationHeader* )0x0400DDB0,
    (LinkAnimationHeader* )0x0400E1F8,
    (LinkAnimationHeader* )0x0400E3E8,
    (LinkAnimationHeader* )0x0400E2B0,
    (LinkAnimationHeader* )0x0400DDB0,
};
static LinkAnimationHeader* D_8085D190[5] = {
    (LinkAnimationHeader* )0x0400DDB8,
    (LinkAnimationHeader* )0x0400E1F0,
    (LinkAnimationHeader* )0x0400E3E0,
    (LinkAnimationHeader* )0x0400E2A8,
    (LinkAnimationHeader* )0x0400DDB8,
};
static ? D_8085D1A4;                                /* unable to generate initializer */
static LinkAnimationHeader* D_8085D1F8[2] = { (LinkAnimationHeader* )0x0400DCA8, (LinkAnimationHeader* )0x0400DE98 };
static struct _struct_D_8085D200_0xC D_8085D200[2] = {
    { (LinkAnimationHeader* )0x0400D4A0, (LinkAnimationHeader* )0x0400D498, 2, 3 },
    { (LinkAnimationHeader* )0x0400D4D0, (LinkAnimationHeader* )0x0400D4C8, 5, 3 },
};
static f32 D_8085D218[3] = { 0.0f, 100.0f, 40.0f };
static ? D_8085D224;                                /* unable to generate initializer */
static ? D_8085D23C;                                /* unable to generate initializer */
static u16 D_8085D252[5] = { 0x70A5, 0x1804, 0x1805, 0x1806, 0x1806 };
static u16 D_8085D25C[4] = { 0x1804, 0x1804, 0x1805, 0x1806 };
static LinkAnimationHeader* D_8085D264[2] = { (LinkAnimationHeader* )0x0400DC00, (LinkAnimationHeader* )0x0400DEC0 };
static Color_RGBA8 D_8085D26C = { 0xFF, 0xFF, 0xFF, 0xFF };
static Vec3f D_8085D270 = { 0.0f, 0.04f, 0.0f };
static Vec3f D_8085D27C;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D284 = 0.0f;
static Vec3f D_8085D288;                            /* type too large by 8; unable to generate initializer */
static f32 D_8085D28C = 0.0f;
static ? D_8085D294;                                /* unable to generate initializer */
static Vec3f D_8085D2A4 = { 0.0f, 0.0f, 5.0f };
static ? D_8085D2B0;                                /* unable to generate initializer */
static Vec3f D_8085D2B4 = { -1.0f, 69.0f, 20.0f };
static s32 D_8085D338 = 0xF64;
static s32 D_8085D33C = 0x96;
static ? D_8085D34C;                                /* unable to generate initializer */
static ? D_8085D354;                                /* unable to generate initializer */
static Vec3f D_8085D358;                            /* type too large by 8; unable to generate initializer */
static struct_80124618 D_8085D428[5] = {
    { 0, { 0, 0, 0 } },
    { 1, { 0x50, 0xAA, 0x50 } },
    { 3, { 0x64, 0x50, 0x64 } },
    { 7, { 0x64, 0x64, 0x64 } },
    { 8, { 0x64, 0x64, 0x64 } },
};
static struct_80124618 D_8085D450[5] = {
    { 0, { 0, 0, 0 } },
    { 1, { 0x50, 0xAA, 0x50 } },
    { 3, { 0x64, 0x50, 0x64 } },
    { 7, { 0x64, 0x64, 0x64 } },
    { 8, { 0x64, 0x64, 0x64 } },
};
static struct_80124618 D_8085D478[2] = { { 0, { 0, 0, 0 } }, { 8, { 0, 0, 0 } } };
static struct_80124618 D_8085D488[5] = {
    { 0, { 0x64, 0x64, 0x64 } },
    { 1, { 0x64, 0x3C, 0x64 } },
    { 3, { 0x64, 0x8C, 0x64 } },
    { 7, { 0x64, 0x50, 0x64 } },
    { 9, { 0x64, 0x64, 0x64 } },
};
static struct_80124618 D_8085D4B0[6] = {
    { 0, { 0x64, 0x64, 0x64 } },
    { 1, { 0x64, 0x46, 0x64 } },
    { 3, { 0x64, 0x78, 0x64 } },
    { 6, { 0x64, 0x50, 0x64 } },
    { 8, { 0x64, 0x64, 0x64 } },
    { 9, { 0x64, 0x64, 0x64 } },
};
static struct_80124618 D_8085D4E0[6] = {
    { 0, { 0, 0, 0 } },
    { 1, { 0, 0, 0 } },
    { 3, { 0x64, 0x82, 0x64 } },
    { 5, { 0x82, 0x82, 0x82 } },
    { 7, { 0x50, 0x5A, 0x50 } },
    { 9, { 0x64, 0x64, 0x64 } },
};
static struct _struct_D_8085D588_0xC D_8085D588[2]; /* unable to generate initializer */
static ? D_8085D5A0;                                /* unable to generate initializer */
static ? D_8085D5B8;                                /* unable to generate initializer */
static Vec3f D_8085D5D0 = { 0.0f, 0.0f, -30.0f };
static struct_8082E224_arg1 D_8085D5DC = { 0x839, -0x800 };
static struct_8082E224_arg1 D_8085D5E0 = { 0x184E, -0x83C };
static LinkAnimationHeader* D_8085D5E4[3] = {
    (LinkAnimationHeader* )0x0400D9E8,
    (LinkAnimationHeader* )0x0400D528,
    (LinkAnimationHeader* )0x0400E2F8,
};
static ? D_8085D5F0;                                /* unable to generate initializer */
static u16 D_8085D5FA[5] = { 0xE2F8, 0x1830, 0x9BF, 0, 0 };
static struct_8082E224_arg1 D_8085D604[2] = { { 0, 0x4014 }, { 0, 0xBFE2 } };
static struct_8082E224_arg1 D_8085D60C[4] = { { 0x850, 0x103C }, { 0, 0x408C }, { 0, 0x40A4 }, { 0, 0xBF56 } };
static struct_8082E224_arg1 D_8085D61C[4] = { { 0x6800, 0x2001 }, { 0x800, 0x1806 }, { 0x83C, 0x806 }, { 0, -0x2812 } };
static Vec3f D_8085D62C;                            /* type too large by 8; unable to generate initializer */
static f32 D_8085D630 = 0.0f;
static f32 D_8085D634 = 0.0f;
static Vec3f D_8085D638;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D640 = 0.0f;
static Vec3f D_8085D644;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D64C = 0.0f;
static struct_8082E224_arg1 D_8085D650[2] = { { 0x840, 0x1003 }, { 0x840, -0x1015 } };
static struct_8082E224_arg1 D_8085D658[2] = { { 0x840, 0x1004 }, { 0x840, -0x1018 } };
static f32 D_8085D660[3] = { 0.0f, 26.800001f, -60.0f };
static ? D_8085D66C;                                /* unable to generate initializer */
static ? D_8085D674;                                /* unable to generate initializer */
static struct_8082E224_arg1 D_8085D67C = { 0x80A, 0x500A };
static void* D_8085D680[9] = {
    (void* )0x080A5014,
    (void* )0x080AAFE2,
    (void* )0x0400E048,
    (void* )0x0400E040,
    (void* )0x0400E050,
    (void* )0x0400E030,
    (void* )0x0400E010,
    (void* )0x0400E020,
    (void* )0x0400E028,
};
static LinkAnimationHeader* D_8085D6A4[0xB] = {
    NULL,
    NULL,
    (LinkAnimationHeader* )0x0400E058,
    (LinkAnimationHeader* )0x0400E058,
    (LinkAnimationHeader* )0x0400E058,
    (LinkAnimationHeader* )0x0400E038,
    (LinkAnimationHeader* )0x0400E018,
    (LinkAnimationHeader* )0x0400E018,
    (LinkAnimationHeader* )0x0400E018,
    NULL,
    NULL,
};
static LinkAnimationHeader* D_8085D6D0[3] = {
    (LinkAnimationHeader* )0x0400E098,
    (LinkAnimationHeader* )0x0400E088,
    (LinkAnimationHeader* )0x0400E090,
};
static s16 D_8085D6DC[2] = { 0x203A, 0x192A };
static ? D_8085D6E0;                                /* unable to generate initializer */
static struct_8082E224_arg1 D_8085D6E8[8] = {
    { 0x871, 0x830 },
    { 0x871, 0x83A },
    { 0x871, 0x844 },
    { 0x872, 0x85C },
    { 0x872, 0x86E },
    { 0x872, 0x87E },
    { 0x872, 0x884 },
    { 0x872, -0x888 },
};
static struct_8082E224_arg1 D_8085D708[3] = { { 0, 0x2800 }, { 0x833, 0x80A }, { 0x830, -0x819 } };
static struct _struct_D_8085D714_0x8 D_8085D714[5] = {
    { 1, (LinkAnimationHeader* )0x0400E1C8 },
    { 1, (LinkAnimationHeader* )0x0400E1D8 },
    { 1, (LinkAnimationHeader* )0x0400E1D0 },
    { 0, (LinkAnimationHeader* )0x0400E1E8 },
    { 0, (LinkAnimationHeader* )0x0400E1E0 },
};
static struct_8082E224_arg1 D_8085D73C[4] = { { 0, 0x3857 }, { 0x6804, 0x2057 }, { 0x6814, 0x2045 }, { 0, -0x287B } };
static struct_8082E224_arg1 D_8085D74C[4] = { { 0x6814, 0x200D }, { 0, 0x380D }, { 0, 0x2849 }, { 0, -0x2878 } };
static struct_8082E224_arg1 D_8085D75C[2] = { { 0x6814, 0x2005 }, { 0, -0x280F } };
static Vec3f D_8085D764;                            /* type too large by 3; unable to generate initializer */
static ? D_8085D76D;                                /* unable to generate initializer */
static Vec3f D_8085D770 = { 0.0f, 0.0f, 2.0f };
static Vec3f D_8085D77C = { 0.0f, 0.0f, -0.2f };
static Color_RGBA8 D_8085D788 = { 0xFF, 0xFF, 0xFF, 0xFF };
static Color_RGBA8 D_8085D78C[2] = { { 0xFF, 0xFF, 0xFF, 0xFF }, { 1, 3, 2, 4 } }; /* extra bytes: 2 */
static ? D_8085D797;                                /* unable to generate initializer */
static ? D_8085D798;                                /* unable to generate initializer */
static Vec3f D_8085D7EC = { 0.0f, 0.0f, 5.0f };
static Vec3f D_8085D7F8;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D800 = 30.0f;
static ? D_8085D804;                                /* unable to generate initializer */
static ? D_8085D80C;                                /* unable to generate initializer */
static struct_8082E224_arg1 D_8085D838[2] = { { 0x6814, 0x2026 }, { 0x286C, -0x828 } };
static struct_8082E224_arg1 D_8085D840 = { 0x877, -0x81E };
static ? D_8085D844;                                /* unable to generate initializer */
static struct _struct_D_8085D848_0x54 D_8085D848[2]; /* unable to generate initializer */
static struct_8082E224_arg1 D_8085D8F0[5] = {
    { 0x877, 0x802 },
    { 0x1856, 0x804 },
    { 0x874, 0x80B },
    { 0x9AA, 0x81E },
    { 0x1858, -0x814 },
};
static struct_8082E224_arg1 D_8085D904 = { 0x1856, -0x808 };
static u16 D_8085D908[4] = { 0x1E80, 0x1E20, 0x1E40, 0x1E10 };
static ? D_8085D910;                                /* unable to generate initializer */
static Vec3f D_8085D918;                            /* type too large by 8; unable to generate initializer */
static f32 D_8085D91C = 0.5f;
static Vec3f D_8085D924;                            /* type too large by 8; unable to generate initializer */
static f32 D_8085D928 = 0.5f;
static Color_RGBA8 D_8085D930 = { 0xFF, 0xFF, 0x37, 0xFF };
static Color_RGBA8 D_8085D934 = { 0x64, 0x32, 0, 0 };
static s32 D_8085D938 = 0xFFC8C800;
static s32 D_8085D93C = 0xFFFF0000;
static Vec3f D_8085D940;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D948 = 0.0f;
static Vec3f D_8085D94C;                            /* type too large by 4; unable to generate initializer */
static f32 D_8085D954 = 0.0f;
static f32 D_8085D958[2] = { 600.0f, 960.0f };
static Vec3f D_8085D960 = { -30.0f, 50.0f, 0.0f };
static Vec3f D_8085D96C = { 30.0f, 50.0f, 0.0f };
static f32 D_8085D978[3] = { -30.0f, 60.0f, 0.0f };
static f32 D_8085D984[3] = { 30.0f, 60.0f, 0.0f };
static void (*D_8085D990[0x14])(? (*)(), Player*, LinkAnimationHeader*) = {
    NULL,
    func_80858DB4,
    func_80858DDC,
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80858E40),
    func_80858E60,
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80858E80),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80858EA0),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80858EFC),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80858F1C),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80858F3C),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80858F5C),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80858FBC),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80859028),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_808591BC),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80858DFC),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80858F7C),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80858F9C),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80859168),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80859210),
    ((void (*)(? (*)(), Player*, LinkAnimationHeader*)) func_80858EC0),
};
static struct_8082E224_arg1 D_8085DA08 = { 0x820, -0x181A };
static struct_8082E224_arg1 D_8085DA14[2] = { { 0, 0x3837 }, { 0x6841, -0x837 } };
static struct_8082E224_arg1 D_8085DA38[4] = { { 0x850, 0x1001 }, { 0x6805, 0x2001 }, { 0x820, 0x1827 }, { 0, -0x2831 } };
static struct_8082E224_arg1 D_8085DA48[2] = { { 0, 0x3001 }, { 0, -0x3005 } };
static struct_8082E224_arg1 D_8085DA7C = { 0x6806, -0x2005 };
static struct_8082E224_arg1 D_8085DA84 = { 0x6803, -0x200D };
static struct_8082E224_arg1 D_8085DA88 = { 0, -0x281A };
static struct_8082E224_arg1 D_8085DA8C = { 0x6816, -0x2004 };
static struct_8082E224_arg1 D_8085DA90 = { 0x832, -0x812 };
static struct _struct_D_8085DA94_0x8 D_8085DA94[0x8C]; /* unable to generate initializer */
static struct _struct_D_8085DEF4_0x8 D_8085DEF4[0x8C]; /* unable to generate initializer */
static LinkAnimationHeader* D_8085E354[5] = {
    (LinkAnimationHeader* )0x0400E4B8,
    (LinkAnimationHeader* )0x0400E4B8,
    (LinkAnimationHeader* )0x0400E4B8,
    (LinkAnimationHeader* )0x0400E4B8,
    (LinkAnimationHeader* )0x0400E160,
};
static struct _struct_D_8085E368_0xC D_8085E368[5] = {
    { -0xC8, 0x2BC, 0x64, 0x320, 0x258, 0x320 },
    { -0xC8, 0x2BC, 0x64, 0x320, 0x258, 0x320 },
    { -0xC8, 0x2BC, 0x64, 0x320, 0x258, 0x320 },
    { -0xC8, 0x2BC, 0x64, 0x320, 0x258, 0x320 },
    { -0xC8, 0x1F4, 0, 0x258, 0x190, 0x258 },
};
static Color_RGBA8 D_8085E3A4 = { 0xFF, 0xFF, 0xFF, 0 };
static Color_RGBA8 D_8085E3A8 = { 0, 0x80, 0x80, 0 };
PlayerAgeProperties D_8085BA38[5] = {
    {
        84.0f,
        90.0f,
        1.5f,
        166.5f,
        105.0f,
        119.100006f,
        88.5f,
        61.5f,
        28.5f,
        54.0f,
        75.0f,
        84.0f,
        102.0f,
        70.0f,
        27.0f,
        24.75f,
        105.0f,
        { 9, 0x123F, 0x167 },
        {
            { 8, 0x1256, 0x17C },
            { 9, 0x17EA, 0x167 },
            { 8, 0x1256, 0x17C },
            { 9, 0x17EA, 0x167 },
        },
        {
            { 9, 0x17EA, 0x167 },
            { 9, 0x1E0D, 0x17C },
            { 9, 0x17EA, 0x167 },
            { 9, 0x1E0D, 0x17C },
        },
        {
            { 8, 0x1256, 0x17C },
            { 9, 0x17EA, 0x167 },
            { -0x638, 0x1256, 0x17C },
            { -0x637, 0x17EA, 0x167 },
        },
        0,
        0x80,
        33.0f,
        44.15145f,
        (LinkAnimationHeader* )0x0400D540,
        (LinkAnimationHeader* )0x0400D548,
        (LinkAnimationHeader* )0x0400D660,
        (LinkAnimationHeader* )0x0400DB90,
        (LinkAnimationHeader* )0x0400DB98,
        {
            (LinkAnimationHeader* )0x0400DBA0,
            (LinkAnimationHeader* )0x0400DBA8,
            (LinkAnimationHeader* )0x0400DAB0,
            (LinkAnimationHeader* )0x0400DAB8,
        },
        { (LinkAnimationHeader* )0x0400DA90, (LinkAnimationHeader* )0x0400DA98 },
        { (LinkAnimationHeader* )0x0400DB70, (LinkAnimationHeader* )0x0400DB78 },
        { (LinkAnimationHeader* )0x0400DB88, (LinkAnimationHeader* )0x0400DB80 },
    },
    {
        70.0f,
        90.0f,
        0.74f,
        111.0f,
        70.0f,
        79.4f,
        59.0f,
        41.0f,
        19.0f,
        36.0f,
        50.0f,
        56.0f,
        68.0f,
        70.0f,
        19.5f,
        18.2f,
        80.0f,
        { 0x17, 0xF3B, 0xDF },
        {
            { 0x18, 0xF3B, 0xDF },
            { 0x17, 0x14CF, 0xDF },
            { 0x18, 0xF3B, 0xDF },
            { 0x17, 0x14CF, 0xDF },
        },
        {
            { 0x17, 0x14CF, 0xDF },
            { 0x18, 0x1AF2, 0xDF },
            { 0x17, 0x14CF, 0xDF },
            { 0x18, 0x1AF2, 0xDF },
        },
        {
            { 8, 0x1256, 0x17C },
            { 9, 0x17EA, 0x167 },
            { -0x638, 0x1256, 0x17C },
            { -0x637, 0x17EA, 0x167 },
        },
        0xC0,
        0x150,
        -25.0f,
        42.0f,
        (LinkAnimationHeader* )0x0400E170,
        (LinkAnimationHeader* )0x0400D548,
        (LinkAnimationHeader* )0x0400D660,
        (LinkAnimationHeader* )0x0400E198,
        (LinkAnimationHeader* )0x0400E1A0,
        {
            (LinkAnimationHeader* )0x0400E1A8,
            (LinkAnimationHeader* )0x0400E1B0,
            (LinkAnimationHeader* )0x0400E1A8,
            (LinkAnimationHeader* )0x0400E1B0,
        },
        { (LinkAnimationHeader* )0x0400DA90, (LinkAnimationHeader* )0x0400DA98 },
        { (LinkAnimationHeader* )0x0400E178, (LinkAnimationHeader* )0x0400E180 },
        { (LinkAnimationHeader* )0x0400E190, (LinkAnimationHeader* )0x0400E188 },
    },
    {
        56.0f,
        90.0f,
        1.0f,
        111.0f,
        70.0f,
        79.4f,
        59.0f,
        41.0f,
        19.0f,
        36.0f,
        50.0f,
        56.0f,
        68.0f,
        70.0f,
        18.0f,
        23.0f,
        70.0f,
        { 0x17, 0x1323, -0x6D },
        {
            { 0x17, 0x1323, -0x58 },
            { 0x17, 0x18B7, -0x6D },
            { 0x17, 0x1323, -0x58 },
            { 0x17, 0x18B7, -0x6D },
        },
        {
            { 0x17, 0x18B7, -0x6D },
            { 0x18, 0x1EDA, -0x58 },
            { 0x17, 0x18B7, -0x6D },
            { 0x18, 0x1EDA, -0x58 },
        },
        {
            { 8, 0x1256, 0x17C },
            { 9, 0x17EA, 0x167 },
            { -0x638, 0x1256, 0x17C },
            { -0x637, 0x17EA, 0x167 },
        },
        0xA0,
        0x120,
        22.0f,
        36.0f,
        (LinkAnimationHeader* )0x0400E300,
        (LinkAnimationHeader* )0x0400D548,
        (LinkAnimationHeader* )0x0400D660,
        (LinkAnimationHeader* )0x0400E378,
        (LinkAnimationHeader* )0x0400E380,
        {
            (LinkAnimationHeader* )0x0400E388,
            (LinkAnimationHeader* )0x0400E390,
            (LinkAnimationHeader* )0x0400DAB0,
            (LinkAnimationHeader* )0x0400DAB8,
        },
        { (LinkAnimationHeader* )0x0400DA90, (LinkAnimationHeader* )0x0400DA98 },
        { (LinkAnimationHeader* )0x0400E358, (LinkAnimationHeader* )0x0400E360 },
        { (LinkAnimationHeader* )0x0400E370, (LinkAnimationHeader* )0x0400E368 },
    },
    {
        35.0f,
        50.0f,
        0.3f,
        71.0f,
        50.0f,
        49.0f,
        39.0f,
        27.0f,
        19.0f,
        8.0f,
        13.6f,
        24.0f,
        24.0f,
        70.0f,
        14.0f,
        12.0f,
        55.0f,
        { -0x18, 0xDED, 0x36C },
        {
            { -0x18, 0xD92, 0x35E },
            { -0x18, 0x1371, 0x3A9 },
            { 8, 0x1256, 0x17C },
            { 9, 0x17EA, 0x167 },
        },
        {
            { -0x18, 0x1371, 0x3A9 },
            { -0x18, 0x195F, 0x3A9 },
            { 9, 0x17EA, 0x167 },
            { 9, 0x1E0D, 0x17C },
        },
        {
            { 8, 0x1256, 0x17C },
            { 9, 0x17EA, 0x167 },
            { -0x638, 0x1256, 0x17C },
            { -0x637, 0x17EA, 0x167 },
        },
        0x80,
        0xF0,
        -21.0f,
        33.0f,
        (LinkAnimationHeader* )0x0400E268,
        (LinkAnimationHeader* )0x0400D548,
        (LinkAnimationHeader* )0x0400D660,
        (LinkAnimationHeader* )0x0400D1F8,
        (LinkAnimationHeader* )0x0400D200,
        {
            (LinkAnimationHeader* )0x0400D208,
            (LinkAnimationHeader* )0x0400D210,
            (LinkAnimationHeader* )0x0400DAB0,
            (LinkAnimationHeader* )0x0400DAB8,
        },
        { (LinkAnimationHeader* )0x0400DA90, (LinkAnimationHeader* )0x0400DA98 },
        { (LinkAnimationHeader* )0x0400D1D8, (LinkAnimationHeader* )0x0400D1E0 },
        { (LinkAnimationHeader* )0x0400D1F0, (LinkAnimationHeader* )0x0400D1E8 },
    },
    {
        40.0f,
        60.0f,
        0.64705884f,
        71.0f,
        50.0f,
        49.0f,
        39.0f,
        27.0f,
        19.0f,
        22.0f,
        32.4f,
        32.0f,
        48.0f,
        45.29412f,
        14.0f,
        12.0f,
        55.0f,
        { -0x18, 0xDED, 0x36C },
        {
            { -0x18, 0xD92, 0x35E },
            { -0x18, 0x1371, 0x3A9 },
            { 8, 0x1256, 0x17C },
            { 9, 0x17EA, 0x167 },
        },
        {
            { -0x18, 0x1371, 0x3A9 },
            { -0x18, 0x195F, 0x3A9 },
            { 9, 0x17EA, 0x167 },
            { 9, 0x1E0D, 0x17C },
        },
        {
            { 8, 0x1256, 0x17C },
            { 9, 0x17EA, 0x167 },
            { -0x638, 0x1256, 0x17C },
            { -0x637, 0x17EA, 0x167 },
        },
        0x20,
        0,
        22.0f,
        29.4343f,
        (LinkAnimationHeader* )0x0400D128,
        (LinkAnimationHeader* )0x0400D170,
        (LinkAnimationHeader* )0x0400D1B8,
        (LinkAnimationHeader* )0x0400D1F8,
        (LinkAnimationHeader* )0x0400D200,
        {
            (LinkAnimationHeader* )0x0400D208,
            (LinkAnimationHeader* )0x0400D210,
            (LinkAnimationHeader* )0x0400DAB0,
            (LinkAnimationHeader* )0x0400DAB8,
        },
        { (LinkAnimationHeader* )0x0400DA90, (LinkAnimationHeader* )0x0400DA98 },
        { (LinkAnimationHeader* )0x0400D1D8, (LinkAnimationHeader* )0x0400D1E0 },
        { (LinkAnimationHeader* )0x0400D1F0, (LinkAnimationHeader* )0x0400D1E8 },
    },
};
LinkAnimationHeader* D_8085BE84[0x108] = {
    (LinkAnimationHeader* )0x0400DF28,
    (LinkAnimationHeader* )0x0400DF20,
    (LinkAnimationHeader* )0x0400DF20,
    (LinkAnimationHeader* )0x0400D988,
    (LinkAnimationHeader* )0x0400DF28,
    (LinkAnimationHeader* )0x0400DF28,
    (LinkAnimationHeader* )0x0400DF70,
    (LinkAnimationHeader* )0x0400DF48,
    (LinkAnimationHeader* )0x0400DF48,
    (LinkAnimationHeader* )0x0400D9A0,
    (LinkAnimationHeader* )0x0400DF70,
    (LinkAnimationHeader* )0x0400DF70,
    (LinkAnimationHeader* )0x0400DE40,
    (LinkAnimationHeader* )0x0400D918,
    (LinkAnimationHeader* )0x0400DE38,
    (LinkAnimationHeader* )0x0400D920,
    (LinkAnimationHeader* )0x0400DE40,
    (LinkAnimationHeader* )0x0400DE40,
    (LinkAnimationHeader* )0x0400DBB8,
    (LinkAnimationHeader* )0x0400D808,
    (LinkAnimationHeader* )0x0400DBB8,
    (LinkAnimationHeader* )0x0400D810,
    (LinkAnimationHeader* )0x0400DBB8,
    (LinkAnimationHeader* )0x0400DBB8,
    (LinkAnimationHeader* )0x0400DF08,
    (LinkAnimationHeader* )0x0400D468,
    (LinkAnimationHeader* )0x0400D468,
    (LinkAnimationHeader* )0x0400D970,
    (LinkAnimationHeader* )0x0400DF08,
    (LinkAnimationHeader* )0x0400DF08,
    (LinkAnimationHeader* )0x0400DF18,
    (LinkAnimationHeader* )0x0400D480,
    (LinkAnimationHeader* )0x0400D480,
    (LinkAnimationHeader* )0x0400D980,
    (LinkAnimationHeader* )0x0400DF18,
    (LinkAnimationHeader* )0x0400DF18,
    (LinkAnimationHeader* )0x0400D960,
    (LinkAnimationHeader* )0x0400DEE0,
    (LinkAnimationHeader* )0x0400DEE0,
    (LinkAnimationHeader* )0x0400D960,
    (LinkAnimationHeader* )0x0400D960,
    (LinkAnimationHeader* )0x0400D960,
    (LinkAnimationHeader* )0x0400DD98,
    (LinkAnimationHeader* )0x0400D860,
    (LinkAnimationHeader* )0x0400D860,
    (LinkAnimationHeader* )0x0400DD98,
    (LinkAnimationHeader* )0x0400DD98,
    (LinkAnimationHeader* )0x0400DD98,
    (LinkAnimationHeader* )0x0400D578,
    (LinkAnimationHeader* )0x0400D570,
    (LinkAnimationHeader* )0x0400D570,
    (LinkAnimationHeader* )0x0400D578,
    (LinkAnimationHeader* )0x0400D578,
    (LinkAnimationHeader* )0x0400D578,
    (LinkAnimationHeader* )0x0400D140,
    (LinkAnimationHeader* )0x0400D140,
    (LinkAnimationHeader* )0x0400D140,
    (LinkAnimationHeader* )0x0400D140,
    (LinkAnimationHeader* )0x0400D140,
    (LinkAnimationHeader* )0x0400D140,
    (LinkAnimationHeader* )0x0400D588,
    (LinkAnimationHeader* )0x0400D580,
    (LinkAnimationHeader* )0x0400D580,
    (LinkAnimationHeader* )0x0400D588,
    (LinkAnimationHeader* )0x0400D588,
    (LinkAnimationHeader* )0x0400D588,
    (LinkAnimationHeader* )0x0400D148,
    (LinkAnimationHeader* )0x0400D148,
    (LinkAnimationHeader* )0x0400D148,
    (LinkAnimationHeader* )0x0400D148,
    (LinkAnimationHeader* )0x0400D148,
    (LinkAnimationHeader* )0x0400D148,
    (LinkAnimationHeader* )0x0400DB28,
    (LinkAnimationHeader* )0x0400DB20,
    (LinkAnimationHeader* )0x0400DB20,
    (LinkAnimationHeader* )0x0400DB28,
    (LinkAnimationHeader* )0x0400DB28,
    (LinkAnimationHeader* )0x0400DB28,
    (LinkAnimationHeader* )0x0400DD18,
    (LinkAnimationHeader* )0x0400DD10,
    (LinkAnimationHeader* )0x0400DD10,
    (LinkAnimationHeader* )0x0400DD18,
    (LinkAnimationHeader* )0x0400DD18,
    (LinkAnimationHeader* )0x0400DD18,
    (LinkAnimationHeader* )0x0400DE70,
    (LinkAnimationHeader* )0x0400DE68,
    (LinkAnimationHeader* )0x0400DE68,
    (LinkAnimationHeader* )0x0400DE70,
    (LinkAnimationHeader* )0x0400DE70,
    (LinkAnimationHeader* )0x0400DE70,
    (LinkAnimationHeader* )0x0400DD28,
    (LinkAnimationHeader* )0x0400DD20,
    (LinkAnimationHeader* )0x0400DD20,
    (LinkAnimationHeader* )0x0400D858,
    (LinkAnimationHeader* )0x0400DD28,
    (LinkAnimationHeader* )0x0400DD28,
    (LinkAnimationHeader* )0x0400DCC0,
    (LinkAnimationHeader* )0x0400DCB8,
    (LinkAnimationHeader* )0x0400DCB8,
    (LinkAnimationHeader* )0x0400DCC8,
    (LinkAnimationHeader* )0x0400DCC0,
    (LinkAnimationHeader* )0x0400DCC0,
    (LinkAnimationHeader* )0x0400DF58,
    (LinkAnimationHeader* )0x0400DF50,
    (LinkAnimationHeader* )0x0400DF50,
    (LinkAnimationHeader* )0x0400D990,
    (LinkAnimationHeader* )0x0400DF58,
    (LinkAnimationHeader* )0x0400DF58,
    (LinkAnimationHeader* )0x0400DF68,
    (LinkAnimationHeader* )0x0400DF60,
    (LinkAnimationHeader* )0x0400DF60,
    (LinkAnimationHeader* )0x0400D998,
    (LinkAnimationHeader* )0x0400DF68,
    (LinkAnimationHeader* )0x0400DF68,
    (LinkAnimationHeader* )0x0400DBD8,
    (LinkAnimationHeader* )0x0400DBC0,
    (LinkAnimationHeader* )0x0400DBC0,
    (LinkAnimationHeader* )0x0400DBD8,
    (LinkAnimationHeader* )0x0400D510,
    (LinkAnimationHeader* )0x0400DBD8,
    (LinkAnimationHeader* )0x0400DBF8,
    (LinkAnimationHeader* )0x0400DBF0,
    (LinkAnimationHeader* )0x0400DBF0,
    (LinkAnimationHeader* )0x0400DBF8,
    (LinkAnimationHeader* )0x0400D518,
    (LinkAnimationHeader* )0x0400DBF8,
    (LinkAnimationHeader* )0x0400DBD0,
    (LinkAnimationHeader* )0x0400DBC8,
    (LinkAnimationHeader* )0x0400DBC8,
    (LinkAnimationHeader* )0x0400DBD0,
    (LinkAnimationHeader* )0x0400DBD0,
    (LinkAnimationHeader* )0x0400DBD0,
    (LinkAnimationHeader* )0x0400DE90,
    (LinkAnimationHeader* )0x0400DE88,
    (LinkAnimationHeader* )0x0400DE88,
    (LinkAnimationHeader* )0x0400D938,
    (LinkAnimationHeader* )0x0400DE90,
    (LinkAnimationHeader* )0x0400DE90,
    (LinkAnimationHeader* )0x0400DE78,
    (LinkAnimationHeader* )0x0400D448,
    (LinkAnimationHeader* )0x0400D448,
    (LinkAnimationHeader* )0x0400D928,
    (LinkAnimationHeader* )0x0400DE78,
    (LinkAnimationHeader* )0x0400DE78,
    (LinkAnimationHeader* )0x0400DE80,
    (LinkAnimationHeader* )0x0400D450,
    (LinkAnimationHeader* )0x0400D450,
    (LinkAnimationHeader* )0x0400D930,
    (LinkAnimationHeader* )0x0400DE80,
    (LinkAnimationHeader* )0x0400DE80,
    (LinkAnimationHeader* )0x0400DA80,
    (LinkAnimationHeader* )0x0400DA78,
    (LinkAnimationHeader* )0x0400DA78,
    (LinkAnimationHeader* )0x0400DA80,
    (LinkAnimationHeader* )0x0400DA80,
    (LinkAnimationHeader* )0x0400DA80,
    (LinkAnimationHeader* )0x0400DF00,
    (LinkAnimationHeader* )0x0400DF00,
    (LinkAnimationHeader* )0x0400DF00,
    (LinkAnimationHeader* )0x0400D968,
    (LinkAnimationHeader* )0x0400D968,
    (LinkAnimationHeader* )0x0400D968,
    (LinkAnimationHeader* )0x0400DF10,
    (LinkAnimationHeader* )0x0400DF10,
    (LinkAnimationHeader* )0x0400DF10,
    (LinkAnimationHeader* )0x0400D978,
    (LinkAnimationHeader* )0x0400D978,
    (LinkAnimationHeader* )0x0400D978,
    (LinkAnimationHeader* )0x0400DEB8,
    (LinkAnimationHeader* )0x0400DEB0,
    (LinkAnimationHeader* )0x0400DEB0,
    (LinkAnimationHeader* )0x0400DEB8,
    (LinkAnimationHeader* )0x0400DEB8,
    (LinkAnimationHeader* )0x0400DEB8,
    (LinkAnimationHeader* )0x0400DE20,
    (LinkAnimationHeader* )0x0400DE18,
    (LinkAnimationHeader* )0x0400DE18,
    (LinkAnimationHeader* )0x0400DE20,
    (LinkAnimationHeader* )0x0400DE20,
    (LinkAnimationHeader* )0x0400DE20,
    (LinkAnimationHeader* )0x0400DB08,
    (LinkAnimationHeader* )0x0400DB08,
    (LinkAnimationHeader* )0x0400DB08,
    (LinkAnimationHeader* )0x0400DB08,
    (LinkAnimationHeader* )0x0400DB08,
    (LinkAnimationHeader* )0x0400DB08,
    (LinkAnimationHeader* )0x0400DB50,
    (LinkAnimationHeader* )0x0400DB38,
    (LinkAnimationHeader* )0x0400DB38,
    (LinkAnimationHeader* )0x0400DB50,
    (LinkAnimationHeader* )0x0400DB50,
    (LinkAnimationHeader* )0x0400DB50,
    (LinkAnimationHeader* )0x0400DB60,
    (LinkAnimationHeader* )0x0400DB58,
    (LinkAnimationHeader* )0x0400DB58,
    (LinkAnimationHeader* )0x0400DB60,
    (LinkAnimationHeader* )0x0400DB60,
    (LinkAnimationHeader* )0x0400DB60,
    (LinkAnimationHeader* )0x0400DB48,
    (LinkAnimationHeader* )0x0400DB40,
    (LinkAnimationHeader* )0x0400DB40,
    (LinkAnimationHeader* )0x0400DB48,
    (LinkAnimationHeader* )0x0400DB48,
    (LinkAnimationHeader* )0x0400DB48,
    (LinkAnimationHeader* )0x0400DDD8,
    (LinkAnimationHeader* )0x0400DDD0,
    (LinkAnimationHeader* )0x0400DDD0,
    (LinkAnimationHeader* )0x0400DDD8,
    (LinkAnimationHeader* )0x0400DDD8,
    (LinkAnimationHeader* )0x0400DDD8,
    (LinkAnimationHeader* )0x0400DDE8,
    (LinkAnimationHeader* )0x0400DDE0,
    (LinkAnimationHeader* )0x0400DDE0,
    (LinkAnimationHeader* )0x0400DDE8,
    (LinkAnimationHeader* )0x0400DDE8,
    (LinkAnimationHeader* )0x0400DDE8,
    (LinkAnimationHeader* )0x0400DDC8,
    (LinkAnimationHeader* )0x0400DDC0,
    (LinkAnimationHeader* )0x0400DDC0,
    (LinkAnimationHeader* )0x0400DDC8,
    (LinkAnimationHeader* )0x0400DDC8,
    (LinkAnimationHeader* )0x0400DDC8,
    (LinkAnimationHeader* )0x0400DC40,
    (LinkAnimationHeader* )0x0400DC38,
    (LinkAnimationHeader* )0x0400DC38,
    (LinkAnimationHeader* )0x0400DC40,
    (LinkAnimationHeader* )0x0400DC40,
    (LinkAnimationHeader* )0x0400DC40,
    (LinkAnimationHeader* )0x0400DCE8,
    (LinkAnimationHeader* )0x0400DCE0,
    (LinkAnimationHeader* )0x0400DCE0,
    (LinkAnimationHeader* )0x0400DCE8,
    (LinkAnimationHeader* )0x0400DCE8,
    (LinkAnimationHeader* )0x0400DCE8,
    (LinkAnimationHeader* )0x0400DD08,
    (LinkAnimationHeader* )0x0400DD00,
    (LinkAnimationHeader* )0x0400DD00,
    (LinkAnimationHeader* )0x0400DD08,
    (LinkAnimationHeader* )0x0400DD08,
    (LinkAnimationHeader* )0x0400DD08,
    (LinkAnimationHeader* )0x0400DCF8,
    (LinkAnimationHeader* )0x0400DCF0,
    (LinkAnimationHeader* )0x0400DCF0,
    (LinkAnimationHeader* )0x0400DCF8,
    (LinkAnimationHeader* )0x0400DCF8,
    (LinkAnimationHeader* )0x0400DCF8,
    (LinkAnimationHeader* )0x0400DC10,
    (LinkAnimationHeader* )0x0400DC08,
    (LinkAnimationHeader* )0x0400DC08,
    (LinkAnimationHeader* )0x0400DC18,
    (LinkAnimationHeader* )0x0400DC10,
    (LinkAnimationHeader* )0x0400DC10,
    (LinkAnimationHeader* )0x0400DED0,
    (LinkAnimationHeader* )0x0400DEC8,
    (LinkAnimationHeader* )0x0400DEC8,
    (LinkAnimationHeader* )0x0400DED8,
    (LinkAnimationHeader* )0x0400DED0,
    (LinkAnimationHeader* )0x0400DED0,
    (LinkAnimationHeader* )0x0400E450,
    (LinkAnimationHeader* )0x0400E108,
    (LinkAnimationHeader* )0x0400E108,
    (LinkAnimationHeader* )0x0400E450,
    (LinkAnimationHeader* )0x0400E450,
    (LinkAnimationHeader* )0x0400E450,
};
ColliderCylinderInit D_8085C2EC = {
    { 5, 0, 0x11, 0x39, 8, 1 },
    { 1, { 0, 0, 0 }, { 0xF7CFFFFF, 0, 0 }, 0, 1, 1 },
    { 0xC, 0x3C, 0, { 0, 0, 0 } },
};
ColliderCylinderInit D_8085C318 = {
    { 9, 9, 0x15, 0, 8, 1 },
    { 2, { 0x100000, 0, 2 }, { 0xD7CFFFFF, 0, 0 }, 0, 1, 1 },
    { 0x19, 0x3C, 0, { 0, 0, 0 } },
};
ColliderQuadInit D_8085C344 = {
    { 0xA, 9, 0, 0, 8, 3 },
    { 2, { 0, 0, 1 }, { 0xF7CFFFFF, 0, 0 }, 1, 0, 0 },
    {
        {
            { 0.0f, 0.0f, 0.0f },
            { 0.0f, 0.0f, 0.0f },
            { 0.0f, 0.0f, 0.0f },
            { 0.0f, 0.0f, 0.0f },
        },
    },
};
ColliderQuadInit D_8085C394 = {
    { 9, 9, 0x15, 0, 8, 3 },
    { 2, { 0x100000, 0, 0 }, { 0xD7CFFFFF, 0, 0 }, 1, 1, 0 },
    {
        {
            { 0.0f, 0.0f, 0.0f },
            { 0.0f, 0.0f, 0.0f },
            { 0.0f, 0.0f, 0.0f },
            { 0.0f, 0.0f, 0.0f },
        },
    },
};
f32 D_8085C3E4 = 1.0f;
f32 D_8085C3E8 = 1.0f;
u16 D_8085C3EC[4] = { 0x680F, 0x680E, 0x6811, 0x6808 };
struct_8085C3F4 D_8085C3F4[0xB9] = {
    { 0x84, 0, 0xB0, -0x3C, 1, 0x3F },
    { 0x85, 1, 0xAF, 2, 1, 0x3F },
    { 0x86, 2, 0xAE, 3, 1, 0x3F },
    { 0x87, 2, 0xAE, 4, 1, 0x3F },
    { 0x88, 0x14, 0xAC, 5, 1, 0x3F },
    { 0x89, 0x14, 0xAB, 6, 1, 0x3F },
    { 0x8A, 0x13, 0xBD, 7, 1, 0x3F },
    { 0x5A, 0xA0, 0x21, 8, 0, 0xA8 },
    { 0x5B, 0xA0, 0x22, 9, 0, 0xA8 },
    { 0x83, 0x80, 9, 0xA, 0, 0x90 },
    { 0x83, 0xA0, 9, 0xB, 0, 0x90 },
    { 0x7B, 0xA0, 0x14, 0xC, 0, 0x96 },
    { 0x6F, 0xA0, 0x13, 0xD, 0, 0x96 },
    { 0x79, 0x6F, -0x1D, 0xE, 0, 0xA4 },
    { 0x7A, 0x6E, -0x1E, 0xF, 0, 0xA4 },
    { 0x83, 0x80, 9, 0x10, 0, 0x90 },
    { -1, 0, 0, 0x11, 0, 0 },
    { 0x83, 0x80, 9, 0x12, 0, 0x90 },
    { 0x83, 0x80, 9, 0x13, 0, 0x90 },
    { 6, 0x59, -0x1F, 0x14, 0, 0xA5 },
    { 0x8F, 0x59, -0x1F, 0x15, 0, 0xA5 },
    { 0x90, 0x59, -0x1F, 0x16, 0, 0xA5 },
    { 0x91, 0x59, -0x1F, 0x17, 0, 0xA5 },
    { 0x92, 0x59, -0x1F, 0x18, 0, 0xA5 },
    { 8, 0xD, -0x1B, 0x19, 0, 0x9F },
    { 0x98, 0xC0, -0x27, 0x1A, 0, 0xB0 },
    { 0x56, 0xA0, 0x18, 0x1B, 0, 0x98 },
    { 0x57, 0xA0, 0x19, 0x1C, 0, 0x98 },
    { 0x58, 0xA0, 0x1A, 0x1D, 0, 0x98 },
    { 0x93, 0x48, -0x24, 0x1E, 0, 0xAF },
    { 0x94, 0x49, -0x25, 0x1F, 0, 0xAF },
    { 0x95, 0x4A, -0x26, 0x20, 0, 0xAF },
    { 0x95, 0x4A, -0x26, 0x21, 0, 0xAF },
    { 1, 0xA0, 0x2F, 0x22, 0, 0xBF },
    { 0x54, 0xA0, 0x16, 0x23, 0, 0x97 },
    { 0x55, 0xA0, 0x17, 0x24, 0, 0x97 },
    { 2, 0xA0, 0x48, 0x25, 1, 0x21 },
    { 3, 0xA0, 0x49, 0x26, 1, 0x21 },
    { 4, 0xA0, 0x4A, 0x27, 1, 0x21 },
    { 9, 0xC, -0x12, 0x28, 0, 0x94 },
    { 0x8D, 0xC, -0x12, 0x29, 0, 0x94 },
    { 0x8E, 0xC, -0x12, 0x2A, 0, 0x94 },
    { 0x9D, 0xA0, -0x12, 0x2B, 0, 0x94 },
    { 0x9D, 0xA0, -0x12, 0x2C, 0, 0x94 },
    { 0x9E, 0xA0, -0x12, 0x2D, 0, 0x94 },
    { 0x97, 0xC0, -0x27, 0x2E, 0, 0xB0 },
    { 0x9B, 0xA0, -0x1B, 0x2F, 0, 0x9F },
    { 0x9B, 0xA0, -0x1B, 0x30, 0, 0x9F },
    { 0x9C, 0xA0, -0x1B, 0x31, 0, 0x9F },
    { 0x51, 0xA0, -0x28, 0x32, 0, 0xB3 },
    { 0x52, 0xA0, 0x34, 0x33, 0, -0x3D },
    { 0xC, 0x80, 0x5E, 0x34, 1, -0x36 },
    { 0xA, 0x80, -0x35, 0x35, 0, -0x3A },
    { 0x99, 0xC0, -0x27, 0x36, 0, 0xB0 },
    { 0x4D, 0xA0, 0x56, 0x37, 1, 0x48 },
    { 0x4E, 0xA0, 0x67, 0x38, 1, -7 },
    { 0x4F, 0xA0, 0x68, 0x39, 1, -6 },
    { 0x9A, 0xC0, -0x27, 0x3A, 0, 0xB0 },
    { 0x10, 0xA0, 0x69, 0x3B, 1, -5 },
    { 0x78, 0xA0, -2, 0x3C, 0, 0x86 },
    { 0x74, 0xA0, 0xA, 0x3D, 0, 0x92 },
    { 0x76, 0xA0, 0x1C, 0x3E, 0, 0xA0 },
    { 0x75, 0xA0, 0xB, 0x3F, 0, 0x91 },
    { -1, 0, 0, 0x40, 0, 0 },
    { 0xF, 0xA0, 0x29, 0x41, 0, 0xB4 },
    { 0xE, 0xA0, 0x30, 0x42, 0, 0xC0 },
    { 0xD, 0xA0, 0x75, 0x43, 2, 0x28 },
    { 0xD, 0, 0, 0x44, 0, 0 },
    { 0x83, 0x80, 9, 0x45, 0, 0x90 },
    { -1, 0, 0, 0x46, 0, 0 },
    { -1, 0, 0, 0x47, 0, 0 },
    { -1, 0, 0, 0x48, 0, 0 },
    { -1, 0, 0, 0x49, 0, 0 },
    { -1, 0, 0, 0x4A, 0, 0 },
    { -1, 0, 0, 0x4B, 0, 0 },
    { 0, 0xA0, 0x2B, 0x4C, 0, 0xB5 },
    { -1, 0, 0, 0x4D, 0, 0 },
    { -1, 0, 0, 0x4E, 0, 0 },
    { -1, 0, 0, 0x4F, 0, 0 },
    { 0x6D, 0x80, 0xC, 0x50, 2, 0x53 },
    { -1, 0xA0, 0x20, 0x51, 0, 0xA0 },
    { 0x6E, 0x80, 0xB5, 0x52, 1, 0x25 },
    { -1, 0, 0, 0x53, 0, 0 },
    { -1, 0, 0, 0x54, 0, 0 },
    { 0x5D, 0x80, 0x5D, 0x55, 0, 0 },
    { 0x5E, 0x80, 0x64, 0x56, 0, 0 },
    { 0x5F, 0x80, 0x65, 0x57, 0, 0 },
    { 0x60, 0x80, 0x66, 0x58, 0, 0 },
    { 0x11, 0x80, 0x58, 0x59, 1, 0x96 },
    { 0x12, 0x80, 1, 0x5A, 0, 0x9E },
    { 0x13, 0x80, 0x32, 0x5B, 0, -0x3F },
    { 0x14, 0x80, 0x31, 0x5C, 0, -0x3F },
    { 0x15, 0x80, 0x33, 0x5D, 0, -0x3F },
    { 0x16, 0x80, 0x3C, 0x5E, 2, 0x72 },
    { 0x16, 0x80, 1, 0x5F, 0, 0x9E },
    { 0x18, 0x80, 0x2C, 0x60, 0, 0xB6 },
    { 0x19, 0x80, 0x2C, 0x61, 0, 0xB6 },
    { 0x1A, 0x80, 0x36, 0x62, 0, -0x39 },
    { 0x1B, 0x80, 0x4C, 0x63, 1, 0x37 },
    { 0x1C, 0, 0, 0x64, 0, 0 },
    { 0x12, 0x80, 1, 0x65, 0, 0x9E },
    { 0x1E, 0x80, 0x53, 0x66, 1, 0x39 },
    { 0x1F, 0, 0, 0x67, 0, 0 },
    { 0x20, 0, 0, 0x68, 0, 0 },
    { 0x21, 0x80, 0x59, 0x69, 1, 0xAE },
    { 0x22, 0x80, 0x60, 0x6A, 1, -0x17 },
    { 0x23, 0x80, 0x70, 0x6B, 2, 0x1D },
    { -1, 0, 0, 0x6C, 0, 0 },
    { 0x12, 0x80, 1, 0x6D, 0, 0x9E },
    { 0x24, 0x80, 0x60, 0x6E, 1, -0x17 },
    { 0x25, 0x80, 0x74, 0x6F, 2, 0x27 },
    { 0x12, 0x80, 1, 0x70, 0, 0x9E },
    { -1, 0, 0, 0x71, 0, 0 },
    { -1, 0, 0, 0x72, 0, 0 },
    { -1, 0, 0, 0x73, 0, 0 },
    { -1, 0, 0, 0x74, 0, 0 },
    { -1, 0, 0, 0x75, 0, 0 },
    { -1, 0, 0, 0x76, 0, 0 },
    { -1, 0, 0, 0x77, 0, 0 },
    { 0x32, 0xA0, 0x5C, 0x78, 1, 0xBD },
    { 0x33, 0xA0, 0x45, 0x79, 1, 0x19 },
    { 0x34, 0xA0, 0x46, 0x7A, 1, 0x1A },
    { 0x35, 0xA0, 0x76, 0x7B, 2, 0x42 },
    { 0x44, 0xA0, 0x3E, 0x7C, 1, 2 },
    { 0x49, 0xA0, 0x73, 0x7D, 2, 0x26 },
    { 0x38, 0xA0, 0x11, 0x7E, 2, 0x65 },
    { 0x39, 0xA0, 0x3F, 0x7F, 1, 3 },
    { 0x3A, 0xA0, 0x2D, 0x80, 1, 0 },
    { 0x3B, 0xA0, 0x6A, 0x81, 2, 9 },
    { 0x3C, 0xA0, 0x71, 0x82, 2, 0x1F },
    { 0x3D, 0xA0, 0xF, 0x83, 2, 0x59 },
    { 0x3E, 0xA0, 0x72, 0x84, 2, 0x25 },
    { 0x3F, 0xA0, 4, 0x85, 2, 0x82 },
    { 0x40, 0xA0, 0x6B, 0x86, 2, 0xA },
    { 0x41, 0xA0, 0x6C, 0x87, 2, 0xB },
    { 0x42, 0xA0, 0x23, 0x88, 2, 0x66 },
    { 0x43, 0xA0, 3, 0x89, 2, 0x7D },
    { 0x36, 0xA0, 0x40, 0x8A, 1, 4 },
    { 0x45, 0xA0, 0xD, 0x8B, 2, 0x54 },
    { 0x46, 0xA0, 0x10, 0x8C, 2, 0x5A },
    { 0x47, 0xA0, 0x3B, 0x8D, 2, 0x6D },
    { 0x48, 0xA0, 0x3D, 0x8E, 2, 0x7E },
    { 0x37, 0xA0, 0xE, 0x8F, 2, 0x58 },
    { -1, 0, 0, 0x90, 0, 0 },
    { 0x9F, 0x80, 0x74, 0x91, 2, 0x27 },
    { 0xA0, 0x80, 0x2C, 0x92, 0, 0xB6 },
    { 0xA1, 0x80, 0x5F, 0x93, 1, -0x18 },
    { 0xA2, 0x80, 0x62, 0x94, 1, -0x11 },
    { 0xA3, 0x80, 0x63, 0x95, 1, -0x10 },
    { 0x28, 0x80, 0x5A, 0x96, 1, 0xB1 },
    { 0x29, 0x80, 0x5B, 0x97, 1, 0xB2 },
    { 0x2A, 0x80, 0x41, 0x98, 1, 0xB2 },
    { 0x2B, 0x80, 0x42, 0x99, 1, 0xB2 },
    { 0x2C, 0x80, 0x44, 0x9A, 1, 0xB2 },
    { 0x10, 0xA0, 0x69, 0x9B, 1, -5 },
    { 0x4D, 0xA0, 0x56, 0x9C, 1, 0x48 },
    { 0x4E, 0xA0, 0x67, 0x9D, 1, -7 },
    { 0x4F, 0xA0, 0x68, 0x9E, 1, -6 },
    { 0x51, 0xA0, -0x28, 0x9F, 0, 0xB3 },
    { 0x2D, 0x80, 0x6D, 0xA0, 2, 0xF },
    { 0x2E, 0x80, 0x37, 0xA1, 2, 0x45 },
    { -1, 0, 0, 0xA2, 0, 0 },
    { -1, 0, 0, 0xA3, 0, 0 },
    { -1, 0x80, 0x2D, 0xA4, 1, 0 },
    { -1, 0, 0, 0xA5, 0, 0 },
    { -1, 0, 0, 0xA6, 0, 0 },
    { -1, 0, 0, 0xA7, 0, 0 },
    { -1, 0, 0, 0xA8, 0, 0 },
    { 0x12, 0x80, 1, 0xA9, 0, 0x9E },
    { 0x2F, 0x80, 0x6E, 0xAA, 2, 0x10 },
    { 0x30, 0x80, 0x6F, 0xAB, 2, 0x15 },
    { -1, 0, 0, 0xAC, 0, 0 },
    { -1, 0, 0, 0xAD, 0, 0 },
    { -1, 0, 0, 0xAE, 0, 0 },
    { -1, 0, 0, 0xAF, 0, 0 },
    { -1, 0, 0, 0xB0, 0, 0 },
    { -1, 0, 0, 0xB1, 0, 0 },
    { -1, 0, 0, 0xB2, 0, 0 },
    { -1, 0x80, 0x3A, 0xB3, 2, 0x6B },
    { 0x31, 0xA0, 0x2E, 0xB4, 2, 0x4D },
    { 0x31, 0xA0, 0x2E, 0xB5, 2, 0x4D },
    { 0x31, 0xA0, 0x2E, 0xB6, 2, 0x4D },
    { 0x31, 0xA0, 0x2E, 0xB7, 2, 0x4D },
    { 0x31, 0xA0, 0x2E, 0xB8, 2, 0x4D },
    { 0x31, 0xA0, 0x2E, 0xB9, 2, 0x4D },
};
u8 D_8085C96C[0x20] = {
    0,
    0,
    1,
    1,
    2,
    2,
    2,
    2,
    0xA,
    0xA,
    0xA,
    0xA,
    0xA,
    0xA,
    3,
    3,
    4,
    4,
    8,
    8,
    5,
    5,
    6,
    6,
    7,
    7,
    9,
    9,
    0xB,
    0xB,
    0,
    0,
};
struct_8082F02C_arg1 D_8085C98C = { { 0, 0, 0 }, { 0xFF, 0xFF, 0x9B }, { 0x14, 0x14, 0x32 }, 0x3AC, 0x1388 };
s8 D_8085C99C[0x54] = {
    0x14,
    9,
    0xA,
    0xB,
    0xC,
    0x13,
    0xE,
    0x10,
    7,
    0x12,
    0x2E,
    0x13,
    0xF,
    0x13,
    0x52,
    0xD,
    6,
    0x13,
    0x15,
    0x23,
    0x25,
    0x24,
    0x29,
    0x1A,
    0x26,
    0x27,
    0x16,
    0x20,
    0x20,
    0x21,
    0x22,
    0x17,
    0x18,
    0x19,
    0x1B,
    0x1E,
    0x1D,
    0x28,
    0x1F,
    0x21,
    0x2A,
    0x2B,
    0x2F,
    0x30,
    0x31,
    0x2C,
    0x33,
    0x2D,
    0x36,
    0x38,
    0x51,
    0x4F,
    0x50,
    0x4E,
    0x3A,
    0x3B,
    0x3C,
    0x3D,
    0x3E,
    0x3F,
    0x40,
    0x41,
    0x42,
    0x43,
    0x44,
    0x45,
    0x46,
    0x47,
    0x48,
    0x49,
    0x4A,
    0x4B,
    0x4C,
    0x4D,
    0xA,
    0xB,
    0xC,
    3,
    4,
    5,
    6,
    0,
    0,
    0,
};
s32 (*D_8085C9F0[0x53])(Player*, PlayState*) = {
    func_80848780,
    func_80848780,
    func_80848780,
    func_808487B8,
    func_808487B8,
    func_808487B8,
    func_808487B8,
    func_80848780,
    func_80848780,
    func_80848B6C,
    func_80848B6C,
    func_80848B6C,
    func_80848B6C,
    func_80848B6C,
    func_808490B4,
    func_808490B4,
    func_808490B4,
    func_808491B4,
    func_80848B6C,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
    func_80848780,
};
void (*D_8085CB3C[0x53])(PlayState*, Player*) = {
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F5A4,
    func_8082F8A0,
    func_8082F5C0,
    func_8082F5C0,
    func_8082F5C0,
    func_8082F5C0,
    func_8082F7F4,
    func_8082F62C,
    func_8082F62C,
    func_8082F62C,
    func_8082F8A0,
    func_8082F5C0,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
    func_8082F594,
};
struct_8085CD24 D_8085CD24[3] = { { 6, 9 }, { 0xC, 9 }, { 7, 0x6A } };
u16 D_8085CFA8[4];                                  /* unable to generate initializer */
u16 D_8085CFAE[5] = { 1, 0x860, 0, 0x1827, 0 };
LinkAnimationHeader* D_8085D160[5] = {
    (LinkAnimationHeader* )0x0400E400,
    (LinkAnimationHeader* )0x0400E210,
    (LinkAnimationHeader* )0x0400E400,
    (LinkAnimationHeader* )0x0400E2E0,
    (LinkAnimationHeader* )0x0400D0C8,
};
u8 D_8085D174[8] = { 0x64, 0xC8, 0x50, 0x14, 0x32, 0, 0, 0 };
InitChainEntry D_8085D2C0[1];                       /* unable to generate initializer */
Vec3s D_8085D2C4 = { -0x39, 0xD31, 0 };
void (*D_8085D2CC[0x10])(PlayState*, Player*, s32) = {
    func_808412A0,
    func_80841408,
    func_808412BC,
    func_808414E0,
    ((void (*)(PlayState*, Player*, s32)) func_80841528),
    func_808415E4,
    func_80841624,
    func_808415A0,
    func_80841744,
    func_80841744,
    func_8083ADF0,
    func_8083AD8C,
    func_8083AD04,
    func_8083ADB8,
    func_8083ADF0,
    func_8083AE38,
};
s32 D_8085D30C = 0;
s32 D_8085D330 = 0x3F;
Vec3f D_8085D340 = { 0.0f, 50.0f, 0.0f };
f32 D_8085D35C = 0.0f;
f32 D_8085D360 = 0.0f;
Vec3f D_8085D364 = { 0.0f, 0.5f, 0.0f };
Vec3f D_8085D370 = { 0.0f, 0.5f, 0.0f };
Color_RGBA8 D_8085D37C = { 0xFF, 0xFF, 0x64, 0xFF };
Color_RGBA8 D_8085D380 = { 0xFF, 0x32, 0, 0 };
s32 D_8085D384 = 0x20204;
f32 D_8085D3E0[5] = { 0.8f, 0.6f, 0.8f, 1.5f, 1.0f };
Color_RGBA8 D_8085D3F4 = { 0x64, 0xFF, 0xFF, 0 };
Color_RGBA8 D_8085D3F8 = { 0, 0x64, 0x64, 0 };
f32 D_8085D3FC[2] = { 0.005f, 0.05f };
f32 D_8085D404[3] = { 2.0f, 4.0f, 11.0f };
f32 D_8085D410[3] = { 0.5f, 1.0f, 3.0f };
Vec3f D_8085D41C = { 0.0f, 0.0f, -30.0f };
struct_80124618 D_8085D510[2] = { { 0, { 0, 0x32, 0 } }, { 1, { 0, 0x32, 0 } } };
struct_80124618 D_8085D520[2] = { { 0, { 0x64, 0x78, 0x64 } }, { 1, { 0x64, 0x78, 0x64 } } };
struct_80124618 D_8085D530[2] = { { 0, { 0xA0, 0x78, 0xA0 } }, { 1, { 0xA0, 0x78, 0xA0 } } };
struct_80124618 D_8085D540[2] = { { 0, { 0, 0, 0 } }, { 2, { 0x64, 0x64, 0x64 } } };
struct_80124618* D_8085D550[3] = { D_8085D488, D_8085D4B0, D_8085D4E0 };
struct_80124618* D_8085D55C[3] = { D_8085D428, D_8085D450, D_8085D478 };
struct_80124618* D_8085D568[3] = { D_8085D510, D_8085D520, D_8085D530 };
Gfx* D_8085D574[3] = { (Gfx* )0x06009C48, (Gfx* )0x06009AB8, (Gfx* )0x06009DB8 };
Color_RGB8 D_8085D580 = { 0xFF, 0xFF, 0xFF };
Color_RGB8 D_8085D584 = { 0x50, 0x50, 0xC8 };
Vec3f D_80862AF0;
f32 D_80862AF4;
f32 D_80862AF8;
f32 D_80862AFC;
s16 D_80862B00;
s16 D_80862B02;
s32 D_80862B04;
u32 D_80862B08;
s32 D_80862B0C;
u32 D_80862B10;
s16 D_80862B14;
s16 D_80862B16;
f32 D_80862B18;
s32 D_80862B1C;
s32 D_80862B20;
s32 D_80862B24;
s16 D_80862B28;
s32 D_80862B2C;
Vec3f D_80862B30;
f32 D_80862B3C;
u32 D_80862B40;
Input* D_80862B44;
s32 D_80862B48;
s32 D_80862B4C;
s32 D_80862B50;
s32 D_80862B6C;

s32 func_8082DA90(PlayState* play) {
    s32 var_v0;

    var_v0 = play->sceneLoadFlag != 0;
    if (var_v0 == 0) {
        var_v0 = play->unk_18B4A != 0;
    }
    return var_v0;
}

void func_8082DABC(Player* this) {
    this->linearVelocity = 0.0f;
    this->actor.speedXZ = 0.0f;
}

void func_8082DAD4(Player* this) {
    func_8082DABC(this);
    this->unk_AA5 = 0;
}

s32 func_8082DAFC(PlayState* play) {
    return (play->actorCtx.actorLists[2].first->flags & 0x100) == 0x100;
}

void func_8082DB18(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_PlayOnce(play, &this->skelAnime, anim);
}

void func_8082DB3C(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_PlayLoop(play, &this->skelAnime, anim);
}

void func_8082DB60(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_PlayLoopSetSpeed(play, &this->skelAnime, anim, 0.6666667f);
}

void func_8082DB90(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_PlayOnceSetSpeed(play, &this->skelAnime, anim, 0.6666667f);
}

void func_8082DBC0(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_Change(play, &this->skelAnime, anim, -0.6666667f, (f32) Animation_GetLastFrame(anim), 0.0f, (u8) 2, 0.0f);
}

void func_8082DC28(Player* this) {
    this->skelAnime.jointTable->unk_8 = 0;
}

void func_8082DC38(Player* this) {
    this->stateFlags2 &= 0xFFFDFFFF;
    this->meleeWeaponState = 0;
    this->meleeWeaponInfo[2].active = 0;
    this->meleeWeaponInfo[1].active = 0;
    this->meleeWeaponInfo[0].active = 0;
}

void func_8082DC64(PlayState* play, Player* this) {
    s16 temp_v0;

    temp_v0 = this->unk_3BC;
    if ((temp_v0 != -1) && (play->cameraPtrs[temp_v0] != NULL)) {
        this->unk_3BC = -1;
    }
    this->stateFlags2 &= ~0xC00;
}

void func_8082DCA0(PlayState* play, Player* this) {
    Actor* sp24;
    Actor* temp_v1;

    temp_v1 = this->heldActor;
    if (temp_v1 != NULL) {
        sp24 = temp_v1;
        if (Player_IsHoldingHookshot(this) == 0) {
            this->actor.child = NULL;
            this->heldActor = NULL;
            this->interactRangeActor = NULL;
            temp_v1->parent = NULL;
            this->stateFlags1 &= ~0x800;
        }
    }
    if (Player_GetExplosiveHeld(this) >= 0) {
        func_8082F8BC(play, this, PLAYER_AP_NONE);
        this->heldItemId = 0xFE;
    }
}

void func_8082DD2C(PlayState* play, Player* arg1) {
    u32 temp_v0;

    temp_v0 = arg1->stateFlags1;
    if ((temp_v0 & 0x800) && (arg1->heldActor == NULL)) {
        if (arg1->interactRangeActor != NULL) {
            if (arg1->getItemId == 0) {
                arg1->stateFlags1 = temp_v0 & ~0x800;
                arg1->interactRangeActor = NULL;
            }
        } else {
            arg1->stateFlags1 = temp_v0 & ~0x800;
        }
    }
    func_8082DC38(arg1);
    arg1->unk_AA5 = 0;
    func_8082DC64(play, arg1);
    func_800E0238(Play_GetCamera(play, 0));
    arg1->stateFlags1 &= 0xFFCF9FFB;
    arg1->stateFlags2 &= ~0x90;
    arg1->unk_ADD = 0;
    arg1->unk_ADC = 0;
    arg1->actor.shape.rot.x = 0;
    arg1->actor.shape.rot.z = 0;
    arg1->unk_ABC = 0.0f;
    arg1->unk_AC0 = 0.0f;
}

s32 func_8082DE14(PlayState* play, Player* this) {
    s32 var_v0;

    var_v0 = 0;
    if (this->itemActionParam >= 2) {
        func_80831990(play, this, ITEM_NONE);
        var_v0 = 1;
    }
    return var_v0;
}

void func_8082DE50(PlayState* play, Player* this) {
    func_8082DD2C(play, this);
    func_8082DCA0(play, this);
}

s32 func_8082DE88(Player* arg0, s32 arg1, s32 arg2) {
    f32 temp_fv0;
    s16 temp_v0;
    s16 var_v1;

    temp_v0 = arg0->unk_D64 - D_80862B00;
    temp_fv0 = fabsf(D_80862AFC);
    if (temp_v0 < 0) {
        var_v1 = -temp_v0;
    } else {
        var_v1 = temp_v0;
    }
    arg0->unk_AE8 = arg0->unk_AE8 + arg1 + (s32) ((f32) var_v1 * temp_fv0 * 0.0000025415802f);
    if (D_80862B44->press.button & 0xC000) {
        arg0->unk_AE8 += 5;
    }
    return (arg0->unk_AE8 < arg2) ^ 1;
}

void func_8082DF2C(PlayState* play) {
    if (play->actorCtx.freezeFlashTimer == 0) {
        play->actorCtx.freezeFlashTimer = 1;
    }
}

void func_8082DF48(PlayState* play, Player* this, u8 sourceIntensity, u8 decayTimer, u8 decayStep, s32 distSq) {
    if (this == play->actorCtx.actorLists[2].first) {
        Rumble_Request((f32) distSq, sourceIntensity, decayTimer, decayStep);
    }
}

void func_8082DF8C(Player* this, u16 arg1) {
    s32 temp_a3;
    u16 var_v0;
    u8 temp_v0;

    temp_a3 = arg1 & 0xFFFF;
    temp_v0 = this->currentMask;
    if (temp_v0 == 0x14) {
        func_8019F830(&this->actor.projectedPos, temp_a3 & 0xFFFF);
        return;
    }
    if (this->actor.id == 0) {
        if (temp_v0 == 0x13) {
            var_v0 = 0xE0;
        } else {
            var_v0 = this->ageProperties->unk_92;
        }
        func_800B8E58(this, (var_v0 + temp_a3) & 0xFFFF);
    }
}

void func_8082E00C(Player* this) {
    s32 var_s1;
    u16* var_s0;

    var_s0 = D_8085C3EC;
    var_s1 = 0;
    do {
        func_801A75E8((*var_s0 + this->ageProperties->unk_92) & 0xFFFF);
        var_s1 += 1;
        var_s0 += 2;
    } while (var_s1 != 4);
}

u16 func_8082E078(Player* this, u16 arg1) {
    return ((arg1 & 0xFFFF) + this->unk_B72) & 0xFFFF;
}

void func_8082E094(Player* this, u16 arg1) {
    func_800B8E58(this, func_8082E078(this, arg1 & 0xFFFF) & 0xFFFF);
}

u16 func_8082E0CC(Player* arg0, u16 arg1) {
    return ((arg1 & 0xFFFF) + arg0->unk_B72 + arg0->ageProperties->unk_94) & 0xFFFF;
}

void func_8082E0F4(Player* arg0, u16 arg1) {
    func_800B8E58(arg0, func_8082E0CC(arg0, arg1 & 0xFFFF) & 0xFFFF);
}

void func_8082E12C(Player* this, f32 arg1) {
    u16 var_v1;

    if (this->currentMask == 0x14) {
        var_v1 = 0x8CE;
    } else {
        var_v1 = func_8082E0CC(this, 0x800U);
    }
    func_8019F638(&this->actor.projectedPos, var_v1 & 0xFFFF, arg1);
}

void func_8082E188(Player* this) {
    func_800B8E58(this, func_8082E0CC(this, 0x810U) & 0xFFFF);
}

void func_8082E1BC(Player* this) {
    func_800B8E58(this, func_8082E0CC(this, 0x820U) & 0xFFFF);
}

void func_8082E1F0(Player* this, u16 sfxId) {
    func_800B8E58(this, sfxId & 0xFFFF);
    this->stateFlags2 |= 8;
}

void func_8082E224(Player* arg0, struct_8082E224_arg1* arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 var_s0;
    s32 temp_v0_3;
    struct_8082E224_arg1* var_s2;

    var_s2 = arg1;
    do {
        temp_v0_2 = var_s2->unk_2;
        var_s0 = temp_v0_2;
        if (temp_v0_2 < 0) {
            var_s0 = -temp_v0_2;
        }
        temp_v0_3 = var_s0 & 0x7800;
        if (LinkAnimation_OnFrame(&arg0->skelAnime, fabsf((f32) (var_s0 & 0x7FF))) != 0) {
            if (temp_v0_3 == 0x800) {
                func_800B8E58(arg0, var_s2->unk_0);
            } else if (temp_v0_3 == 0x1000) {
                func_8082E094(arg0, var_s2->unk_0);
            } else if (temp_v0_3 == 0x1800) {
                func_8082E0F4(arg0, var_s2->unk_0);
            } else if (temp_v0_3 == 0x2000) {
                func_8082DF8C(arg0, var_s2->unk_0);
            } else if (temp_v0_3 == 0x2800) {
                func_8082E1BC(arg0);
            } else if (temp_v0_3 == 0x3000) {
                func_8082E12C(arg0, 6.0f);
            } else if (temp_v0_3 == 0x3800) {
                func_8082E188(arg0);
            } else if (temp_v0_3 == 0x4000) {
                func_8082E12C(arg0, 0.0f);
            } else if (temp_v0_3 == 0x4800) {
                func_8019F638(&arg0->actor.projectedPos, (arg0->ageProperties->unk_94 + 0x80A) & 0xFFFF, 0.0f);
            } else if (temp_v0_3 == 0x5000) {
                func_800B8E58(arg0, (var_s2->unk_0 + arg0->ageProperties->unk_94) & 0xFFFF);
            }
        }
        temp_v0 = var_s2->unk_2;
        var_s2 += 4;
    } while (((temp_v0 < 0) ^ 1) != 0);
}

void func_8082E438(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_Change(play, &this->skelAnime, anim, 1.0f, 0.0f, (f32) Animation_GetLastFrame(anim), (u8) 2, -6.0f);
}

void func_8082E4A4(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_Change(play, &this->skelAnime, anim, 0.6666667f, 0.0f, (f32) Animation_GetLastFrame(anim), (u8) 2, -6.0f);
}

void func_8082E514(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_Change(play, &this->skelAnime, anim, 1.0f, 0.0f, 0.0f, (u8) 0, -6.0f);
}

void func_8082E55C(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_Change(play, &this->skelAnime, anim, 0.6666667f, 0.0f, 0.0f, (u8) 0, -6.0f);
}

void func_8082E5A8(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_Change(play, &this->skelAnime, anim, 1.0f, 0.0f, 0.0f, (u8) 2, 0.0f);
}

void func_8082E5EC(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_Change(play, &this->skelAnime, anim, 0.6666667f, 0.0f, 0.0f, (u8) 2, 0.0f);
}

void func_8082E634(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_Change(play, &this->skelAnime, anim, 1.0f, 0.0f, 0.0f, (u8) 0, -16.0f);
}

s32 func_8082E67C(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    if (LinkAnimation_Update(play, &this->skelAnime) != 0) {
        func_8082DB3C(play, this, anim);
        return 1;
    }
    return 0;
}

void func_8082E6D0(Player* this) {
    this->unk_278 = (unaligned s32) this->unk_27E;
    this->skelAnime.prevRot = this->actor.shape.rot.y;
    this->skelAnime.prevTransl.z = (s16) (u16) this->skelAnime.baseTransl.z;
}

void func_8082E6F8(Player* this) {
    PlayerAgeProperties* temp_v0;

    func_8082E6D0(this);
    temp_v0 = this->ageProperties;
    this->skelAnime.prevTransl.x = (s16) (s32) ((f32) this->skelAnime.prevTransl.x * temp_v0->unk_08);
    this->skelAnime.prevTransl.y = (s16) (s32) ((f32) this->skelAnime.prevTransl.y * temp_v0->unk_08);
    this->skelAnime.prevTransl.z = (s16) (s32) ((f32) this->skelAnime.prevTransl.z * temp_v0->unk_08);
}

void func_8082E784(Player* this) {
    this->skelAnime.jointTable->unk_8 = 0;
}

void func_8082E794(Player* this) {
    u8 temp_v0;

    if (this->skelAnime.moveFlags != 0) {
        func_8082DC28(this);
        this->skelAnime.jointTable->x = this->skelAnime.baseTransl.x;
        this->skelAnime.jointTable->z = this->skelAnime.baseTransl.z;
        temp_v0 = this->skelAnime.moveFlags;
        if (temp_v0 & 8) {
            if (temp_v0 & 2) {
                this->skelAnime.jointTable->y = this->skelAnime.prevTransl.y;
            }
        } else {
            this->skelAnime.jointTable->y = this->skelAnime.baseTransl.y;
        }
        func_8082E6D0(this);
        this->skelAnime.moveFlags = 0;
    }
}

void func_8082E820(Player* this, s32 arg1) {
    Vec3f sp1C;
    f32 temp_ft2;
    f32 temp_ft5;

    this->unk_278 = (unaligned s32) this->unk_27E;
    this->skelAnime.moveFlags = (u8) arg1;
    this->skelAnime.prevTransl.z = (s16) (u16) this->skelAnime.baseTransl.z;
    SkelAnime_UpdateTranslation(&this->skelAnime, &sp1C, this->actor.shape.rot.y);
    if (arg1 & 1) {
        temp_ft2 = (bitwise f32) sp1C * this->ageProperties->unk_08;
        sp1C = temp_ft2;
        temp_ft5 = sp1C.z * this->ageProperties->unk_08;
        sp1C.z = temp_ft5;
        this->actor.world.pos.x += temp_ft2 * this->actor.scale.x;
        this->actor.world.pos.z += temp_ft5 * this->actor.scale.z;
    }
    if (arg1 & 2) {
        if (!(arg1 & 4)) {
            sp1C.y *= this->ageProperties->unk_08;
        }
        this->actor.world.pos.y += sp1C.y * this->actor.scale.y;
    }
    func_8082DC28(this);
}

void func_8082E920(PlayState* play, Player* this, s32 arg2) {
    Vec3s* temp_t9;

    if (arg2 & 0x200) {
        func_8082E6F8(this);
    } else if ((arg2 & 0x100) || (this->skelAnime.moveFlags != 0)) {
        func_8082E6D0(this);
    } else {
        temp_t9 = this->skelAnime.jointTable;
        this->unk_278 = (unaligned s32) temp_t9->unk_0;
        this->skelAnime.prevRot = this->actor.shape.rot.y;
        this->skelAnime.prevTransl.z = (s16) (u16) temp_t9->z;
    }
    this->skelAnime.moveFlags = (u8) arg2;
    func_8082DABC(this);
    AnimationContext_DisableQueue(play);
}

void func_8082E9C8(PlayState* play, Player* this, LinkAnimationHeader* anim, s32 arg3, f32 playSpeed) {
    LinkAnimation_PlayOnceSetSpeed(play, &this->skelAnime, anim, playSpeed);
    func_8082E920(play, this, arg3);
}

void func_8082EA10(PlayState* play, Player* this, LinkAnimationHeader* anim, s32 arg3) {
    func_8082E9C8(play, this, anim, arg3, 1.0f);
}

void func_8082EA38(PlayState* play, Player* this, LinkAnimationHeader* anim, s32 arg3) {
    func_8082E9C8(play, this, anim, arg3, 0.6666667f);
}

void func_8082EA60(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    func_8082EA38(play, this, anim, 0x20C);
}

void func_8082EA80(PlayState* play, Player* this, LinkAnimationHeader* anim, s32 arg3, f32 playSpeed) {
    LinkAnimation_PlayLoopSetSpeed(play, &this->skelAnime, anim, playSpeed);
    func_8082E920(play, this, arg3);
}

void func_8082EAC8(PlayState* play, Player* this, LinkAnimationHeader* anim, s32 arg3) {
    func_8082EA80(play, this, anim, arg3, 1.0f);
}

void func_8082EAF0(PlayState* play, Player* this, LinkAnimationHeader* anim, s32 arg3) {
    func_8082EA80(play, this, anim, arg3, 0.6666667f);
}

void func_8082EB18(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    func_8082EAF0(play, this, anim, 0x1C);
}

void func_8082EB38(PlayState* play, Player* this) {
    s8 var_v0;
    s8 var_v1;

    this->unk_D60 = D_80862AFC;
    this->unk_D64 = D_80862B00;
    func_800FF3A0(&D_80862AFC, &D_80862B00, D_80862B44);
    if (D_80862AFC < 8.0f) {
        D_80862AFC = 0.0f;
    }
    D_80862B02 = Camera_GetInputDirYaw(play->cameraPtrs[play->activeCamId]) + D_80862B00;
    this->unk_ADE = (u8) ((s32) (this->unk_ADE + 1) % 4);
    var_v0 = -1;
    if (D_80862AFC < 55.0f) {
        var_v1 = -1;
    } else {
        var_v1 = (s8) ((s32) ((D_80862B00 + 0x2000) & 0xFFFF) >> 9);
        var_v0 = (s8) ((s32) (((s16) (D_80862B02 - this->actor.shape.rot.y) + 0x2000) & 0xFFFF) >> 0xE);
    }
    this->unk_ADF[this->unk_ADE] = var_v1;
    this->unk_AE3[this->unk_ADE] = var_v0;
}

void func_8082EC9C(PlayState* play, Player* this, LinkAnimationHeader* anim) {
    LinkAnimation_PlayOnceSetSpeed(play, &this->skelAnime, anim, D_8085C3E4);
}

s32 func_8082ECCC(Player* this) {
    return this->stateFlags1 & 0x01000000;
}

void func_8082ECE0(Player* this) {
    s8 temp_v1;

    temp_v1 = ((this->getItemId * 6) - 6 + D_8085C3F4)->unk_2;
    if (temp_v1 < 0) {
        this->unk_B2A = -temp_v1;
        return;
    }
    this->unk_B2A = temp_v1;
}

LinkAnimationHeader* func_8082ED20(Player* this) {
    u8 temp_v0;

    temp_v0 = this->transformation;
    if ((temp_v0 == 2) || (this->actor.id != 0)) {
        return &D_0400E410;
    }
    if (temp_v0 == 1) {
        return &D_0400E260;
    }
    if (this->currentMask == 0x13) {
        return &D_0400D0B0;
    }
    return D_8085BE84[this->modelAnimType];
}

s32 func_8082ED94(Player* arg0) {
    s32 var_v1;
    s32* temp_v0;
    s32* temp_v0_2;
    s32* temp_v0_3;
    s32* var_v0;
    void* temp_a1;
    void* temp_a1_2;

    temp_a1 = arg0->skelAnime.animation;
    if ((&D_0400DD58 != temp_a1) && (&D_0400DD68 != temp_a1) && ((temp_a1_2 = arg0->skelAnime.animation, (func_8082ED20(arg0) != temp_a1_2)) || (&D_0400D0B0 == temp_a1_2))) {
        temp_v0 = D_8085C84C + 4;
        if (temp_a1_2 == *D_8085C84C) {
            return 1;
        }
        var_v0 = temp_v0 + 4;
        var_v1 = 2;
        if (temp_a1_2 == *temp_v0) {
            return 2;
        }
loop_8:
        if (temp_a1_2 == var_v0->unk_0) {
            return var_v1 + 1;
        }
        temp_v0_2 = var_v0 + 4;
        if (temp_a1_2 == var_v0->unk_4) {
            return var_v1 + 2;
        }
        temp_v0_3 = temp_v0_2 + 4;
        if (temp_a1_2 == temp_v0_2->unk_4) {
            return var_v1 + 3;
        }
        if (temp_a1_2 == temp_v0_3->unk_4) {
            return var_v1 + 4;
        }
        var_v1 += 4;
        var_v0 = temp_v0_3 + 4 + 4;
        if (var_v1 == 0x1E) {
            return 0;
        }
        goto loop_8;
    }
    return -1;
}

void func_8082EEA4(Player* this, s32 arg1) {
    u8 temp_v0;

    temp_v0 = D_8085C96C[arg1];
    if (temp_v0 != 0) {
        func_8082E224(this, *(&D_8085C928 + 0x10 + (temp_v0 * 4)));
    }
}

LinkAnimationHeader* func_8082EEE0(Player* this) {
    if (this->unk_B64 != 0) {
        return (D_8085BE84 + 0x48)[this->modelAnimType];
    }
    return (D_8085BE84 + 0x30)[this->modelAnimType];
}

s32 func_8082EF20(Player* this) {
    s32 var_v0;

    var_v0 = func_8082ECCC(this) != 0;
    if (var_v0 != 0) {
        var_v0 = this->unk_ACC != 0;
    }
    return var_v0;
}

LinkAnimationHeader* func_8082EF54(Player* this) {
    if (func_8082EF20(this) != 0) {
        return &D_0400D490;
    }
    return (D_8085BE84 + 0x78)[this->modelAnimType];
}

LinkAnimationHeader* func_8082EF9C(Player* this) {
    if (func_8082EF20(this) != 0) {
        return &D_0400D488;
    }
    return (D_8085BE84 + 0x60)[this->modelAnimType];
}

LinkAnimationHeader* func_8082EFE4(Player* this) {
    if (func_800B7128(this) != 0) {
        return &D_0400D520;
    }
    return (D_8085BE84 + 0x210)[this->modelAnimType];
}

void func_8082F02C(PlayState* play, struct_8082F02C_arg1* arg1, f32 arg2) {
    func_800FD59C(play, &arg1->unk_0, arg2);
    func_800FD5E0(play, &arg1->unk_3, arg2);
    func_800FD654(play, &arg1->unk_6, arg2);
    func_800FD698(play, arg1->unk_A, arg1->unk_C, arg2);
}

void func_8082F09C(Player* this) {
    this->cylinder.base.colType = 5;
    this->cylinder.base.atFlags = 0;
    this->cylinder.base.acFlags = 0x11;
    this->cylinder.base.ocFlags1 = 0x39;
    this->cylinder.info.elemType = 1;
    this->cylinder.info.toucher.dmgFlags = 0;
    this->cylinder.info.bumper.dmgFlags = 0xF7CFFFFF;
    this->cylinder.info.toucherFlags = 0;
    this->cylinder.dim.radius = 0xC;
}

void func_8082F0E4(Player* arg0, u32 arg1, s32 arg2, s32 arg3) {
    arg0->cylinder.base.atFlags = 9;
    if (arg3 >= 0x1F) {
        arg0->cylinder.base.ocFlags1 = 0;
    } else {
        arg0->cylinder.base.ocFlags1 = 0x39;
    }
    arg0->cylinder.info.elemType = 2;
    arg0->cylinder.info.toucherFlags = 5;
    arg0->cylinder.dim.radius = (s16) arg3;
    arg0->cylinder.info.toucher.dmgFlags = arg1;
    arg0->cylinder.info.toucher.damage = (u8) arg2;
    if (arg1 & 0x400) {
        arg0->cylinder.base.acFlags = 0;
        return;
    }
    arg0->cylinder.base.colType = 0xA;
    arg0->cylinder.info.bumper.dmgFlags = 0xF7CFFFFF;
    if (arg1 & 0x80000) {
        arg0->cylinder.base.acFlags = 0;
        return;
    }
    arg0->cylinder.base.acFlags = 0x11;
}

void func_8082F164(Player* arg0, u16 button) {
    if ((arg0->transformation == 2) && (~(D_80862B44->cur.button | ~(button & 0xFFFF)) == 0)) {
        arg0->stateFlags1 |= 0x10;
    }
}

void func_8082F1AC(PlayState* play, Player* this) {
    s32 sp4C;
    s16 sp46;
    s16 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp34;
    s16 temp_v1;
    s32 var_v0;
    s8 var_v1;
    u32 temp_v0;

    var_v1 = gSaveContext.save.playerData.magic;
    sp4C = (s32) this->unk_B62;
    if ((var_v1 != 0) && (this->stateFlags1 & 0x10)) {
        if (gSaveContext.unk_3F28 == 0) {
            func_80115DB4(play, 0, 5);
            var_v1 = gSaveContext.save.playerData.magic;
        }
        if (var_v1 >= 0x10) {
            var_v0 = 0xFF;
        } else {
            var_v0 = (s32) (((f32) var_v1 / 16.0f) * 255.0f);
        }
        Math_StepToS(&this->unk_B62, (s16) var_v0, 0x32);
    } else if ((Math_StepToS(&this->unk_B62, 0, 0x32) != 0) && (gSaveContext.unk_3F28 != 0)) {
        func_80115D5C(&play->state);
    }
    temp_v1 = this->unk_B62;
    if ((temp_v1 != 0) || (sp4C != 0)) {
        temp_v0 = play->gameplayFrames;
        sp46 = temp_v0 * 0x1B58;
        sp44 = temp_v0 * 0x36B0;
        func_8082F02C(play, &D_8085C98C, (f32) temp_v1 / 255.0f);
        sp34 = Math_SinS(sp44) * 40.0f;
        sp40 = Math_CosS(sp44) * 40.0f;
        sp3C = Math_SinS(sp46) * sp34;
        Lights_PointNoGlowSetInfo(&this->lightInfo, (s16) (s32) (this->actor.world.pos.x + sp40), (s16) (s32) (this->actor.world.pos.y + sp3C), (s16) (s32) (this->actor.world.pos.z + (Math_CosS(sp46) * sp34)), (u8) 0x64, (u8) 0xC8, (u8) 0xFF, (s16) 0x258);
        func_800B8E58(this, 0x1AFU);
        func_800B648C(play, 1, 2, 100.0f, &this->actor.world.pos);
    }
}

void func_8082F43C(PlayState* play, Player* this, s32 (*arg2)(Player*, PlayState*)) {
    this->unk_AC4 = arg2;
    this->unk_ACE = 0;
    this->unk_AC8 = 0.0f;
    func_8082E00C(this);
}

void func_8082F470(PlayState* play, Player* this, enum PlayerActionParam arg2) {
    s32 sp1C;
    LinkAnimationHeader** var_v0;
    s32 var_v1;

    var_v0 = &D_8085BE84[this->modelAnimType];
    this->stateFlags1 &= 0xFEFFFFF7;
    var_v1 = 0;
loop_1:
    if (this->skelAnime.animation != *var_v0) {
        var_v1 += 1;
        var_v0 += 0x18;
        if (var_v1 != 0x2C) {
            goto loop_1;
        }
    }
    sp1C = var_v1;
    func_8082F8BC(play, this, arg2);
    if (var_v1 < 0x2C) {
        this->skelAnime.animation = *(D_8085BE84 + ((var_v1 * 6 * 4) + (this->modelAnimType * 4)));
    }
}

enum PlayerActionParam func_8082F524(Player* this, s32 item) {
    if (item >= 0xFD) {
        return PLAYER_AP_NONE;
    }
    if (item == ITEM_FC) {
        return PLAYER_AP_LAST_USED;
    }
    if (item == ITEM_FISHING_POLE) {
        return PLAYER_AP_FISHING_POLE;
    }
    if ((item == ITEM_SWORD_KOKIRI) && (this->transformation == 2)) {
        return PLAYER_AP_ZORA_FINS;
    }
    return (enum PlayerActionParam) D_8085C99C[item];
}

void func_8082F594(PlayState* play, Player* this) {

}

void func_8082F5A4(PlayState* play, Player* this) {
    this->unk_B28 = 0;
    this->unk_B08[1] = 1.0f;
}

void func_8082F5C0(PlayState* play, Player* this) {
    this->stateFlags1 |= 8;
    if (this->itemActionParam == 0x12) {
        this->unk_B28 = -2;
    } else {
        this->unk_B28 = -1;
    }
    this->unk_ACC = 0;
}

void func_8082F5FC(Player* this, Actor* actor) {
    this->heldActor = actor;
    this->interactRangeActor = actor;
    this->getItemId = 0;
    this->leftHandWorld.rot.y = actor->shape.rot.y - this->actor.shape.rot.y;
    this->stateFlags1 |= 0x800;
}

void func_8082F62C(PlayState* play, Player* this) {
    s32 sp4C;
    struct_8085CD24* sp48;
    Actor* sp44;
    Actor* temp_v0_2;
    s32 temp_v0;
    s32 var_v0;
    s8 temp_v1;
    s8 temp_v1_2;
    struct_8085CD24* temp_t1;

    if (this->stateFlags1 & 0x800) {
        func_8082DE14(play, this);
        return;
    }
    temp_v0 = Player_GetExplosiveHeld(this);
    temp_t1 = &D_8085CD24[temp_v0];
    if ((temp_v0 == 1) && (gSaveContext.powderKegTimer == 0)) {
        gSaveContext.powderKegTimer = 0xC8;
    }
    if (temp_v0 == 1) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    sp48 = temp_t1;
    sp4C = temp_v0;
    temp_v0_2 = Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, temp_t1->actorId, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) var_v0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, ITEM_OCARINA);
    if (temp_v0_2 != NULL) {
        if ((temp_v0 == 0) && (temp_v1 = play->unk_1887E, (temp_v1 != 0))) {
            play->unk_1887E = temp_v1 - 1;
            if (play->unk_1887E == 0) {
                play->unk_1887E = -1;
            }
        } else if ((temp_v0 == 2) && (temp_v1_2 = play->unk_1887D, (temp_v1_2 != 0))) {
            play->unk_1887D = temp_v1_2 - 1;
            if (play->unk_1887D == 0) {
                play->unk_1887D = -1;
            }
        } else {
            sp44 = temp_v0_2;
            Inventory_ChangeAmmo((s16) temp_t1->itemId, -1);
        }
        func_8082F5FC(this, temp_v0_2);
        return;
    }
    if (temp_v0 == 1) {
        gSaveContext.powderKegTimer = 0;
    }
}

void func_8082F7F4(PlayState* play, Player* this) {
    Actor* temp_v0;
    Actor* temp_v0_2;

    this->stateFlags1 |= 8;
    this->unk_B28 = -3;
    this->unk_B48 = 0.0f;
    temp_v0 = Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, 0x3D, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, ITEM_OCARINA);
    this->heldActor = temp_v0;
    if (temp_v0 == NULL) {
        func_80831990(play, this, ITEM_NONE);
        return;
    }
    temp_v0_2 = this->heldActor;
    temp_v0_2->objBankIndex = this->actor.objBankIndex;
    temp_v0_2->unk_208 = (u8) this->transformation;
}

void func_8082F8A0(PlayState* play, Player* this) {
    this->stateFlags1 |= 0x01000000;
}

void func_8082F8BC(PlayState* play, Player* this, enum PlayerActionParam actionParam) {
    this->itemActionParam = (s8) actionParam;
    this->heldItemActionParam = (s8) actionParam;
    this->stateFlags1 &= 0xFEFFFFF7;
    this->unk_B08[0] = 0.0f;
    this->unk_B08[1] = 0.0f;
    this->unk_B28 = 0;
    this->modelGroup = this->nextModelGroup;
    D_8085CB3C[actionParam](play, this);
    Player_SetModelGroup(this, (enum PlayerModelGroup) this->modelGroup);
}

void func_8082F938(PlayState* play, Player* this, s32 arg2, s32 arg3) {
    void* sp1C;
    s32 var_a2;
    struct _struct_D_8085CF88_0x10* var_v1;
    u8 temp_t3;
    void* temp_v0;
    void* var_a0;
    void* var_a1;

    sp1C = Effect_GetByIndex(this->meleeWeaponEffectIndex[0]);
    temp_v0 = Effect_GetByIndex(this->meleeWeaponEffectIndex[1]);
    var_v1 = &D_8085CF88[arg2];
    var_a2 = 0;
    var_a1 = temp_v0;
    var_a0 = sp1C;
    do {
        var_a2 += 2;
        var_a0 += 2;
        var_a0->unk_18C = (u8) var_v1->unk_0;
        temp_t3 = var_v1->unk_4;
        var_v1 += 2;
        var_a1 += 2;
        var_a0->unk_190 = temp_t3;
        var_a0->unk_194 = (u8) var_v1->unk_6;
        var_a0->unk_198 = (u8) var_v1->unk_A;
        var_a1->unk_18C = (u8) var_v1->unk_-2;
        var_a1->unk_190 = (u8) var_v1->unk_2;
        var_a1->unk_194 = (u8) var_v1->unk_6;
        var_a1->unk_198 = (u8) var_v1->unk_A;
        var_a0->unk_18D = (u8) var_v1->unk_-1;
        var_a0->unk_191 = (u8) var_v1->unk_3;
        var_a0->unk_195 = (u8) var_v1->unk_7;
        var_a0->unk_199 = (u8) var_v1->unk_B;
        var_a1->unk_18D = (u8) var_v1->unk_-1;
        var_a1->unk_191 = (u8) var_v1->unk_3;
        var_a1->unk_195 = (u8) var_v1->unk_7;
        var_a1->unk_199 = (u8) var_v1->unk_B;
    } while (var_a2 != 4);
    if (this->transformation == 3) {
        arg3 = 8;
    }
    sp1C->unk_19F = (s8) arg3;
    temp_v0->unk_19F = (s8) arg3;
}

void func_8082FA5C(PlayState* play, Player* this, s32 meleeWeaponState) {
    u16 sp26;
    s8 temp_v0;
    s8 temp_v0_2;
    u16 var_a1;
    u16 var_a2;

    if (this->meleeWeaponState == 0) {
        var_a2 = 0x6800;
        if (this->transformation == 1) {
            var_a1 = 0x1857;
        } else {
            temp_v0 = this->meleeWeaponAnimation;
            var_a1 = 0;
            if (temp_v0 >= 0x1E) {
                var_a2 = 0x6801;
            } else if (temp_v0 == 0x1D) {
                var_a1 = 0x1857;
            } else {
                var_a1 = 0x1818;
                if (this->unk_ADD >= 3) {
                    var_a2 = 0x6801;
                } else {
                    var_a1 = 0x1801;
                    if (this->itemActionParam == 6) {
                        var_a1 = 0x1812;
                    }
                }
            }
        }
        if (var_a1 != 0) {
            sp26 = var_a2;
            func_8082E1F0(this, var_a1);
        }
        temp_v0_2 = this->meleeWeaponAnimation;
        if ((temp_v0_2 < 0x10) || (temp_v0_2 >= 0x16)) {
            func_8082DF8C(this, var_a2 & 0xFFFF);
        }
        func_8082F938(play, this, 0, 4);
    }
    this->meleeWeaponState = (s8) meleeWeaponState;
}

s32 func_8082FB68(Player* this) {
    Actor* temp_v0;
    u32 temp_v0_2;

    temp_v0 = this->unk_730;
    if ((temp_v0 != NULL) && ((temp_v0->flags & 5) == 5)) {
        this->stateFlags3 |= 0x80000000;
        return 1;
    }
    temp_v0_2 = this->stateFlags3;
    if (temp_v0_2 & 0x80000000) {
        this->stateFlags3 = temp_v0_2 & 0x7FFFFFFF;
        if (this->linearVelocity == 0.0f) {
            this->currentYaw = this->actor.shape.rot.y;
        }
    }
    return 0;
}

s32 func_8082FBE8(Player* this) {
    s32 var_v0;

    var_v0 = func_80123420(this) != 0;
    if (var_v0 == 0) {
        var_v0 = func_80123434(this) != 0;
    }
    return var_v0;
}

s32 func_8082FC24(Player* this) {
    s32 var_v0;

    var_v0 = func_8082FB68(this) != 0;
    if (var_v0 == 0) {
        var_v0 = func_80123434(this) != 0;
    }
    return var_v0;
}

void func_8082FC60(Player* this) {
    this->unk_B44 = 0.0f;
    this->unk_B40 = 0.0f;
}

s32 func_8082FC78(Player* this, s32 item) {
    if ((item < 0xFD) && (func_8082F524(this, item) == this->heldItemActionParam)) {
        return 1;
    }
    return 0;
}

s32 func_8082FCC4(Player* this, s32 item, enum PlayerActionParam actionParam) {
    if ((item < 0xFD) && (func_8082F524(this, item) == actionParam)) {
        return 1;
    }
    return 0;
}

s32 func_8082FD0C(Player* this, enum PlayerActionParam actionParam) {
    s32 var_s0;
    u8 temp_v0;
    u8 var_v0;
    u8 var_v1;

    var_s0 = 1;
loop_1:
    if (var_s0 == 0) {
        temp_v0 = gSaveContext.save.playerForm;
        var_v1 = temp_v0;
        if (temp_v0 == 4) {
            var_v1 = 0;
        }
        var_v0 = (&gSaveContext + (var_v1 * 4) + var_s0)->unk_4C;
    } else {
        var_v0 = gSaveContext.save.equips.buttonItems[0][var_s0];
    }
    if (func_8082FCC4(this, var_v0 & 0xFF, actionParam) != 0) {
        return var_s0;
    }
    var_s0 += 1;
    if (var_s0 == (s32) 4U) {
        return -1;
    }
    goto loop_1;
}

s32 func_8082FDC4(void) {
    s32 var_v1;
    u16* var_v0;

    var_v0 = D_8085CFA8;
    var_v1 = 0;
loop_1:
    if (~(~*var_v0 | D_80862B44->press.button) != 0) {
        var_v1 += 1;
        var_v0 += 2;
        if (var_v1 != 4) {
            goto loop_1;
        }
    }
    return var_v1;
}

void func_8082FE0C(Player* this, PlayState* play) {
    s32 sp48;
    s32 sp3C;
    s32 sp38;
    Actor* temp_v0_7;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a3_2;
    s8 temp_v1;
    u16* var_v0_4;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 var_a1;
    u8 var_a1_2;
    u8 var_a1_3;
    u8 var_a1_4;
    u8 var_a2;
    u8 var_v0;
    u8 var_v0_2;
    u8 var_v0_3;

    if (!(this->stateFlags1 & 0x20000800) && ((this->stateFlags2 << 6) >= 0) && ((this->stateFlags3 * 4) >= 0) && (func_801240DC(this) == 0)) {
        if (this->transformation == 4) {
            temp_v0 = this->currentMask;
            if (temp_v0 != 0) {
                temp_v0_2 = func_8082FD0C(this, temp_v0 + 0x39);
                if (temp_v0_2 < 0) {
                    temp_v1 = this->unk_154;
                    if (temp_v1 == 0) {
                        temp_v0_3 = gSaveContext.save.playerForm;
                        var_a1 = temp_v0_3;
                        if (temp_v0_3 == 4) {
                            var_a1 = 0;
                        }
                        var_a2 = (&gSaveContext + (var_a1 * 4) + temp_v1)->unk_4C;
                    } else {
                        var_a2 = gSaveContext.save.equips.buttonItems[0][temp_v1];
                    }
                    temp_v1_2 = func_8082F524(this, var_a2 & 0xFF) - 0x3A;
                    var_a0 = temp_v1_2;
                    if ((temp_v1_2 < 0) || (temp_v1_2 >= 0x18)) {
                        var_a0 = this->currentMask - 1;
                    }
                    func_80831990(play, this, Player_MaskIdToItemId(var_a0));
                    return;
                }
                if ((this->currentMask == 0x14) && (gSaveContext.save.playerData.magic == 0)) {
                    sp48 = temp_v0_2;
                    func_80838A20(play, this);
                }
                this->unk_154 = (s8) temp_v0_2;
                goto block_20;
            }
        }
block_20:
        if ((this->actor.id == 0) && (this->heldItemActionParam >= 2)) {
            if ((func_80124148(this) == 0) || (gSaveContext.jinxTimer == 0)) {
                if (gGameInfo->data[0x361] != 0) {
                    var_a2_2 = ITEM_FISHING_POLE;
                } else {
                    var_a2_2 = Inventory_GetBtnBItem(play);
                }
                if (func_8082FC78(this, var_a2_2) == 0) {
                    if (gSaveContext.buttonStatus[1] != 0xFF) {
                        var_a1_2 = gSaveContext.save.equips.buttonItems[0][1];
                    } else {
                        var_v0 = 0xFF;
                        if (gSaveContext.unk_3F22 == 0x10) {
                            var_v0 = gSaveContext.save.equips.buttonItems[0][1];
                        }
                        var_a1_2 = var_v0;
                    }
                    if (func_8082FC78(this, (s32) var_a1_2) == 0) {
                        if (gSaveContext.buttonStatus[2] != 0xFF) {
                            var_a1_3 = gSaveContext.save.equips.buttonItems[0][2];
                        } else {
                            var_v0_2 = 0xFF;
                            if (gSaveContext.unk_3F22 == 0x10) {
                                var_v0_2 = gSaveContext.save.equips.buttonItems[0][2];
                            }
                            var_a1_3 = var_v0_2;
                        }
                        if (func_8082FC78(this, (s32) var_a1_3) == 0) {
                            if (gSaveContext.buttonStatus[3] != 0xFF) {
                                var_a1_4 = gSaveContext.save.equips.buttonItems[0][3];
                            } else {
                                var_v0_3 = 0xFF;
                                if (gSaveContext.unk_3F22 == 0x10) {
                                    var_v0_3 = gSaveContext.save.equips.buttonItems[0][3];
                                }
                                var_a1_4 = var_v0_3;
                            }
                            if (func_8082FC78(this, (s32) var_a1_4) == 0) {
                                goto block_46;
                            }
                            goto block_47;
                        }
                        goto block_47;
                    }
                    goto block_47;
                }
                goto block_47;
            }
block_46:
            func_80831990(play, this, ITEM_NONE);
            return;
        }
block_47:
        temp_v0_4 = func_8082FDC4();
        var_a3 = temp_v0_4;
        if ((temp_v0_4 >= 4) && (this->transformation == 0) && (this->itemActionParam != 6)) {
            var_a3 = 0;
        }
        sp38 = var_a3;
        temp_v0_5 = func_8012364C(play, this, var_a3);
        if (temp_v0_5 >= 0xFD) {
            var_v0_4 = D_8085CFA8;
            var_a3_2 = 0;
loop_53:
            if (~(~*var_v0_4 | D_80862B44->cur.button) != 0) {
                var_a3_2 += 1;
                var_v0_4 += 2;
                if (var_a3_2 != 4) {
                    goto loop_53;
                }
            }
            temp_v0_6 = func_8012364C(play, this, var_a3_2);
            if ((temp_v0_6 < 0xFD) && (func_8082F524(this, temp_v0_6) == this->itemActionParam)) {
                D_80862B4C = 1;
            }
        } else if (temp_v0_5 == ITEM_F0) {
            if (this->unk_B60 == 0) {
                temp_v0_7 = Actor_Spawn(&play->actorCtx, play, 9, this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z, (s16) 0, (s16) 0, (s16) 0, 0);
                if (temp_v0_7 != NULL) {
                    temp_v0_7->unk_1F0 = 0;
                    this->unk_B60 = 0x136;
                }
            }
        } else {
            if (temp_v0_5 == ITEM_F1) {
                func_80839978(play, this, temp_v0_5, var_a3);
                return;
            }
            if (temp_v0_5 == ITEM_F2) {
                func_80839A10(play, this, temp_v0_5, var_a3);
                return;
            }
            sp3C = temp_v0_5;
            sp38 = var_a3;
            if ((func_80124110(this, func_8082F524(this, temp_v0_5)) != 0) && (gSaveContext.jinxTimer != 0)) {
                if (Message_GetState(&play->msgCtx) == 0) {
                    Message_StartTextbox(play, 0xF7U, NULL);
                }
            } else {
                this->heldItemButton = (s8) var_a3;
                func_80831990(play, this, temp_v0_5);
            }
        }
    }
}

void func_808302CC(Player* this, PlayState* play) {
    LinkAnimationHeader* sp4C;
    s32 sp38;
    s8 sp37;
    LinkAnimationHeader* var_a2;
    f32 temp_fv1;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_fv0;
    s8 temp_v0;
    s8 var_v1;

    sp37 = func_8082F524(this, (s32) this->heldItemId);
    func_8082F43C(play, this, func_80848808);
    var_v1 = *(&D_8085CD00 + ((gPlayerModelTypes[this->modelGroup].modelAnimType * 6) + gPlayerModelTypes[this->nextModelGroup].modelAnimType));
    if ((sp37 == 8) || (temp_v0 = this->itemActionParam, (temp_v0 == 8))) {
        if (sp37 == 0) {
            var_v1 = -0xE;
        } else {
            var_v1 = 0xE;
        }
    } else if ((sp37 == 0x15) || (sp37 == 0x11) || ((sp37 == 0) && ((temp_v0 == 0x15) || (temp_v0 == 0x11)))) {
        var_v1 = 0xD;
        if (sp37 == 0) {
            var_v1 = -0xD;
        }
    }
    if (var_v1 < 0) {
        this->unk_14E = -var_v1;
    } else {
        this->unk_14E = var_v1;
    }
    var_a2 = D_8085CC88[this->unk_14E].unk_0;
    if ((var_a2 == &D_0400DC50) && (this->currentShield == 0)) {
        var_a2 = &D_0400DC60;
    }
    sp38 = (s32) var_v1;
    sp4C = var_a2;
    sp37 = sp37;
    temp_fv1 = (f32) Animation_GetLastFrame(var_a2);
    var_fa1 = temp_fv1;
    if (var_v1 >= 0) {
        var_fv0 = 1.2f;
        var_fa0 = 0.0f;
    } else {
        var_fv0 = -1.2f;
        var_fa0 = temp_fv1;
        var_fa1 = 0.0f;
    }
    if (sp37 != 0) {
        var_fv0 *= 2.0f;
    }
    LinkAnimation_Change(play, &this->unk_284, var_a2, var_fv0, var_fa0, var_fa1, (u8) 2, 0.0f);
    this->stateFlags3 &= 0xBFFFFFFF;
}

void func_808304BC(Player* this, PlayState* play) {
    if ((this->actor.id == 0) && ((this->stateFlags3 * 2) >= 0) && ((this->heldItemActionParam == this->itemActionParam) || (this->stateFlags1 & 0x400000)) && (gSaveContext.save.playerData.health != 0) && (play->csCtx.state == 0) && (this->csMode == 0) && (play->unk_1887C == 0) && (play->activeCamId == 0) && (func_8082DA90(play) == 0) && (gSaveContext.unk_3DD0[4] != 5)) {
        func_8082FE0C(this, play);
    }
    if ((this->stateFlags3 * 2) < 0) {
        func_808302CC(this, play);
    }
}

s32 func_808305BC(PlayState* arg0, Player* arg1, s32* item, s32* arg3) {
    s8 temp_v1;

    if (arg1->itemActionParam == 0x12) {
        *item = ITEM_NUT;
        if (arg1->transformation == 3) {
            *arg3 = ITEM_BOMBCHU;
        } else {
            *arg3 = ITEM_BOMB;
        }
    } else {
        *item = ITEM_BOW;
        if (arg1->stateFlags1 & 0x800000) {
            *arg3 = ITEM_BOW;
        } else {
            *arg3 = arg1->itemActionParam - 7;
        }
    }
    if (arg1->transformation == 3) {
        if ((gSaveContext.save.playerData.magic >= 2) || ((gSaveContext.save.weekEventReg[8] & 1) && (arg0->sceneNum == 0x11))) {
            return 1;
        }
        return 0;
    }
    if (arg1->stateFlags3 & 0x400) {
        return 1;
    }
    if (gSaveContext.minigameState == (u16) ITEM_BOW) {
        return (s32) arg0->interfaceCtx.hbaAmmo;
    }
    temp_v1 = arg0->unk_1887C;
    if (temp_v1 != 0) {
        return (s32) temp_v1;
    }
    return (s32) gSaveContext.save.inventory.ammo[gItemSlots[*item]];
}

s32 func_808306F8(Player* arg0, PlayState* arg1) {
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    Actor* temp_v0_4;
    s16 temp_v0_2;
    s16 var_v1;
    s32 temp_v0_3;
    s32 var_t0;
    s8 temp_v0;

    temp_v0 = arg0->itemActionParam;
    if ((temp_v0 >= 0xA) && (temp_v0 < 0xD) && (gSaveContext.unk_3F28 != 0)) {
        play_sound(0x4806U);
        return 0;
    }
    func_8082F43C(arg1, arg0, func_80848BF4);
    temp_v0_2 = arg0->unk_B28;
    arg0->stateFlags3 |= 0x40;
    arg0->unk_ACC = 0xE;
    if (temp_v0_2 >= 0) {
        if (temp_v0_2 < 0) {
            var_v1 = -temp_v0_2;
        } else {
            var_v1 = temp_v0_2;
        }
        if (var_v1 != 2) {
            func_800B8E58(arg0, D_8085CFAE[var_v1]);
        }
        if ((Player_IsHoldingHookshot(arg0) == 0) && (func_808305BC(arg1, arg0, &sp50, &sp4C) > 0)) {
            temp_v0_3 = sp4C - 3;
            if (arg0->unk_B28 >= 0) {
                var_t0 = temp_v0_3;
                if ((temp_v0_3 >= 0) && (temp_v0_3 < 3)) {
                    if (gSaveContext.save.playerData.magic < (s32) *(&D_8085CFB8 + temp_v0_3)) {
                        var_t0 = -1;
                        sp4C = ITEM_ARROW_FIRE;
                    }
                } else if ((sp4C == ITEM_BOMBCHU) && (!(gSaveContext.save.weekEventReg[8] & 1) || (arg1->sceneNum != 0x11))) {
                    var_t0 = 3;
                } else {
                    var_t0 = -1;
                }
                sp48 = var_t0;
                temp_v0_4 = Actor_SpawnAsChild(&arg1->actorCtx, &arg0->actor, arg1, 0xF, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) 0, (s16) (s32) arg0->actor.shape.rot.y, (s16) 0, sp4C);
                arg0->heldActor = temp_v0_4;
                if ((temp_v0_4 != NULL) && (var_t0 >= 0)) {
                    func_80115DB4(arg1, (s16) *(&D_8085CFB8 + var_t0), 0);
                }
            }
        }
    }
    return 1;
}

void func_808308DC(PlayState* play, Player* this) {
    s32 sp20;
    s32 var_v1;
    s8 temp_a1;
    u8 temp_v0;

    temp_v0 = this->transformation;
    var_v1 = temp_v0 == 1;
    if (var_v1 == 0) {
        var_v1 = temp_v0 == 3;
    }
    temp_a1 = this->itemActionParam;
    if ((temp_a1 != 0) && (var_v1 == 0)) {
        sp20 = var_v1;
        if (Player_ActionToSword(&this->actor, (enum PlayerActionParam) temp_a1) >= 0) {
            sp20 = var_v1;
            func_8082E1F0(this, 0x1802U);
        } else {
            sp20 = var_v1;
            func_8082E1F0(this, 0x835U);
        }
        var_v1 = sp20;
    }
    sp20 = var_v1;
    func_80831990(play, this, (s32) this->heldItemId);
    if (var_v1 == 0) {
        if (Player_ActionToSword(&this->actor, (enum PlayerActionParam) this->itemActionParam) >= 0) {
            func_8082E1F0(this, 0x1803U);
            return;
        }
        if (this->itemActionParam != 0) {
            func_8082E1F0(this, 0x835U);
        }
    }
}

void func_808309CC(PlayState* play, Player* this) {
    if (this->unk_AC4 == func_80848808) {
        func_808308DC(play, this);
    }
    func_8082F43C(play, this, D_8085C9F0[this->itemActionParam]);
    this->unk_ACC = 0;
    this->unk_AA4 = 0;
    func_8082DCA0(play, this);
    this->stateFlags3 &= 0xBFFFFFFF;
}

LinkAnimationHeader* func_80830A58(PlayState* arg0, Player* arg1) {
    func_8082F43C(arg0, arg1, func_8084894C);
    func_8082DCA0(arg0, arg1);
    if (arg1->unk_B40 < 0.5f) {
        return D_8085CFBC[Player_IsHoldingTwoHandedWeapon(arg1)];
    }
    return D_8085CFC4[Player_IsHoldingTwoHandedWeapon(arg1)];
}

void func_80830AE8(Player* arg0) {
    s32 var_v0;
    s32 var_v1;
    u8 temp_v0;

    temp_v0 = arg0->transformation;
    if (temp_v0 == 1) {
        var_v0 = 0x8EF;
    } else {
        var_v1 = 0x181F;
        if (temp_v0 == 3) {
            var_v1 = 0x835;
        }
        var_v0 = var_v1;
    }
    func_800B8E58(arg0, var_v0 & 0xFFFF);
}

void func_80830B38(Player* arg0) {
    s32 var_v0;
    s32 var_v1;
    u8 temp_v0;

    temp_v0 = arg0->transformation;
    if (temp_v0 == 1) {
        var_v0 = 0x8E7;
    } else {
        var_v1 = 0x1826;
        if (temp_v0 == 3) {
            var_v1 = 0x834;
        }
        var_v0 = var_v1;
    }
    func_800B8E58(arg0, var_v0 & 0xFFFF);
}

s32 func_80830B88(PlayState* play, Player* this) {
    LinkAnimationHeader* sp34;
    LinkAnimationHeader* temp_v0_3;
    f32 temp_fv0;
    u32 temp_v0;
    u8 temp_v0_2;

    if (~(D_80862B44->cur.button | ~0x10) == 0) {
        temp_v0 = this->stateFlags1;
        if (!(temp_v0 & 0x20C00000) && (((temp_v0 * 0x10) >= 0) || ((this->currentBoots >= 5) && (this->actor.bgCheckFlags & 1))) && (play->unk_1887C == 0) && (this->heldItemActionParam == this->itemActionParam) && ((this->transformation == 0) || ((Player_IsGoronOrDeku(this) == 0) && (((temp_v0_2 = this->transformation, (temp_v0_2 == 2)) && !(this->stateFlags1 & 0x02000000)) || ((temp_v0_2 == 4) && (this->currentShield != 0))) && (func_8082FBE8(this) != 0)))) {
            temp_v0_3 = func_80830A58(play, this);
            sp34 = temp_v0_3;
            temp_fv0 = (f32) Animation_GetLastFrame(temp_v0_3);
            LinkAnimation_Change(play, &this->unk_284, sp34, 1.0f, temp_fv0, temp_fv0, (u8) 2, 0.0f);
            func_80830AE8(this);
            return 1;
        }
    }
    return 0;
}

void func_80830CE8(PlayState* arg0, Player* arg1) {
    func_8082F43C(arg0, arg1, func_80848AB0);
    if (arg1->heldItemActionParam < 0) {
        func_80123C58(arg1);
    }
    Animation_Reverse(&arg1->unk_284);
    func_80830B38(arg1);
}

void func_80830D40(PlayState* arg0, Player* arg1) {
    f32 var_fv0;
    u8 temp_t9;

    temp_t9 = D_8085CC88[arg1->unk_14E].unk_4;
    var_fv0 = (f32) temp_t9;
    if ((s32) temp_t9 < 0) {
        var_fv0 += 4294967296.0f;
    }
    if (arg1->unk_284.playSpeed < 0.0f) {
        var_fv0 -= 1.0f;
    }
    if (LinkAnimation_OnFrame(arg1 + 0x284, var_fv0) != 0) {
        func_808308DC(arg0, arg1);
    }
    func_8082FB68(arg1);
}

s32 func_80830DF0(Player* this, PlayState* play) {
    if ((this->stateFlags3 * 2) < 0) {
        func_808302CC(this, play);
        return 1;
    }
    return 0;
}

s32 func_80830E30(Player* arg0, PlayState* arg1) {
    LinkAnimationHeader* var_a2;
    LinkAnimationHeader* var_a2_2;
    LinkAnimationHeader* var_v0;
    LinkAnimationHeader* var_v0_2;
    s8 temp_v0;

    if ((arg0->itemActionParam == 0x11) || (arg0->transformation == 2)) {
        func_8082F43C(arg1, arg0, func_8084923C);
        temp_v0 = arg0->meleeWeaponAnimation;
        if (temp_v0 == 0x1B) {
            var_a2 = &D_0400E3A8;
        } else {
            if (temp_v0 == 0x1C) {
                var_v0 = &D_0400E3B0;
            } else {
                var_v0 = &D_0400E3B8;
            }
            var_a2 = var_v0;
        }
        LinkAnimation_PlayOnce(arg1, &arg0->unk_284, var_a2);
        arg0->unk_ACC = 0xA;
        goto block_17;
    }
    if (func_808306F8(arg0, arg1, func_8084923C) == 0) {
        return 0;
    }
    if (Player_IsHoldingHookshot(arg0) != 0) {
        var_a2_2 = &D_0400D9D8;
    } else {
        var_v0_2 = &D_0400D4F0;
        if (arg0->transformation == 3) {
            var_v0_2 = &D_0400E2F8;
        }
        var_a2_2 = var_v0_2;
    }
    LinkAnimation_PlayOnce(arg1, &arg0->unk_284, var_a2_2);
block_17:
    if (arg0->stateFlags1 & 0x800000) {
        func_8082DB3C(arg1, arg0, &D_0400E050);
    } else if ((arg0->actor.bgCheckFlags & 1) && (arg0->transformation != 2)) {
        func_8082DB3C(arg1, arg0, func_8082ED20(arg0));
    }
    return 1;
}

s32 func_80830F9C(PlayState* arg0) {
    s32 var_v0;

    var_v0 = arg0->unk_1887C > 0;
    if (var_v0 != 0) {
        var_v0 = ~(D_80862B44->press.button | ~0x4000) == 0;
    }
    return var_v0;
}

s32 func_80830FD4(PlayState* arg0) {
    s32 var_v0;
    s8 temp_v1;

    temp_v1 = arg0->unk_1887C;
    var_v0 = temp_v1 != 0;
    if (var_v0 != 0) {
        var_v0 = temp_v1 < 0;
        if (var_v0 == 0) {
            var_v0 = (D_80862B44->cur.button & 0xC00F) != 0;
        }
    }
    return var_v0;
}

s32 func_80831010(Player* this, PlayState* play) {
    u8 temp_v0;

    temp_v0 = this->unk_AA5;
    if ((temp_v0 == 0) || (temp_v0 == 3)) {
        if ((func_8082FBE8(this) != 0) || (this->unk_730 != NULL) || (func_800DF86C(Play_GetCamera(play, 0), 0xD) == 0)) {
            return 1;
        }
        this->unk_AA5 = 3;
        goto block_7;
    }
block_7:
    return 0;
}

s32 func_80831094(Player* this, PlayState* play) {
    if ((this->doorType == 0) && ((this->stateFlags1 << 6) >= 0) && ((D_80862B48 != 0) || (func_80830F9C(play, this) != 0)) && (func_80830E30(this, play, this) != 0)) {
        return func_80831010(this, play);
    }
    return 0;
}

s32 func_80831124(PlayState* play, Player* this) {
    Actor* temp_v0;

    temp_v0 = this->actor.child;
    if (temp_v0 != NULL) {
        if (this->heldActor == NULL) {
            this->heldActor = temp_v0;
            func_8082DF48(play, this, 0xFFU, 0xAU, (u8) 0xFA, 0);
            func_800B8E58(this, 0x1828U);
        }
        return 1;
    }
    return 0;
}

s32 func_80831194(PlayState* arg0, Player* arg1) {
    s32 sp34;
    s32 sp30;
    s16 temp_v0;
    s32 var_v0;
    s8 temp_v0_2;

    var_v0 = 0;
    if (arg1->heldActor != NULL) {
        if (Player_IsHoldingHookshot(arg1) == 0) {
            func_808305BC(arg0, arg1, &sp34, &sp30);
            if ((arg1->transformation != 3) && !(arg1->stateFlags3 & 0x400)) {
                if (gSaveContext.minigameState == 1) {
                    temp_v0 = arg0->sceneNum;
                    if ((temp_v0 != 0x20) && (temp_v0 != 0x35) && (temp_v0 != 0x24)) {
                        arg0->interfaceCtx.hbaAmmo -= 1;
                    }
                } else {
                    temp_v0_2 = arg0->unk_1887C;
                    if (temp_v0_2 != 0) {
                        arg0->unk_1887C = temp_v0_2 - 1;
                    } else {
                        Inventory_ChangeAmmo(unksp36, -1);
                    }
                }
            }
            if (arg0->unk_1887C == 1) {
                arg0->unk_1887C = -0xA;
            }
            func_8082DF48(arg0, arg1, 0x96U, 0xAU, (u8) 0x96, 0);
        } else {
            func_8082DF48(arg0, arg1, 0xFFU, 0x14U, (u8) 0x96, 0);
            arg1->unk_B48 = 0.0f;
        }
        if (arg1->transformation == 3) {
            arg1->unk_D57 = 0x14;
        } else {
            arg1->unk_D57 = 4;
        }
        var_v0 = 1;
        arg1->heldActor->parent = NULL;
        arg1->actor.child = NULL;
        arg1->heldActor = NULL;
    }
    return var_v0;
}

void func_8083133C(Player* arg0) {
    s16 temp_v0;

    arg0->stateFlags1 |= 0x20000;
    if (!(arg0->skelAnime.moveFlags & 0x80) && (arg0->actor.bgCheckFlags & 0x200) && (D_80862B20 < 0x2000)) {
        temp_v0 = arg0->actor.wallYaw + 0x8000;
        arg0->actor.shape.rot.y = temp_v0;
        arg0->currentYaw = temp_v0;
    }
    arg0->targetYaw = arg0->actor.shape.rot.y;
}

s32 func_808313A8(PlayState* arg0, Player* arg1, Actor* arg2) {
    s32 var_v0;

    var_v0 = 0;
    if (arg2 == NULL) {
        func_8082DE50(arg0, arg1);
        func_80836988(arg1, arg0);
        var_v0 = 1;
    }
    return var_v0;
}

void func_808313F0(Player* arg0, PlayState* arg1) {
    if (func_808313A8(arg1, arg0, arg0->heldActor) == 0) {
        func_8082F43C(arg1, arg0, func_808490B4);
        LinkAnimation_PlayLoop(arg1, &arg0->unk_284, &D_0400DB30);
    }
}

void func_80831454(Player* this) {
    if (((this->stateFlags3 * 4) < 0) || (this->stateFlags2 & 0x02000000)) {
        Audio_QueueSeqCmd(0x110000FFU);
    }
}

s32 func_80831494(PlayState* play, Player* this, void (*arg2)(Player*, PlayState*), s32 arg3) {
    void (*temp_v0)(Player*, PlayState*);

    if (arg2 == this->unk_748) {
        return 0;
    }
    play->actorCtx.unk5 &= 0xFFFB;
    if ((this->actor.flags * 4) < 0) {
        AudioOcarina_SetInstrumentId(0U);
        this->actor.flags &= 0xDFFFFFFF;
    } else {
        temp_v0 = this->unk_748;
        if ((temp_v0 == func_80857BE8) || (temp_v0 == func_808561B0)) {
            this->actor.shape.shadowDraw = ActorShadow_DrawFeet;
            this->unk_ABC = 0.0f;
            this->actor.shape.shadowScale = this->ageProperties->unk_04;
            if (temp_v0 == func_80857BE8) {
                if (this->stateFlags3 & 0x80000) {
                    func_80115D5C(&play->state);
                }
                func_8082DD2C(play, this);
                this->actor.shape.rot.x = 0;
                this->actor.shape.rot.z = 0;
                this->actor.bgCheckFlags &= 0xF7FF;
            } else {
                Actor_SetScale(&this->actor, 0.01f);
            }
        } else if ((this->transformation == 1) && (Player_GetMeleeWeaponHeld(this) != 0)) {
            func_80831990(play, this, ITEM_NONE);
        }
    }
    func_800AEF44(Effect_GetByIndex(this->meleeWeaponEffectIndex[2]));
    this->unk_748 = arg2;
    if ((this->itemActionParam != this->heldItemActionParam) && (!(arg3 & 1) || ((this->stateFlags1 << 9) >= 0))) {
        func_80123C58(this);
    }
    if (!(arg3 & 1) && !(this->stateFlags1 & 0x800)) {
        func_808309CC(play, this);
        LinkAnimation_PlayLoop(play, &this->unk_284, func_8082ED20(this));
        this->stateFlags1 &= 0xFFBFFFFF;
    }
    func_80831454(this);
    func_8082E794(this);
    this->stateFlags1 &= 0x4BFFFFBF;
    this->stateFlags2 &= 0xE577FFFF;
    this->stateFlags3 &= 0xDED05D75;
    this->unk_AE7 = 0;
    this->unk_AE8 = 0;
    this->unk_AA4 = 0;
    this->unk_B86 = 0;
    this->unk_B88 = 0;
    this->unk_B8A = 0;
    this->unk_B8C = 0;
    this->unk_B8E = 0;
    this->unk_B08[2] = 0.0f;
    this->unk_B08[3] = 0.0f;
    this->unk_B08[4] = 0.0f;
    this->unk_B08[5] = 0.0f;
    this->unk_B08[6] = 0.0f;
    this->unk_B08[7] = 0.0f;
    this->actor.shape.rot.z = 0;
    func_8082F09C(this);
    func_8082E00C(this);
    return 1;
}

void func_8083172C(PlayState* arg0, Player* arg1, void (*arg2)(Player*, PlayState*), s32 arg3) {
    s32 sp1C;

    sp1C = (s32) arg1->skelAnime.moveFlags;
    arg1->skelAnime.moveFlags = 0;
    func_80831494(arg0, arg1, arg2, arg3);
    arg1->skelAnime.moveFlags = (u8) sp1C;
}

void func_80831760(PlayState* arg0, Player* arg1, void (*arg2)(Player*, PlayState*), s32 arg3) {
    s32 sp24;
    s8 temp_v0;

    temp_v0 = arg1->heldItemActionParam;
    if (temp_v0 >= 0) {
        sp24 = (s32) temp_v0;
        arg1->heldItemActionParam = arg1->itemActionParam;
        func_80831494(arg0, arg1, arg2, arg3);
        arg1->heldItemActionParam = (s8) sp24;
        Player_SetModels(arg1, Player_ActionToModelGroup(arg1, (enum PlayerActionParam) arg1->heldItemActionParam));
    }
}

void func_808317C4(Player* arg0) {
    Actor* temp_a0;

    if (Player_IsHoldingHookshot(arg0) != 0) {
        temp_a0 = arg0->heldActor;
        if (temp_a0 != NULL) {
            Actor_MarkForDeath(temp_a0);
            arg0->actor.child = NULL;
            arg0->heldActor = NULL;
        }
    }
}

s32 func_80831814(Player* arg0, PlayState* arg1, s32 arg2) {
    if (!(arg0->stateFlags1 & 0x6804) && (func_800DF86C(Play_GetCamera(arg1, 0), 6) != 0) && ((arg0->actor.bgCheckFlags & 1) || ((func_801242B4(arg0) != 0) && (arg0->actor.depthInWater < arg0->ageProperties->unk_2C)))) {
        arg0->unk_AA5 = (u8) arg2;
        return 1;
    }
    return 0;
}

void func_808318C0(PlayState* arg0) {
    s32 var_v0;

    if (func_80115DB4(arg0, 0, 3) != 0) {
        if (arg0->actorCtx.unk3 != 0) {
            func_800B90F4(arg0);
        } else {
            arg0->actorCtx.unk3 = 1;
        }
        var_v0 = 0x482B;
        if (arg0->actorCtx.unk3 != 0) {
            var_v0 = 0x482A;
        }
        play_sound(var_v0 & 0xFFFF);
        return;
    }
    play_sound(0x4806U);
}

void func_80831944(PlayState* arg0, Player* arg1) {
    if (func_8012364C(arg0, arg1, func_8082FDC4()) == ITEM_LENS) {
        func_808318C0(arg0);
    }
}

/*
Decompilation failure in function func_80831990:

Label L80831A58 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_80831F34(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    s32 sp24;
    void (*var_a2)(Player*, PlayState*);

    sp24 = func_801242B4(arg1);
    func_8082DE50(arg0, arg1);
    if (sp24 != 0) {
        var_a2 = func_80851BD4;
    } else {
        var_a2 = func_8084BFDC;
    }
    func_80831494(arg0, arg1, var_a2, 0);
    func_8082DB18(arg0, arg1, arg2);
    if (arg2 == &D_0400D698) {
        arg1->skelAnime.endFrame = 84.0f;
    }
    arg1->stateFlags1 |= 0x80;
    func_8082DAD4(arg1);
    func_8082DF8C(arg1, 0x680BU);
    if (arg1 == arg0->actorCtx.actorLists[2].first) {
        arg1->unk_A86 = (s8) arg0->playerActorCsIds[6];
        func_801A0184();
        gSaveContext.powderKegTimer = 0;
        gSaveContext.unk_1014 = 0;
        gSaveContext.jinxTimer = 0;
        if (Inventory_ConsumeFairy(arg0) != 0) {
            arg0->gameOverCtx.state = 0x14;
            arg1->unk_AE7 = 1;
        } else {
            arg0->gameOverCtx.state = 1;
            func_801A41F8(0);
            func_801A3098(0x20U);
            gSaveContext.seqIndex = 0xFF;
            gSaveContext.nightSeqIndex = 0xFF;
        }
        ShrinkWindow_SetLetterboxTarget(0x20);
    }
}

s32 func_80832090(Player* arg0) {
    s32 var_v0;
    u8 temp_v1;

    if ((arg0->unk_748 != (s32) func_8084D770) || ((var_v0 = (arg0->stateFlags3 & 0x40000000) != 0, (var_v0 != 0)) && ((temp_v1 = arg0->heldItemId, ((temp_v1 == 0xFC) != 0)) || (var_v0 = temp_v1 == 0xFF, (var_v0 != 0))))) {
        var_v0 = (arg0->unk_AC4 == (s32) func_80848808) == 0;
        if (var_v0 == 0) {
            var_v0 = func_8082F524(arg0, (s32) arg0->heldItemId) == arg0->itemActionParam;
        }
    }
    return var_v0;
}

s32 func_8083213C(Player* arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg0->unk_748;
    var_v0 = temp_v1 == (s32) func_8084AC84;
    if (var_v0 == 0) {
        var_v0 = temp_v1 == (s32) func_8084AEEC;
    }
    return var_v0;
}

s32 func_8083216C(Player* arg0, PlayState* arg1) {
    if (((arg0->stateFlags1 << 8) >= 0) && (arg0->actor.parent != NULL) && (Player_IsHoldingHookshot(arg0) != 0)) {
        func_80831494(arg1, arg0, func_80855E08, 1);
        arg0->stateFlags3 |= 0x80;
        func_8082DB18(arg1, arg0, &D_0400D9C8);
        func_8082E920(arg1, arg0, 0x9B);
        func_8082DAD4(arg0);
        arg0->actor.bgCheckFlags &= 0xFFFE;
        arg0->unk_AA6 |= 0x43;
        arg0->currentYaw = arg0->actor.shape.rot.y;
        func_8082DF8C(arg0, 0x6802U);
        goto block_21;
    }
    if (func_80832090(arg0) != 0) {
        func_808304BC(arg0, arg1);
        if (arg0->unk_748 == func_80852B28) {
            goto block_21;
        }
    }
    if (arg0->unk_AC4(arg0, arg1) == 0) {
        return 0;
    }
    if (arg0->unk_AC8 != 0.0f) {
        if ((func_8082ED94(arg0) == 0) || (arg0->linearVelocity != 0.0f)) {
            AnimationContext_SetCopyFalse(arg1, (s32) arg0->skelAnime.limbCount, arg0->unk_284.jointTable, arg0->skelAnime.jointTable, D_8085B9F0);
        }
        if ((arg0->actor.bgCheckFlags & 1) && !(arg0->skelAnime.moveFlags & 8)) {
            Math_StepToF(&arg0->unk_AC8, 0.0f, 0.25f);
            AnimationContext_SetInterp(arg1, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.jointTable, arg0->unk_284.jointTable, 1.0f - arg0->unk_AC8);
        }
    } else if ((func_8082ED94(arg0) == 0) || (arg0->linearVelocity != 0.0f) || (arg0->skelAnime.moveFlags & 8)) {
        AnimationContext_SetCopyTrue(arg1, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.jointTable, arg0->unk_284.jointTable, D_8085B9F0);
    } else {
        AnimationContext_SetCopyAll(arg1, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.jointTable, arg0->unk_284.jointTable);
    }
block_21:
    return 1;
}

s32 func_808323C0(Actor* arg0, s16 arg1) {
    if ((arg1 >= 0) && (ActorCutscene_GetCurrentIndex() != arg1)) {
        if (ActorCutscene_GetCanPlayNext(arg1) == 0) {
            ActorCutscene_SetIntentToPlay(arg1);
            return 0;
        }
        ActorCutscene_Start(arg1, arg0);
        goto block_5;
    }
block_5:
    arg0->unk_A86 = (s8) arg1;
    return 1;
}

s32 func_80832444(Actor* arg0) {
    s8 temp_a2;

    temp_a2 = arg0->unk_A86;
    if (temp_a2 >= 0) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a2) == 0) {
            ActorCutscene_SetIntentToPlay((s16) arg0->unk_A86);
            return 0;
        }
        ActorCutscene_Start((s16) arg0->unk_A86, arg0);
        goto block_4;
    }
block_4:
    return 1;
}

s32 func_8083249C(Actor* arg0) {
    if ((arg0->unk_A86 >= 0) && (ActorCutscene_GetCurrentIndex() != arg0->unk_A86)) {
        return func_80832444(arg0);
    }
    return 1;
}

void func_808324EC(PlayState* arg0, Player* arg1, void (*arg2)(PlayState*, Player*), s32 arg3) {
    arg1->unk_D58 = arg2;
    arg1->unk_A86 = (s8) arg3;
    func_80831494(arg0, arg1, func_8084D770, 0);
    func_8083249C(&arg1->actor);
    arg1->stateFlags2 |= 0x40;
    func_8082DE14(arg0, arg1);
}

void func_80832558(void) {
    func_808324EC((PlayState* )-1);
}

void func_80832578(Player* arg0, PlayState* arg1) {
    s16 sp26;
    s16* temp_v0_2;
    s32 temp_a2;
    u32 temp_v0;

    sp26 = arg0->actor.shape.rot.y;
    temp_v0 = arg0->stateFlags2;
    temp_a2 = temp_v0 & 0x60;
    if (temp_a2 == 0) {
        temp_v0_2 = arg0->unk_730;
        if ((temp_v0_2 != NULL) && ((arg1->actorCtx.targetContext.unk4B != 0) || (arg0 != arg1->actorCtx.actorLists[2].first)) && (*temp_v0_2 != 0x233)) {
            Math_ScaledStepToS(arg0 + 0xBE, Math_Vec3f_Yaw(arg0 + 0x24, temp_v0_2 + 0x3C), 0xFA0);
        } else if ((arg0->stateFlags1 & 0x20000) && (temp_a2 == 0)) {
            Math_ScaledStepToS(arg0 + 0xBE, arg0->targetYaw, 0xFA0);
        }
    } else if (!(temp_v0 & 0x40)) {
        Math_ScaledStepToS(arg0 + 0xBE, arg0->currentYaw, 0x7D0);
    }
    arg0->unk_B4C = arg0->actor.shape.rot.y - sp26;
}

s16 func_80832660(s16* arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_a1;
    s32 var_v0;

    temp_v1_2 = *arg0;
    temp_v0 = arg4 - temp_v1_2;
    if (temp_v0 < -arg5) {
        var_v0 = arg5 * -0x10000;
    } else {
        var_a1 = temp_v0;
        if (arg5 < temp_v0) {
            var_a1 = arg5;
        }
        var_v0 = var_a1 << 0x10;
    }
    *arg0 = temp_v1_2 + (temp_v0 - (var_v0 >> 0x10));
    arg3 = arg3;
    Math_ScaledStepToS(arg0, arg1, arg2);
    temp_v1 = *arg0;
    temp_v0_2 = -arg3;
    if (temp_v1 < temp_v0_2) {
        *arg0 = temp_v0_2;
    } else if (arg3 < temp_v1) {
        *arg0 = arg3;
    }
    return (s16) (temp_v1 - *arg0);
}

s16 func_80832754(Player* arg0, s32 arg1) {
    s16 sp36;
    s16 temp_a1;
    s16 temp_s1;
    s16 var_s1;

    temp_s1 = arg0->actor.shape.rot.y;
    if (arg1 != 0) {
        var_s1 = arg0->actor.focus.rot.y;
        arg0->unk_AA6 |= 0x41;
        arg0->unk_AB2.x = arg0->actor.focus.rot.x;
    } else {
        temp_a1 = arg0->actor.focus.rot.x;
        func_80832660(arg0 + 0xAB2, func_80832660(arg0 + 0xAAC, temp_a1, 0x258, 0x2710, (s16) (s32) temp_a1, (s16) 0), 0xC8, 0xFA0, (s16) (s32) arg0->unk_AAC.x, (s16) 0x2710);
        sp36 = arg0->actor.focus.rot.y - temp_s1;
        func_80832660(&sp36, 0, 0xC8, 0x5DC0, (s16) (s32) arg0->unk_AB2.y, (s16) 0x1F40);
        var_s1 = arg0->actor.focus.rot.y - sp36;
        func_80832660(arg0 + 0xAAE, (s16) (sp36 - arg0->unk_AB2.y), 0xC8, 0x1F40, (s16) (s32) sp36, (s16) 0x1F40);
        func_80832660(arg0 + 0xAB4, sp36, 0xC8, 0x1F40, (s16) (s32) arg0->unk_AAC.y, (s16) 0x1F40);
        arg0->unk_AA6 |= 0xD9;
    }
    return var_s1;
}

void func_80832888(Player* arg0, PlayState* arg1) {
    s32 sp1C;
    Actor* temp_a0_3;
    Actor* temp_a0_4;
    Actor* temp_a0_5;
    Actor* temp_v0_4;
    Actor* temp_v0_6;
    Actor* var_v1_2;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_6;
    u32 temp_t8;
    u32 temp_v0_5;

    var_v1 = 0;
    temp_v0 = ~(D_80862B44->cur.button | ~0x2000) == 0;
    if (temp_v0 == 0) {
        arg0->stateFlags1 &= 0xBFFFFFFF;
    }
    if ((arg1->csCtx.state != 0) || (arg0->csMode != 0) || (temp_a0 = arg0->stateFlags1, ((temp_a0 & 0x20000080) != 0)) || (arg0->stateFlags3 & 0x80)) {
        arg0->unk_738 = 0;
        var_v0 = 0;
    } else if ((temp_v0 != 0) || (arg0->stateFlags2 & 0x2000) || (arg0->unk_A78 != NULL)) {
        temp_v0_2 = arg0->unk_738;
        if (temp_v0_2 < 6) {
            arg0->unk_738 = 5;
        } else {
            arg0->unk_738 = temp_v0_2 - 1;
        }
        var_v0 = arg0->unk_738;
    } else {
        var_v0 = 0;
        if (temp_a0 & 0x20000) {
            arg0->unk_738 = 0;
        } else {
            var_v0 = arg0->unk_738;
            temp_t0 = var_v0 - 1;
            if (var_v0 != 0) {
                arg0->unk_738 = temp_t0;
                var_v0 = temp_t0;
            }
        }
    }
    if (var_v0 >= 6) {
        var_v1 = 1;
    }
    sp1C = var_v1;
    temp_v0_3 = func_8082DAFC(arg1);
    if ((temp_v0_3 != 0) || (arg0->unk_738 != 0) || (arg0->stateFlags1 & 0x02001000)) {
        if (temp_v0_3 == 0) {
            temp_a0_2 = arg0->stateFlags1;
            if (((temp_a0_2 << 6) >= 0) && ((arg0->itemActionParam != 2) || (arg0->unk_B28 == 0)) && (~(D_80862B44->press.button | ~0x2000) == 0)) {
                temp_v0_4 = arg1->actorCtx.actorLists[2].first;
                var_v1_2 = temp_v0_4;
                if (arg0 == temp_v0_4) {
                    var_v1_2 = arg1->actorCtx.targetContext.arrowPointedActor;
                }
                var_a1 = gSaveContext.options.zTargetSetting != 0;
                if (var_a1 == 0) {
                    var_a1 = (s32) arg0 != (s32) temp_v0_4;
                }
                arg0->stateFlags1 = temp_a0_2 | 0x8000;
                if ((arg0->currentMask != 0x14) && (var_v1_2 != NULL) && ((var_v1_2->flags * 0x10) >= 0) && !(arg0->stateFlags3 & 0x2200)) {
                    temp_a0_3 = arg0->unk_730;
                    if ((var_v1_2 == temp_a0_3) && (arg0 == arg1->actorCtx.actorLists[2].first)) {
                        var_v1_2 = arg1->actorCtx.targetContext.unk_94;
                    }
                    if ((var_v1_2 != NULL) && ((temp_v0_5 = var_v1_2->flags, (var_v1_2 != temp_a0_3)) || (temp_v0_5 & 0x80000))) {
                        var_v1_2->flags = temp_v0_5 & 0xFFF7FFFF;
                        if (var_a1 == 0) {
                            arg0->stateFlags2 |= 0x2000;
                        }
                        arg0->unk_730 = var_v1_2;
                        arg0->unk_738 = 0xF;
                        arg0->stateFlags2 &= 0xFFDFFFFD;
                    } else if (var_a1 == 0) {
                        func_80123DA4(arg0);
                    }
                    arg0->stateFlags1 &= 0xBFFFFFFF;
                } else if (!(arg0->stateFlags1 & 0x40020000) && (arg0->unk_748 != func_808573A4)) {
                    func_8083133C(arg0, var_a1, arg1, arg0);
                }
            }
            temp_a0_4 = arg0->unk_730;
            if (temp_a0_4 != NULL) {
                if ((arg0 == arg1->actorCtx.actorLists[2].first) && (arg0->unk_A78 != temp_a0_4) && (func_800B83F8(temp_a0_4, arg0, sp1C) != 0)) {
                    func_80123DA4(arg0);
                    arg0->stateFlags1 |= 0x40000000;
                } else {
                    temp_a0_5 = arg0->unk_730;
                    if (temp_a0_5 != NULL) {
                        temp_a0_5->targetPriority = 0x28;
                    }
                }
            } else {
                temp_v0_6 = arg0->unk_A78;
                if (temp_v0_6 != NULL) {
                    arg0->unk_730 = temp_v0_6;
                }
            }
        }
        temp_a0_6 = arg0->stateFlags1;
        if ((arg0->unk_730 != NULL) && (temp_t8 = temp_a0_6 & 0xFFFCFFFF, ((arg0->stateFlags3 & 0x2200) == 0))) {
            arg0->stateFlags1 = temp_t8;
            if ((temp_t8 & 0x800) || ((arg0->unk_730->flags & 5) != 5)) {
                arg0->stateFlags1 = temp_t8 | 0x10000;
            }
        } else {
            if (temp_a0_6 & 0x20000) {
                arg0->stateFlags2 &= ~0x2000;
                return;
            }
            func_80123DC0(arg0);
        }
    } else {
        func_80123DC0(arg0);
    }
}

s32 func_80832CAC(PlayState* arg0, Player* arg1, f32* arg2, s16* arg3, f32 arg4) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_fa1_2;

    if ((arg1->unk_AA5 != 0) || (func_8082DA90(arg0) != 0) || (arg1->stateFlags1 & 1)) {
        *arg2 = 0.0f;
        *arg3 = arg1->actor.shape.rot.y;
        goto block_24;
    }
    *arg2 = D_80862AFC;
    *arg3 = D_80862B00;
    if (arg4 != 0.0f) {
        *arg2 -= 20.0f;
        temp_fv1 = *arg2;
        if (temp_fv1 < 0.0f) {
            *arg2 = 0.0f;
        } else {
            temp_fv1_2 = 1.0f - Math_CosS((s16) (s32) (temp_fv1 * 450.0f));
            *arg2 = (temp_fv1_2 * temp_fv1_2 * 30.0f) + 7.0f;
        }
    } else {
        *arg2 *= 0.8f;
    }
    if (arg1->transformation == 0) {
        *arg2 *= 1.5f;
    }
    if (D_80862AFC != 0.0f) {
        temp_fv0 = Math_SinS(arg1->unk_B6C);
        temp_fv1_3 = arg1->unk_AB8;
        var_fa0 = arg1->unk_B50;
        if (temp_fv1_3 != 0.0f) {
            if (arg1->unk_730 != NULL) {
                var_fa1 = 0.002f;
            } else {
                var_fa1 = 0.008f;
            }
            var_fa0 -= temp_fv1_3 * var_fa1;
            if (var_fa0 < 2.0f) {
                var_fa0 = 2.0f;
            }
        }
        *arg2 = (*arg2 * 0.14f) - (8.0f * temp_fv0 * temp_fv0);
        temp_fv1_4 = *arg2;
        if (temp_fv1_4 < 0.0f) {
            *arg2 = 0.0f;
            return 1;
        }
        if (var_fa0 < temp_fv1_4) {
            var_fa1_2 = var_fa0;
        } else {
            var_fa1_2 = temp_fv1_4;
        }
        *arg2 = var_fa1_2;
        return 1;
    }
block_24:
    return 0;
}

void func_80832F24(Player* arg0) {
    Math_StepToF(arg0 + 0xAD0, 0.0f, (f32) gGameInfo->data[0x2B] / 100.0f);
}

s32 func_80832F78(f32* arg0, s16* arg1, f32 arg2, PlayState* arg3, Player* arg4) {
    s32 temp_v0;

    if (func_80832CAC(arg3, arg4, arg0, arg1, arg2, arg3) == 0) {
        *arg2 = (s16) arg0->unk_BE;
        temp_v0 = arg0->unk_730;
        if (temp_v0 != 0) {
            if ((arg4->unk_1E0B != 0) && !(arg0->unk_A70 & 0x40)) {
                *arg2 = Math_Vec3f_Yaw((Vec3f* ) (arg0 + 0x24), temp_v0 + 0x3C);
                return 0;
            }
            goto block_7;
        }
        if (func_80123434((Player* ) arg0) != 0) {
            *arg2 = (s16) arg0->unk_AD6;
        }
block_7:
        return 0;
    }
    *arg2 = (s16) (*arg2 + Camera_GetInputDirYaw((arg4 + (arg4->unk_810 * 4))->unk_800));
    return 1;
}

s32 func_80833058(PlayState* arg0, Player* arg1, s8* arg2, s8* arg3) {
    s8 var_v0;
    s8* var_s0;

    var_s0 = arg2;
    if (!(arg1->stateFlags1 & 0x20000081) && (func_8082DA90(arg0) == 0)) {
        if (arg3 != NULL) {
            D_80862B04 = func_8083216C(arg1, arg0);
            if (arg1->unk_748 == func_80852B28) {
                return 1;
            }
        }
        if (func_801240DC(arg1) != 0) {
            arg1->unk_AA6 |= 0x41;
            return 1;
        }
        if (((arg1->stateFlags3 * 2) >= 0) && (arg1->unk_AC4 != func_80848808)) {
            var_v0 = *var_s0;
            if (var_v0 >= 0) {
loop_10:
                if (D_8085D054[var_v0](arg1, arg0) != 0) {
                    return 1;
                }
                var_v0 = var_s0->unk_1;
                var_s0 += 1;
                if (var_v0 < 0) {
                    goto block_13;
                }
                goto loop_10;
            }
block_13:
            if (D_8085D054[-var_v0](arg1, arg0) != 0) {
                return 1;
            }
            goto block_15;
        }
block_15:
        if (func_8083213C(arg1) != 0) {
            return 1;
        }
        goto block_19;
    }
    if (arg1->stateFlags1 & 0x800) {
        func_8083216C(arg1, arg0);
    }
block_19:
    return 0;
}

s32 func_808331FC(Player* arg0, s8* arg1, SkelAnime* arg2, f32 arg3) {
    s16 sp24;
    ? sp22;

    if ((arg2->endFrame - arg3) <= arg2->curFrame) {
        if (func_80833058((bitwise PlayState* ) arg3, arg0, arg1, D_8085D01C, 1) != 0) {
            return 0;
        }
        if ((D_80862B04 != 0) || (func_80832F78((f32* ) arg1, &sp24, (bitwise f32) &sp22, (PlayState* )0x3C9374BC, arg0) != 0)) {
            return 1;
        }
        goto block_6;
    }
block_6:
    return -1;
}

void func_808332A0(PlayState* arg0, Player* arg1, s32 arg2, s32 arg3) {
    Actor* temp_v0;
    s16 var_v1;

    if (arg2 != 0) {
        arg1->unk_B08[0] = 0.0f;
    } else {
        arg1->unk_B08[0] = 0.5f;
    }
    arg1->stateFlags1 |= 0x1000;
    if ((arg1->actor.id == 0) && ((arg3 != 0) || (arg1->transformation == 4))) {
        var_v1 = 0;
        if (arg3 != 0) {
            temp_v0 = arg1->unk_730;
            if (temp_v0 != NULL) {
                var_v1 = Math_Vec3f_Pitch(arg1 + 0xBEC, temp_v0 + 0x3C);
            }
            if (gSaveContext.save.playerData.magic != 0) {
                goto block_10;
            }
        } else {
block_10:
            if ((Actor_Spawn(arg0 + 0x1CA0, arg0, 0x35, arg1->bodyPartsPos[0].x, arg1->bodyPartsPos[0].y, arg1->bodyPartsPos[0].z, (s16) (s32) var_v1, (s16) 0, (s16) 0, (arg1->itemActionParam - 3) | arg2) != NULL) && (arg3 != 0)) {
                func_80115DB4(arg0, 1, 7);
                arg1->unk_D57 = 4;
            }
        }
    }
}

s32 func_808333CC(Player* arg0) {
    s8 sp25;
    s8 sp24;
    s32 var_a1;
    s32 var_a1_2;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_t7;
    s8 temp_v1;
    s8 var_v0_2;
    s8 var_v0_3;
    s8* var_v0;
    s8* var_v1;
    s8* var_v1_2;

    var_v0 = arg0 + 0xADF;
    var_v1 = &sp24;
    if (arg0->itemActionParam == 7) {
        return 0;
    }
    var_a1 = 0;
loop_3:
    temp_a0 = *var_v0;
    var_a1 += 1;
    var_v0 += 1;
    *var_v1 = temp_a0;
    if (temp_a0 < 0) {
        return 0;
    }
    temp_t7 = *var_v1;
    var_v1 += 1;
    var_v1[1].unk_-1 = (s8) (temp_t7 * 2);
    if (var_a1 >= 4) {
        var_a1_2 = 1;
        temp_v1 = sp24 - sp25;
        if (temp_v1 < 0) {
            var_v0_2 = -temp_v1;
        } else {
            var_v0_2 = temp_v1;
        }
        var_v1_2 = &sp25;
        if (var_v0_2 < 0xA) {
            return 0;
        }
loop_11:
        var_a1_2 += 1;
        temp_a0_2 = var_v1_2->unk_0 - var_v1_2->unk_1;
        var_v0_3 = temp_a0_2;
        if (temp_a0_2 < 0) {
            var_v0_3 = -temp_a0_2;
        }
        if ((var_v0_3 < 0xA) || ((temp_a0_2 * temp_v1) < 0)) {
            return 0;
        }
        var_v1_2 += 1;
        if (var_a1_2 == 3) {
            return 1;
        }
        goto loop_11;
    }
    goto loop_3;
}

void func_808334D4(PlayState* arg0, Player* arg1) {
    LinkAnimationHeader* sp34;
    LinkAnimationHeader* var_a2;
    s8 temp_v0;

    temp_v0 = arg1->meleeWeaponAnimation;
    if ((temp_v0 >= 4) && (temp_v0 < 8)) {
        var_a2 = D_8085CF58[Player_IsHoldingTwoHandedWeapon(arg1)];
    } else {
        var_a2 = D_8085CF50[Player_IsHoldingTwoHandedWeapon(arg1)];
    }
    sp34 = var_a2;
    func_8082DC38(arg1);
    LinkAnimation_Change(arg0, &arg1->skelAnime, var_a2, 1.0f, 8.0f, (f32) Animation_GetLastFrame(sp34), (u8) 2, -9.0f);
    func_808332A0(arg0, arg1, 0x200, 0);
}

void func_808335B0(PlayState* arg0, Player* arg1) {
    func_80831494(arg0, arg1, func_8084CCEC, 1);
    func_808334D4(arg0, arg1);
}

s32 func_808335F4(Player* arg0) {
    s32 sp1C;
    s32 sp18;
    ?* var_a1;
    s8 temp_a1;
    s8 temp_v0_2;
    s8 var_v1;
    s8 var_v1_2;
    u8 temp_v0;

    temp_v0 = arg0->transformation;
    temp_a1 = (arg0 + arg0->unk_ADE)->unk_AE3;
    if ((temp_v0 == 2) || (temp_v0 == 1)) {
        if (temp_v0 == 2) {
            var_a1 = &D_8085D094;
        } else {
            var_a1 = &D_8085D097;
        }
        temp_v0_2 = arg0->unk_ADD;
        var_v1 = *(var_a1 + temp_v0_2);
        if (temp_v0_2 != 0) {
            arg0->meleeWeaponAnimation = var_v1;
            if (temp_v0_2 >= 2) {
                arg0->unk_ADD = -1;
            }
        }
    } else {
        sp1C = (s32) temp_a1;
        if (func_808333CC((Player* ) temp_a1) != 0) {
            var_v1_2 = 0x1E;
        } else {
            if (temp_a1 < 0) {
                if (func_8082FBE8(arg0) != 0) {
                    goto block_16;
                }
                var_v1_2 = 4;
            } else {
                var_v1_2 = *(&D_8085D090 + temp_a1);
                if (var_v1_2 == 0xC) {
                    arg0->stateFlags2 |= 0x40000000;
                    sp18 = (s32) var_v1_2;
                    if (func_8082FBE8(arg0) == 0) {
block_16:
                        var_v1_2 = 0;
                    }
                }
            }
            if (arg0->itemActionParam == 7) {
                var_v1_2 = 0;
            }
        }
        sp18 = (s32) var_v1_2;
        var_v1 = var_v1_2;
        if (Player_IsHoldingTwoHandedWeapon(arg0) != 0) {
            var_v1 += 1;
        }
    }
    return (s32) var_v1;
}

void func_80833728(Player* arg0, s32 arg1, s32 arg2, u8 arg3) {
    void* temp_v0;

    temp_v0 = arg0 + (arg1 << 7);
    temp_v0->unk_57C = arg2;
    temp_v0->unk_581 = arg3;
    if (arg2 == 2) {
        temp_v0->unk_591 = 0x15;
        return;
    }
    temp_v0->unk_591 = 5;
}

void func_8083375C(Player* arg0, s32 arg1) {
    struct _struct_D_8085D09C_0x8* sp24;
    s32 sp20;
    s32 var_a0;
    s32 var_a1;
    struct _struct_D_8085D09C_0x8* var_v0;
    u8 var_a3;
    u8 var_v1;

    var_a1 = arg1;
    var_v0 = D_8085D09C;
    if (arg0->actor.id == 0x159) {
        var_a1 = 0x18;
        arg0->meleeWeaponAnimation = -1;
    } else {
        if (arg0->transformation == 1) {
            var_a0 = 0;
        } else {
            var_a1 = arg1;
            var_a0 = Player_GetMeleeWeaponHeld(arg0);
        }
        var_v0 = &D_8085D09C[var_a0];
    }
    if ((var_a1 >= 0x10) && (var_a1 < 0x16)) {
        if (arg0->transformation == 4) {
            var_a3 = var_v0->unk_7;
        } else {
            var_a3 = var_v0->unk_5;
        }
    } else {
        if (arg0->transformation == 4) {
            var_v1 = var_v0->unk_6;
        } else {
            var_v1 = var_v0->unk_4;
        }
        var_a3 = var_v1;
    }
    sp20 = (s32) var_a3;
    sp24 = var_v0;
    func_80833728(arg0, 0, var_v0->unk_0, var_a3);
    func_80833728(arg0, 1, var_v0->unk_0, var_a3);
}

void func_80833864(PlayState* arg0, Player* arg1, s32 arg2) {
    struct _struct_D_8085CD30_0x10* sp24;
    s32 var_s1;
    struct _struct_D_8085CD30_0x10* temp_v0;

    var_s1 = arg2;
    func_8083375C(arg1, var_s1);
    func_80831494(arg0, arg1, func_808548B8, 0);
    arg1->unk_AE8 = 0;
    if ((var_s1 < 0x13) || (var_s1 >= 0x16)) {
        func_8082DC38(arg1);
    }
    if ((var_s1 != arg1->meleeWeaponAnimation) || (arg1->unk_ADD >= 3)) {
        arg1->unk_ADD = 0;
    }
    arg1->unk_ADD += 1;
    if (arg1->unk_ADD >= 3) {
        var_s1 += 2;
    }
    arg1->meleeWeaponAnimation = (s8) var_s1;
    temp_v0 = &D_8085CD30[var_s1];
    sp24 = temp_v0;
    func_8082DB90(arg0, arg1, temp_v0->unk_0);
    arg1->unk_ADC = (s8) (s32) (arg1->skelAnime.animLength + 4.0f);
    if (((u32) temp_v0 < (u32) &D_8085CE30) || ((u32) temp_v0 >= (u32) &D_8085CE60)) {
        func_8082E920(arg0, arg1, 0x19);
    }
    arg1->currentYaw = arg1->actor.shape.rot.y;
}

void func_80833998(Player* arg0, s8 arg1) {
    if (arg0->invincibilityTimer >= 0) {
        arg0->invincibilityTimer = arg1;
        arg0->unk_B5F = 0;
    }
}

void func_808339B4(Player* arg0, s8 arg1) {
    if (arg1 < arg0->invincibilityTimer) {
        arg0->invincibilityTimer = arg1;
    }
    arg0->unk_B5F = 0;
}

u8 func_808339D4(PlayState* arg0, Actor* arg1, s8 arg2) {
    s8 var_a2;

    var_a2 = arg2;
    if ((arg1->unk_D5C != 0) || ((arg1->unk_A74 << 9) < 0) || (arg1->id != 0)) {
        return 1U;
    }
    if (arg1->category != 2) {
        arg1->colChkInfo.damage = -var_a2;
        return Actor_ApplyDamage(arg1);
    }
    if (arg1->unk_153 == 0x14) {
        var_a2 = (s8) (var_a2 >> 2);
    }
    return Health_ChangeBy(arg0, (s16) var_a2);
}

void func_80833A64(Player* arg0) {
    Vec3s* temp_t6;

    temp_t6 = arg0->skelAnime.jointTable;
    arg0->unk_278 = (unaligned s32) temp_t6->unk_0;
    arg0->skelAnime.prevTransl.z = temp_t6->z;
    func_8082E820(arg0, 3);
}

void func_80833AA0(Player* arg0, PlayState* arg1) {
    if (func_80831494(arg1, arg0, func_8084C16C, 0) != 0) {
        func_8082DB3C(arg1, arg0, &D_0400DD30);
        arg0->unk_AE8 = 1;
    }
    if (arg0->unk_AA5 != 4) {
        arg0->unk_AA5 = 0;
    }
}

void func_80833B18(PlayState* arg0, Player* arg1, Player* arg2, f32 arg3, f32 arg4, s16 arg5, s32 arg6) {
    LinkAnimationHeader* sp2C;
    LinkAnimationHeader** sp28;
    LinkAnimationHeader** var_v1;
    LinkAnimationHeader** var_v1_2;
    s16 temp_v1;
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v0_3;
    u32 temp_v0;

    sp2C = NULL;
    if (arg1->stateFlags1 & 0x2000) {
        func_80833A64(arg1);
    }
    arg1->unk_B64 = 0;
    func_800B8E58(arg1, 0x83FU);
    if ((func_808339D4(arg0, &arg1->actor, -(s8) arg1->actor.colChkInfo.damage) != 0) || ((arg1->stateFlags2 &= ~0x80, ((arg1->actor.bgCheckFlags & 1) == 0)) && ((arg1->stateFlags1 * 0x10) >= 0))) {
        if (arg1->actor.colChkInfo.damage != 0) {
            func_80833998(arg1, (s8) arg6);
        }
        if (!(arg1->stateFlags2 & 0x10)) {
            if (arg2 == (Player* )3) {
                func_80831494(arg0, arg1, func_808546D0, 0);
                sp2C = &D_0400DCD0;
                func_8082DAD4(arg1);
                arg1->actor.velocity.y = 0.0f;
                func_8082DF48(arg0, arg1, 0xFFU, 0xAU, (u8) 0x28, 0);
                func_800B8E58(arg1, 0x874U);
                func_8082DF8C(arg1, 0x6806U);
                goto block_47;
            }
            if (arg2 == (Player* )4) {
                func_80831494(arg0, arg1, func_80854800, 0);
                func_8082DB60(arg0, arg1, &D_0400DC20);
                func_8082DAD4(arg1);
                arg1->unk_AE8 = 0x14;
                arg1->actor.velocity.y = 0.0f;
                func_8082DF48(arg0, arg1, 0xFFU, 0x50U, (u8) 0x96, 0);
                goto block_47;
            }
            arg5 -= arg1->actor.shape.rot.y;
            temp_v0 = arg1->stateFlags1;
            if ((temp_v0 * 0x10) < 0) {
                func_80831494(arg0, arg1, func_80851B58, 0);
                func_8082DF48(arg0, arg1, 0xB4U, 0x14U, (u8) 0x32, 0);
                if (arg2 == (Player* )1) {
                    arg1->linearVelocity = arg3 * 1.5f;
                    arg1->actor.velocity.y = arg4 * 0.7f;
                } else {
                    arg1->linearVelocity = 4.0f;
                    arg1->actor.velocity.y = 0.0f;
                }
                func_8082DF8C(arg1, 0x6805U);
                sp2C = &D_0400DFF8;
                goto block_43;
            }
            if ((arg2 == (Player* )1) || (arg2 == (Player* )2) || !(arg1->actor.bgCheckFlags & 1) || (temp_v0 & 0x206004)) {
                func_80831494(arg0, arg1, func_8084BC64, 0);
                arg1->stateFlags3 |= 2;
                func_8082DF48(arg0, arg1, 0xFFU, 0x14U, (u8) 0x96, 0);
                func_8082DAD4(arg1);
                if (arg2 == (Player* )2) {
                    arg1->unk_AE8 = 4;
                    arg1->actor.speedXZ = 3.0f;
                    arg1->linearVelocity = 3.0f;
                    arg1->actor.velocity.y = 6.0f;
                    func_8082E5A8(arg0, arg1, (D_8085BE84 + 0x48)[arg1->modelAnimType]);
                    func_8082DF8C(arg1, 0x6805U);
                } else {
                    arg1->actor.speedXZ = arg3;
                    arg1->linearVelocity = arg3;
                    var_v0 = arg5;
                    arg1->actor.velocity.y = arg4;
                    if (arg5 < 0) {
                        var_v0 = -arg5;
                    }
                    if (var_v0 >= 0x4001) {
                        sp2C = &D_0400DC78;
                    } else {
                        sp2C = &D_0400DAD0;
                    }
                    func_8082DF8C(arg1, 0x6808U);
                }
                arg1->actor.bgCheckFlags &= 0xFFFE;
                goto block_43;
            }
            if ((arg1->linearVelocity > 4.0f) && (func_80123420(arg1) == 0)) {
                arg1->unk_B64 = 0x14;
                func_8082DF48(arg0, arg1, 0x78U, 0x14U, (u8) 0xA, 0);
                func_8082DF8C(arg1, 0x6805U);
                return;
            }
            sp28 = D_8085D0D4;
            func_80831494(arg0, arg1, func_8084BBF0, 0);
            func_8082FC60(arg1);
            if ((s32) arg1->actor.colChkInfo.damage < 5) {
                sp28 = D_8085D0D4;
                func_8082DF48(arg0, arg1, 0x78U, 0x14U, (u8) 0xA, 0);
                var_v1 = D_8085D0D4;
            } else {
                func_8082DF48(arg0, arg1, 0xB4U, 0x14U, (u8) 0x64, 0);
                var_v1 = D_8085D0E4;
                arg1->linearVelocity = 23.0f;
            }
            var_v0_2 = arg5;
            if (arg5 < 0) {
                var_v0_2 = -arg5;
            }
            if (var_v0_2 < 0x4001) {
                var_v1 += 8;
            }
            sp28 = var_v1;
            var_v1_2 = var_v1;
            if (func_80123420(arg1) != 0) {
                var_v1_2 += 4;
            }
            sp2C = *var_v1_2;
            func_8082DF8C(arg1, 0x6805U);
block_43:
            var_v0_3 = arg5;
            arg1->actor.shape.rot.y += arg5;
            temp_v1 = arg1->actor.shape.rot.y;
            arg1->currentYaw = temp_v1;
            arg1->actor.world.rot.y = temp_v1;
            if (arg5 < 0) {
                var_v0_3 = -arg5;
            }
            if (var_v0_3 >= 0x4001) {
                arg1->actor.shape.rot.y = temp_v1 + 0x8000;
            }
block_47:
            func_8082DE50(arg0, arg1);
            arg1->stateFlags1 |= 0x04000000;
            if (sp2C != NULL) {
                func_8082DB90(arg0, arg1, sp2C);
            }
        }
    }
}

s32 func_808340AC(u32 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 - 2;
    if ((temp_v0 >= 0) && (temp_v0 < 2)) {
        return temp_v0;
    }
    return -1;
}

s32 func_808340D4(u32 arg0) {
    s32 var_v0;

    var_v0 = arg0 == 4;
    if (var_v0 == 0) {
        var_v0 = arg0 == 7;
        if (var_v0 == 0) {
            var_v0 = arg0 == 0xC;
        }
    }
    return var_v0;
}

void func_80834104(PlayState* arg0, Player* arg1) {
    func_80831494(arg0, arg1, func_8085421C, 0);
    arg1->stateFlags1 |= 0xA0000000;
}

void func_80834140(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    if (!(arg1->stateFlags1 & 0x80)) {
        func_80834104(arg0, arg1);
        if (func_8082DA90(arg0) != 0) {
            arg1->unk_AE8 = -0x1E;
        }
        arg1->stateFlags1 |= 0x80;
        LinkAnimation_Change(arg0, &arg1->skelAnime, arg2, 1.0f, 0.0f, 84.0f, (u8) 2, -6.0f);
        arg1->unk_AE7 = 1;
        arg1->linearVelocity = 0.0f;
    }
}

s32 func_808341F4(PlayState* arg0, Player* arg1) {
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_fa1;
    f32 var_fv0;
    f32 var_fv1;
    s16 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    u8 temp_t3;
    u8 temp_v0;
    u8 temp_v0_2;
    u8* var_s1;

    temp_v0 = arg1->transformation;
    var_s3 = 0;
    var_s1 = arg1 + 0xD45;
    if ((temp_v0 == 2) || (temp_v0 == 3)) {
        var_s2 = 0;
        if (arg1->actor.bgCheckFlags & 1) {
            if (arg1->cylinder.base.ocFlags1 & 2) {
                Math_Vec3f_Copy(arg1 + 0x24, arg1 + 0x108);
                arg1->linearVelocity = 0.0f;
            }
            func_80834140(arg0, arg1, &D_0400D698);
        }
    } else {
        if (temp_v0 == 1) {
            var_v1 = 0x14;
        } else {
            var_v1 = (s32) (arg1->linearVelocity * 0.4f) + 1;
        }
        var_v0 = 0;
        if (arg1->stateFlags2 & 8) {
            var_v0 = 0x64;
        }
        var_s2 = var_v0 + var_v1;
    }
    var_s0 = 0;
    do {
        temp_v0_2 = *var_s1;
        temp_t3 = temp_v0_2 - var_s2;
        if (var_s2 >= (s32) temp_v0_2) {
            *var_s1 = 0;
        } else {
            var_s3 = 1;
            *var_s1 = temp_t3;
            temp_fa0 = (f32) (temp_t3 & 0xFF);
            if (temp_fa0 > 20.0f) {
                temp_fv0 = (temp_fa0 - 20.0f) * 0.01f;
                if (temp_fv0 < 0.19999999f) {
                    var_fa1 = 0.19999999f;
                } else if (temp_fv0 > 0.2f) {
                    var_fa1 = 0.2f;
                } else {
                    var_fa1 = temp_fv0;
                }
            } else {
                var_fa1 = temp_fa0 * 0.01f;
            }
            temp_fv0_2 = (temp_fa0 - 25.0f) * 0.02f;
            if (temp_fv0_2 < 0.0f) {
                var_fv0 = 0.0f;
            } else {
                if (temp_fv0_2 > 1.0f) {
                    var_fv1 = 1.0f;
                } else {
                    var_fv1 = temp_fv0_2;
                }
                var_fv0 = var_fv1;
            }
            EffectSsFireTail_SpawnFlameOnPlayer(temp_fa0, var_fa1, arg0, var_fa1, var_s0, var_fv0);
        }
        var_s0 += 1;
        var_s1 += 1;
    } while (var_s0 != 0x12);
    if (var_s3 != 0) {
        func_800B8E58(arg1, 0x2031U);
        if (!(arg0->gameplayFrames & 3)) {
            func_8085B3E0(arg0, -1);
        }
    } else {
        arg1->isBurning = 0;
    }
    return arg1->stateFlags1 & 0x80;
}

void func_808344C0(PlayState* arg0, Player* arg1) {
    Player* var_s1;
    s32 var_s0;

    var_s0 = 0;
    var_s1 = arg1;
    do {
        var_s0 += 1;
        var_s1->flameTimers[0] = Rand_S16Offset(0, 0xC8);
        var_s1 += 1;
    } while (var_s0 != 0x12);
    arg1->isBurning = 1;
    func_808341F4(arg0, arg1);
}

void func_80834534(PlayState* arg0, Player* arg1) {
    func_8082DF8C(arg1, 0x6808U);
    func_808344C0(arg0, arg1);
}

s32 func_8083456C(PlayState* arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1->unk_BB == 1) {
        var_v0 = func_80834534();
    }
    return var_v0;
}

void func_808345A8(Player* arg0) {
    s8 temp_v0;

    temp_v0 = arg0->invincibilityTimer;
    if ((temp_v0 > 0) && (temp_v0 < 0x14)) {
        arg0->invincibilityTimer = 0x14;
    }
}

void func_808345C8(void) {
    if (gSaveContext.save.inventory.items[gItemSlots[0x32]] == 0x32) {
        gSaveContext.save.playerForm = 4;
        gSaveContext.save.equippedMask = 0;
    }
}

s32 func_80834600(Player* arg0, PlayState* arg1) {
    s32 sp70;
    s32 sp6C;
    s32 sp64;
    Actor* sp60;
    Player* sp5C;
    s32 sp58;
    u32 sp54;
    CollisionContext* sp38;
    Actor* temp_t5;
    ColliderInfo* temp_v0_2;
    CollisionContext* temp_a0_2;
    CollisionPoly* temp_a1;
    LinkAnimationHeader* var_a2;
    Player* var_a2_2;
    Player* var_a2_3;
    s16 var_v1_3;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;
    s8 temp_v1;
    u32 temp_a0;
    u32 temp_a3;
    u32 temp_v0_4;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 var_v1_2;

    if (arg0->unk_D6A != 0) {
        if (Player_InBlockingCsMode(arg1, arg0) == 0) {
            func_8085B3E0(arg1, -0x10);
            arg0->unk_D6A = 0;
        }
        goto block_95;
    }
    var_v0 = 0;
    if ((Player_GetHeight(arg0) - 8.0f) < (arg0->unk_AB8 * arg0->actor.scale.y)) {
        var_v0 = 1;
    }
    if ((var_v0 != 0) || (arg0->actor.bgCheckFlags & 0x100) || (temp_a0 = D_80862B08, (temp_a0 == 9)) || (arg0->stateFlags2 & 0x80000000)) {
        sp70 = var_v0;
        func_8082DF8C(arg0, 0x6805U);
        if (var_v0 != 0) {
            func_80169FDC(&arg1->state);
            func_808345C8();
            Scene_SetExitFade(arg1);
        } else {
            func_80169EFC(&arg1->state);
            func_808345C8();
        }
        func_8082DF8C(arg0, 0x680CU);
        arg1->unk_18845 = 1;
        play_sound(0x5801U);
        goto block_95;
    }
    temp_v0 = arg0->unk_B75;
    if ((temp_v0 != 0) && (((s32) temp_v0 >= 3) || (arg0->invincibilityTimer == 0))) {
        sp6C = D_8085D0F4;
        if (func_8083456C(arg1, arg0) == 0) {
            if (arg0->unk_B75 == 4) {
                arg0->unk_B65 = 0x28;
            }
            arg0->actor.colChkInfo.damage += arg0->unk_B74;
            func_80833B18(arg1, arg0, (Player* ) (sp + arg0->unk_B75)->unk_6B, arg0->unk_B78, arg0->unk_B7C, (s16) (s32) arg0->unk_B76, 0x14);
        }
        goto block_95;
    }
    if ((arg0->shieldQuad.base.acFlags & 0x80) || (arg0->shieldCylinder.base.acFlags & 0x80) || ((temp_v1 = arg0->invincibilityTimer, (temp_v1 < 0)) && (arg0->cylinder.base.acFlags & 2) && (temp_v0_2 = arg0->cylinder.info.acHitInfo, (temp_v0_2 != NULL)) && (temp_v0_2->toucher.dmgFlags != 0x20000000))) {
        func_8082DF48(arg1, arg0, 0xB4U, 0x14U, (u8) 0x64, 0);
        if ((arg0->invincibilityTimer >= 0) && (Player_IsGoronOrDeku(arg0) == 0)) {
            sp64 = (s32) arg0->unk_748 == (s32) func_8084B5C0;
            if (func_801242B4(arg0) == 0) {
                func_80831494(arg1, arg0, func_8084BAA4, 0);
            }
            arg0->unk_AE7 = (s8) sp64;
            if ((s8) sp64 == 0) {
                func_8082F43C(arg1, arg0, func_80848A0C);
                if (arg0->unk_B40 < 0.5f) {
                    var_a2 = D_8085CFD4[Player_IsHoldingTwoHandedWeapon(arg0)];
                } else {
                    var_a2 = D_8085CFCC[Player_IsHoldingTwoHandedWeapon(arg0)];
                }
                LinkAnimation_PlayOnce(arg1, &arg0->unk_284, var_a2);
            } else {
                func_8082DB18(arg1, arg0, D_8085CFDC[Player_IsHoldingTwoHandedWeapon(arg0)]);
            }
        }
        if (!(arg0->stateFlags1 & 0x206004)) {
            arg0->linearVelocity = -18.0f;
            arg0->currentYaw = arg0->actor.shape.rot.y;
        }
        return 0;
    }
    if ((arg0->unk_D6B != 0) || (temp_v1 > 0) || ((arg0->stateFlags1 << 5) < 0) || (arg0->csMode != 0) || (arg0->meleeWeaponQuads[0].base.atFlags & 2) || (arg0->meleeWeaponQuads[1].base.atFlags & 2) || (arg0->cylinder.base.atFlags & 2) || (arg0->shieldCylinder.base.atFlags & 2)) {
        return 0;
    }
    if (arg0->cylinder.base.acFlags & 2) {
        temp_t5 = arg0->cylinder.base.ac;
        sp60 = temp_t5;
        if (temp_t5->flags & 0x01000000) {
            func_800B8E58(arg0, 0x83EU);
        }
        temp_v0_3 = arg0->actor.colChkInfo.acHitEffect;
        if (temp_v0_3 == 2) {
            var_a2_2 = (Player* )3;
            goto block_66;
        }
        if (temp_v0_3 == 3) {
            var_a2_2 = (Player* )4;
            goto block_66;
        }
        var_a2_2 = (Player* )1;
        if (temp_v0_3 == 7) {
            arg0->unk_B65 = 0x28;
            goto block_66;
        }
        if (temp_v0_3 == 9) {
            sp5C = (Player* )1;
            var_a2_2 = (Player* )1;
            if (func_80834534(arg1, arg0, (Player* )1) != 0) {

            } else {
                goto block_66;
            }
        } else {
            if (((temp_v0_3 == 4) && (arg0->currentMask != 0x14)) || (arg0->stateFlags3 & 0x1000)) {
                var_a2_2 = (Player* )1;
                goto block_66;
            }
            sp5C = NULL;
            var_a2_2 = sp5C;
            if (func_8083456C(arg1, arg0, (Player* )1) != 0) {

            } else {
block_66:
                sp5C = var_a2_2;
                func_80833B18(arg1, arg0, var_a2_2, 4.0f, 5.0f, (s16) Actor_YawBetweenActors(sp60, &arg0->actor), 0x14);
            }
        }
        goto block_95;
    }
    if (temp_v1 != 0) {
        return 0;
    }
    sp58 = func_808340AC(temp_a0, arg0, 0xB4U, 0x14U);
    temp_a0_2 = &arg1->colCtx;
    sp38 = temp_a0_2;
    temp_v0_4 = SurfaceType_IsWallDamage(temp_a0_2, arg0->actor.floorPoly, (s32) arg0->actor.floorBgId);
    temp_a3 = temp_v0_4;
    var_a1 = 0;
    if ((sp58 < 0) || ((temp_v0_4 == 0) && (arg0->transformation == 1) && !(arg0->actor.depthInWater > 0.0f))) {
        temp_a1 = arg0->actor.wallPoly;
        var_v1 = temp_a1 != NULL;
        if (var_v1 != 0) {
            sp54 = temp_a3;
            var_v1 = SurfaceType_IsWallDamage(temp_a0_2, temp_a1, (s32) arg0->actor.wallBgId) != 0;
        }
        var_a1 = var_v1;
        if (var_v1 != 0) {
            goto block_76;
        }
        return 0;
    }
block_76:
    temp_v0_5 = arg0->transformation;
    if (var_a1 != 0) {
        var_v1_2 = arg0->actor.wallBgId;
    } else {
        var_v1_2 = arg0->actor.floorBgId;
    }
    if (((temp_v0_5 == 3) || (temp_v0_5 == 2)) && (sp58 >= 0) && (temp_a3 == 0) && ((arg0->stateFlags1 * 0x10) >= 0) && (arg0->actor.bgCheckFlags & 1) && (arg0->actor.depthInWater < -30.0f)) {
        func_80834534(arg1, arg0);
    } else {
        arg0->actor.colChkInfo.damage = 4;
        if (var_v1_2 == 0x32) {
            var_a2_3 = NULL;
        } else {
            var_a2_3 = (Player* )1;
        }
        if (var_a1 != 0) {
            var_v1_3 = arg0->actor.wallYaw;
        } else {
            var_v1_3 = arg0->actor.shape.rot.y;
        }
        func_80833B18(arg1, arg0, var_a2_3, 4.0f, 5.0f, (s16) (s32) var_v1_3, 0x14);
    }
block_95:
    return 1;
}

void func_80834CD0(Player* arg0, f32 arg1, u16 arg2) {
    u16 temp_a1;

    temp_a1 = arg2 & 0xFFFF;
    arg0->actor.bgCheckFlags &= 0xFFFE;
    arg0->actor.velocity.y = arg1 * D_8085C3E4;
    if (temp_a1 != 0) {
        arg2 = temp_a1;
        func_8082E188(arg0);
        func_8082DF8C(arg0, arg2);
    }
    arg0->stateFlags1 |= 0x40000;
    arg0->unk_B68 = (s16) (s32) arg0->actor.world.pos.y;
}

void func_80834D50(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2, f32 arg3, u16 arg4) {
    func_80831494(arg0, arg1, func_8084C16C, 1);
    if (arg2 != NULL) {
        func_8082DB90(arg0, arg1, arg2);
    }
    func_80834CD0(arg1, arg3, arg4);
}

void func_80834DB8(LinkAnimationHeader* arg0, f32 arg1, PlayState* arg2, Player* arg3) {
    func_80834D50(arg2, arg3, arg0, arg1, (u16) arg2, 0x6800);
}

s32 func_80834DFC(Player* arg0, PlayState* arg1) {
    s32 sp5C;
    LinkAnimationHeader* sp58;
    f32 sp54;
    CollisionPoly* sp4C;
    s32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    CollisionContext* sp28;
    CollisionContext* temp_a0;
    CollisionPoly* temp_v0_3;
    PlayerAgeProperties* temp_v0_4;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 var_fv0;
    f32 var_fv0_2;
    s16 temp_v1;
    s32 var_v1;
    u32 temp_v0_2;
    u8 temp_v0;

    temp_v0 = arg0->transformation;
    if ((temp_v0 != 1) && ((temp_v0 != 3) || (func_801242B4(arg0) != 0) || ((s32) arg0->unk_B5C < 4))) {
        temp_v0_2 = arg0->stateFlags1;
        if (!(temp_v0_2 & 0x800) && ((s32) arg0->unk_B5C >= 2) && (((temp_v0_2 * 0x10) >= 0) || (arg0->unk_B54 < arg0->ageProperties->unk_14))) {
            sp5C = 0;
            var_v1 = sp5C;
            if (func_801242B4(arg0) != 0) {
                if (arg0->transformation == 0) {
                    var_fv0 = 80.0f;
                } else {
                    var_fv0 = 50.0f;
                }
                if (arg0->actor.depthInWater < var_fv0) {
                    if (((s32) arg0->unk_B5C < 2) || (arg0->ageProperties->unk_10 < arg0->unk_B54)) {
                        goto block_48;
                    }
                    goto block_23;
                }
                if ((arg0->currentBoots < 5) || ((s32) arg0->unk_B5C >= 3)) {
                    goto block_48;
                }
                goto block_23;
            }
            if (!(arg0->actor.bgCheckFlags & 1) || ((arg0->ageProperties->unk_14 <= arg0->unk_B54) && ((arg0->stateFlags1 * 0x10) < 0))) {
                goto block_48;
            }
block_23:
            if ((arg0->actor.wallBgId != 0x32) && (D_80862B0C & 0x40)) {
                if ((s32) arg0->unk_B5D >= 6) {
                    arg0->stateFlags2 |= 4;
                    if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
                        goto block_30;
                    }
                }
            } else if (((s32) arg0->unk_B5D >= 6) || (~(D_80862B44->press.button | 0xFFFF7FFF) == 0)) {
block_30:
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                func_80831494(arg1, arg0, func_8084D4EC, 0);
                temp_fv0 = arg0->unk_B54;
                if (arg0->ageProperties->unk_14 <= temp_fv0) {
                    sp58 = &D_0400DA70;
                    arg0->linearVelocity = 1.0f;
                } else {
                    temp_v0_3 = arg0->actor.wallPoly;
                    sp44 = (f32) temp_v0_3->normal.x * 0.00003051851f;
                    sp40 = (f32) temp_v0_3->normal.z * 0.00003051851f;
                    temp_fv1 = arg0->unk_B58 + 0.5f;
                    arg0->stateFlags1 |= 4;
                    sp54 = temp_fv0;
                    sp3C = temp_fv1;
                    if (func_801242B4(arg0) != 0) {
                        sp58 = &D_0400DFC8;
                        arg0->stateFlags1 &= 0xF7FFFFFF;
                        var_fv0_2 = temp_fv0 - (60.0f * arg0->ageProperties->unk_08);
                    } else {
                        temp_v0_4 = arg0->ageProperties;
                        if (temp_v0_4->unk_18 <= temp_fv0) {
                            sp58 = &D_0400DA68;
                            var_fv0_2 = temp_fv0 - (59.0f * temp_v0_4->unk_08);
                        } else {
                            sp58 = &D_0400DA60;
                            var_fv0_2 = temp_fv0 - (41.0f * temp_v0_4->unk_08);
                        }
                    }
                    arg0->unk_ABC -= var_fv0_2 * 100.0f;
                    arg0->actor.world.pos.x -= temp_fv1 * sp44;
                    arg0->actor.world.pos.y += arg0->unk_B54 + 10.0f;
                    arg0->actor.world.pos.z -= temp_fv1 * sp40;
                    temp_a0 = &arg1->colCtx;
                    sp28 = temp_a0;
                    temp_fv0_2 = BgCheck_EntityRaycastFloor5(temp_a0, &sp4C, &sp48, &arg0->actor, &arg0->actor.world.pos);
                    if ((arg0->actor.world.pos.y - temp_fv0_2) <= 20.0f) {
                        arg0->actor.world.pos.y = temp_fv0_2;
                        if (sp48 != 0x32) {
                            DynaPolyActor_SetRidingMovingStateByIndex(sp28, sp48);
                        }
                    }
                    func_8082DAD4(arg0);
                    arg0->actor.velocity.y = 0.0f;
                }
                arg0->actor.bgCheckFlags |= 1;
                LinkAnimation_PlayOnceSetSpeed(arg1, &arg0->skelAnime, sp58, 1.3f);
                AnimationContext_DisableQueue(arg1);
                temp_v1 = arg0->actor.wallYaw + 0x8000;
                arg0->currentYaw = temp_v1;
                arg0->actor.shape.rot.y = temp_v1;
                return 1;
            }
            goto block_48;
        }
    }
    if ((arg0->actor.bgCheckFlags & 1) && (arg0->unk_B5C == 1) && ((s32) arg0->unk_B5D >= 3)) {
        func_80834DB8((LinkAnimationHeader* ) arg0, (bitwise f32) &D_0400DCD8, (bitwise PlayState* ) ((arg0->unk_B54 * 0.08f) + 5.5f), (Player* ) arg1);
        arg0->linearVelocity = 2.5f;
        return 1;
    }
block_48:
    return 0;
}

void func_80835324(PlayState* arg0, Player* arg1, f32 arg2, s16 arg3) {
    func_80831494(arg0, arg1, func_8084D820, 0);
    func_8082DD2C(arg0, arg1);
    arg1->unk_A86 = -1;
    arg1->unk_AE7 = 1;
    arg1->unk_AE8 = (s16) 1;
    arg1->unk_3A0.x = (Math_SinS(arg3) * arg2) + arg1->actor.world.pos.x;
    arg1->unk_3A0.z = (Math_CosS(arg3) * arg2) + arg1->actor.world.pos.z;
    func_8082DB18(arg0, arg1, func_8082ED20(arg1));
}

void func_808353DC(PlayState* arg0, Player* arg1) {
    func_80831494(arg0, arg1, func_808508C8, 0);
    func_8082E634(arg0, arg1, &D_0400E000);
}

s32 func_80835428(PlayState* arg0, Player* arg1) {
    if ((func_8082DA90(arg0) == 0) && (arg1->stateFlags1 & 0x80000000)) {
        func_80834104(arg0, arg1);
        func_8082DB3C(arg0, arg1, &D_0400DD30);
        func_8082DF8C(arg1, 0x6807U);
        func_8019F128(0x5803U);
        return 1;
    }
    return 0;
}

void func_808354A4(PlayState* arg0, s32 arg1, s32 arg2) {
    u16 temp_a3;

    arg0->nextEntranceIndex = *(arg0->setupExitList + (arg1 * 2));
    temp_a3 = arg0->nextEntranceIndex;
    if (temp_a3 == 0xFFFF) {
        gSaveContext.respawnFlag = 4;
        arg0->nextEntranceIndex = gSaveContext.respawn[3].entranceIndex;
        arg0->unk_1887F = 3;
        gSaveContext.nextTransition = 3;
    } else if ((s32) temp_a3 >= 0xFE00) {
        arg0->nextEntranceIndex = *(&D_8085D0F8 + (((D_8085B9F0 - 0xE6F4)[temp_a3] * 2) + (arg0->curSpawn * 2)));
        Scene_SetExitFade(arg0);
    } else {
        if (arg2 != 0) {
            gSaveContext.respawn[0].entranceIndex = temp_a3;
            func_80169EFC(&arg0->state);
            gSaveContext.respawnFlag = -2;
        }
        gSaveContext.unk_3DBB = 1;
        Scene_SetExitFade(arg0);
    }
    arg0->sceneLoadFlag = 0x14;
}

void func_808355D8(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_80833AA0(arg1, arg0);
    arg1->unk_AE8 = -2;
    func_8082E5EC(arg0, arg1, arg2);
    func_8082E1F0(arg1, 0x1852U);
}

s32 func_8083562C(PlayState* arg0, Actor* arg1, CollisionPoly* arg2, s32 arg3) {
    u32 sp3C;
    s32 sp34;
    s32 sp30;
    CollisionContext* sp28;
    s16 temp_v1;
    s32 temp_t8;
    u32 temp_v0;
    u32 temp_v0_3;
    u32 var_a3;
    u8 temp_v0_2;
    u8 temp_v0_4;

    if ((arg1 == arg0->actorCtx.actorLists[2].first) && !(arg1->unk_A6C & 0x80) && (func_8082DA90(arg0) == 0) && (arg1->unk_394 == 0) && !(arg1->unk_A6C & 1)) {
        var_a3 = 0;
        if (((arg2 != NULL) && (temp_v0 = SurfaceType_GetSceneExitIndex(&arg0->colCtx, arg2, arg3), var_a3 = temp_v0, (temp_v0 != 0)) && (((temp_v1 = arg0->sceneNum, (temp_v1 != 0x6B)) && (temp_v1 != 0x3E)) || ((s32) temp_v0 < 3)) && (((temp_v1 != 0x45) && (temp_v1 != 0)) || ((s32) temp_v0 < 0x15)) && ((temp_v1 != 0x4D) || ((s32) temp_v0 < 6))) || ((sp3C = var_a3, (func_808340D4(D_80862B08) != 0)) && (arg1->unk_D5E == 0xC))) {
            temp_t8 = arg1->unk_D68 - (s32) arg1->world.pos.y;
            sp34 = temp_t8;
            if (!(arg1->unk_A6C & 0x28800000) && !(arg1->bgCheckFlags & 1) && (temp_t8 < 0x190) && (D_80862B18 > 100.0f)) {
                temp_v0_2 = arg1->unk_D5E;
                if ((temp_v0_2 != 5) && (temp_v0_2 != 0xC)) {
                    arg1->unk_AD0 = 0.0f;
                }
                goto block_78;
            }
            if (arg1->unk_A74 & 0x01000000) {
                sp3C = var_a3;
                func_808355D8(arg0, (Player* ) arg1, &D_0400E2D8, var_a3);
            }
            if (var_a3 == 0) {
                func_80169EFC(&arg0->state);
                Scene_SetExitFade(arg0);
            } else {
                sp3C = var_a3;
                func_808354A4(arg0, var_a3 - 1, SurfaceType_GetSlope(&arg0->colCtx, arg2, arg3) == 2, var_a3);
                if (((arg1->unk_A6C * 0x10) < 0) && (arg1->unk_D5E == 5)) {
                    func_8019F128(0x5807U);
                    func_801A4058(5);
                    gSaveContext.seqIndex = 0xFF;
                    gSaveContext.nightSeqIndex = 0xFF;
                } else if (!(arg1->bgCheckFlags & 1) && (arg1->unk_D5E == 0xC)) {
                    func_8019F128(0x5803U);
                }
                if (arg1->unk_A6C & 0x800000) {
                    if (D_801BDAA0 != 0) {
                        D_801BDAA0 = 0;
                    } else {
                        D_801BDA9C = 1;
                    }
                }
            }
            if (!(arg1->unk_A6C & 0x28800000) && (temp_v0_3 = func_800C99D4(&arg0->colCtx, arg2, arg3), (temp_v0_3 != 0xA)) && ((sp34 < 0x64) || (arg1->bgCheckFlags & 1))) {
                if (temp_v0_3 == 0xB) {
                    func_8019F128(0x5805U);
                    func_801A4058(5);
                    gSaveContext.seqIndex = 0xFF;
                    gSaveContext.nightSeqIndex = 0xFF;
                } else {
                    func_8085B74C(arg0);
                }
            } else if (!(arg1->bgCheckFlags & 1)) {
                func_8082DABC((Player* ) arg1);
            }
            Camera_ChangeSetting(Play_GetCamera(arg0, 0), 0x50);
            arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000001);
            return 1;
        }
        if (((arg1->unk_A6C * 0x10) < 0) && (arg1->floorPoly == NULL)) {
            BgCheck_EntityRaycastFloor7(&arg0->colCtx, arg1 + 0x80, &sp30, arg1, arg1 + 0x24);
            if (arg1->floorPoly == NULL) {
                func_80169EFC(&arg0->state);
            } else {
                goto block_56;
            }
        } else {
block_56:
            if (((arg1->unk_A6C << 0) >= 0) && ((arg1->world.pos.y < -4000.0f) || (((temp_v0_4 = arg1->unk_D5E, (temp_v0_4 == 5)) || (temp_v0_4 == 0xC) || (temp_v0_4 == 0xD)) && ((D_80862B18 < 100.0f) || (arg1->unk_B6A >= 0x191))))) {
                if (arg1->bgCheckFlags & 1) {
                    sp28 = &arg0->colCtx;
                    if (arg1->unk_D5E == 5) {
                        func_80169FDC(&arg0->state);
                        func_808345C8();
                    } else {
                        func_80169EFC(&arg0->state);
                    }
                    if (SurfaceType_IsWallDamage(sp28, arg1->floorPoly, (s32) arg1->floorBgId) == 0) {
                        gSaveContext.respawnFlag = -5;
                    }
                    arg0->unk_1887F = 4;
                    play_sound(0x5801U);
                } else {
                    if (arg1->unk_A74 & 0x01000000) {
                        func_808355D8(arg0, (Player* ) arg1, &D_0400E2D8);
                    }
                    if (arg1->unk_D5E == 0xD) {
                        func_80831494(arg0, (Player* ) arg1, func_808497A0, 0);
                        arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
                    } else {
                        func_80834104(arg0, (Player* ) arg1);
                        arg1->unk_AE8 = 0x270F;
                        if (arg1->unk_D5E == 5) {
                            arg1->unk_AE7 = -1;
                        } else {
                            arg1->unk_AE7 = 1;
                        }
                    }
                }
            }
            arg1->unk_D68 = (s16) (s32) arg1->world.pos.y;
        }
        goto block_78;
    }
block_78:
    return 0;
}

void func_80835BC8(Player* this, Vec3f* arg1, Vec3f* arg2, Vec3f* arg3) {
    Lib_Vec3f_TranslateAndRotateY(arg1, this->actor.shape.rot.y, arg2, arg3);
}

void func_80835BF8(PosRot* arg0, s16 arg1, f32 arg2, Vec3f* arg3) {
    arg3->x = (Math_SinS(arg1) * arg2) + arg0->pos.x;
    arg3->z = (Math_CosS(arg1) * arg2) + arg0->pos.z;
}

void func_80835C64(PlayState* arg0, Player* arg1, Vec3f* arg2, Vec3f* arg3, s32 arg4) {
    Vec3f sp34;

    func_80835BC8(arg1, arg2, arg3, &sp34);
    Actor_Spawn(arg0 + 0x1CA0, arg0, 0x10, (bitwise f32) sp34, sp34.y, sp34.z, (s16) 0, (s16) 0, (s16) 0, arg4);
}

void func_80835CD8(PlayState* arg0, Player* arg1, Vec3f* arg2, Vec3f* arg3, CollisionPoly** arg4, s32* arg5) {
    func_80835BC8(arg1, arg1 + 0x24, arg2, arg3);
    BgCheck_EntityRaycastFloor5(arg0 + 0x830, arg4, arg5, &arg1->actor, arg3);
}

void func_80835D2C(void) {
    ? sp24;
    ? sp20;

    func_80835CD8((PlayState* ) &sp24, (Player* ) &sp20);
}

void func_80835D58(PlayState* arg0, Player* arg1, Vec3f* arg2, CollisionPoly** arg3, s32* arg4, Vec3f* arg5) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    Vec3f sp40;

    sp4C = arg1->actor.world.pos.x;
    sp50 = arg1->actor.world.pos.y + arg2->y;
    sp54 = arg1->actor.world.pos.z;
    func_80835BC8(arg1, arg1 + 0x24, arg2, &sp40);
    BgCheck_EntityLineTest2(arg0 + 0x830, (Vec3f* ) &sp4C, &sp40, arg5, arg3, 1, 0, 0, 1, arg4, &arg1->actor);
}

s32 func_80835DF8(PlayState* arg0, Player* arg1, CollisionPoly** arg2, s32* arg3) {
    Vec3f sp2C;
    f32 temp_fv0;
    s32 temp_a2;
    s32 var_v0;

    temp_fv0 = (bitwise f32) func_80835CD8(arg0, arg1, &D_8085D100, &sp2C, arg2, arg3);
    temp_a2 = *arg3;
    var_v0 = 0;
    if ((temp_a2 == 0x32) && (fabsf(arg1->actor.world.pos.y - temp_fv0) < 10.0f)) {
        func_800FAAB4(arg0, SurfaceType_GetLightSettingIndex(&arg0->colCtx, *arg2, temp_a2) & 0xFF);
        var_v0 = 1;
    }
    return var_v0;
}

void func_80835EAC(PlayState* arg0, Player* arg1, Actor* arg2) {
    Vec3f* sp24;
    Vec3f* temp_a3;

    arg1->currentYaw = arg2->home.rot.y + 0x8000;
    arg1->actor.shape.rot.y = arg1->currentYaw;
    if (arg1->linearVelocity <= 0.0f) {
        arg1->linearVelocity = 0.1f;
    }
    func_80835324(arg0, arg1, 50.0f, arg1->actor.shape.rot.y);
    arg1->unk_AE7 = 0;
    arg1->stateFlags1 |= 0x20000000;
    arg1->unk_397 = (u8) arg1->doorType;
    temp_a3 = &arg1->unk_3A0;
    sp24 = temp_a3;
    func_80835BF8(arg2 + 0x24, arg2->shape.rot.y, -140.0f, temp_a3);
    if (arg1->doorDirection != 0) {
        D_8085D10C.x = -400.0f;
    } else {
        D_8085D10C.x = 400.0f;
    }
    D_8085D114 = 200.0f;
    func_80835BC8(arg1, sp24, &D_8085D10C, &arg1->unk_3AC);
    arg2->unk_144 = 1;
    func_8082DAD4(arg1);
    if (arg1->doorTimer != 0) {
        arg1->unk_AE8 = 0;
        func_8082E438(arg0, arg1, func_8082ED20(arg1));
        arg1->skelAnime.endFrame = 0.0f;
    } else {
        arg1->linearVelocity = 0.1f;
    }
    Camera_ChangeSetting(Play_GetCamera(arg0, 0), 0x50);
    arg1->unk_3BA = (s16) arg0->doorCtx.transitionActorList[(s32) arg2->params >> 0xA].sides[0].bgCamDataId;
    func_800B90F4(arg0);
    arg1->unk_B72 = 2;
}

void func_8083604C(PlayState* arg0, Player* arg1, Actor* arg2) {
    Vec3f sp38;
    PosRot* temp_s1;
    s32 var_v0;

    arg1->currentYaw = arg2->home.rot.y;
    if (arg1->doorDirection > 0) {
        arg1->currentYaw -= 0x8000;
    }
    arg1->actor.shape.rot.y = arg1->currentYaw;
    if (arg1->linearVelocity <= 0.0f) {
        arg1->linearVelocity = 0.1f;
    }
    func_80835324(arg0, arg1, 50.0f, arg1->actor.shape.rot.y);
    temp_s1 = &arg1->actor.world;
    arg1->unk_AE7 = 0;
    arg1->stateFlags1 |= 0x20000000;
    arg1->unk_397 = (u8) arg1->doorType;
    Actor_OffsetOfPointInActorCoords(arg2, &sp38, &temp_s1->pos);
    func_80835BF8(temp_s1, arg2->shape.rot.y, (42.0f - fabsf(sp38.z)) * (f32) arg1->doorDirection, &temp_s1->pos);
    func_80835BF8(temp_s1, arg2->shape.rot.y, (f32) arg1->doorDirection * 20.0f, &arg1->unk_3A0);
    func_80835BF8(temp_s1, arg2->shape.rot.y, (f32) arg1->doorDirection * -120.0f, &arg1->unk_3AC);
    arg2->unk_15C = 1;
    func_8082DAD4(arg1);
    if (arg1->doorTimer != 0) {
        arg1->unk_AE8 = 0;
        func_8082E438(arg0, arg1, func_8082ED20(arg1));
        arg1->skelAnime.endFrame = 0.0f;
    } else {
        arg1->linearVelocity = 0.1f;
    }
    if (arg2->category == 0xA) {
        var_v0 = 1;
        if (arg1->doorDirection > 0) {
            var_v0 = 0;
        }
        arg1->unk_3BA = (s16) arg0->doorCtx.transitionActorList[(s32) (u16) arg2->params >> 0xA].sides[var_v0].bgCamDataId;
        func_800B90F4(arg0);
    }
}

void func_80836258(PlayState* arg0, Player* arg1, Actor* arg2) {
    LinkAnimationHeader* sp60;
    f32 sp5C;
    CollisionPoly* sp54;
    s32 sp50;
    Vec3f sp44;
    s32 sp40;
    PosRot* sp34;
    Camera* temp_a0_2;
    LinkAnimationHeader* var_t4;
    PosRot* temp_a0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 temp_v1;
    s32 var_v0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_v0 = arg1->transformation;
    arg2->unk_1A0 = temp_v0;
    temp_v1 = temp_v0 - 1;
    if (arg1->doorDirection < 0) {
        temp_v0_2 = arg1->transformation;
        if (temp_v0_2 == 0) {
            sp60 = (D_8085BE84 + 0xC0)[arg1->modelAnimType];
        } else if (temp_v0_2 == 4) {
            sp60 = (D_8085BE84 + 0xD8)[arg1->modelAnimType];
        } else {
            var_t4 = D_8085D118[temp_v1];
            goto block_11;
        }
    } else {
        arg2->unk_1A0 = (u8) (arg2->unk_1A0 + 5);
        temp_v0_3 = arg1->transformation;
        if (temp_v0_3 == 0) {
            sp60 = (D_8085BE84 + 0xF0)[arg1->modelAnimType];
        } else if (temp_v0_3 == 4) {
            sp60 = (D_8085BE84 + 0x108)[arg1->modelAnimType];
        } else {
            var_t4 = D_8085D124[temp_v1];
block_11:
            sp60 = var_t4;
        }
    }
    func_80831494(arg0, arg1, func_8084E034, 0);
    arg1->stateFlags2 |= 0x800000;
    func_8082DE14(arg0, arg1);
    if (arg1->doorDirection < 0) {
        arg1->actor.shape.rot.y = arg2->shape.rot.y;
    } else {
        arg1->actor.shape.rot.y = arg2->shape.rot.y - 0x8000;
    }
    temp_a0 = arg2 + 0x24;
    arg1->currentYaw = arg1->actor.shape.rot.y;
    sp34 = temp_a0;
    temp_fv0 = (f32) arg1->doorDirection * 22.0f;
    sp5C = temp_fv0;
    func_80835BF8(temp_a0, arg2->shape.rot.y, temp_fv0, &arg1->actor.world.pos);
    func_8082EC9C(arg0, arg1, sp60);
    if (arg1->doorTimer != 0) {
        arg1->skelAnime.endFrame = 0.0f;
    }
    func_8082DAD4(arg1);
    func_8082E920(arg0, arg1, 0x28F);
    arg2->unk_1A1 = 1;
    if ((arg1->doorType != 3) && (sp40 = ((s16) arg2->params >> 7) & 7, arg1->stateFlags1 |= 0x20000000, (arg1->actor.category == 2))) {
        func_800B90F4(arg0);
        func_80835BF8(sp34, arg2->shape.rot.y, -sp5C, &sp44);
        sp44.y = arg2->world.pos.y + 10.0f;
        BgCheck_EntityRaycastFloor5(&arg0->colCtx, &sp54, &sp50, &arg1->actor, &sp44);
        if (func_8083562C(arg0, &arg1->actor, sp54, 0x32) != 0) {
            gSaveContext.entranceSpeed = 2.0f;
            return;
        }
        if (sp40 != 7) {
            arg1->unk_AE7 = (s8) (s32) (38.0f * D_8085C3E8);
            temp_a0_2 = Play_GetCamera(arg0, 0);
            if (arg1->doorDirection > 0) {
                var_v0 = 0;
            } else {
                var_v0 = 1;
            }
            temp_fv0_2 = D_8085C3E8;
            Camera_ChangeDoorCam(temp_a0_2, arg2, (s16) arg0->doorCtx.transitionActorList[(s32) (u16) arg2->params >> 0xA].sides[var_v0].bgCamDataId, 0.0f, (s16) (s32) arg1->unk_AE7, (s16) (s32) (26.0f * temp_fv0_2), (s16) (s32) (10.0f * temp_fv0_2));
        }
    }
}

s32 func_808365DC(Player* arg0, PlayState* arg1) {
    Actor* temp_s0;
    Actor* var_v0_3;
    s32 var_v0_2;
    s8 temp_a2;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 var_v0;
    u8 var_v1;

    if (gSaveContext.save.playerData.health != 0) {
        var_v0 = arg0->doorType;
        if (var_v0 != 0) {
            if (arg0->actor.category == 2) {
                if (var_v0 < 0) {
                    if (ActorCutscene_GetCanPlayNext(0x7C) == 0) {
                        var_v0 = arg0->doorType;
                        goto block_6;
                    }
                    goto block_8;
                }
block_6:
                if ((var_v0 > 0) && (ActorCutscene_GetCanPlayNext(0x7D) != 0)) {
block_8:
                    if (!(arg0->stateFlags1 & 0x800) && ((~(D_80862B44->press.button | 0xFFFF7FFF) == 0) || (arg0->unk_748 == func_8085437C) || (temp_v0 = arg0->doorType, (temp_v0 == 4)) || (temp_v0 == 5))) {
                        goto block_13;
                    }
                    goto block_39;
                }
                goto block_39;
            }
block_13:
            temp_s0 = arg0->doorActor;
            if (arg0->doorType < 0) {
                func_8085B460(arg1, temp_s0, M2C_ERROR(Read from unset register $a2));
                if (temp_s0->textId == 0x1821) {
                    temp_s0->flags |= 0x100;
                }
                return 1;
            }
            gSaveContext.respawn[0].data = 0;
            temp_v0_2 = arg0->doorType;
            if (temp_v0_2 == 4) {
                func_80835EAC(arg1, arg0, temp_s0, arg0);
            } else if (temp_v0_2 == 2) {
                func_8083604C(arg1, arg0, temp_s0, arg0);
            } else {
                func_80836258(arg1, arg0, temp_s0, arg0);
            }
            var_v1 = arg0->actor.category;
            if (var_v1 == 2) {
                arg0->unk_A86 = 0x7D;
                ActorCutscene_Start((s16) arg0->unk_A86, &arg0->actor);
                var_v1 = arg0->actor.category;
            }
            if (var_v1 == 2) {
                temp_v0_3 = arg0->doorType;
                if ((temp_v0_3 < 3) && (temp_s0->category == 0xA) && ((temp_v0_3 != 1) || ((((s16) temp_s0->params >> 7) & 7) != 7))) {
                    if (arg0->doorDirection > 0) {
                        var_v0_2 = 0;
                    } else {
                        var_v0_2 = 1;
                    }
                    temp_a2 = arg1->doorCtx.transitionActorList[(s32) (temp_s0->params & 0xFFFF) >> 0xA].sides[var_v0_2].room;
                    if ((temp_a2 >= 0) && (temp_a2 != arg1->roomCtx.currRoom.num)) {
                        Room_StartRoomTransition(arg1, &arg1->roomCtx, (s32) temp_a2);
                    }
                }
            }
            var_v0_3 = temp_s0->child;
            temp_s0->room = arg1->roomCtx.currRoom.num;
            if ((var_v0_3 != NULL) || (var_v0_3 = temp_s0->parent, (var_v0_3 != NULL))) {
                var_v0_3->room = arg1->roomCtx.currRoom.num;
            }
            return 1;
        }
    }
block_39:
    return 0;
}

void func_80836888(Player* arg0, PlayState* arg1) {
    LinkAnimationHeader* var_a2;

    func_80831494(arg1, arg0, func_80849A9C, 1);
    if (arg0->unk_B40 < 0.5f) {
        var_a2 = func_8082EF54(arg0);
        arg0->unk_B40 = 0.0f;
    } else {
        var_a2 = func_8082EF9C(arg0);
        arg0->unk_B40 = 1.0f;
    }
    arg0->unk_B44 = arg0->unk_B40;
    func_8082DB3C(arg1, arg0, var_a2);
    arg0->currentYaw = arg0->actor.shape.rot.y;
}

void func_8083692C(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_80849DD0, 1);
    func_8082E438(arg1, arg0, func_8082ED20(arg0));
    arg0->currentYaw = arg0->actor.shape.rot.y;
}

void func_80836988(Player* arg0, PlayState* arg1) {
    if (func_80123420(arg0) != 0) {
        func_80836888(arg0, arg1);
        return;
    }
    if (func_80123434(arg0) != 0) {
        func_8083692C(arg0, arg1);
        return;
    }
    func_8085B384(arg0, arg1, M2C_ERROR(Read from unset register $a2));
}

void func_808369F4(Player* arg0, PlayState* arg1) {
    void (*var_a2)(Player*, PlayState*);

    if (func_80123420(arg0) != 0) {
        var_a2 = func_80849A9C;
    } else if (func_80123434(arg0) != 0) {
        var_a2 = func_80849DD0;
    } else {
        var_a2 = func_80849FE0;
    }
    func_80831494(arg1, arg0, var_a2, 1);
}

void func_80836A5C(Player* arg0) {
    func_808369F4(arg0);
    if (func_80123420(arg0) != 0) {
        arg0->unk_AE8 = 1;
    }
}

void func_80836A98(Player* arg0, LinkAnimationHeader* arg1, PlayState* arg2) {
    func_80836A5C(arg0, arg2);
    func_8082EC9C(arg2, arg0, arg1);
}

void func_80836AD8(PlayState* arg0, Player* arg1) {
    func_80831494(arg0, arg1, func_80857BE8, 0);
    arg1->unk_B28 = 0;
    arg1->unk_B88 = 0;
    arg1->unk_AF0[0].x = 0.0f;
    arg1->unk_AF0[0].y = 0.0f;
    arg1->unk_AF0[0].z = 0.0f;
    arg1->unk_B08[0] = 0.0f;
    arg1->unk_B08[1] = 0.0f;
    func_800B8E58(arg1, 0x8E6U);
}

void func_80836B3C(PlayState* arg0, Player* arg1, f32 arg2) {
    LinkAnimationHeader* sp34;
    s16 temp_v0;

    temp_v0 = arg1->actor.shape.rot.y;
    arg1->currentYaw = temp_v0;
    arg1->actor.world.rot.y = temp_v0;
    if (arg1->transformation == 1) {
        func_80836AD8(arg0, arg1);
        LinkAnimation_Change(arg0, &arg1->skelAnime, (D_8085BE84 + 0x168)[arg1->modelAnimType], 1.5f * D_8085C3E4, 0.0f, 6.0f, (u8) 2, 0.0f);
        return;
    }
    sp34 = (D_8085BE84 + 0x168)[arg1->modelAnimType];
    func_80831494(arg0, arg1, func_8084C6EC, 0);
    LinkAnimation_Change(arg0, &arg1->skelAnime, sp34, 1.25f * D_8085C3E4, arg2, (f32) Animation_GetLastFrame(sp34), (u8) 2, 0.0f);
}

void func_80836C70(PlayState* arg0, Player* arg1, s32 arg2) {
    f32 sp78;
    f32 sp74;
    f32 sp70;
    s32 var_s0;

    var_s0 = 0;
    do {
        sp70 = randPlusMinusPoint5Scaled(4.0f);
        sp74 = Rand_ZeroFloat(2.0f);
        sp78 = randPlusMinusPoint5Scaled(4.0f);
        D_8085D134 = -0.2f;
        EffectSsHahen_Spawn(arg0, arg1 + (arg2 * 0xC) + 0xBEC, (Vec3f* ) &sp70, &D_8085D130, (s16) 0, (s16) 0xA, (s16) 0x154, (s16) 0x10, (Gfx* ) &D_06008860);
        var_s0 += 1;
    } while (var_s0 != 4);
}

void func_80836D8C(Player* arg0) {
    s16 temp_v0;

    temp_v0 = arg0->actor.focus.rot.y;
    arg0->actor.focus.rot.x = 0;
    arg0->actor.focus.rot.z = 0;
    arg0->unk_AAC.x = 0;
    arg0->unk_AAC.y = 0;
    arg0->unk_AAC.z = 0;
    arg0->unk_AB2.x = 0;
    arg0->unk_AB2.y = 0;
    arg0->unk_AB2.z = 0;
    arg0->actor.shape.rot.y = temp_v0;
    arg0->currentYaw = temp_v0;
}

s32 func_80836DC0(PlayState* arg0, Player* arg1) {
    if ((gGameInfo->data[0x210] != 0) || (func_800C9DDC(arg0 + 0x830, arg1->actor.floorPoly, (s32) arg1->actor.floorBgId) != 0)) {
        func_80831494(arg0, arg1, func_808561B0, 0);
        arg1->stateFlags1 &= 0xBFFDFFFF;
        func_8082E438(arg0, arg1, &D_0400E270);
        func_8082DABC(arg1);
        func_80836D8C(arg1);
        arg1->actor.shape.shadowDraw = ActorShadow_DrawCircle;
        arg1->unk_B48 = -2000.0f;
        arg1->actor.shape.shadowScale = 13.0f;
        func_8082E1F0(arg1, 0x8E2U);
        return 1;
    }
    return 0;
}

void func_80836EA0(PlayState* arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 sp26;
    s16 temp_v0;

    temp_v0 = Quake_Add(Play_GetCamera(arg0, 0), 3U);
    sp26 = temp_v0;
    Quake_SetSpeed(temp_v0, arg1);
    Quake_SetQuakeValues(sp26, arg2, 0, 0, (s16) 0);
    Quake_SetCountdown(sp26, arg3);
}

s32 func_80836F10(PlayState* arg0, Player* arg1) {
    s32 sp28;
    s16 var_s0;
    s32 var_s0_2;
    struct _struct_D_8085D13C_0x6* temp_s0;
    u32 temp_v0;

    temp_v0 = D_80862B08;
    if ((temp_v0 == 6) || (temp_v0 == 9) || (arg1->csMode != 0)) {
        var_s0 = 0;
    } else {
        var_s0 = arg1->unk_B6A;
    }
    Math_StepToF(arg1 + 0xAD0, 0.0f, 1.0f);
    arg1->stateFlags1 &= 0xFFF3FFFF;
    if (var_s0 >= 0x190) {
        if (arg1->unk_B6A < 0x320) {
            sp28 = 0;
        } else {
            sp28 = 1;
        }
        func_800B8E58(arg1, 0x83EU);
        temp_s0 = &D_8085D13C[sp28];
        func_8082DF8C(arg1, temp_s0->unk_4);
        if (func_8085B3E0(arg0, (s32) temp_s0->unk_0) != 0) {
            return -1;
        }
        func_80833998(arg1, 0x28);
        func_80836EA0(arg0, 0x80C7, 2, 0x1E);
        func_8082DF48(arg0, arg1, temp_s0->unk_1, temp_s0->unk_2, (u8) (s32) temp_s0->unk_3, 0);
        return sp28 + 1;
    }
    var_s0_2 = var_s0 * 2;
    if (var_s0 >= 0xC9) {
        if (var_s0_2 >= 0x100) {
            var_s0_2 = 0xFF;
        }
        func_8082DF48(arg0, arg1, (u8) var_s0_2, (u8) (s32) ((f32) var_s0_2 * 0.1f), (u8) var_s0_2, 0);
        if (D_80862B08 == 6) {
            func_8082DF8C(arg1, 0x6804U);
        }
    }
    func_8082E1BC(arg1);
    return 0;
}

s32 func_808370D4(PlayState* arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg1->unk_B6A < 0x320) && ((arg1 + arg1->unk_ADE)->unk_AE3 == 0) && !(arg1->unk_A6C & 0x800)) {
        func_80836B3C(NULL);
        var_v0 = 1;
    }
    return var_v0;
}

void func_80837134(PlayState* arg0, Player* arg1) {
    LinkAnimationHeader* sp2C;
    s32 sp28;
    s32 sp24;
    s32 temp_v0_2;
    s32 var_v1;
    void* temp_v0;

    sp2C = (D_8085BE84 + 0x138)[arg1->modelAnimType];
    arg1->stateFlags1 &= 0xFFF3FFFF;
    if (arg1->transformation == 3) {
        temp_v0 = arg1->skelAnime.animation;
        var_v1 = 0;
        if ((&D_0400E2E8 == temp_v0) || (&D_0400E2D8 == temp_v0)) {
            func_80836C70(arg0, arg1, 0xC);
            func_80836C70(arg0, arg1, 0xF);
            var_v1 = 1;
        }
        if ((~(D_80862B44->cur.button | 0xFFFF7FFF) != 0) || (sp24 = var_v1, (func_80836DC0(arg0, arg1) == 0))) {
            if (var_v1 != 0) {
                func_80836A98(arg1, sp2C, arg0);
                func_8082E1BC(arg1);
                return;
            }
            goto block_19;
        }
    } else {
        if (arg1->stateFlags2 & 0x80000) {
            if (func_80123420(arg1) != 0) {
                sp2C = *(&D_8085C2AC + (arg1->unk_AE7 * 0xC));
            } else {
                sp2C = *(&D_8085C2A8 + (arg1->unk_AE7 * 0xC));
            }
            goto block_19;
        }
        if (&D_0400DE48 == arg1->skelAnime.animation) {
            sp2C = &D_0400DE50;
            goto block_19;
        }
        if (func_80123420(arg1) != 0) {
            sp2C = &D_0400D420;
            func_8082FC60(arg1);
            goto block_19;
        }
        if (arg1->unk_B6A < 0x51) {
            sp2C = (D_8085BE84 + 0x150)[arg1->modelAnimType];
            goto block_19;
        }
        if (func_808370D4(arg0, arg1) == 0) {
block_19:
            temp_v0_2 = func_80836F10(arg0, arg1);
            if (temp_v0_2 > 0) {
                sp28 = temp_v0_2;
                func_80836A98(arg1, (D_8085BE84 + 0x138)[arg1->modelAnimType], arg0);
                arg1->skelAnime.endFrame = 8.0f;
                if (temp_v0_2 == 1) {
                    arg1->unk_AE8 = 0xA;
                    return;
                }
                arg1->unk_AE8 = 0x14;
                return;
            }
            if (temp_v0_2 == 0) {
                func_80836A98(arg1, sp2C, arg0);
            }
        }
    }
}

void func_808373A4(PlayState* arg0, Player* arg1) {
    func_8082E438(arg0, arg1, &D_0400E270);
    arg1->unk_B08[2] = 20000.0f;
    arg1->unk_B08[3] = 196608.0f;
    func_800B8E58(arg1, 0x9A9U);
}

s32 func_808373F8(Player* arg0, LinkAnimationHeader* arg1, u16 arg2) {
    s32 sp28;
    ?* var_a2;
    GameInfo* temp_v0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_fa0;
    f32 var_fa0_2;
    f32 var_fv1;
    s16 temp_v1;
    s16 var_v0;
    s32 temp_v0_2;
    s32 var_v1;
    u16 var_v0_2;
    u8 temp_t4;
    u8 temp_v0_3;

    temp_v0 = gGameInfo;
    temp_fv0 = arg1->unk_AD0;
    temp_v1 = arg1->unk_AD4 - arg1->unk_BE;
    if (((f32) temp_v0->data[0x3A2] / 100.0f) < temp_fv0) {
        var_fv1 = (f32) temp_v0->data[0x3A3] / 100.0f;
    } else {
        var_fv1 = (((f32) temp_v0->data[0x3A5] * temp_fv0) / 1000.0f) + ((f32) temp_v0->data[0x3A4] / 100.0f);
        if (arg1->unk_14B == 3) {
            var_fa0 = 8.0f;
            if (var_fv1 < 8.0f) {
                goto block_6;
            }
        }
        var_fa0 = 5.0f;
        if (var_fv1 < 5.0f) {
block_6:
            var_fv1 = var_fa0;
        }
    }
    var_v0 = temp_v1;
    if (temp_v1 < 0) {
        var_v0 = -temp_v1;
    }
    if ((var_v0 >= 0x1000) || (var_fa0_2 = 4.0f, (temp_fv0 <= 4.0f))) {
        var_fa0_2 = 4.0f;
        var_a2 = &D_0400DCD8;
        goto block_23;
    }
    if ((arg1->unk_14B != 3) && ((temp_v0_2 = D_80862B1C, (temp_v0_2 == 1)) || (temp_v0_2 == 2))) {
        if (temp_v0_2 == 1) {
            var_v1 = 4;
        } else {
            var_v1 = 5;
        }
        if (var_v1 == 4) {
            var_v0_2 = 0x6800;
        } else {
            var_v0_2 = arg2;
        }
        sp28 = var_v1;
        func_80834D50((bitwise PlayState* ) 4.0f, arg0, arg1, *(&D_8085C2A4 + (var_v1 * 0xC)), (bitwise u16) var_fv1, (s32) var_v0_2);
        arg1->unk_AE8 = -1;
        arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x80000);
        arg1->unk_AE7 = (s8) var_v1;
        return 1;
    }
    var_a2 = &D_0400DE48;
block_23:
    if (arg1->unk_14B == 3) {
        temp_v0_3 = arg1->unk_B67;
        var_fv1 *= 0.3f + ((f32) (5 - temp_v0_3) * 0.18f);
        if (var_fv1 < var_fa0_2) {
            var_fv1 = var_fa0_2;
        }
        var_fa0_2 = 0.0f;
        temp_fv0_2 = arg1->unk_8C;
        if ((temp_fv0_2 > 0.0f) && (temp_v0_3 != 0)) {
            arg1->unk_28 = (f32) (arg1->unk_28 + temp_fv0_2);
            func_80834D50((bitwise PlayState* ) 0.0f, arg0, arg1, (bitwise f32) var_a2, (bitwise u16) var_fv1, 0);
            arg1->unk_AE8 = 1;
            arg1->unk_A74 = (s32) (arg1->unk_A74 | 0x200000);
            func_800B8E58((Player* ) arg1, (0x9B5 - arg1->unk_B67) & 0xFFFF);
            func_8082DF8C((Player* ) arg1, arg2);
            temp_t4 = arg1->unk_B67 - 1;
            arg1->unk_B67 = temp_t4;
            if (!(temp_t4 & 0xFF)) {
                arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x80000);
                func_808373A4((PlayState* ) arg0, (Player* ) arg1);
            }
        } else {
            if (arg1->unk_68 > 0.0f) {
                arg2 = 0U;
            }
            goto block_33;
        }
    } else {
block_33:
        func_80834D50((bitwise PlayState* ) var_fa0_2, arg0, arg1, (bitwise f32) var_a2, (bitwise u16) var_fv1, (s32) arg2);
        arg1->unk_AE8 = 1;
    }
    return 1;
}

s32 func_80837730(PlayState* arg0, Player* arg1, f32 arg2, s32 arg3) {
    f32 sp3C;
    WaterBox* sp38;
    Vec3f sp28;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 var_v0;

    temp_fv0 = fabsf(arg2);
    sp3C = temp_fv0;
    if (temp_fv0 > 2.0f) {
        Math_Vec3f_Copy(&sp28, arg1 + 0xBEC);
        sp28.y += 20.0f;
        if (WaterBox_GetSurface1(arg0, arg0 + 0x830, (bitwise f32) sp28, sp28.z, &sp28.y, &sp38) != 0) {
            temp_fv0_2 = sp28.y - arg1->bodyPartsPos[6].y;
            if ((temp_fv0_2 > -2.0f) && (temp_fv0_2 < 100.0f)) {
                var_v0 = 1;
                if (sp3C <= 10.0f) {
                    var_v0 = 0;
                }
                EffectSsGSplash_Spawn(arg0, &sp28, NULL, NULL, (s16) var_v0, (s16) arg3);
                return 1;
            }
        }
    }
    return 0;
}

s32 func_8083784C(Player* arg0) {
    Actor* temp_v0;
    f32 temp_fv0;

    if (arg0->actor.velocity.y < 0.0f) {
        temp_fv0 = arg0->actor.depthInWater;
        if ((temp_fv0 > 0.0f) && ((arg0->ageProperties->unk_2C - temp_fv0) < D_80862B18) && (arg0->unk_B67 != 0) && (gSaveContext.save.playerData.health != 0) && ((arg0->stateFlags1 << 5) >= 0) && ((temp_v0 = arg0->targetActor, (temp_v0 == NULL)) || ((temp_v0->flags << 0xF) >= 0))) {
            return 1;
        }
    }
    return 0;
}

void func_808378FC(Player* arg0, Player* arg1) {
    if (func_8082FC24(arg1) == 0) {
        arg1->stateFlags2 |= 0x20;
    }
    if ((func_8083784C(arg1) != 0) && (func_808373F8(arg0, (LinkAnimationHeader* ) arg1, 0x6814U) != 0)) {
        func_80837730((PlayState* ) arg0, arg1, 20.0f, (s32) (arg1->actor.velocity.y * 50.0f));
    }
}

s32 func_8083798C(Player* arg0) {
    s32 var_v0;

    var_v0 = arg0->interactRangeActor != NULL;
    if (var_v0 != 0) {
        var_v0 = arg0->heldActor == NULL;
        if (var_v0 != 0) {
            var_v0 = arg0->transformation != 3;
        }
    }
    return var_v0;
}

void func_808379C0(PlayState* arg0, Player* arg1) {
    Actor* sp24;
    LinkAnimationHeader* sp20;
    Actor* temp_v1;
    LinkAnimationHeader* var_a2;
    s16 temp_v0;
    s16 temp_v0_2;

    if (func_8083798C(arg1) != 0) {
        temp_v1 = arg1->interactRangeActor;
        temp_v0 = temp_v1->id;
        if ((temp_v0 == 0xB0) && (temp_v1->params & 1)) {
            func_80831494(arg0, arg1, func_8084E334, 0);
            var_a2 = &D_0400DF90;
        } else if (((temp_v0 == 0x2F) || (temp_v0 == 0x90) || (temp_v0 == 0x171) || (temp_v0 == 0x10C)) && (sp24 = temp_v1, (Player_GetStrength() <= 0))) {
            sp24 = temp_v1;
            func_80831494(arg0, arg1, func_8084E4E4, 0);
            sp20 = &D_0400DD70;
            arg1->actor.world.pos.x = (Math_SinS(temp_v1->yawTowardsPlayer) * 20.0f) + temp_v1->world.pos.x;
            var_a2 = &D_0400DD70;
            arg1->actor.world.pos.z = (Math_CosS(temp_v1->yawTowardsPlayer) * 20.0f) + temp_v1->world.pos.z;
            temp_v0_2 = temp_v1->yawTowardsPlayer + 0x8000;
            arg1->actor.shape.rot.y = temp_v0_2;
            arg1->currentYaw = temp_v0_2;
        } else {
            func_80831494(arg0, arg1, func_8084E25C, 0);
            var_a2 = (D_8085BE84 + 0x120)[arg1->modelAnimType];
        }
        func_8082DB18(arg0, arg1, var_a2);
        return;
    }
    func_80836988(arg1, arg0);
    arg1->stateFlags1 &= ~0x800;
}

void func_80837B60(PlayState* arg0, Player* arg1) {
    u16 temp_a1;

    func_8083172C(arg0, arg1, func_8084E980, 0);
    temp_a1 = arg1->actor.textId;
    arg1->exchangeItemId = 0;
    arg1->stateFlags1 |= 0x20000040;
    if (temp_a1 != 0) {
        Message_StartTextbox(arg0, temp_a1, arg1->targetActor);
    }
    arg1->unk_730 = arg1->targetActor;
}

void func_80837BD0(PlayState* arg0, Player* arg1) {
    func_8083172C((PlayState* ) func_8084FE7C, NULL);
}

void func_80837BF8(PlayState* arg0, Player* arg1) {
    func_80831494(arg0, arg1, func_8084ED9C, 0);
}

void func_80837C20(PlayState* arg0, Player* arg1) {
    s32 sp1C;
    s32 sp18;

    sp1C = (s32) arg1->unk_AE8;
    sp18 = (s32) arg1->unk_AE7;
    func_8083172C((PlayState* ) func_8084F4E8, NULL);
    arg1->actor.velocity.y = 0.0f;
    arg1->unk_AE8 = (s16) sp1C;
    arg1->unk_AE7 = (s8) sp18;
}

void func_80837C78(PlayState* arg0, Player* arg1) {
    s16 temp_v0;

    func_8083172C((PlayState* ) func_80852C04, NULL);
    temp_v0 = arg1->getItemId;
    arg1->stateFlags1 |= 0x20000400;
    if (temp_v0 == 0xD) {
        arg1->unk_AE8 = 0x14;
        return;
    }
    if (temp_v0 >= 0) {
        arg1->unk_AE8 = 1;
        return;
    }
    arg1->getItemId = -temp_v0;
}

void func_80837CEC(PlayState* arg0, Player* arg1, CollisionPoly* arg2, f32 arg3, LinkAnimationHeader* arg4) {
    f32 sp24;
    f32 sp20;
    f32 temp_fv0;

    sp24 = (f32) arg2->normal.x * 0.00003051851f;
    sp20 = (f32) arg2->normal.z * 0.00003051851f;
    func_80831494(arg0, arg1, func_8084F1B8, 0);
    func_8082DE50(arg0, arg1);
    func_8082DB18(arg0, arg1, arg4);
    temp_fv0 = arg3 + 1.0f;
    arg1->actor.world.pos.x -= temp_fv0 * sp24;
    arg1->actor.world.pos.z -= temp_fv0 * sp20;
    arg1->actor.shape.rot.y = Math_FAtan2F(sp20, sp24);
    arg1->currentYaw = arg1->actor.shape.rot.y;
    func_8082DAD4(arg1);
    arg1->actor.velocity.y = 0.0f;
    func_8082E6D0(arg1);
}

s32 func_80837DEC(Actor* arg0, PlayState* arg1) {
    CollisionPoly* sp94;
    CollisionPoly* sp90;
    s32 sp8C;
    s32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    Vec3f sp70;
    f32 sp68;
    f32 sp60;
    f32 sp5C;
    s32 sp54;
    CollisionContext* sp48;
    Vec3f* sp44;
    CollisionContext* temp_a0;
    LinkAnimationHeader* var_v0_3;
    Vec3f* temp_a1;
    f32 temp_fa0;
    f32 temp_ft4;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fv1;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v1;
    s32 temp_t4;
    s32 var_v1_2;
    u8 temp_v0;

    temp_v0 = arg0->unk_14B;
    if ((temp_v0 != 1) && (temp_v0 != 3) && (arg0->depthInWater < -80.0f)) {
        temp_v1 = arg0->unk_B6C;
        var_v0 = temp_v1;
        if (temp_v1 < 0) {
            var_v0 = -temp_v1;
        }
        if (var_v0 < 0xAAA) {
            temp_v0_2 = arg0->unk_B6E;
            var_v1 = temp_v0_2;
            if (temp_v0_2 < 0) {
                var_v1 = -temp_v0_2;
            }
            if (var_v1 < 0xAAA) {
                temp_a1 = arg0 + 0x24;
                sp7C = arg0->prevPos.x - arg0->world.pos.x;
                sp84 = arg0->prevPos.z - arg0->world.pos.z;
                temp_fv0 = sqrtf((sp7C * sp7C) + (sp84 * sp84));
                if (temp_fv0 != 0.0f) {
                    var_fv1 = 5.0f / temp_fv0;
                } else {
                    var_fv1 = 0.0f;
                }
                temp_a0 = arg1 + 0x830;
                sp7C = arg0->prevPos.x + (sp7C * var_fv1);
                sp80 = arg0->world.pos.y;
                sp44 = temp_a1;
                sp48 = temp_a0;
                sp84 = arg0->prevPos.z + (sp84 * var_fv1);
                if (BgCheck_EntityLineTest2(temp_a0, temp_a1, (Vec3f* ) &sp7C, &sp70, &sp94, 1, 0, 0, 1, &sp8C, arg0) != 0) {
                    temp_v1_2 = sp94->normal.y;
                    var_v0_2 = temp_v1_2;
                    if (temp_v1_2 < 0) {
                        var_v0_2 = -temp_v1_2;
                    }
                    if (var_v0_2 < 0x258) {
                        temp_fa0 = (f32) sp94->normal.x * 0.00003051851f;
                        temp_ft4 = (f32) sp94->normal.z * 0.00003051851f;
                        sp68 = temp_fa0;
                        sp60 = temp_ft4;
                        temp_fv0_2 = Math3D_UDistPlaneToPos(temp_fa0, (f32) temp_v1_2 * 0.00003051851f, temp_ft4, (f32) sp94->dist, sp44);
                        sp5C = temp_fv0_2;
                        temp_fv1 = temp_fv0_2 + 1.0f;
                        sp70 = arg0->world.pos.x - (temp_fv1 * temp_fa0);
                        sp70.z = arg0->world.pos.z - (temp_fv1 * temp_ft4);
                        sp70.y = arg0->world.pos.y + 26.800001f;
                        temp_fv1_2 = arg0->world.pos.y - BgCheck_EntityRaycastFloor5(sp48, &sp90, &sp88, arg0, &sp70);
                        if ((temp_fv1_2 >= -11.0f) && (temp_fv1_2 <= 0.0f)) {
                            var_v1_2 = D_80862B1C == 6;
                            if (var_v1_2 == 0) {
                                sp54 = var_v1_2;
                                if (func_800C9A4C(sp48, sp94, sp8C) & 8) {
                                    var_v1_2 = 1;
                                }
                            }
                            if (var_v1_2 != 0) {
                                var_v0_3 = &D_0400DAA8;
                            } else {
                                var_v0_3 = &D_0400DC30;
                            }
                            sp54 = var_v1_2;
                            func_80837CEC(arg1, (Player* ) arg0, sp94, sp5C, var_v0_3);
                            if (var_v1_2 != 0) {
                                sp54 = var_v1_2;
                                func_80832558(arg1, arg0, func_80837C20);
                                arg0->unk_AD4 = (s16) (arg0->unk_AD4 + 0x8000);
                                arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x200000);
                                arg0->shape.rot.y = arg0->unk_AD4;
                                func_8082E920(arg1, (Player* ) arg0, 0x9F);
                                arg0->unk_AE8 = -1;
                                arg0->unk_AE7 = (s8) var_v1_2;
                            } else {
                                temp_t4 = arg0->unk_A6C | 0x2000;
                                arg0->unk_A6C = temp_t4;
                                arg0->unk_A6C = (s32) (temp_t4 & 0xFFFDFFFF);
                            }
                            func_800B8E58((Player* ) arg0, 0x830U);
                            func_8082DF8C((Player* ) arg0, 0x6803U);
                            return 1;
                        }
                    }
                    goto block_28;
                }
                goto block_28;
            }
            goto block_28;
        }
        goto block_28;
    }
block_28:
    return 0;
}

void func_808381A0(Player* arg0, LinkAnimationHeader* arg1, PlayState* arg2) {
    func_80831494(arg2, arg0, func_8084F3DC, 0);
    LinkAnimation_PlayOnceSetSpeed(arg2, &arg0->skelAnime, arg1, 1.3f);
}

s32 func_808381F8(PlayState* arg0, Player* arg1) {
    CollisionPoly* sp34;
    s32 sp30;
    Vec3f sp24;
    s32 var_v0;

    func_80835BC8(arg1, arg1 + 0x108, &D_8085D148, &sp24);
    var_v0 = 0;
    if (fabsf(BgCheck_EntityRaycastFloor5(arg0 + 0x830, &sp34, &sp30, &arg1->actor, &sp24) - arg1->actor.world.pos.y) < 10.0f) {
        var_v0 = 1;
    }
    return var_v0;
}

void func_8083827C(Player* arg0, PlayState* arg1) {
    s32 sp64;
    CollisionPoly* sp60;
    s32 sp5C;
    WaterBox* sp58;
    Vec3f sp4C;
    f32 sp48;
    f32 sp44;
    void (*sp30)(Player*, PlayState*);
    void (*sp2C)(Player*, PlayState*);
    s16 temp_t0;
    s16 var_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_ft1;
    u32 temp_v0;
    u32 temp_v0_3;
    u8 temp_a1;
    u8 temp_v1;
    void (*temp_v0_2)(Player*, PlayState*);

    temp_v0 = arg0->stateFlags1;
    temp_ft1 = (s32) arg0->actor.world.pos.y;
    arg0->unk_B6A = arg0->unk_B68 - temp_ft1;
    if (!(temp_v0 & 0x28000000) && (((temp_v0 << 0) < 0) || !(arg0->stateFlags3 & 0x2200)) && !(arg0->actor.bgCheckFlags & 1)) {
        if (func_80835428(arg1, arg0) == 0) {
            temp_a0 = D_80862B1C;
            if (temp_a0 == 8) {
                arg0->actor.world.pos.x = arg0->actor.prevPos.x;
                arg0->actor.world.pos.z = arg0->actor.prevPos.z;
                return;
            }
            if (!(arg0->stateFlags3 & 2) && (temp_v1 = arg0->skelAnime.moveFlags, ((temp_v1 & 0x80) == 0)) && (temp_v0_2 = arg0->unk_748, (temp_v0_2 != func_8084C16C)) && (sp2C = func_8084C94C, (temp_v0_2 != func_8084C94C)) && (temp_v0_2 != func_8084CA24) && (temp_v0_2 != func_80857BE8) && (temp_v0_2 != func_808546D0) && (temp_v0_2 != func_80854800)) {
                if ((temp_a0 == 7) || (arg0->meleeWeaponState != 0) || ((temp_v1 & 8) && (sp30 = func_8084C16C, (func_808381F8(arg1, arg0, func_8084C16C) != 0)))) {
                    Math_Vec3f_Copy(&arg0->actor.world.pos, &arg0->actor.prevPos);
                    if (arg0->linearVelocity > 0.0f) {
                        func_8082DABC(arg0);
                    }
                    arg0->actor.bgCheckFlags |= 2;
                    return;
                }
                temp_t0 = arg0->currentYaw - arg0->actor.shape.rot.y;
                sp64 = (s32) temp_t0;
                func_80831494(arg1, arg0, func_8084C16C, 1);
                func_8082DD2C(arg1, arg0);
                temp_a1 = arg0->transformation;
                arg0->unk_B72 = arg0->unk_D66;
                if ((temp_a1 != 1) && ((temp_a1 != 3) || (arg0->unk_B67 != 0)) && (arg0->actor.bgCheckFlags & 4)) {
                    temp_v0_3 = arg0->stateFlags1;
                    if ((temp_v0_3 * 0x10) >= 0) {
                        temp_a0_2 = D_80862B1C;
                        if ((temp_a0_2 != 6) && (temp_a0_2 != 9) && (D_80862B18 > 20.0f) && (arg0->meleeWeaponState == 0)) {
                            var_v1 = temp_t0;
                            if (temp_t0 < 0) {
                                var_v1 = -temp_t0;
                            }
                            if ((var_v1 < 0x2000) && (arg0->linearVelocity > 3.0f)) {
                                if (!(temp_v0_3 & 0x800) && (((temp_a1 == 2) && (~(D_80862B44->cur.button | 0xFFFF7FFF) == 0)) || ((temp_a0_2 == 0xB) && (temp_a1 != 1) && (temp_a1 != 3)))) {
                                    sp48 = (bitwise f32) func_80835CD8(arg1, arg0, &D_8085D154, &sp4C, &sp60, &sp5C);
                                    sp44 = arg0->actor.world.pos.y;
                                    if ((WaterBox_GetSurface1(arg1, &arg1->colCtx, (bitwise f32) sp4C, sp4C.z, &sp44, &sp58) != 0) && ((sp44 - sp48) > 50.0f)) {
                                        func_80834DB8((LinkAnimationHeader* ) arg0, (bitwise f32) &D_0400DE58, (PlayState* )0x40C00000, (Player* ) arg1);
                                        func_80831494(arg1, arg0, sp2C, 0);
                                        return;
                                    }
                                }
                                func_808373F8((Player* ) arg1, (LinkAnimationHeader* ) arg0, 0x6814U);
                                return;
                            }
                            goto block_45;
                        }
                    }
                }
block_45:
                if ((D_80862B1C == 9) || (D_80862B18 <= arg0->ageProperties->unk_34) || (func_80837DEC(&arg0->actor, arg1, 1U) == 0)) {
                    func_8082DB3C(arg1, arg0, &D_0400DD30);
                }
            }
        }
    } else {
        arg0->unk_B68 = (s16) temp_ft1;
        arg0->unk_B67 = 5;
    }
}

void func_8083868C(PlayState* arg0, Player* arg1) {
    s32 sp1C;
    Camera* var_v0;
    s32 var_v1;
    u8 temp_v0;

    var_v1 = 6;
    if (arg1->unk_AA5 == 3) {
        if (func_800B7118(arg1) != 0) {
            temp_v0 = arg1->transformation;
            if (temp_v0 == 4) {
                var_v1 = 0xC;
            } else if (temp_v0 == 3) {
                var_v1 = 3;
            } else {
                var_v1 = 0xD;
            }
        } else {
            var_v1 = 8;
        }
    }
    if (arg1->actor.id == 0) {
        sp1C = var_v1;
        var_v0 = Play_GetCamera(arg0, 0);
    } else {
        sp1C = var_v1;
        var_v0 = Play_GetCamera(arg0, arg1->unk_D8E);
    }
    Camera_ChangeMode(var_v0, (s16) var_v1);
}

void func_80838760(Player* arg0) {
    s8 temp_a1;

    temp_a1 = arg0->unk_A86;
    if (temp_a1 >= 0) {
        ActorCutscene_Stop((s16) temp_a1);
        arg0->unk_A86 = -1;
    }
}

s32 func_808387A0(PlayState* arg0, Player* arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1->unk_AA5 == 4) {
        func_80838760(arg1);
        arg1->actor.flags &= ~0x100;
        func_80831494(arg0, arg1, func_8085B08C, 0);
        if (arg1->unk_3BA != 0) {
            arg1->stateFlags1 |= 0x20000000;
        }
        func_8082DC38(arg1);
        var_v0 = 1;
    }
    return var_v0;
}

void func_80838830(Player* arg0, s16 arg1) {
    OSMesgQueue* sp34;
    OSMesgQueue* temp_a0;
    RomFile* temp_v0;
    u32 temp_a2;

    temp_a0 = arg0 + 0x1DC;
    if (arg1 != 0) {
        arg0->giObjectLoading = 1;
        sp34 = temp_a0;
        osCreateMesgQueue(temp_a0, arg0 + 0x1F4, 1);
        temp_v0 = &gObjectTable[arg1];
        temp_a2 = temp_v0->vromStart;
        DmaMgr_SendRequestImpl(arg0 + 0x1BC, arg0->giObjectSegment, temp_a2, temp_v0->vromEnd - temp_a2, 0, sp34, NULL);
    }
}

void func_808388B8(PlayState* arg0, Player* arg1, s32 arg2) {
    EnvLightSettings* temp_t2;

    func_8082DE50(arg0, arg1);
    func_80831760(arg0, arg1, func_808553F4, 0);
    func_8082E4A4(arg0, arg1, D_8085D160[arg1->transformation]);
    gSaveContext.save.playerForm = (u8) arg2;
    arg1->stateFlags1 |= 2;
    temp_t2 = &arg0->envCtx.lightSettings;
    D_80862B50.unk_0 = (unaligned s32) temp_t2->unk_0;
    D_80862B50.unk_4 = (s32) (unaligned s32) temp_t2->unk_4;
    D_80862B50.unk_8 = (s32) (unaligned s32) temp_t2->unk_8;
    D_80862B50.unk_C = (s32) (unaligned s32) temp_t2->unk_C;
    D_80862B50.unk_10 = (s32) (unaligned s32) temp_t2->unk_10;
    D_80862B50.unk_14 = (s32) (unaligned s32) temp_t2->unk_14;
    D_80862B50.unk_18 = (s32) (unaligned s32) temp_t2->unk_18;
    arg1->actor.velocity.y = 0.0f;
    func_800B90F4(arg0);
}

void func_808389BC(PlayState* arg0, Player* arg1) {
    func_80831760(arg0, (Player* ) func_80855AF4, NULL);
    func_8082E4A4(arg0, arg1, &D_0400D0C8);
    arg1->stateFlags1 |= 0x20000100;
    func_8082DAD4(arg1);
}

void func_80838A20(PlayState* arg0, Player* arg1) {
    func_80831760(arg0, (Player* ) func_80855B9C, NULL);
    func_8082DB90(arg0, arg1, &D_0400D0A8);
    arg1->currentMask = 0;
    arg1->stateFlags1 |= 0x20000100;
    func_8082DAD4(arg1);
    func_80115D5C(&arg0->state);
}

s32 func_80838A90(Player* arg0, PlayState* arg1) {
    s32 sp34;
    Actor* sp2C;
    Actor* sp28;
    Actor* sp24;
    Actor* temp_t0;
    Actor* var_v1;
    LinkAnimationHeader* var_a2;
    s32 temp_a0;
    s32 temp_v0_4;
    s32 var_v0;
    s8 temp_a1;
    s8 temp_v0_3;
    s8 temp_v0_6;
    s8 temp_v0_7;
    u32 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    void* temp_v0_5;

    var_v0 = 0;
    if (arg0->unk_AA5 != 0) {
        if (!(arg0->actor.bgCheckFlags & 3)) {
            temp_v0 = arg0->stateFlags1;
            if (((temp_v0 * 0x10) >= 0) && ((temp_v0 << 8) >= 0) && !(arg0->stateFlags3 & 8) && !(arg0->skelAnime.moveFlags & 8)) {
                func_80838760(arg0);
                func_80833AA0(arg0, arg1);
                return 1;
            }
        }
        if (func_808387A0(arg1, arg0) == 0) {
            if (arg0->unk_AA5 == 5) {
                temp_a1 = arg0->heldItemActionParam;
                if ((temp_a1 >= 0x3A) && (temp_a1 < 0x52)) {
                    temp_v0_2 = arg0->currentMask;
                    temp_v1 = temp_a1 - 0x39;
                    temp_a0 = temp_v1 == temp_v0_2;
                    arg0->prevMask = temp_v0_2;
                    if ((temp_a0 != 0) || (temp_a1 < 0x4D) || ((temp_a1 == 0x4D) && (arg0->transformation != 4))) {
                        if (temp_a0 != 0) {
                            arg0->currentMask = 0;
                        } else {
                            arg0->currentMask = temp_v1;
                        }
                        if (arg0->transformation == 4) {
                            func_80838A20(arg1, arg0);
                            return 1;
                        }
                        func_808388B8(arg1, arg0, 4);
                        goto block_24;
                    }
                    arg0->currentMask = temp_v1;
                    if ((temp_v1 & 0xFF) == 0x14) {
                        func_808389BC(arg1, arg0);
                        return 1;
                    }
                    func_808388B8(arg1, arg0, arg0->heldItemActionParam - 0x4E);
block_24:
                    gSaveContext.save.equippedMask = arg0->currentMask;
                    goto block_85;
                }
                if (((arg0->actor.flags & 0x100) != 0x100) && (temp_a1 != 0x13)) {
                    if (arg0->unk_B2B != temp_a1) {
                        if ((temp_a1 != 0x22) && ((temp_a1 < 0x19) || (temp_a1 >= 0x20)) && (temp_a1 < 0x2A)) {
                            if (arg0->targetActor != NULL) {
                                temp_v0_3 = arg0->exchangeItemId;
                                if (temp_v0_3 > 0) {
                                    if ((temp_v0_3 != 0x2E) || (temp_a1 != 0x2E)) {
                                        if ((temp_v0_3 != 0x2E) && (Player_ActionToBottle(arg0, (enum PlayerActionParam) temp_a1) >= 0)) {
                                            goto block_39;
                                        }
                                        goto block_55;
                                    }
                                    goto block_39;
                                }
                            }
                            goto block_55;
                        }
                        goto block_39;
                    }
block_55:
                    temp_v0_4 = Player_ActionToBottle(arg0, (enum PlayerActionParam) arg0->heldItemActionParam);
                    if (temp_v0_4 >= 0) {
                        sp34 = temp_v0_4;
                        func_80838760(arg0);
                        if (sp34 >= 0x14) {
                            func_80831760(arg1, arg0, func_80853754, 0);
                            func_8082DB90(arg1, arg0, &D_0400D4A8);
                        } else if ((sp34 > 0) && (sp34 < 0xC)) {
                            func_80831760(arg1, arg0, func_80853850, 0);
                            func_8082DB90(arg1, arg0, &D_0400D4D8);
                            arg0->unk_A86 = (s8) arg1->playerActorCsIds[2];
                        } else {
                            func_80831760(arg1, arg0, func_80853194, 0);
                            if (arg0->transformation == 3) {
                                var_a2 = &D_0400E2A0;
                            } else {
                                var_a2 = &D_0400D4B8;
                            }
                            func_8082E4A4(arg1, arg0, var_a2);
                        }
                        goto block_85;
                    }
                    temp_t0 = arg0->unk_A90;
                    if ((temp_t0 == NULL) || (temp_t0->id == 0x228) || (temp_t0->cutscene == -1)) {
                        sp24 = temp_t0;
                        if (func_808323C0(&arg0->actor, arg1->playerActorCsIds[0]) == 0) {
                            return 0;
                        }
                        goto block_71;
                    }
                    arg0->unk_A86 = -1;
block_71:
                    sp24 = temp_t0;
                    func_80831760(arg1, arg0, func_8085269C, 0);
                    if ((arg0->skelAnime.playSpeed < 0.0f) || ((temp_v1_2 = arg0->transformation, temp_v0_5 = arg0->skelAnime.animation, (temp_v0_5 != D_8085D17C[temp_v1_2])) && (temp_v0_5 != D_8085D190[temp_v1_2]))) {
                        sp24 = temp_t0;
                        func_8082DB90(arg1, arg0, D_8085D17C[arg0->transformation]);
                    }
                    arg0->stateFlags2 |= 0x08000000;
                    if (temp_t0 != NULL) {
                        arg0->actor.flags |= 0x20000000;
                        if (temp_t0->id == 0x228) {
                            arg0->unk_A94 = -1.0f;
                        } else {
                            temp_t0->flags |= 0x20000000;
                        }
                    }
block_85:
                    arg0->stateFlags1 |= 0x30000000;
                    func_8082DAD4(arg0);
                    goto block_86;
                }
block_39:
                sp28 = (Actor* ) arg0->heldItemActionParam;
                func_80838760(arg0, (Actor* ) arg0->heldItemActionParam);
                arg0->heldItemActionParam = 0;
                func_80831760(arg1, arg0, func_80853A5C, 0);
                var_v1 = arg0->targetActor;
                arg0->unk_A86 = -1;
                arg0->heldItemActionParam = (s8) sp28;
                if ((var_v1 != NULL) && (((temp_v0_6 = arg0->exchangeItemId, (temp_v0_6 == 0x2E)) && (arg0->heldItemActionParam == 0x2E)) || ((temp_v0_6 != 0x2E) && (temp_v0_6 > 0)))) {
                    arg0->stateFlags1 |= 0x20000040;
                    if (temp_v0_6 == 0x2E) {
                        sp2C = var_v1;
                        Inventory_ChangeAmmo(0xA, -1);
                        func_80831760(arg1, arg0, func_8084B4A8, 0);
                        arg0->currentYaw = var_v1->yawTowardsPlayer + 0x8000;
                        arg0->actor.shape.rot.y = arg0->currentYaw;
                        if (var_v1->xzDistToPlayer < 40.0f) {
                            sp2C = var_v1;
                            func_8082DB90(arg1, arg0, &D_0400DB10);
                            func_8082E920(arg1, arg0, 0x19);
                        } else {
                            sp2C = var_v1;
                            func_8082E438(arg1, arg0, (D_8085BE84 + 0x2E8)[arg0->modelAnimType]);
                        }
                        var_v1 = sp2C;
                        arg0->stateFlags1 |= 0x20000000;
                        arg0->unk_AE8 = 0x50;
                        arg0->unk_AE7 = -1;
                        arg0->unk_730 = arg0->targetActor;
                    } else {
                        arg0->unk_A86 = 0x7C;
                    }
                    var_v1->flags |= 0x100;
                    arg0->actor.textId = 0;
                    arg0->unk_730 = arg0->targetActor;
                } else {
                    arg0->stateFlags1 |= 0x30000040;
                    arg0->unk_AE7 = 1;
                    arg0->actor.textId = 0xFE;
                    arg0->unk_A86 = (s8) arg1->playerActorCsIds[3];
                }
                temp_v0_7 = arg0->unk_AE7;
                arg0->actor.flags |= 0x100;
                arg0->exchangeItemId = arg0->heldItemActionParam;
                if (temp_v0_7 >= 0) {
                    func_8082DB18(arg1, arg0, D_8085D1F8[temp_v0_7]);
                }
                func_8082DAD4(arg0);
                return 1;
            }
            if (func_8083868C(arg1, arg0) != 0) {
                func_80838760(arg0);
                if ((arg0->stateFlags1 << 8) >= 0) {
                    func_80831494(arg1, arg0, func_8084E724, 1);
                    arg0->unk_AE8 = 0xD;
                    func_80836D8C(arg0);
                    if (arg0->unk_AA5 == 2) {
                        arg1->actorCtx.unk5 |= 4;
                    }
                }
                arg0->stateFlags1 |= 0x100000;
                play_sound(0x4813U);
                func_8082DABC(arg0);
                return 1;
            }
            arg0->unk_AA5 = 0;
            play_sound(0x4806U);
            return 0;
        }
block_86:
        var_v0 = 1;
        /* Duplicate return node #87. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

s32 func_808391D8(Player* arg0, PlayState* arg1) {
    Actor* sp2C;
    Actor* sp28;
    Actor* sp24;
    s32 sp20;
    s32 sp1C;
    Actor* temp_t0;
    Actor* temp_v0;
    Actor* var_a1;
    Actor* var_a3;
    s16 temp_v1;
    s16 temp_v1_3;
    s16 var_a0;
    s32 temp_a0;
    s32 temp_t9;
    s32 var_t1;
    s32 var_t2;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_v1_2;
    u8 temp_v0_2;

    if (gSaveContext.save.playerData.health != 0) {
        var_a1 = NULL;
        var_t1 = 0;
        sp2C = arg0->targetActor;
        temp_t0 = arg0->tatlActor;
        var_a3 = arg0->unk_730;
        var_t2 = 0;
        var_v0 = var_a3 != NULL;
        if (temp_t0 != NULL) {
            if (var_v0 != 0) {
                var_v0 = (var_a3->flags & 0x40001) == 0x40001;
                if (var_v0 == 0) {
                    var_v0 = var_a3->hintId != 0xFF;
                }
            }
            var_t2 = var_v0;
            if ((var_v0 != 0) || (arg0->tatlTextId != 0)) {
                temp_v1 = arg0->tatlTextId;
                temp_a0 = temp_v1 < 0;
                var_v0_2 = temp_a0;
                if (temp_a0 != 0) {
                    if (temp_a0 != 0) {
                        var_a0 = -temp_v1;
                    } else {
                        var_a0 = temp_v1;
                    }
                    var_v0_2 = (var_a0 & 0xFF00) != 0x10000;
                }
                var_t1 = var_v0_2;
                if ((var_v0_2 != 0) || (var_a1 = var_a3, (var_t2 == 0))) {
                    var_a1 = temp_t0;
                    if (var_v0_2 != 0) {
                        var_a3 = NULL;
                        sp2C = NULL;
                    }
                }
            }
        }
        if (((sp2C != NULL) || (var_a1 != NULL)) && ((var_a3 == NULL) || (var_a3 == sp2C) || (var_a3 == var_a1)) && ((temp_v1_2 = arg0->stateFlags1, ((temp_v1_2 & 0x800) == 0)) || ((temp_v0 = arg0->heldActor, (temp_v0 != NULL)) && ((var_t1 != 0) || (sp2C == temp_v0) || (var_a1 == temp_v0) || ((sp2C != NULL) && (sp2C->flags & 0x10000))))) && ((arg0->actor.bgCheckFlags & 1) || ((temp_v1_2 << 8) < 0) || (sp24 = var_a1, sp28 = var_a3, sp20 = var_t1, sp1C = var_t2, (func_801242B4(arg0) != 0)))) {
            if (sp2C != NULL) {
                if ((var_a3 == NULL) || (var_a3 == sp2C)) {
                    arg0->stateFlags2 |= 2;
                }
                sp24 = var_a1;
                sp20 = var_t1;
                sp1C = var_t2;
                if (ActorCutscene_GetCanPlayNext(0x7C) == 0) {
                    goto block_55;
                }
                if ((~(D_80862B44->press.button | 0xFFFF7FFF) == 0) || (sp2C->flags & 0x10000)) {
                    var_a1 = NULL;
                    goto block_42;
                }
                if (var_a1 == NULL) {
                    goto block_55;
                }
                goto block_42;
            }
block_42:
            if (var_a1 != NULL) {
                if ((var_t1 == 0) && ((arg0->stateFlags2 |= 0x200000, sp1C = var_t2, sp20 = var_t1, sp24 = var_a1, (ActorCutscene_GetCanPlayNext(0x7C) == 0)) || (~(D_80862B44->press.button | ~8) != 0))) {
                    goto block_55;
                }
                sp2C = var_a1;
                arg0->targetActor = NULL;
                if ((var_t1 != 0) || (var_t2 == 0)) {
                    temp_v1_3 = arg0->tatlTextId;
                    if (temp_v1_3 < 0) {
                        var_a1->textId = (u16) -temp_v1_3;
                    } else {
                        var_a1->textId = (u16) temp_v1_3;
                    }
                } else {
                    temp_v0_2 = var_a1->hintId;
                    if (temp_v0_2 != 0xFF) {
                        var_a1->textId = temp_v0_2 + 0x1900;
                    }
                }
                goto block_54;
            }
block_54:
            temp_t9 = D_80862B2C;
            arg0->currentMask = (u8) temp_t9;
            gSaveContext.save.equippedMask = (u8) temp_t9;
            func_8085B460(arg1, sp2C, arg0);
            return 1;
        }
        goto block_55;
    }
block_55:
    return 0;
}

s32 func_80839518(Player* arg0, PlayState* arg1) {
    Actor* temp_v0;

    if (arg0->unk_AA5 != 0) {
        func_80838A90();
        return 1;
    }
    temp_v0 = arg0->unk_730;
    if ((temp_v0 != NULL) && (((temp_v0->flags & 0x40001) == 0x40001) || (temp_v0->hintId != 0xFF))) {
        arg0->stateFlags2 |= 0x200000;
    } else if ((arg0->tatlTextId == 0) && (func_80123420(arg0) == 0) && (~(D_80862B44->press.button | ~8) == 0) && (func_80831814(arg0, arg1, 1) == 0)) {
        play_sound(0x4806U);
    }
    return 0;
}

void func_808395F0(Player* arg0, Player* arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 var_a2;
    f32 var_fa0;

    var_a2 = arg2;
    var_fa0 = arg3;
    if (arg1->transformation == 2) {
        var_fa0 *= 1.1f;
        var_a2 = 2.5e-44f;
        arg4 *= 0.9f;
    }
    arg3 = var_fa0;
    func_80833864((bitwise PlayState* ) var_fa0, arg0, (s32) arg1, var_a2);
    func_80831494((PlayState* ) arg0, arg1, func_8084CB58, 0);
    arg1->stateFlags3 |= 2;
    arg1->linearVelocity = arg3;
    arg1->currentYaw = arg1->actor.shape.rot.y;
    arg1->actor.bgCheckFlags &= 0xFFFE;
    arg1->actor.velocity.y = arg4;
    func_8082E188(arg1);
    func_8082DF8C(arg1, 0x6801U);
}

s32 func_808396B8(Player* arg0, Player* arg1) {
    u8 temp_v0;

    if (((arg1->stateFlags1 << 9) >= 0) && (((arg1->actor.id != 0) && (~(D_80862B44->press.button | ~0x4000) == 0)) || ((Player_GetMeleeWeaponHeld(arg1) != 0) && ((temp_v0 = arg1->transformation, (temp_v0 != 1)) || (arg1->actor.bgCheckFlags & 1)) && ((temp_v0 != 2) || ((arg1->stateFlags1 << 6) >= 0)) && (D_80862B48 != 0)))) {
        return 1;
    }
    return 0;
}

s32 func_80839770(Player* arg0, Player* arg1) {
    f32 var_a2;
    u8 temp_v0;

    if (func_808396B8(arg1, arg0) != 0) {
        temp_v0 = arg0->transformation;
        if ((temp_v0 != 1) && (D_80862B08 != 7)) {
            var_a2 = 2.4e-44f;
            if (temp_v0 == 2) {
                var_a2 = 2.5e-44f;
            }
            func_808395F0(arg1, arg0, var_a2, 3.0f, 4.5f);
            return 1;
        }
    }
    return 0;
}

s32 func_80839800(Player* arg0, PlayState* arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (((arg0 + arg0->unk_ADE)->unk_AE3 == 0) && (D_80862B08 != 7)) {
        func_80836B3C(arg1, arg0, 0.0f, arg0);
        var_v0 = 1;
    }
    return var_v0;
}

void func_80839860(Player* arg0, PlayState* arg1, s8 arg2) {
    s32 sp28;
    f32 var_fv0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg2 & 1;
    if (temp_v1 == 0) {
        var_fv0 = 5.8f;
    } else {
        var_fv0 = 3.5f;
    }
    if (arg0->currentBoots == 2) {
        var_fv0 *= 0.5f;
    }
    sp28 = temp_v1;
    func_80834D50(arg1, arg0, *(&D_8085C2A4 + (arg2 * 0xC)), var_fv0, (u16) 0x6800);
    temp_v0 = arg2 << 0xE;
    arg0->unk_AE8 = 1;
    arg0->unk_AE7 = arg2;
    arg0->currentYaw = arg0->actor.shape.rot.y + temp_v0;
    if (temp_v1 == 0) {
        arg0->linearVelocity = 6.0f;
    } else {
        arg0->linearVelocity = 8.5f;
    }
    arg0->stateFlags2 |= 0x80000;
    if (temp_v0 == 0x8000) {
        var_v0 = 0x83C;
    } else {
        var_v0 = 0x83D;
    }
    func_800B8E58(arg0, var_v0 & 0xFFFF);
}

void func_80839978(PlayState* arg0, Player* arg1) {
    if (arg1->actor.bgCheckFlags & 1) {
        arg1->heldItemActionParam = 0x14;
        func_80831760(arg0, arg1, func_8084AC84, 0);
        func_8082DB60(arg0, arg1, &D_0400D228);
        func_8082E920(arg0, arg1, 0x204);
        arg1->stateFlags3 |= 0x20000000;
        arg1->unk_B48 = arg1->linearVelocity;
        func_801A3098(0x53U);
    }
}

void func_80839A10(PlayState* arg0, Player* arg1) {
    if (arg1->actor.bgCheckFlags & 1) {
        arg1->heldItemActionParam = 0;
        func_80831760(arg0, (Player* ) func_8084AEEC, NULL);
        func_8082DB60(arg0, arg1, &D_0400CF98);
        arg1->stateFlags2 |= 0x02000000;
        func_801A3098(0x71U);
    }
}

s32 func_80839A84(PlayState* arg0, Player* arg1) {
    if (arg1->transformation == 3) {
        if (func_80836DC0(arg0) != 0) {

        } else {
            func_80831494(arg0, arg1, func_808573A4, 0);
            arg1->unk_ADC = 4;
            arg1->stateFlags1 &= 0xBFFDFFFF;
            func_808373A4(arg0, arg1);
        }
        return 1;
    }
    return 0;
}

s32 func_80839B18(Player* arg0, Player* arg1) {
    s32 sp2C;
    s8 temp_a2;

    if ((~(D_80862B44->press.button | 0xFFFF7FFF) == 0) && (arg1->unk_186E3 != 2) && (D_80862B08 != 7) && (D_80862B40 != 1)) {
        temp_a2 = (arg0 + arg0->unk_ADE)->unk_AE3;
        if (temp_a2 <= 0) {
            sp2C = (s32) temp_a2;
            if (func_8082FBE8(arg0) != 0) {
                if (arg0->actor.category != 2) {
                    if (temp_a2 < 0) {
                        func_80834DB8((LinkAnimationHeader* ) arg0, (bitwise f32) &D_0400DCD8, (bitwise PlayState* ) ((f32) gGameInfo->data[0x45] / 100.0f), arg1);
                        return 1;
                    }
                    func_80836B3C((PlayState* ) arg1, arg0, 0.0f);
                    return 1;
                }
                if (((arg0->stateFlags1 * 0x10) >= 0) && (Player_GetMeleeWeaponHeld(arg0) != 0) && (func_80832090(arg0) != 0) && (arg0->transformation != 1)) {
                    func_808395F0(arg1, arg0, 2.4e-44f, 5.0f, 5.0f);
                    return 1;
                }
                if (func_80839A84((PlayState* ) arg1, arg0) == 0) {
                    func_80836B3C((PlayState* ) arg1, arg0, 0.0f);
                }
                return 1;
            }
            goto block_19;
        }
        func_80839860(arg0, (PlayState* ) temp_a2);
        return 1;
    }
block_19:
    return 0;
}

void func_80839CD8(Player* arg0, PlayState* arg1) {
    LinkAnimationHeader* sp34;
    f32 sp30;
    LinkAnimationHeader* var_a2;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv0_4;

    var_fv0 = arg0->unk_B38 - 3.0f;
    if (var_fv0 < 0.0f) {
        var_fv0 += 29.0f;
    }
    if (var_fv0 < 14.0f) {
        var_fv0_2 = 11.0f - var_fv0;
        var_a2 = (D_8085BE84 + 0x198)[arg0->modelAnimType];
        if (var_fv0_2 < 0.0f) {
            var_fv0_2 = -var_fv0_2 * 1.375f;
        }
        var_fv0_3 = var_fv0_2 / 11.0f;
    } else {
        var_fv0_4 = 26.0f - var_fv0;
        var_a2 = (D_8085BE84 + 0x1B0)[arg0->modelAnimType];
        if (var_fv0_4 < 0.0f) {
            var_fv0_4 = -var_fv0_4 * 2.0f;
        }
        var_fv0_3 = var_fv0_4 / 12.0f;
    }
    sp34 = var_a2;
    sp30 = var_fv0_3;
    LinkAnimation_Change(arg1, arg0 + 0x240, var_a2, 1.0f, 0.0f, (f32) Animation_GetLastFrame(var_a2), (u8) 2, 4.0f * sp30);
    arg0->currentYaw = arg0->actor.shape.rot.y;
}

void func_80839E3C(Player* arg0, PlayState* arg1) {
    func_808369F4(arg0, arg1);
    func_80839CD8(arg0, arg1);
}

void func_80839E74(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_80849FE0, 1);
    func_8082DB18(arg1, arg0, func_8082ED20(arg0));
    arg0->currentYaw = arg0->actor.shape.rot.y;
}

void func_80839ED0(Player* arg0, PlayState* arg1) {
    if (!(arg0->stateFlags3 & 0x80) && (arg0->unk_748 != func_80852B28) && (func_8083213C(arg0) == 0)) {
        func_80836D8C(arg0);
        if (!(arg0->stateFlags1 & 0x40)) {
            if (func_801242B4(arg0) != 0) {
                func_808353DC(arg1, arg0);
            } else {
                func_80836988(arg0, arg1);
            }
        }
        if ((s32) arg0->unk_AA5 < 5) {
            arg0->unk_AA5 = 0;
        }
    }
    arg0->stateFlags1 &= 0xFFEF9FFB;
}

s32 func_80839F98(PlayState* arg0, PlayState* arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg1->unk_A6C * 0x10) >= 0) {
        if (arg1->unk_AD0 != 0.0f) {
            func_80836B3C(arg1, (bitwise Player* ) 0.0f);
            return 1;
        }
        func_80836AD8(arg1);
        LinkAnimation_Change(arg0, (SkelAnime* ) &arg1->mainCamera.paramData[0x20], &D_0400E208, 0.6666667f, 0.0f, 7.0f, (u8) 2, 0.0f);
        var_v0 = 1;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

void func_8083A04C(Player* arg0) {
    if (arg0->currentBoots == 5) {
        if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
            arg0->currentBoots = 4;
        }
        if (arg0->unk_748 == func_808508C8) {
            arg0->unk_AE8 = 0x14;
        }
    } else if (~(D_80862B44->press.button | ~0x4000) == 0) {
        arg0->currentBoots = 5;
    }
}

s32 func_8083A0CC(Player* arg0, PlayState* arg1) {
    if ((D_80862B04 == 0) && (arg0->transformation == 2)) {
        func_8083A04C();
    }
    return 0;
}

s32 func_8083A114(Player* arg0, PlayState* arg1) {
    if ((D_80862B04 == 0) && ((arg0->stateFlags1 << 8) >= 0) && (func_8082FB68(arg0) == 0)) {
        if ((arg0->transformation == 2) && ((arg0->stateFlags1 * 0x10) < 0)) {
            func_8083A04C(arg0);
            goto block_19;
        }
        if ((~(D_80862B44->press.button | 0xFFFF7FFF) == 0) && (func_8082FB68(arg0) == 0)) {
            if (arg0->transformation == 1) {
                if (func_80839F98(arg1, (PlayState* ) arg0) != 0) {
                    return 1;
                }
                goto block_14;
            }
            if ((func_80839A84(arg1, arg0) != 0) || (func_80839800(arg0, arg1) != 0)) {
                return 1;
            }
block_14:
            if ((arg0->unk_ACF == 0) && (arg0->itemActionParam >= 3) && (arg0->transformation != 0)) {
                func_80831990(arg1, arg0, ITEM_NONE);
            } else {
                arg0->stateFlags2 ^= 0x100000;
            }
            goto block_19;
        }
        goto block_19;
    }
block_19:
    return 0;
}

s32 func_8083A274(Player* arg0, PlayState* arg1) {
    LinkAnimationHeader* sp34;
    LinkAnimationHeader* var_a2;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 var_fv1;
    u8 temp_v0;

    if ((~(D_80862B44->cur.button | ~0x10) == 0) && (arg0->unk_AA5 == 0) && (arg1->unk_1887C == 0) && ((Player_IsGoronOrDeku(arg0) != 0) || ((((temp_v0 = arg0->transformation, (temp_v0 == 2)) && !(arg0->stateFlags1 & 0x02000000)) || ((temp_v0 == 4) && (arg0->currentShield != 0))) && (func_80123434(arg0) == 0) && (arg0->unk_730 == NULL)))) {
        func_8082DC38(arg0);
        func_8082DCA0(arg1, arg0);
        if (func_80831494(arg1, arg0, func_8084B5C0, 0) != 0) {
            arg0->stateFlags1 |= 0x400000;
            if (arg0->transformation != 1) {
                if (Player_IsGoronOrDeku(arg0) == 0) {
                    Player_SetModelsForHoldingShield(arg0);
                    var_a2 = (D_8085BE84 + 0x1C8)[arg0->modelAnimType];
                } else {
                    var_a2 = &D_0400D218;
                    if (arg0->transformation == 3) {
                        var_a2 = &D_0400E2C8;
                    }
                }
                if (var_a2 != arg0->skelAnime.animation) {
                    sp34 = var_a2;
                    if (func_80123420(arg0) != 0) {
                        arg0->unk_B3C = 1.0f;
                    } else {
                        arg0->unk_B3C = 0.0f;
                        sp34 = var_a2;
                        func_8082FC60(arg0);
                    }
                    arg0->unk_AB2.x = 0;
                    arg0->unk_AB2.y = 0;
                    arg0->unk_AB2.z = 0;
                }
                sp34 = var_a2;
                temp_fv0 = (f32) Animation_GetLastFrame(var_a2);
                temp_fa0 = temp_fv0;
                if (var_a2 == &D_0400E2C8) {
                    var_fv1 = 0.0f;
                } else {
                    var_fv1 = temp_fv0;
                }
                LinkAnimation_Change(arg1, &arg0->skelAnime, var_a2, 0.6666667f, var_fv1, temp_fa0, (u8) 2, 0.0f);
            }
            func_80830AE8(arg0);
        }
        return 1;
    }
    return 0;
}

s32 func_8083A4A4(Player* arg0, f32* arg1, s16* arg2, f32 arg3) {
    s16 temp_v0;
    s16 var_v1;

    temp_v0 = arg0->currentYaw - *arg2;
    var_v1 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -temp_v0;
    }
    if (var_v1 >= 0x6001) {
        if (Math_StepToF(arg0 + 0xAD0, 0.0f, arg3) != 0) {
            *arg1 = 0.0f;
            *arg2 = arg0->currentYaw;
            goto block_6;
        }
        return 1;
    }
block_6:
    return 0;
}

void func_8083A548(Player* arg0) {
    s8 temp_v0;

    temp_v0 = arg0->unk_ADC;
    if ((temp_v0 > 0) && (~(D_80862B44->cur.button | ~0x4000) != 0)) {
        arg0->unk_ADC = -temp_v0;
    }
}

s32 func_8083A580(Player* arg0, PlayState* arg1) {
    s8 temp_v0;
    u8 temp_v1;

    if (~(D_80862B44->cur.button | ~0x4000) == 0) {
        if (((arg0->stateFlags1 << 9) >= 0) && (Player_GetMeleeWeaponHeld(arg0) != 0)) {
            temp_v0 = arg0->unk_ADC;
            if ((temp_v0 > 0) && ((temp_v1 = arg0->transformation, (temp_v1 == 2)) || ((temp_v0 == 1) && (arg0->itemActionParam != 7)))) {
                if (temp_v1 == 2) {
                    func_80830E30(arg0, arg1, arg0, arg1);
                    return 1;
                }
                func_808335B0(arg1, arg0, arg0, arg1);
                return 1;
            }
        }
        goto block_11;
    }
    func_8083A548(arg0, arg0, arg1);
block_11:
    return 0;
}

? func_8083A658(PlayState* arg0, Player* arg1) {
    ? var_v0;

    var_v0 = 0;
    if (arg1->actor.bgCheckFlags & 1) {
        func_80831494(arg0, arg1, func_80852B28, 0);
        func_8082DB18(arg0, arg1, &D_0400DD38);
        var_v0 = 1;
        arg1->unk_AA5 = 0;
    }
    return var_v0;
}

s32 func_8083A6C0(PlayState* arg0, Player* arg1) {
    if (D_80862B48 != 0) {
        if (Player_GetBottleHeld(arg1) >= 0) {
            func_80831494(arg0, arg1, func_808534C0, 0);
            if (arg1->actor.depthInWater > 12.0f) {
                arg1->unk_AE8 = 1;
            }
            func_8082DB90(arg0, arg1, D_8085D200[arg1->unk_AE8].unk_0);
            func_800B8E58(arg1, 0x1801U);
            func_8082DF8C(arg1, 0x6814U);
            return 1;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

void func_8083A794(Player* arg0, PlayState* arg1) {
    void (*sp24)(Player*, PlayState*);
    void (*temp_v0)(Player*, PlayState*);
    void (*var_a2)(Player*, PlayState*);

    temp_v0 = arg0->unk_748;
    if ((temp_v0 != func_8084AF9C) && (temp_v0 != func_8084B0EC)) {
        arg0->unk_B70 = 0;
        arg0->unk_B34 = 0.0f;
        arg0->unk_B38 = 0.0f;
        sp24 = func_8084AF9C;
        func_8082E514(arg1, arg0, (D_8085BE84 + 0x30)[arg0->modelAnimType]);
    }
    sp24 = func_8084AF9C;
    if (func_8082FBE8(arg0) != 0) {
        var_a2 = func_8084B0EC;
    } else {
        var_a2 = func_8084AF9C;
    }
    func_80831494(arg1, arg0, var_a2, 1);
}

void func_8083A844(Player* arg0, s16 arg2) {
    arg0->currentYaw = arg2;
    arg0->actor.shape.rot.y = arg0->currentYaw;
    func_8083A794((Player* ) arg2);
}

s32 func_8083A878(PlayState* arg0, Player* arg1, f32 arg2) {
    WaterBox* sp2C;
    f32 sp28;
    f32 temp_ft3;

    sp28 = arg1->actor.world.pos.y;
    if (WaterBox_GetSurface1(arg0, arg0 + 0x830, arg1->actor.world.pos.x, arg1->actor.world.pos.z, &sp28, &sp2C) != 0) {
        temp_ft3 = sp28 - arg1->actor.world.pos.y;
        sp28 = temp_ft3;
        if (arg1->ageProperties->unk_24 <= temp_ft3) {
            func_80831494(arg0, arg1, func_80850B18, 0);
            func_8082E634(arg0, arg1, &D_0400DFD0);
            arg1->stateFlags1 |= 0x28000000;
            arg1->unk_AE8 = 0x14;
            arg1->linearVelocity = 2.0f;
            func_80123140(arg0, arg1);
            return 0;
        }
    }
    func_80835324(arg0, arg1, arg2, arg1->actor.shape.rot.y);
    arg1->stateFlags1 |= 0x20000000;
    return 1;
}

void func_8083A98C(Actor* arg0, PlayState* arg1) {
    s32 sp1C;
    f32 temp_fa0;
    f32 temp_fv1;
    s16 temp_a1;
    s16 temp_t1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 var_a0;
    s16 var_a0_2;
    s16 var_v0;
    s16 var_v0_3;
    s16 var_v0_4;
    s16 var_v0_5;
    s16 var_v0_6;
    s16 var_v1;
    s32 var_v0_2;
    u16 var_v0_7;

    if (arg1->csCtx.state == 0) {
        temp_v1 = arg0->unk_AE8;
        if (temp_v1 == 0) {
            var_v0 = 0;
        } else {
            arg0->unk_AE8 = (s16) (temp_v1 - 1);
            var_v0 = arg0->unk_AE8;
        }
        if (var_v0 != 0) {
            temp_v0 = arg1->sceneNum;
            if (temp_v0 != 0xD) {
                sp1C = 6;
            } else {
                sp1C = 0xF;
            }
            if (arg0->unk_AE8 == 1) {
                if (temp_v0 == 0xD) {
                    var_v0_2 = 0x2A00;
                } else {
                    var_v0_2 = 0x5E6;
                }
                Message_StartTextbox(arg1, var_v0_2 & 0xFFFF, NULL);
            }
        } else {
            D_80862B44 = arg1->state.input;
            if (arg1->view.fovy >= 25.0f) {
                temp_v1_2 = arg0->focus.rot.x;
                temp_t1 = arg0->focus.rot.y;
                temp_v0_2 = arg1->state.input[0].rel.stick_y * 4;
                if (temp_v0_2 < -0x12C) {
                    var_v0_3 = -0x12C;
                } else {
                    var_a0 = temp_v0_2;
                    if (temp_v0_2 >= 0x12D) {
                        var_a0 = 0x12C;
                    }
                    var_v0_3 = var_a0;
                }
                arg0->focus.rot.x = temp_v1_2 + var_v0_3;
                temp_v1_3 = arg0->focus.rot.x;
                if (temp_v1_3 < -0x2EE0) {
                    arg0->focus.rot.x = -0x2EE0;
                } else {
                    var_v0_4 = temp_v1_3;
                    if (temp_v1_3 >= 0x2EE1) {
                        var_v0_4 = 0x2EE0;
                    }
                    arg0->focus.rot.x = var_v0_4;
                }
                temp_a1 = arg0->shape.rot.y;
                temp_v0_3 = D_80862B44->rel.stick_x * -4;
                if (temp_v0_3 < -0x12C) {
                    var_v0_5 = -0x12C;
                } else {
                    var_a0_2 = temp_v0_3;
                    if (temp_v0_3 >= 0x12D) {
                        var_a0_2 = 0x12C;
                    }
                    var_v0_5 = var_a0_2;
                }
                temp_v1_4 = (s16) (arg0->focus.rot.y - temp_a1) + var_v0_5;
                if (temp_v1_4 < -0x3E80) {
                    var_v1 = -0x3E80;
                } else {
                    var_v0_6 = temp_v1_4;
                    if (temp_v1_4 >= 0x3E81) {
                        var_v0_6 = 0x3E80;
                    }
                    var_v1 = var_v0_6;
                }
                arg0->focus.rot.y = temp_a1 + var_v1;
                if (arg1->sceneNum == 0x2D) {
                    temp_fv1 = (f32) (s16) (arg0->focus.rot.x - temp_v1_2);
                    temp_fa0 = (f32) (s16) (arg0->focus.rot.y - temp_t1);
                    func_8019FAD8(&D_801DB4A4, 0xCDU, sqrtf((temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0)) / 300.0f);
                }
            }
            if (arg1->sceneNum == 0xD) {
                sp1C = 0xF;
            } else if (~(D_80862B44->cur.button | 0xFFFF7FFF) == 0) {
                sp1C = 0xA;
            } else {
                sp1C = 0;
            }
            if (~(D_80862B44->press.button | ~0x4000) == 0) {
                func_801477B4(arg1);
                temp_v0_4 = arg1->sceneNum;
                if (temp_v0_4 == 0x2D) {
                    gSaveContext.respawn[0].entranceIndex = 0x4C20;
                } else {
                    if (temp_v0_4 == 0xD) {
                        var_v0_7 = 0xE30;
                    } else {
                        var_v0_7 = 0x4080;
                    }
                    gSaveContext.respawn[0].entranceIndex = var_v0_7;
                }
                func_80169EFC(&arg1->state);
                gSaveContext.respawnFlag = -2;
                arg1->unk_1887F = 0x15;
            }
        }
        Camera_ChangeSetting(Play_GetCamera(arg1, 0), 0x3E);
        Camera_ChangeMode(Play_GetCamera(arg1, 0), unksp1E);
    }
}

void func_8083AD04(PlayState* arg0, Player* arg1) {
    s16 temp_v0;

    arg1->actor.update = func_8083A98C;
    arg1->actor.draw = NULL;
    temp_v0 = arg0->sceneNum;
    if (temp_v0 == 0x2D) {
        arg1->actor.focus.rot.x = 0xBD8;
        arg1->actor.focus.rot.y = -0x4D74;
        arg1->unk_AE8 = 0x14;
    } else if (temp_v0 == 0xD) {
        arg1->actor.focus.rot.x = 0x9A6;
        arg1->actor.focus.rot.y = 0x2102;
        arg1->unk_AE8 = 2;
    } else {
        arg1->actor.focus.rot.x = 0x9A6;
        arg1->actor.focus.rot.y = 0x2102;
        arg1->unk_AE8 = 0x14;
    }
    arg0->actorCtx.unk5 |= 2;
}

void func_8083AD8C(PlayState* arg0, Player* arg1) {
    func_8085B384(arg1, arg0, arg1);
}

void func_8083ADB8(PlayState* arg1) {
    if (func_8083A878(arg1, (Player* )0x43340000) != 0) {
        arg1->colCtx.dyna.bgActors[6].dynaLookup.wall.head = -0x14U;
    }
}

void func_8083ADF0(PlayState* arg1) {
    arg1->unk_AD0 = 2.0f;
    gSaveContext.entranceSpeed = 2.0f;
    if (func_8083A878((PlayState* )0x42F00000) != 0) {
        arg1->colCtx.dyna.bgActors[6].dynaLookup.wall.head = -0xFU;
    }
}

void func_8083AE38(PlayState* arg1) {
    if (gSaveContext.entranceSpeed < 0.1f) {
        gSaveContext.entranceSpeed = 0.1f;
    }
    arg1->unk_AD0 = gSaveContext.entranceSpeed;
    if (func_8083A878((PlayState* )0x44480000) != 0) {
        arg1->colCtx.dyna.bgActors[6].dynaLookup.wall.head = (s16) (s32) (-80.0f / arg1->unk_AD0);
        if (arg1->colCtx.dyna.bgActors[6].dynaLookup.wall.head < -0x14) {
            arg1->colCtx.dyna.bgActors[6].dynaLookup.wall.head = -0x14;
        }
    }
}

void func_8083AECC(Player* arg0, s16 arg1, PlayState* arg2) {
    func_80831494(arg2, arg0, func_8084A5C0, 1);
    LinkAnimation_CopyJointToMorph(arg2, &arg0->skelAnime);
    arg0->unk_B38 = 0.0f;
    arg0->unk_B34 = 0.0f;
    arg0->currentYaw = arg1;
}

void func_8083AF30(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_8084A26C, 1);
    func_8082E514(arg1, arg0, (D_8085BE84 + 0x18)[arg0->modelAnimType]);
}

void func_8083AF8C(Player* arg0, s16 arg1, PlayState* arg2) {
    func_80831494(arg2, arg0, func_8084B288, 1);
    LinkAnimation_Change(arg2, &arg0->skelAnime, &D_0400D3F8, 1.0f, 0.0f, (f32) Animation_GetLastFrame(&D_0400D3F8), (u8) 2, -6.0f);
    arg0->linearVelocity = 8.0f;
    arg0->currentYaw = arg1;
}

void func_8083B030(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_8084A8E8, 1);
    func_8082E514(arg1, arg0, (D_8085BE84 + 0x240)[arg0->modelAnimType]);
    arg0->unk_B38 = 0.0f;
}

void func_8083B090(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_8084B3B8, 1);
    LinkAnimation_PlayOnceSetSpeed(arg1, &arg0->skelAnime, &D_0400D3E8, 2.0f);
}

void func_8083B0E4(PlayState* arg0, Player* arg1, s16 arg2) {
    arg1->currentYaw = arg2;
    func_80831494(arg0, arg1, func_8084AB4C, 1);
    arg1->unk_B4E = 0x4B0;
    arg1->unk_B4E = (s16) (s32) ((f32) arg1->unk_B4E * D_8085C3E4);
    LinkAnimation_Change(arg0, &arg1->skelAnime, (D_8085BE84 + 0x258)[arg1->modelAnimType], 1.0f, 0.0f, 0.0f, (u8) 0, -6.0f);
}

void func_8083B1A0(Player* arg0, PlayState* arg1) {
    LinkAnimationHeader* var_a2;

    func_80831494(arg1, arg0, func_80849FE0, 1);
    if (arg0->unk_B40 < 0.5f) {
        var_a2 = (D_8085BE84 + 0x288)[arg0->modelAnimType];
    } else {
        var_a2 = (D_8085BE84 + 0x270)[arg0->modelAnimType];
    }
    func_8082DB18(arg1, arg0, var_a2);
    arg0->currentYaw = arg0->actor.shape.rot.y;
}

void func_8083B23C(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_80849A9C, 1);
    func_8082E438(arg1, arg0, (D_8085BE84 + 0x90)[arg0->modelAnimType]);
    arg0->unk_AE8 = 1;
}

void func_8083B29C(Player* arg0) {
    if (arg0->linearVelocity != 0.0f) {
        func_8083A794();
        return;
    }
    func_8083B1A0();
}

void func_8083B2E4(Player* arg0) {
    if (arg0->linearVelocity != 0.0f) {
        func_8083A794();
        return;
    }
    func_80836988();
}

void func_8083B32C(PlayState* arg0, Player* arg1, f32 arg2) {
    u32 temp_t7;

    temp_t7 = arg1->stateFlags1 | 0x40000;
    arg1->stateFlags1 = temp_t7;
    arg1->stateFlags1 = temp_t7 & 0xF7FFFFFF;
    func_8082DC64(arg0, arg1);
    if (func_80837730(arg0, arg1, arg2, 0x1F4) != 0) {
        func_800B8E58(arg1, 0x288AU);
    }
    func_80123140(arg0, arg1);
}

s32 func_8083B3B4(PlayState* arg0, Player* arg1, Input* arg2) {
    s16 sp2A;
    f32 sp24;
    LinkAnimationHeader* var_a2_2;
    s16 temp_v0_2;
    s16 var_a2;
    s16* temp_v0;
    s32 temp_v0_3;
    u32 temp_t0;
    u32 temp_v1;

    if (!(arg1->stateFlags1 & 0x400) && !(arg1->stateFlags2 & 0x400) && (arg1->transformation != 2)) {
        if (arg2 != NULL) {
            temp_v0 = arg1->interactRangeActor;
            if (((temp_v0 == NULL) || (*temp_v0 != 0x224)) && (~(arg2->press.button | 0xFFFF7FFF) == 0)) {
                temp_v0_2 = arg1->unk_AAA;
                var_a2 = temp_v0_2;
                if (temp_v0_2 < 0) {
                    var_a2 = -temp_v0_2;
                }
                if ((var_a2 < 0x2EE0) && (arg1->currentBoots < 5) && (SurfaceType_GetConveyorSpeed(arg0 + 0x830, arg1->actor.floorPoly, (s32) arg1->actor.floorBgId) < 2)) {
                    goto block_12;
                }
                goto block_17;
            }
            goto block_17;
        }
block_12:
        if (arg1->unk_748 != func_8085B08C) {
            func_80831494(arg0, arg1, func_808516B4, 0);
        }
        func_8082DB18(arg0, arg1, &D_0400DFE0);
        arg1->unk_AAA = 0;
        temp_t0 = arg1->stateFlags2 | 0x400;
        arg1->stateFlags2 = temp_t0;
        arg1->actor.velocity.y = 0.0f;
        if (arg2 != NULL) {
            arg1->stateFlags2 = temp_t0 | 0x800;
            func_800B8E58(arg1, 0x864U);
        }
        return 1;
    }
block_17:
    if ((arg1->transformation != 3) && ((arg1->stateFlags1 & 0x400) || ((arg1->stateFlags2 & 0x400) && (((arg1->unk_748 != func_80850D68) && !(arg1->stateFlags3 & 0x8000)) || (arg1->unk_AAA < -0x1555)))) && ((arg1->actor.depthInWater - arg1->actor.velocity.y) < arg1->ageProperties->unk_30)) {
        arg1->stateFlags2 &= ~0x400;
        func_8082DC64(arg0, arg1);
        temp_v0_3 = func_80837730(arg0, arg1, arg1->actor.velocity.y, 0x1F4);
        if (arg1->stateFlags3 & 0x8000) {
            sp2A = arg1->unk_B88;
            sp24 = arg1->unk_B48 * 1.5f;
            func_80831494(arg0, arg1, func_8084CA24, 1);
            arg1->stateFlags3 |= 0x8000;
            arg1->stateFlags1 &= 0xF7FFFFFF;
            if (sp24 > 13.5f) {
                sp24 = 13.5f;
            }
            arg1->linearVelocity = Math_CosS(arg1->unk_AAA) * sp24;
            arg1->actor.velocity.y = -Math_SinS(arg1->unk_AAA) * sp24;
            arg1->unk_B88 = sp2A;
            func_800B8E58(arg1, 0x288AU);
            return 1;
        }
        if (temp_v0_3 != 0) {
            func_800B8E58(arg1, 0x863U);
        } else {
            func_800B8E58(arg1, 0x863U);
        }
        if (arg2 != NULL) {
            func_80831494(arg0, arg1, func_808519FC, 1);
            temp_v1 = arg1->stateFlags1;
            if (temp_v1 & 0x400) {
                arg1->stateFlags1 = temp_v1 | 0x20000C00;
            }
            arg1->unk_AE8 = 2;
        }
        var_a2_2 = &D_0400DFD8;
        if (arg1->stateFlags1 & 0x800) {
            var_a2_2 = &D_0400DFF0;
        }
        func_8082E438(arg0, arg1, var_a2_2);
        return 1;
    }
    return 0;
}

void func_8083B73C(PlayState* arg0, Player* arg1, s16 arg2) {
    func_80831494(arg0, arg1, func_808513EC, 0);
    func_8082E634(arg0, arg1, &D_0400DFD0);
    arg1->actor.shape.rot.y = arg2;
    arg1->currentYaw = arg2;
}

void func_8083B798(PlayState* arg0, Player* arg1) {
    if (arg1->transformation == 2) {
        func_80831494(arg0, arg1, func_808513EC, 0);
        LinkAnimation_Change(arg0, &arg1->skelAnime, &D_0400DFD0, 1.0f, (f32) Animation_GetLastFrame(&D_0400DFD0), 0.0f, (u8) 0, 0.0f);
        arg1->unk_B48 = 2.0f;
    } else {
        func_8082DB3C(arg0, arg1, &D_0400DFD0);
        arg1->unk_AE8 = 1;
    }
    arg1->unk_AAA = 0x3E80;
}

void func_8083B850(PlayState* arg0, Player* arg1) {
    f32 temp_fa0;
    f32 temp_fv1;

    arg1->currentBoots = 4;
    arg1->prevBoots = 4;
    func_80831494(arg0, arg1, func_80850D68, 0);
    temp_fv1 = arg1->linearVelocity;
    temp_fa0 = arg1->actor.velocity.y;
    arg1->unk_B48 = sqrtf((temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0));
    func_8082F938(arg0, arg1, 1, 8);
    arg1->currentBoots = 4;
    arg1->prevBoots = 4;
}

void func_8083B8D0(PlayState* arg1) {
    if (func_80837730(arg1, arg1->unk_68, 7e-43.0f) != 0) {
        func_800B8E58((Player* ) arg1, 0x2889U);
        if (arg1->unk_B6A >= 0x321) {
            func_8082DF8C((Player* ) arg1, 0x6804U);
        }
    }
}

void func_8083B930(PlayState* arg0, Player* arg1) {
    LinkAnimationHeader* var_a2;
    u32 temp_t7;
    u32 temp_v0;
    void (*temp_v1)(Player*, PlayState*);

    if ((arg1->currentBoots < 5) || !(arg1->actor.bgCheckFlags & 1) || (arg1->unk_748 == func_80857BE8)) {
        func_8082DE50(arg0, arg1);
        temp_v1 = arg1->unk_748;
        if (temp_v1 == func_8084CA24) {
            func_8083B850(arg0, arg1);
            arg1->stateFlags3 |= 0x8000;
        } else if ((arg1->transformation == 2) && (temp_v1 == func_8084C94C)) {
            func_8083B850(arg0, arg1);
            arg1->stateFlags3 |= 0x8000;
            func_8082DB60(arg0, arg1, &D_0400E3D8);
        } else if ((arg1->currentBoots < 5) && (temp_v0 = arg1->stateFlags2, ((temp_v0 & 0x400) != 0))) {
            arg1->stateFlags2 = temp_v0 & ~0x400;
            func_8083B3B4(arg0, arg1, NULL);
            arg1->unk_AE7 = 1;
        } else if (temp_v1 == func_8084C94C) {
            func_80831494(arg0, arg1, func_808516B4, 0);
            func_8083B798(arg0, arg1);
        } else {
            func_80831494(arg0, arg1, func_808508C8, 1);
            var_a2 = &D_0400DFC0;
            if (arg1->actor.bgCheckFlags & 1) {
                var_a2 = &D_0400E008;
            }
            func_8082E438(arg0, arg1, var_a2);
        }
    }
    if (((arg1->stateFlags1 * 0x10) >= 0) || (arg1->actor.depthInWater < arg1->ageProperties->unk_2C)) {
        func_8083B8D0(arg0, arg1);
    }
    temp_t7 = arg1->stateFlags1 | 0x08000000;
    arg1->stateFlags1 = temp_t7;
    arg1->stateFlags2 |= 0x400;
    arg1->stateFlags1 = temp_t7 & 0xFFF3FFFF;
    arg1->unk_AEC = 0.0f;
    func_80123140(arg0, arg1);
}

void func_8083BB4C(PlayState* arg0, Player* arg1) {
    f32 sp1C;
    PlayerAgeProperties* temp_v1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s16 temp_v0_3;
    u16 temp_v0;
    u8 temp_v1_2;
    void (*temp_v0_2)(Player*, PlayState*);

    temp_fv0 = arg1->actor.depthInWater - arg1->ageProperties->unk_2C;
    if (temp_fv0 < 0.0f) {
        arg1->unk_AD8 = 0;
        if ((arg1->transformation == 2) && (arg1->actor.bgCheckFlags & 1)) {
            arg1->currentBoots = 4;
        }
        func_801A3E38(0);
    } else {
        sp1C = temp_fv0;
        func_801A3E38(0x20);
        if ((arg1->transformation == 2) || (temp_fv0 < 10.0f)) {
            arg1->unk_AD8 = 0;
        } else {
            temp_v0 = arg1->unk_AD8;
            if ((s32) temp_v0 < 0x12C) {
                arg1->unk_AD8 = temp_v0 + 1;
            }
        }
    }
    if ((arg1->actor.parent == NULL) && (temp_v0_2 = arg1->unk_748, (temp_v0_2 != func_8084D4EC)) && (temp_v0_2 != func_8084F3DC) && ((temp_v0_2 != func_8084CA24) || (arg1->actor.velocity.y < -2.0f))) {
        temp_v1 = arg1->ageProperties;
        temp_fv0_2 = arg1->actor.depthInWater;
        if (temp_v1->unk_2C < temp_fv0_2) {
            temp_v1_2 = arg1->transformation;
            if (temp_v1_2 == 1) {
                arg1 = arg1;
                func_80834140(arg0, arg1, &D_0400DFE8);
                func_808345C8();
                func_8083B8D0(arg0, arg1);
                return;
            }
            if (temp_v1_2 == 3) {
                if (arg1->unk_B67 != 0) {
                    func_808373F8((Player* ) arg0, (LinkAnimationHeader* ) arg1, 0x6814U);
                    return;
                }
                temp_v0_3 = arg0->sceneNum;
                if ((temp_v0_3 == 0x45) && (arg1->unk_3CF == 0)) {
                    if (gSaveContext.eventInf[5] & 1) {
                        arg0->nextEntranceIndex = 0xA820;
                    } else {
                        arg0->nextEntranceIndex = 0xA810;
                    }
                    arg0->sceneLoadFlag = 0x14;
                    arg0->unk_1887F = 4;
                    arg1->stateFlags1 |= 0x200;
                    arg1 = arg1;
                    play_sound(0x484DU);
                } else if ((arg1->unk_3CF == 0) && ((temp_v0_3 == 0x37) || (temp_v0_3 == 0x38) || (temp_v0_3 == 0x3B))) {
                    arg1 = arg1;
                    func_80169EFC(&arg0->state);
                    func_808345C8();
                } else {
                    arg1 = arg1;
                    func_80831494(arg0, arg1, func_808497A0, 0);
                    arg1->stateFlags1 |= 0x20000000;
                }
                func_8083B8D0(arg0, arg1);
                return;
            }
            if (((arg1->stateFlags1 * 0x10) >= 0) || (((arg1->currentBoots < 5) || !(arg1->actor.bgCheckFlags & 1)) && (temp_v0_2 != func_8084E724) && (temp_v0_2 != func_80851B58) && (temp_v0_2 != func_80851BD4) && (temp_v0_2 != func_808508C8) && (temp_v0_2 != func_808513EC) && (temp_v0_2 != func_80851588) && (temp_v0_2 != func_808516B4) && (temp_v0_2 != func_808519FC) && (temp_v0_2 != func_80850B18) && (temp_v0_2 != func_80850D68))) {
                func_8083B930(arg0, arg1, &D_0400DFE8);
            }
        } else if (((arg1->stateFlags1 * 0x10) < 0) && (temp_fv0_2 < temp_v1->unk_24) && (((temp_v0_2 != func_80850D68) && !(arg1->stateFlags3 & 0x8000)) || (arg1->actor.bgCheckFlags & 1))) {
            if (arg1->skelAnime.moveFlags == 0) {
                arg1 = arg1;
                func_8083B0E4(arg0, arg1, arg1->actor.shape.rot.y);
            }
            func_8083B32C(arg0, arg1, arg1->actor.velocity.y);
        }
    }
}

void func_8083BF54(PlayState* arg0, Actor* arg1) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    s32 sp7C;
    void* sp60;
    f32 sp5C;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    PosRot* sp38;
    f32 temp_ft2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    f32 var_fa0;
    f32 var_fa0_2;
    f32 var_fa0_3;
    f32 var_fa0_4;
    f32 var_fa1;
    f32 var_ft4;
    f32 var_ft4_2;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv1;
    s16 temp_v0_2;
    s16 var_a0_2;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_t0;
    s32 var_v0;
    s32 var_v1_2;
    u16 var_a1;
    u32 temp_v1;
    u32 temp_v1_2;
    void* var_v1;

    arg1->terminalVelocity = -20.0f;
    arg1->gravity = (f32) gGameInfo->data[0x44] / 100.0f;
    sp7C = 0;
    temp_v0 = func_808340D4(D_80862B08);
    var_a2 = sp7C;
    if (temp_v0 == 0) {
        temp_v1 = D_80862B08;
        var_a0 = temp_v1 == 0xE;
        if (var_a0 == 0) {
            var_a0 = temp_v1 == 0xF;
        }
        var_a2 = var_a0;
        if ((var_a0 != 0) || (temp_v1 == 0xD)) {
            goto block_5;
        }
        arg1->unk_AB8 = 0.0f;
    } else {
block_5:
        temp_v1_2 = D_80862B08;
        temp_a0 = temp_v1_2 == 0xE;
        temp_fv1 = fabsf(arg1->unk_AD0 + D_80862B3C) * 20.0f;
        var_ft4 = temp_fv1;
        if (temp_v0 != 0) {
            var_a1 = 0xE9;
            if (temp_v1_2 == 4) {
                var_fa1 = 1300.0f;
            } else {
                var_a1 = 0xE9;
                if (temp_v1_2 == 7) {
                    var_ft4 = 0.0f;
                    var_fa1 = 20000.0f;
                } else {
                    var_fa1 = 10000.0f;
                    var_ft4 = temp_fv1 * 1.6f;
                    var_a1 = 0xE9;
                }
            }
        } else if (var_a2 != 0) {
            if (temp_a0 != 0) {
                var_fa1 = 400.0f;
                var_a1 = 0xEA;
                var_ft4 = temp_fv1 * 10.0f;
            } else {
                var_ft4 = 0.0f;
                var_fa1 = 1300.0f;
                var_a1 = 0xEA;
            }
        } else {
            var_ft4 = 0.0f;
            var_a1 = 0xE9;
            if (arg1->unk_14B == 1) {
                var_fa1 = 10000.0f;
            } else {
                var_fa1 = 1000.0f;
            }
        }
        temp_fv1_2 = arg1->unk_AB8;
        if (var_fa1 < temp_fv1_2) {
            var_fa1 = temp_fv1_2;
        }
        if (temp_a0 != 0) {
            var_fv0 = 200.0f;
        } else {
            var_fv0 = (var_fa1 - temp_fv1_2) * 0.02f;
        }
        if (var_fv0 < 0.0f) {
            var_fv0_2 = 0.0f;
        } else {
            if (var_fv0 > 300.0f) {
                var_fa0 = 300.0f;
            } else {
                var_fa0 = var_fv0;
            }
            var_fv0_2 = var_fa0;
        }
        arg1->unk_AB8 = (f32) (temp_fv1_2 + (var_fv0_2 - var_ft4));
        temp_fv1_3 = arg1->unk_AB8;
        if (temp_fv1_3 < 0.0f) {
            arg1->unk_AB8 = 0.0f;
        } else {
            if (var_fa1 < temp_fv1_3) {
                var_fa0_2 = var_fa1;
            } else {
                var_fa0_2 = temp_fv1_3;
            }
            arg1->unk_AB8 = var_fa0_2;
        }
        if ((arg1->unk_AD0 == 0.0f) && (fabsf(arg1->unk_AB8 - temp_fv1_2) > 2.0f)) {
            func_800B8F98(arg1, var_a1);
        }
        arg1->gravity -= arg1->unk_AB8 * 0.004f;
    }
    if ((arg1->unk_A74 & 0x10) && (arg1->bgCheckFlags & 0x20)) {
        if (arg1->depthInWater < 50.0f) {
            var_ft4_2 = fabsf(arg1->unk_BF4 - arg1->unk_D74) + (fabsf(arg1->unk_BEC - arg1->unk_D6C) + fabsf(arg1->unk_BF0 - arg1->unk_D70));
            if (var_ft4_2 > 4.0f) {
                var_ft4_2 = 4.0f;
            }
            arg1->unk_AEC = (f32) (arg1->unk_AEC + var_ft4_2);
            if (arg1->unk_AEC > 15.0f) {
                arg1->unk_AEC = 0.0f;
                sp84 = (Rand_ZeroOne() * 10.0f) + arg1->world.pos.x;
                sp88 = arg1->world.pos.y + arg1->depthInWater;
                sp8C = (Rand_ZeroOne() * 10.0f) + arg1->world.pos.z;
                EffectSsGRipple_Spawn(arg0, (Vec3f* ) &sp84, 0x64, 0x1F4, (s16) 0);
                if ((arg1->unk_AD0 > 4.0f) && (func_801242B4((Player* ) arg1) == 0) && (temp_fv1_4 = arg1->depthInWater, ((arg1->world.pos.y + temp_fv1_4) < arg1->unk_BF0))) {
                    func_80837730(arg0, (Player* ) arg1, 20.0f, (s32) ((fabsf(arg1->unk_AD0) * 50.0f) + (temp_fv1_4 * 5.0f)));
                } else if (arg1->unk_A74 & 0x8000) {
                    var_v1 = arg1 + 0xBEC;
                    var_t0 = 0;
                    var_fa0_3 = (arg1->world.pos.y + arg1->depthInWater) - 5.0f;
                    do {
                        temp_fv1_5 = var_v1->unk_4 - var_fa0_3;
                        if (temp_fv1_5 > 0.0f) {
                            temp_ft2 = fabsf(arg1->unk_AD0) * 20.0f;
                            sp5C = var_fa0_3;
                            sp54 = var_t0;
                            sp60 = var_v1;
                            func_80837730((bitwise PlayState* ) var_fa0_3, (Player* ) arg0, (bitwise f32) arg1, (bitwise s32) 20.0f, (s32) (temp_ft2 + (temp_fv1_5 * 10.0f)));
                        }
                        var_t0 += 1;
                        var_v1 += 0xC;
                    } while (var_t0 != 0x12);
                }
            }
        }
        if (arg1->unk_A68->unk_2C < arg1->depthInWater) {
            if (arg1->unk_A6C & 0x04000000) {
                var_fv1 = -fabsf(arg1->unk_AD0);
            } else {
                if (arg1->unk_748 == func_80850D68) {
                    temp_v0_2 = arg1->unk_B8A;
                    var_a0_2 = temp_v0_2;
                    if (temp_v0_2 < 0) {
                        var_a0_2 = -temp_v0_2;
                    }
                    var_fa0_4 = ((f32) var_a0_2 * -0.004f) + (arg1->unk_B48 * -0.38f);
                } else {
                    var_fa0_4 = arg1->velocity.y;
                }
                var_fv1 = var_fa0_4;
            }
            if ((var_fv1 > -1.0f) || ((arg1->unk_145 == 5) && (arg1->bgCheckFlags & 1))) {
                sp50 = 0;
                var_v1_2 = 0;
                if (Rand_ZeroOne() < 0.2f) {
                    var_v1_2 = 1;
                }
            } else {
                var_v1_2 = (s32) (var_fv1 * -0.3f);
                if (var_v1_2 >= 9) {
                    var_v1_2 = 8;
                }
            }
            var_v0 = 0;
            if (var_v1_2 > 0) {
                sp38 = &arg1->world;
                do {
                    sp4C = var_v0;
                    sp50 = var_v1_2;
                    EffectSsBubble_Spawn(arg0, &sp38->pos, 20.0f, 10.0f, 20.0f, 0.13f);
                    var_v0 += 1;
                } while (var_v0 != var_v1_2);
            }
        }
    }
}

void func_8083C62C(Player* arg0, s32 arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s16 sp2E;
    Vec3f* sp28;
    Vec3f* temp_a1;

    sp30 = arg0->actor.world.pos.x;
    temp_a1 = arg0->unk_730 + 0x3C;
    sp34 = arg0->bodyPartsPos[7].y + 3.0f;
    sp28 = temp_a1;
    sp38 = arg0->actor.world.pos.z;
    sp2E = Math_Vec3f_Pitch((Vec3f* ) &sp30, temp_a1);
    Math_SmoothStepToS(arg0 + 0x4A, Math_Vec3f_Yaw((Vec3f* ) &sp30, sp28), 4, 0x2710, (s16) 0);
    Math_SmoothStepToS(arg0 + 0x48, sp2E, 4, 0x2710, (s16) 0);
    arg0->unk_AA6 |= 2;
    func_80832754(arg0, arg1);
}

void func_8083C6E8(Player* arg0, PlayState* arg1) {
    s16 sp46;
    Vec3f sp34;
    f32 temp_fv0;
    s16 temp_v0;
    s16 var_a1;
    s32 var_a1_2;

    if (arg0->unk_730 != NULL) {
        if ((func_800B7128(arg0) != 0) || (func_8082EF20(arg0) != 0)) {
            func_8083C62C(arg0, 1);
            return;
        }
        func_8083C62C(arg0, 0);
        return;
    }
    if (D_80862B08 == 0xB) {
        Math_SmoothStepToS(&arg0->actor.focus.rot.x, -0x4E20, 0xA, 0xFA0, (s16) 0x320);
    } else {
        sp46 = 0;
        temp_fv0 = (bitwise f32) func_80835D2C(arg1, arg0, D_8085D218, &sp34);
        if (temp_fv0 > -32000.0f) {
            temp_v0 = Math_FAtan2F(40.0f, arg0->actor.world.pos.y - temp_fv0);
            if (temp_v0 < -0xFA0) {
                sp46 = -0xFA0;
            } else {
                var_a1 = temp_v0;
                if (temp_v0 >= 0xFA1) {
                    var_a1 = 0xFA0;
                }
                sp46 = var_a1;
            }
        }
        arg0->actor.focus.rot.y = arg0->actor.shape.rot.y;
        Math_SmoothStepToS(&arg0->actor.focus.rot.x, sp46, 0xE, 0xFA0, (s16) 0x1E);
    }
    var_a1_2 = func_800B7128(arg0) != 0;
    if (var_a1_2 == 0) {
        var_a1_2 = func_8082EF20(arg0) != 0;
    }
    func_80832754(arg0, var_a1_2);
}

void func_8083C85C(Player* arg0) {
    Math_ScaledStepToS(arg0 + 0xAB2, (s16) (s32) (D_80862B3C * -500.0f), 0x384);
    arg0->unk_AA6 |= 0x48;
    arg0->unk_AAC.x = (s16) (s32) (-(f32) arg0->unk_AB2.x * 0.5f);
}

void func_8083C8E8(Player* arg0, PlayState* arg1) {
    s16 sp24;
    f32 temp_fv0;
    s16 temp_a1;
    s16 temp_v1;
    s16 var_a1;
    s16 var_a1_2;
    s16 var_a3;
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v0_3;
    s32 temp_ft5;

    if ((func_800B7128(arg0) == 0) && (func_8082EF20(arg0) == 0) && ((temp_fv0 = arg0->linearVelocity, (temp_fv0 > 5.0f)) || (D_80862B3C != 0.0f))) {
        temp_ft5 = (s32) (temp_fv0 * 200.0f);
        if ((s16) temp_ft5 < -0xFA0) {
            var_a1 = -0xFA0;
        } else {
            var_v0 = (s16) temp_ft5;
            if ((s16) temp_ft5 >= 0xFA1) {
                var_v0 = 0xFA0;
            }
            var_a1 = var_v0;
        }
        temp_v1 = -(s16) (s32) ((f32) (s16) (arg0->currentYaw - arg0->actor.shape.rot.y) * temp_fv0 * 0.1f);
        temp_a1 = var_a1 + (s32) (D_80862B3C * -500.0f);
        if (temp_a1 < -0x2EE0) {
            var_a1_2 = -0x2EE0;
        } else {
            var_v0_2 = temp_a1;
            if (temp_a1 >= 0x2EE1) {
                var_v0_2 = 0x2EE0;
            }
            var_a1_2 = var_v0_2;
        }
        if (temp_v1 < -0xFA0) {
            var_a3 = -0xFA0;
        } else {
            var_v0_3 = temp_v1;
            if (temp_v1 >= 0xFA1) {
                var_v0_3 = 0xFA0;
            }
            var_a3 = var_v0_3;
        }
        sp24 = var_a3;
        Math_ScaledStepToS(&arg0->unk_AB2.x, var_a1_2, 0x384);
        arg0->unk_AAC.x = (s16) (s32) (-(f32) arg0->unk_AB2.x * 0.5f);
        Math_ScaledStepToS(&arg0->unk_AAC.z, var_a3, 0x12C);
        Math_ScaledStepToS(&arg0->unk_AB2.z, var_a3, 0xC8);
        arg0->unk_AA6 |= 0x168;
        return;
    }
    func_8083C6E8(arg0, arg1);
}

void func_8083CB04(Player* arg0, f32 arg1, s16 arg2, f32 arg3, f32 arg4, s16 arg5) {
    Math_AsymStepToF(arg0 + 0xAD0, arg1, arg3, arg4);
    Math_ScaledStepToS(arg0 + 0xAD4, arg2, arg5);
}

void func_8083CB58(Player* arg1, s16 arg2) {
    GameInfo* temp_v0;

    temp_v0 = gGameInfo;
    func_8083CB04(arg1, (bitwise f32) arg1, arg2, (f32) temp_v0->data[0x13] / 100.0f, 1.5f, (s16) (s32) temp_v0->data[0x1B]);
}

? func_8083CBC4(Player* arg0, f32 arg1, s16 arg2, f32 arg3, f32 arg4, f32 arg5, s16 arg6) {
    f32 var_fa0;
    s16 temp_v0;
    s16 var_v1;

    var_fa0 = arg3;
    temp_v0 = arg0->currentYaw - arg2;
    var_v1 = temp_v0;
    if ((arg0->unk_B50 * 1.5f) < fabsf(arg0->linearVelocity)) {
        arg5 *= 4.0f;
        var_fa0 *= 4.0f;
    }
    if (temp_v0 < 0) {
        var_v1 = -temp_v0;
    }
    if (var_v1 >= 0x6001) {
        if (Math_StepToF(arg0 + 0xAD0, 0.0f, var_fa0) == 0) {
            return 0;
        }
        arg0->currentYaw = arg2;
        goto block_9;
    }
    Math_AsymStepToF(arg0 + 0xAD0, arg1, arg4, arg5);
    Math_ScaledStepToS(arg0 + 0xAD4, arg2, arg6);
block_9:
    return 1;
}

s32 func_8083CCB4(Actor* arg0, PlayState* arg1) {
    Actor* sp34;
    f32 sp28;
    f32 sp24;
    ?* sp20;
    ?* var_v0;
    Actor* temp_a3;
    f32 temp_fv0;
    f32 temp_fv1;
    s16 temp_v1;
    s32 temp_v0;

    temp_a3 = arg0->unk_390;
    if (temp_a3 != NULL) {
        temp_v0 = temp_a3->unk_150;
        if ((temp_v0 != 2) && (arg0->unk_14B != 0)) {
            if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
                sp34 = temp_a3;
                if (ActorCutscene_GetCanPlayNext(0x7C) != 0) {
                    temp_a3->textId = D_8085D252[arg0->unk_14B];
                    func_8085B460(arg1, temp_a3, M2C_ERROR(Read from unset register $a2));
                    return 1;
                }
            }
            ActorCutscene_SetIntentToPlay(0x7C);
            goto block_20;
        }
        if ((temp_v0 == 2) && (arg0->unk_14B != 4)) {
            if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
                sp34 = temp_a3;
                if (ActorCutscene_GetCanPlayNext(0x7C) != 0) {
                    temp_a3->textId = D_8085D25C[arg0->unk_14B];
                    func_8085B460(arg1, temp_a3, M2C_ERROR(Read from unset register $a2));
                    return 1;
                }
            }
            ActorCutscene_SetIntentToPlay(0x7C);
            goto block_20;
        }
        if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
            sp34 = temp_a3;
            sp28 = Math_CosS(temp_a3->shape.rot.y);
            sp24 = Math_SinS(temp_a3->shape.rot.y);
            func_80832558(arg1, arg0, func_80837BD0);
            arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x800000);
            arg0->bgCheckFlags &= 0xFFDF;
            arg0->unk_D44 = 0;
            if (arg0->unk_14B == 0) {
                var_v0 = &D_8085D224;
            } else {
                var_v0 = &D_8085D23C;
            }
            if (arg0->unk_38C >= 0) {
                var_v0 += 0xC;
            }
            temp_fv0 = var_v0->unk_4;
            temp_fv1 = var_v0->unk_8;
            arg0->world.pos.x = temp_a3->world.pos.x + temp_a3->unk_258 + ((temp_fv0 * sp28) + (temp_fv1 * sp24));
            arg0->world.pos.z = temp_a3->world.pos.z + temp_a3->unk_260 + ((temp_fv1 * sp28) - (temp_fv0 * sp24));
            arg0->unk_B48 = (f32) (temp_a3->world.pos.y - arg0->world.pos.y);
            temp_v1 = temp_a3->shape.rot.y;
            arg0->shape.rot.y = temp_v1;
            arg0->unk_AD4 = temp_v1;
            sp20 = var_v0;
            Actor_MountHorse(arg1, (Player* ) arg0, temp_a3);
            func_8082DB18(arg1, (Player* ) arg0, var_v0->unk_0);
            func_8082E920(arg1, (Player* ) arg0, 0x9B);
            arg0->parent = arg0->unk_390;
            func_8082DAD4((Player* ) arg0);
            func_800B90F4(arg1);
            return 1;
        }
        goto block_20;
    }
block_20:
    return 0;
}

? func_8083CF68(PlayState* arg0, Player* arg1) {
    s16 sp56;
    Vec3f sp48;
    s16 sp46;
    void (*sp28)(Player*, PlayState*);
    void (*sp24)(Player*, PlayState*);
    f32 temp_fa0;
    f32 temp_ft4;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fa1;
    f32 var_ft5;
    s16 temp_v0_2;
    s16 var_v1;
    void (*temp_v0)(Player*, PlayState*);

    if ((Player_InBlockingCsMode(arg0, arg1) == 0) && !(arg1->cylinder.base.ocFlags1 & 2)) {
        temp_v0 = arg1->unk_748;
        if ((temp_v0 != func_80853D68) && (temp_v0 != func_80857BE8) && (D_80862B40 == 1)) {
            sp24 = func_80857BE8;
            sp28 = func_80853D68;
            sp56 = Math_FAtan2F(arg1->actor.velocity.z, arg1->actor.velocity.x);
            func_800B75A0(arg1->actor.floorPoly, &sp48, &sp46);
            temp_v0_2 = sp46 - sp56;
            var_v1 = temp_v0_2;
            if (temp_v0_2 < 0) {
                var_v1 = -temp_v0_2;
            }
            if (var_v1 >= 0x3E81) {
                var_fa1 = sp48.y;
                if (arg1->unk_748 == sp24) {
                    var_fa1 = Math_CosS(arg1->unk_B6C);
                }
                temp_ft4 = (1.0f - var_fa1) * 40.0f;
                temp_fv1 = fabsf(arg1->actor.speedXZ) + temp_ft4;
                var_ft5 = temp_fv1 * temp_fv1 * 0.011f;
                if (var_ft5 < 2.2f) {
                    var_ft5 = 2.2f;
                }
                arg1->unk_B84 = sp46;
                Math_StepToF(&arg1->unk_B80, temp_ft4, var_ft5);
                goto block_16;
            }
            func_80831494(arg0, arg1, sp28, 0);
            func_8082DE50(arg0, arg1);
            func_8082E514(arg0, arg1, D_8085D264[arg1->unk_AE7]);
            temp_fa0 = arg1->actor.velocity.x;
            temp_fv1_2 = arg1->actor.velocity.z;
            arg1->linearVelocity = sqrtf((temp_fa0 * temp_fa0) + (temp_fv1_2 * temp_fv1_2));
            arg1->currentYaw = sp46;
            if (D_80862B28 >= 0) {
                arg1->unk_AE7 = 1;
                func_8082DF8C(arg1, 0x6803U);
            }
            return 1;
        }
    }
block_16:
    return 0;
}

void func_8083D168(PlayState* arg0, Player* arg1, u8* arg2) {
    s32 sp1C;
    s32 temp_v1;
    s32 var_v0;
    u8 temp_v0;

    temp_v0 = arg2->unk_1;
    temp_v1 = temp_v0 & 0x1F;
    if ((temp_v0 & 0x80) || ((sp1C = temp_v1, Item_DropCollectible(arg0, arg1 + 0x24, temp_v1 | 0x8000), (temp_v1 != 4)) && (temp_v1 != 8) && (temp_v1 != 9) && (temp_v1 != 0xA) && (temp_v1 != 0) && (temp_v1 != 1) && (temp_v1 != 2) && (temp_v1 != 0x14) && (temp_v1 != 0x13))) {
        Item_Give(arg0, arg2->unk_0);
        var_v0 = 0x4824;
        if (arg1->getItemId < 0) {
            var_v0 = 0x4831;
        }
        play_sound(var_v0 & 0xFFFF);
    }
}

s32 func_8083D23C(Actor* arg0, PlayState* arg1) {
    Actor* sp2C;
    u8* sp28;
    u8* sp24;
    Actor* temp_t7;
    LinkAnimationHeader* var_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_v1;
    u8 temp_a0;
    u8 temp_a0_2;
    u8* temp_a2;
    u8* temp_v1_2;
    u8* var_v1;

    if (gSaveContext.save.playerData.health != 0) {
        temp_t7 = arg0->unk_388;
        sp2C = temp_t7;
        if (temp_t7 != NULL) {
            temp_v0 = arg0->unk_384;
            if (temp_v0 > 0) {
                if (temp_v0 < 0xBA) {
                    temp_a2 = (temp_v0 * 6) - 6 + D_8085C3F4;
                    temp_t7->parent = arg0;
                    sp28 = temp_a2;
                    if ((Item_CheckObtainability(temp_a2->unk_0) == 0xFF) || (temp_a2->unk_4 == 0xB0)) {
                        sp28 = temp_a2;
                        func_8082DCA0(arg1, (Player* ) arg0);
                        func_80838830((Player* ) arg0, temp_a2->unk_4, temp_a2);
                        if (!(arg0->unk_A70 & 0x400) || (arg0->unk_145 == 5)) {
                            func_80838760((Player* ) arg0);
                            func_808324EC(arg1, (Player* ) arg0, func_80837C78, (s32) arg1->playerActorCsIds[1]);
                            if (arg0->unk_14B == 3) {
                                var_a2 = &D_0400E2C0;
                            } else {
                                var_a2 = &D_0400D5B0;
                            }
                            func_8082DB90(arg1, (Player* ) arg0, var_a2);
                        }
                        arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x20000C00);
                        func_8082DAD4((Player* ) arg0);
                        return 1;
                    }
                    func_8083D168(arg1, (Player* ) arg0, temp_a2);
                    arg0->unk_384 = 0;
                    goto block_46;
                }
                goto block_46;
            }
            if (arg0->unk_394 == 0) {
                temp_v1 = arg0->unk_A6C;
                if (!(temp_v1 & 0x800)) {
                    if (temp_v0 != 0) {
                        if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
                            var_v1 = (temp_v0 * -6) - 6 + D_8085C3F4;
                            temp_a0 = var_v1->unk_0;
                            if ((temp_a0 != 0xFF) && (((sp24 = var_v1, temp_v1_2 = var_v1, (Item_CheckObtainability(temp_a0) == 0xFF)) && (temp_v1_2->unk_1 & 0x40)) || ((sp24 = temp_v1_2, var_v1 = temp_v1_2, (Item_CheckObtainability(temp_v1_2->unk_0) != 0xFF)) && (var_v1->unk_1 & 0x20)))) {
                                if (temp_v1_2->unk_0 == 0x44) {
                                    arg0->unk_384 = -0xA;
                                } else {
                                    arg0->unk_384 = -2;
                                }
                                var_v1 = (arg0->unk_384 * -6) - 6 + D_8085C3F4;
                            }
                            sp24 = var_v1;
                            func_80832558(arg1, arg0, func_80837C78);
                            arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x20000C00);
                            func_80838830((Player* ) arg0, var_v1->unk_4);
                            arg0->world.pos.x = sp2C->world.pos.x - (Math_SinS(sp2C->shape.rot.y) * arg0->unk_A68->unk_9C);
                            arg0->world.pos.z = sp2C->world.pos.z - (Math_CosS(sp2C->shape.rot.y) * arg0->unk_A68->unk_9C);
                            arg0->world.pos.y = sp2C->world.pos.y;
                            temp_v0_2 = sp2C->shape.rot.y;
                            arg0->shape.rot.y = temp_v0_2;
                            arg0->unk_AD4 = temp_v0_2;
                            func_8082DAD4((Player* ) arg0);
                            temp_a0_2 = var_v1->unk_0;
                            if ((temp_a0_2 != 0xFF) && (var_v1->unk_2 >= 0) && (Item_CheckObtainability(temp_a0_2) == 0xFF)) {
                                arg0->unk_A86 = (s8) sp2C->unk_21A;
                                func_8082DB90(arg1, (Player* ) arg0, arg0->unk_A68->unk_A0);
                                func_8082E920(arg1, (Player* ) arg0, 0x9F);
                                arg0->bgCheckFlags &= 0xFFDF;
                                sp2C->unk_1EC = 1;
                                return 1;
                            }
                            func_8082DB18(arg1, (Player* ) arg0, &D_0400DB18);
                            sp2C->unk_1EC = -1;
                            return 1;
                        }
                        goto block_46;
                    }
                    if (((temp_v1 * 0x10) >= 0) && (arg0->unk_14B != 3)) {
                        if (arg0->unk_34C != 0) {
                            if (Player_IsHoldingHookshot((Player* ) arg0) != 0) {
                                goto block_37;
                            }
                            goto block_46;
                        }
block_37:
                        if ((arg0->unk_14B != 1) && (((temp_v0_3 = sp2C->id, (temp_v0_3 == 9)) && (sp2C->unk_1F9 != 0)) || ((temp_v0_3 == 0xB0) && (sp2C->params & 1)) || (temp_v0_3 == 0xB9))) {
                            goto block_46;
                        }
                        arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x10000);
                        if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
                            func_80832558(arg1, arg0, func_808379C0);
                            func_8082DAD4((Player* ) arg0);
                            arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x800);
                            return 1;
                        }
                        goto block_46;
                    }
                    goto block_46;
                }
            }
            goto block_46;
        }
    }
block_46:
    return 0;
}

void func_8083D6DC(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_8084E65C, 1);
    func_8082DB18(arg1, arg0, (D_8085BE84 + 0x2A0)[arg0->modelAnimType]);
}

s32 func_8083D738(Player* arg0, Actor* arg1) {
    if ((arg1 != NULL) && ((arg1->flags << 8) >= 0) && ((arg0->linearVelocity < 1.1f) || (arg1->id == 0x6A))) {
        return 0;
    }
    return 1;
}

s32 func_8083D78C(Player* arg0, PlayState* arg1) {
    Actor* temp_a2;
    s32 var_v0;

    var_v0 = 0;
    if (arg0->stateFlags1 & 0x800) {
        temp_a2 = arg0->heldActor;
        if ((temp_a2 != NULL) && (D_80862B44->press.button & 0xC007)) {
            if (func_808313A8(arg1, arg0, temp_a2) == 0) {
                if (func_8083D738(arg0, arg0->heldActor) == 0) {
                    func_80831494(arg1, arg0, func_8084E58C, 1);
                    func_8082DB18(arg1, arg0, (D_8085BE84 + 0x2B8)[arg0->modelAnimType]);
                    return 1;
                }
                func_8083D6DC(arg0, arg1);
                goto block_7;
            }
block_7:
            var_v0 = 1;
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}

s32 func_8083D860(Actor* arg0, PlayState* arg1) {
    s32 sp84;
    s32 sp80;
    CollisionPoly* sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp6C;
    Vec3f sp48;
    f32 sp40;
    Vec3f* sp3C;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    LinkAnimationHeader* sp28;
    LinkAnimationHeader* var_a2;
    Vec3f* var_v0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_fa1_2;
    f32 var_ft4;
    f32 var_ft4_2;
    f32 var_ft5;
    f32 var_ft5_2;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fv1_2;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_t2;
    s32 temp_t4;
    s32 temp_v0;
    s32 var_t0;
    s32 var_v1;
    void* temp_v0_3;

    if ((arg0->unk_B54 >= 79.0f) && (((arg0->unk_A6C * 0x10) >= 0) || (arg0->unk_145 == 5) || (arg0->depthInWater < arg0->unk_A68->unk_2C))) {
        temp_v0 = D_80862B0C;
        var_t0 = 0;
        temp_t2 = temp_v0 & 2;
        if (temp_v0 & 8) {
            var_t0 = 2;
        }
        sp80 = temp_t2;
        if ((var_t0 != 0) || (temp_t2 != 0) || (sp84 = var_t0, (func_800C9AE4(arg1 + 0x830, arg0->wallPoly, (s32) arg0->wallBgId) != 0))) {
            var_fv1 = 0.0f;
            var_ft5 = 0.0f;
            sp7C = arg0->wallPoly;
            if (var_t0 != 0) {
                var_fa1 = arg0->world.pos.x;
                var_ft4 = arg0->world.pos.z;
            } else {
                sp84 = var_t0;
                sp3C = &sp48;
                CollisionPoly_GetVerticesByBgId(sp7C, (s32) arg0->wallBgId, arg1 + 0x830, &sp48);
                var_fv1_2 = (bitwise f32) sp48;
                var_fa0 = sp48.z;
                var_v0 = sp3C;
                var_t0 = sp84;
                var_ft5_2 = sp48.y;
                var_v1 = 1;
                var_fa1_2 = var_fv1_2;
                var_ft4_2 = var_fa0;
                do {
                    temp_fv0 = var_v0->unk_C;
                    var_v1 += 1;
                    var_v0 += 0xC;
                    if (temp_fv0 < var_fa1_2) {
                        var_fa1_2 = temp_fv0;
                    } else if (var_fv1_2 < temp_fv0) {
                        var_fv1_2 = temp_fv0;
                    }
                    temp_fv0_2 = var_v0->z;
                    if (temp_fv0_2 < var_ft4_2) {
                        var_ft4_2 = temp_fv0_2;
                    } else if (var_fa0 < temp_fv0_2) {
                        var_fa0 = temp_fv0_2;
                    }
                    temp_fv0_3 = var_v0->y;
                    if (temp_fv0_3 < var_ft5_2) {
                        var_ft5_2 = temp_fv0_3;
                    }
                } while (var_v1 != 3);
                var_fa1 = (var_fa1_2 + var_fv1_2) * 0.5f;
                var_ft4 = (var_ft4_2 + var_fa0) * 0.5f;
                sp40 = arg0->world.pos.y - var_ft5_2;
                var_fv1 = fabsf(((arg0->world.pos.x - var_fa1) * ((f32) sp7C->normal.z * 0.00003051851f)) - ((arg0->world.pos.z - var_ft4) * ((f32) sp7C->normal.x * 0.00003051851f)));
                var_ft5 = ((f32) (s32) ((sp40 / 15.0f) + 0.5f) * 15.0f) - sp40;
            }
            if (var_fv1 < 8.0f) {
                sp34 = (f32) sp7C->normal.x * 0.00003051851f;
                sp30 = (f32) sp7C->normal.z * 0.00003051851f;
                temp_fv0_4 = arg0->unk_B58;
                sp6C = var_ft5;
                sp74 = var_ft4;
                sp78 = var_fa1;
                sp84 = var_t0;
                sp2C = temp_fv0_4;
                func_80832558(arg1, arg0, func_80837C20);
                temp_t4 = arg0->unk_A6C | 0x200000;
                arg0->unk_A6C = temp_t4;
                arg0->unk_A6C = (s32) (temp_t4 & 0xF7FFFFFF);
                if ((var_t0 != 0) || (sp80 != 0)) {
                    arg0->unk_AE7 = (s8) var_t0;
                    if ((s8) var_t0 != 0) {
                        var_a2 = &D_0400DA88;
                        if (arg0->bgCheckFlags & 1) {
                            var_a2 = &D_0400DAA0;
                        }
                        var_fv0 = (arg0->unk_A68->unk_3C + 4.0f) - temp_fv0_4;
                    } else {
                        var_fv0 = 20.5f;
                        var_a2 = arg0->unk_A68->unk_AC;
                    }
                    temp_v0_2 = arg0->wallYaw + 0x8000;
                    arg0->unk_AE8 = -2;
                    arg0->world.pos.y += var_ft5;
                    arg0->unk_AD4 = temp_v0_2;
                    arg0->shape.rot.y = temp_v0_2;
                } else {
                    temp_v0_3 = arg0->unk_A68;
                    temp_v1 = arg0->wallYaw;
                    var_a2 = temp_v0_3->unk_B0;
                    arg0->unk_AE8 = -4;
                    arg0->shape.rot.y = temp_v1;
                    arg0->unk_AD4 = temp_v1;
                    var_fv0 = (temp_v0_3->unk_38 - temp_v0_3->unk_3C) + 17.0f;
                }
                arg0->world.pos.x = (var_fv0 * sp34) + var_fa1;
                arg0->world.pos.z = (var_fv0 * sp30) + var_ft4;
                sp28 = var_a2;
                func_8082DAD4((Player* ) arg0);
                Math_Vec3f_Copy(&arg0->prevPos, &arg0->world.pos);
                func_8082DB18(arg1, (Player* ) arg0, var_a2);
                func_8082E920(arg1, (Player* ) arg0, 0x9F);
                return 1;
            }
            goto block_35;
        }
        goto block_35;
    }
block_35:
    return 0;
}

void func_8083DCC4(Player* arg0, LinkAnimationHeader* arg1, PlayState* arg2) {
    func_8083172C(arg2, arg0, func_8084FC0C, 0);
    LinkAnimation_PlayOnceSetSpeed(arg2, &arg0->skelAnime, arg1, 1.3333334f);
}

? func_8083DD1C(PlayState* arg0, Actor* arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    CollisionPoly* sp84;
    s32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    Vec3f sp5C;
    f32 sp58;
    CollisionContext* sp44;
    CollisionContext* temp_a0;
    CollisionPoly* temp_a1;
    f32 temp_fv0;
    s16 temp_a0_2;

    sp58 = Math_CosS(arg1->shape.rot.y);
    temp_fv0 = Math_SinS(arg1->shape.rot.y);
    temp_a0 = arg0 + 0x830;
    sp74 = arg1->world.pos.x + (arg5 * temp_fv0);
    sp7C = arg1->world.pos.z + (arg5 * sp58);
    sp68 = arg1->world.pos.x + (arg4 * temp_fv0);
    sp70 = arg1->world.pos.z + (arg4 * sp58);
    sp44 = temp_a0;
    sp6C = arg1->world.pos.y + arg2;
    sp78 = sp6C;
    if (BgCheck_EntityLineTest2(temp_a0, (Vec3f* ) &sp74, (Vec3f* ) &sp68, &sp5C, arg1 + 0x7C, 1, 0, 0, 1, &sp80, arg1) != 0) {
        temp_a1 = arg1->wallPoly;
        arg1->bgCheckFlags |= 0x200;
        arg1->wallBgId = (u8) sp80;
        sp84 = temp_a1;
        D_80862B0C = func_800C9A4C(sp44, temp_a1, sp80);
        Math_ScaledStepToS(&arg1->shape.rot.y, Math_FAtan2F(-((f32) temp_a1->normal.z * 0.00003051851f), -((f32) temp_a1->normal.x * 0.00003051851f)), 0x320);
        temp_a0_2 = arg1->shape.rot.y;
        arg1->unk_AD4 = temp_a0_2;
        arg1->world.pos.x = (bitwise f32) sp5C - (Math_SinS(temp_a0_2) * arg3);
        arg1->world.pos.z = sp5C.z - (Math_CosS(arg1->shape.rot.y) * arg3);
        return 1;
    }
    arg1->bgCheckFlags &= 0xFDFF;
    return 0;
}

void func_8083DEE4(PlayState* arg1) {
    f32 temp_fv0;

    temp_fv0 = arg1->unk_A68->unk_38;
    func_8083DD1C((PlayState* )0x41D66667, (bitwise Actor* ) (temp_fv0 + 5.0f), temp_fv0 + 15.0f, 0.0f);
}

void func_8083DF38(Actor* arg0, LinkAnimationHeader* arg1, PlayState* arg2) {
    s16 temp_v0;

    if (func_80832558(arg2, arg0, func_80837BF8) == 0) {
        func_80831494(arg2, (Player* ) arg0, func_8084ED9C, 0);
    }
    func_8082DB18(arg2, (Player* ) arg0, arg1);
    func_8082DAD4((Player* ) arg0);
    temp_v0 = arg0->wallYaw + 0x8000;
    arg0->unk_AD4 = temp_v0;
    arg0->shape.rot.y = temp_v0;
}

s32 func_8083DFC4(Actor* arg0, PlayState* arg1) {
    DynaPolyActor* temp_v0;
    u8 temp_a1;

    if (!(arg0->unk_A6C & 0x800) && (arg0->bgCheckFlags & 0x200) && (D_80862B20 < 0x3000)) {
        if ((arg0->unk_AD0 > 0.0f) && (func_8083D860(arg0, arg1, arg0) != 0)) {
            return 1;
        }
        if ((func_801242B4((Player* ) arg0) == 0) && ((arg0->unk_AD0 == 0.0f) || !(arg0->unk_A70 & 4)) && (D_80862B0C & 0x40) && (arg0->bgCheckFlags & 1) && (arg0->unk_B54 >= 39.0f)) {
            arg0->unk_A70 = (s32) (arg0->unk_A70 | 1);
            if (~(D_80862B44->cur.button | 0xFFFF7FFF) == 0) {
                temp_a1 = arg0->wallBgId;
                if ((temp_a1 != 0x32) && (temp_v0 = DynaPoly_GetActor(&arg1->colCtx, (s32) temp_a1), (temp_v0 != NULL))) {
                    arg0->unk_364 = temp_v0;
                } else {
                    arg0->unk_364 = NULL;
                }
                func_8083DF38(arg0, &D_0400DE00, arg1, arg0);
                return 1;
            }
        }
        goto block_18;
    }
block_18:
    return 0;
}

s32 func_8083E14C(PlayState* arg0, Player* arg1) {
    DynaPolyActor* var_v1;
    u8 temp_a1;

    if ((arg1->actor.bgCheckFlags & 0x200) && ((arg1->stateFlags2 & 0x10) || (~(D_80862B44->cur.button | 0xFFFF7FFF) == 0))) {
        temp_a1 = arg1->actor.wallBgId;
        var_v1 = NULL;
        if (temp_a1 != 0x32) {
            var_v1 = DynaPoly_GetActor(arg0 + 0x830, (s32) temp_a1);
        }
        if (var_v1 == arg1->rightHandActor) {
            if (arg1->stateFlags2 & 0x10) {
                return 1;
            }
            return 0;
        }
        goto block_9;
    }
block_9:
    func_808369F4(arg1, arg0);
    func_8082DB18(arg0, arg1, &D_0400DE08);
    arg1->stateFlags2 &= ~0x10;
    return 1;
}

void func_8083E234(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_8084EE50, 0);
    func_8082DB18(arg1, arg0, &D_0400DDF8);
    arg0->stateFlags2 |= 0x10;
}

void func_8083E28C(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_8084EF9C, 0);
    func_8082DB18(arg1, arg0, (D_8085BE84 + 0x330)[arg0->modelAnimType]);
    arg0->stateFlags2 |= 0x10;
}

void func_8083E2F4(Player* arg0) {
    arg0->stateFlags1 &= 0xF7DFFFFF;
    func_80833AA0();
    if (arg0->transformation == 3) {
        arg0->linearVelocity = -1.7f;
        return;
    }
    arg0->linearVelocity = -0.4f;
}

s32 func_8083E354(Player* arg0, PlayState* arg1) {
    s32 temp_v0;

    if ((~(D_80862B44->press.button | 0xFFFF7FFF) != 0) && (arg0->actor.bgCheckFlags & 0x200) && ((temp_v0 = D_80862B0C, ((temp_v0 & 8) != 0)) || (temp_v0 & 2) || (func_800C9AE4(arg1 + 0x830, arg0->actor.wallPoly, (s32) arg0->actor.wallBgId) != 0))) {
        return 0;
    }
    func_8083E2F4(arg0, arg1);
    func_8082DF8C(arg0, 0x6814U);
    return 1;
}

s32 func_8083E404(Player* arg0, f32 arg1, s16 arg2) {
    f32 sp1C;
    f32 temp_fv1;
    s32 var_a1;
    s32 var_v0;

    sp1C = (f32) (s16) (arg2 - arg0->actor.shape.rot.y);
    if (arg0->unk_730 != NULL) {
        var_a1 = func_800B7128(arg0) != 0;
        if (var_a1 == 0) {
            var_a1 = func_8082EF20(arg0) != 0;
        }
        func_8083C62C(arg0, var_a1);
    }
    temp_fv1 = fabsf(sp1C) / 32768.0f;
    if (((temp_fv1 * temp_fv1 * 50.0f) + 6.0f) < arg1) {
        return 1;
    }
    var_v0 = 0;
    if ((((1.0f - temp_fv1) * 10.0f) + 6.8f) < arg1) {
        var_v0 = -1;
    }
    return var_v0;
}

s32 func_8083E514(Player* arg0, f32* arg1, s16* arg2, PlayState* arg3) {
    s16 sp2E;
    u16 sp2C;
    s16 temp_v1;
    s32 var_v0;
    u16 var_a2;

    temp_v1 = *arg2 - arg0->targetYaw;
    var_a2 = temp_v1 & 0xFFFF;
    if (temp_v1 < 0) {
        var_a2 = -temp_v1 & 0xFFFF;
    }
    sp2E = temp_v1;
    sp2C = var_a2;
    if (((func_800B7128(arg0) != 0) || (sp2E = temp_v1, sp2C = var_a2, (func_8082EF20(arg0) != 0))) && (arg0->unk_730 == NULL)) {
        sp2E = temp_v1;
        *arg1 *= Math_SinS((s16) var_a2);
        if (*arg1 != 0.0f) {
            var_v0 = -1;
            if (temp_v1 >= 0) {
                var_v0 = 1;
            }
            *arg2 = (var_v0 << 0xE) + arg0->actor.shape.rot.y;
        } else {
            *arg2 = arg0->actor.shape.rot.y;
        }
        if (arg0->unk_730 != NULL) {
            func_8083C62C(arg0, 1);
        } else {
            Math_SmoothStepToS(&arg0->actor.focus.rot.x, (s16) (s32) ((f32) D_80862B44->rel.stick_y * 240.0f), 0xE, 0xFA0, (s16) 0x1E);
            func_80832754(arg0, 1);
        }
        goto block_20;
    }
    if (arg0->unk_730 != NULL) {
        return func_8083E404(arg0, *arg1, *arg2, arg1);
    }
    sp2C = var_a2;
    func_8083C6E8(arg0, arg3, var_a2, arg1);
    if ((*arg1 != 0.0f) && ((s32) var_a2 < 0x1770)) {
        return 1;
    }
    if ((Math_SinS((s16) (0x4000 - ((s32) var_a2 >> 1))) * 200.0f) < *arg1) {
        return -1;
    }
block_20:
    return 0;
}

s32 func_8083E758(Player* arg0, f32* arg1, s16* arg2) {
    f32 temp_fv0;
    s16 temp_v0;
    s16 var_v1;
    s32 var_v0;

    temp_v0 = *arg2 - arg0->actor.shape.rot.y;
    var_v1 = temp_v0 & 0xFFFF;
    if (temp_v0 < 0) {
        var_v1 = -temp_v0 & 0xFFFF;
    }
    temp_fv0 = Math_CosS(var_v1);
    var_v0 = 0;
    *arg1 *= temp_fv0;
    if (*arg1 != 0.0f) {
        if (temp_fv0 > 0.0f) {
            return 1;
        }
        var_v0 = -1;
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

s32 func_8083E7F8(Player* arg0, f32* arg1, s16* arg2, PlayState* arg3) {
    s16 temp_a0;
    s16 temp_v0;
    s16 var_v1;
    s16 var_v1_2;

    func_8083C6E8(arg0, arg3);
    if (*arg1 == 0.0f) {
        temp_v0 = arg0->unk_B4C;
        var_v1 = temp_v0;
        if (temp_v0 < 0) {
            var_v1 = -temp_v0;
        }
        if (var_v1 >= 0x191) {
            goto block_4;
        }
        return 0;
    }
block_4:
    temp_a0 = *arg2 - Camera_GetInputDirYaw(arg3->cameraPtrs[arg3->activeCamId]);
    var_v1_2 = temp_a0;
    if (temp_a0 < 0) {
        var_v1_2 = -temp_a0;
    }
    if ((((var_v1_2 - 0x2000) & 0xFFFF) < 0x4000) || (arg0->unk_B4C != 0)) {
        return -1;
    }
    return 1;
}

void func_8083E8E0(Player* arg0, f32 arg1, s16 arg2) {
    if (arg1 > 0.0f) {
        if ((s16) (arg2 - arg0->actor.shape.rot.y) < 0) {
            arg0->unk_B44 = 0.0f;
        } else {
            arg0->unk_B44 = 1.0f;
        }
    }
    Math_StepToF(arg0 + 0xB40, arg0->unk_B44, 0.3f);
}

void func_8083E958(PlayState* arg0, Player* arg1) {
    LinkAnimationHeader* sp30;
    f32 temp_fv0;

    sp30 = func_8082EF54(arg1);
    temp_fv0 = arg1->unk_B38;
    LinkAnimation_BlendToJoint(arg0, &arg1->skelAnime, sp30, temp_fv0, func_8082EF9C(arg1), temp_fv0, arg1->unk_B40, (Vec3s* ) arg1->unk_88A);
}

s32 func_8083E9C4(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    f32 temp_fv0;

    if ((arg3 == 0.0f) && (arg1 > 0.0f)) {
        arg3 = arg2;
    }
    temp_fv0 = (arg0 + arg1) - arg3;
    if (((temp_fv0 * arg1) >= 0.0f) && (((temp_fv0 - arg1) * arg1) < 0.0f)) {
        return 1;
    }
    return 0;
}

void func_8083EA44(Player* arg0, f32 arg1) {
    s32 sp24;
    f32 temp_fv0;
    f32 var_fa1;
    s32 temp_v0;

    var_fa1 = arg1 * ((f32) gGameInfo->data[0x7E] * 0.5f);
    if (var_fa1 < -7.25f) {
        var_fa1 = -7.25f;
    } else if (var_fa1 > 7.25f) {
        var_fa1 = 7.25f;
    }
    arg1 = var_fa1;
    temp_v0 = func_8083E9C4(arg0->unk_B38, var_fa1, 29.0f, 10.0f);
    sp24 = temp_v0;
    if ((temp_v0 != 0) || (func_8083E9C4(arg0->unk_B38, arg1, 29.0f, 24.0f) != 0)) {
        func_8082E12C(arg0, arg0->linearVelocity);
        if (arg0->linearVelocity > 4.0f) {
            arg0->stateFlags2 |= 8;
        }
        if (sp24 != 0) {
            arg0->actor.shape.unk_17 = 1;
        } else {
            arg0->actor.shape.unk_17 = 2;
        }
    }
    arg0->unk_B38 += arg1;
    temp_fv0 = arg0->unk_B38;
    if (temp_fv0 < 0.0f) {
        arg0->unk_B38 = temp_fv0 + 29.0f;
        return;
    }
    if (temp_fv0 >= 29.0f) {
        arg0->unk_B38 = temp_fv0 - 29.0f;
    }
}

void func_8083EBD0(PlayState* arg0, Player* arg1) {
    LinkAnimationHeader* sp44;
    u32 sp40;
    s32 sp38;
    s32 sp34;
    LinkAnimationHeader* var_a2;
    LinkAnimationHeader** temp_v1_2;
    LinkAnimationHeader** var_v0;
    f32 var_fv0;
    s16 temp_ft1;
    s16 temp_v0;
    s32 temp_ft2;
    s32 var_v1_2;
    s8 temp_v0_4;
    u32 temp_v0_3;
    u32 temp_v1;
    u32 var_v1;
    u8 temp_a1;
    u8 temp_v0_2;
    u8 var_a1;
    void* temp_v1_3;

    temp_v0 = arg1->actor.id;
    if (temp_v0 != 0) {
        temp_v1 = (s32) arg1->actor.colChkInfo.health < 0x64;
        if (temp_v1 != 0) {
            sp40 = temp_v1;
            goto block_3;
        }
        goto block_10;
    }
block_3:
    var_v1 = sp40;
    if ((temp_v0 == 0) && ((arg1->unk_730 != NULL) || ((temp_v0_2 = arg1->transformation, (temp_v0_2 != 0)) && (temp_v0_2 != 4)) || (arg1->currentMask == 0x13) || ((temp_v0_3 = LifeMeter_IsCritical(), var_v1 = temp_v0_3, (temp_v0_3 == 0)) && (temp_v0_4 = (arg1->unk_AA4 + 1) & 1, arg1->unk_AA4 = temp_v0_4, (temp_v0_4 != 0))))) {
block_10:
        arg1->stateFlags2 &= 0xEFFFFFFF;
        var_a2 = func_8082ED20(arg1);
    } else {
        arg1->stateFlags2 |= 0x10000000;
        if (arg1->stateFlags1 & 0x800) {
            var_a2 = func_8082ED20(arg1);
        } else {
            temp_a1 = arg0->roomCtx.currRoom.unk2;
            if (var_v1 != 0) {
                var_a1 = 7;
                if (arg1->unk_AA4 >= 0) {
                    arg1->unk_AA4 = -1;
                } else {
                    var_a1 = 8;
                }
            } else {
                sp38 = (s32) temp_a1;
                var_a1 = temp_a1;
                temp_ft2 = (s32) (Rand_ZeroOne() * 5.0f);
                var_v1_2 = temp_ft2;
                if ((temp_ft2 < 4) && (((temp_ft2 != 0) && (temp_ft2 != 3)) || ((arg1->rightHandType == 8) && ((temp_ft2 == 3) || (sp34 = var_v1_2, sp38 = (s32) var_a1, (Player_GetMeleeWeaponHeld(arg1) != 0)))))) {
                    if (var_v1_2 == 0) {
                        sp34 = var_v1_2;
                        if (Player_IsHoldingTwoHandedWeapon(arg1) != 0) {
                            var_v1_2 = 4;
                        }
                    }
                    var_a1 = var_v1_2 + 9;
                }
            }
            temp_v1_2 = (var_a1 * 8) + D_8085C84C;
            var_v0 = temp_v1_2;
            if (arg1->modelAnimType != 1) {
                var_v0 = temp_v1_2 + 4;
            }
            var_a2 = *var_v0;
        }
    }
    sp44 = var_a2;
    temp_v1_3 = arg1->skelAnime.animation;
    temp_ft1 = Animation_GetLastFrame(var_a2);
    if ((var_a2 == temp_v1_3) || (&D_0400E318 == temp_v1_3) || (&D_0400E330 == temp_v1_3) || (&D_0400E348 == temp_v1_3)) {
        var_fv0 = 0.0f;
    } else {
        var_fv0 = -6.0f;
    }
    LinkAnimation_Change(arg0, &arg1->skelAnime, var_a2, 0.6666667f * D_8085C3E4, 0.0f, (f32) temp_ft1, (u8) 2, var_fv0);
}

void func_8083EE60(Player* arg0, PlayState* arg1) {
    GameInfo* temp_v0;
    GameInfo* temp_v0_2;
    SkelAnime* var_s1;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fs0;

    if (arg0->unk_B34 < 1.0f) {
        temp_v0 = gGameInfo;
        temp_fs0 = (f32) temp_v0->data[0x7E] * 0.5f;
        func_8083EA44((bitwise Player* ) 1000.0f, (bitwise f32) arg0, (f32) temp_v0->data[0x23] / 1000.0f);
        var_s1 = arg0 + 0x240;
        LinkAnimation_LoadToJoint(arg1, var_s1, (D_8085BE84 + 0x2D0)[arg0->modelAnimType], arg0->unk_B38);
        arg0->unk_B34 += 1.0f * temp_fs0;
        if (arg0->unk_B34 >= 1.0f) {
            arg0->unk_B34 = 1.0f;
        }
        var_fs0 = arg0->unk_B34;
    } else {
        temp_v0_2 = gGameInfo;
        temp_fv1 = arg0->linearVelocity;
        temp_fv0 = temp_fv1 - ((f32) temp_v0_2->data[0x30] / 100.0f);
        if (temp_fv0 < 0.0f) {
            var_fs0 = 1.0f;
            func_8083EA44((bitwise Player* ) 1000.0f, 100.0f, (bitwise f32) arg0, (((f32) temp_v0_2->data[0x24] / 1000.0f) * temp_fv1) + ((f32) temp_v0_2->data[0x23] / 1000.0f));
            var_s1 = arg0 + 0x240;
            LinkAnimation_LoadToJoint(arg1, var_s1, (D_8085BE84 + 0x2D0)[arg0->modelAnimType], arg0->unk_B38);
        } else {
            var_fs0 = ((f32) temp_v0_2->data[0x25] / 1000.0f) * temp_fv0;
            if (var_fs0 < 1.0f) {
                func_8083EA44((bitwise Player* ) 1000.0f, 100.0f, (bitwise f32) arg0, (((f32) temp_v0_2->data[0x24] / 1000.0f) * temp_fv1) + ((f32) temp_v0_2->data[0x23] / 1000.0f));
            } else {
                var_fs0 = 1.0f;
                func_8083EA44((bitwise Player* ) 1000.0f, 100.0f, (bitwise f32) arg0, (((f32) temp_v0_2->data[0x26] / 1000.0f) * temp_fv0) + ((f32) temp_v0_2->data[0x27] / 100.0f));
            }
            var_s1 = arg0 + 0x240;
            LinkAnimation_LoadToMorph(arg1, var_s1, (D_8085BE84 + 0x2D0)[arg0->modelAnimType], arg0->unk_B38);
            LinkAnimation_LoadToJoint(arg1, var_s1, &D_0400DAF0, arg0->unk_B38 * 0.55172414f);
        }
    }
    if (var_fs0 < 1.0f) {
        LinkAnimation_InterpJointMorph(arg1, var_s1, 1.0f - var_fs0);
    }
}

void func_8083F144(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_8084A794, 1);
    func_8082E438(arg1, arg0, &D_0400DAC0);
}

s32 func_8083F190(Player* arg0, f32* arg1, s16* arg2, Player* arg3) {
    if (arg0->linearVelocity > 6.0f) {
        func_8083F144(arg3);
        return 1;
    }
    if (*arg1 != 0.0f) {
        if (func_80832F24() != 0) {
            *arg1 = 0.0f;
            *arg2 = arg0->currentYaw;
            goto block_6;
        }
        return 1;
    }
block_6:
    return 0;
}

void func_8083F230(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_8084A884, 1);
    func_8082DB18(arg1, arg0, &D_0400DAC8);
}

void func_8083F27C(PlayState* arg0, Player* arg1) {
    LinkAnimationHeader* sp38;
    LinkAnimationHeader* sp34;
    GameInfo* temp_v1;
    LinkAnimationHeader* temp_t0;
    LinkAnimationHeader** temp_v0;
    f32 temp_fv0;

    temp_v0 = &D_8085BE84[arg1->modelAnimType];
    temp_t0 = temp_v0->unk_228;
    sp34 = temp_v0->unk_240;
    arg1->skelAnime.animation = temp_t0;
    temp_v1 = gGameInfo;
    sp38 = temp_t0;
    func_8083EA44(arg1, (((f32) temp_v1->data[0x20] / 1000.0f) * arg1->linearVelocity) + ((f32) temp_v1->data[0x1E] / 1000.0f));
    temp_fv0 = arg1->unk_B38 * 0.55172414f;
    LinkAnimation_BlendToJoint(arg0, &arg1->skelAnime, sp34, temp_fv0, temp_t0, temp_fv0, arg1->unk_B40, (Vec3s* ) arg1->unk_88A);
}

void func_8083F358(Player* arg0, s32 arg1, PlayState* arg2) {
    LinkAnimationHeader* var_v0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_fv1;
    f32 var_fv1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 var_a1;
    s16 var_v1;
    s16 var_v1_2;
    u8 temp_v1;

    temp_v0 = D_80862B28;
    var_v1 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -temp_v0;
    }
    if (var_v1 < 0xE38) {
        var_a1 = 0;
    } else if (temp_v0 < -0x2AAA) {
        var_a1 = -0x2AAA;
    } else {
        var_v1_2 = temp_v0;
        if (temp_v0 >= 0x2AAB) {
            var_v1_2 = 0x2AAA;
        }
        var_a1 = var_v1_2;
    }
    Math_ScaledStepToS(arg0 + 0xB70, var_a1, 0x190);
    temp_v1 = arg0->modelAnimType;
    if ((temp_v1 == 3) || ((temp_v0_2 = arg0->unk_B70, (temp_v0_2 == 0)) && (arg0->unk_AB8 <= 0.0f))) {
        if (arg1 == 0) {
            LinkAnimation_LoadToJoint(arg2, arg0 + 0x240, (D_8085BE84 + 0x18)[temp_v1], arg0->unk_B38);
            return;
        }
        LinkAnimation_LoadToMorph(arg2, arg0 + 0x240, (D_8085BE84 + 0x18)[temp_v1], arg0->unk_B38);
        return;
    }
    if (temp_v0_2 != 0) {
        var_fv1 = (f32) temp_v0_2 / 10922.0f;
    } else {
        var_fv1 = arg0->unk_AB8 * 0.0006f;
    }
    var_v0 = &D_0400DBB0;
    var_fv1_2 = var_fv1 * (fabsf(arg0->linearVelocity) * 0.5f);
    if (var_fv1_2 > 1.0f) {
        var_fv1_2 = 1.0f;
    }
    if (var_fv1_2 < 0.0f) {
        var_v0 = &D_0400DB68;
        var_fv1_2 = -var_fv1_2;
    }
    if (arg1 == 0) {
        temp_fv0 = arg0->unk_B38;
        LinkAnimation_BlendToJoint(arg2, arg0 + 0x240, (D_8085BE84 + 0x18)[temp_v1], temp_fv0, var_v0, temp_fv0, var_fv1_2, arg0 + 0x88A);
        return;
    }
    temp_fv0_2 = arg0->unk_B38;
    LinkAnimation_BlendToMorph(arg2, arg0 + 0x240, (D_8085BE84 + 0x18)[temp_v1], temp_fv0_2, var_v0, temp_fv0_2, var_fv1_2, arg0 + 0x88A);
}

void func_8083F57C(Player* arg0, PlayState* arg1) {
    GameInfo* temp_v0;
    GameInfo* temp_v0_2;
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fs0;

    if (arg0->unk_B34 < 1.0f) {
        temp_v0 = gGameInfo;
        temp_fs0 = (f32) temp_v0->data[0x7E] * 0.5f;
        func_8083EA44((bitwise Player* ) 1000.0f, (bitwise f32) arg0, (f32) temp_v0->data[0x23] / 1000.0f);
        LinkAnimation_LoadToJoint(arg1, arg0 + 0x240, (D_8085BE84 + 0x18)[arg0->modelAnimType], arg0->unk_B38);
        arg0->unk_B34 += 1.0f * temp_fs0;
        if (arg0->unk_B34 >= 1.0f) {
            arg0->unk_B34 = 1.0f;
        }
        var_fs0 = arg0->unk_B34;
    } else {
        temp_v0_2 = gGameInfo;
        temp_fv1 = arg0->linearVelocity;
        temp_fv0 = temp_fv1 - ((f32) temp_v0_2->data[0x30] / 100.0f);
        if (temp_fv0 < 0.0f) {
            var_fs0 = 1.0f;
            func_8083EA44((bitwise Player* ) 1000.0f, 100.0f, (bitwise f32) arg0, (((f32) temp_v0_2->data[0x24] / 1000.0f) * temp_fv1) + ((f32) temp_v0_2->data[0x23] / 1000.0f));
            func_8083F358(arg0, 0, arg1);
        } else {
            var_fs0 = ((f32) temp_v0_2->data[0x25] / 1000.0f) * temp_fv0;
            if (var_fs0 < 1.0f) {
                func_8083EA44((bitwise Player* ) 1000.0f, 100.0f, (bitwise f32) arg0, (((f32) temp_v0_2->data[0x24] / 1000.0f) * temp_fv1) + ((f32) temp_v0_2->data[0x23] / 1000.0f));
            } else {
                var_fs0 = 1.0f;
                func_8083EA44((bitwise Player* ) 1000.0f, 100.0f, (bitwise f32) arg0, (((f32) temp_v0_2->data[0x26] / 1000.0f) * temp_fv0) + ((f32) temp_v0_2->data[0x27] / 100.0f));
            }
            func_8083F358(arg0, 1, arg1);
            LinkAnimation_LoadToJoint(arg1, &arg0->skelAnime, func_8082EEE0(arg0), arg0->unk_B38 * 0.6896552f);
        }
    }
    if (var_fs0 < 1.0f) {
        LinkAnimation_InterpJointMorph(arg1, &arg0->skelAnime, 1.0f - var_fs0);
    }
}

void func_8083F828(PosRot* arg0, Vec3f* arg1, f32 arg2, f32 arg3, f32 arg4) {
    arg1->x = randPlusMinusPoint5Scaled(arg3) + arg0->pos.x;
    arg1->y = randPlusMinusPoint5Scaled(arg4) + (arg0->pos.y + arg2);
    arg1->z = randPlusMinusPoint5Scaled(arg3) + arg0->pos.z;
}

s32 func_8083F8A8(GameState* arg0, Actor* arg1, f32 arg2, s32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    Vec3f spA8;
    f32 sp98;
    f32 sp94;
    f32 sp90;
    Vec3f sp84;
    s32 sp70;
    s32 sp6C;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u16 temp_v0;

    if ((arg3 < 0) || (temp_v0 = arg1->unk_B72, (temp_v0 == 0xE))) {
        temp_lo = func_80173B48(arg0) / 20000000;
        var_s4 = temp_lo;
        var_v0 = arg3;
        if (arg3 < 0) {
            var_v0 = -arg3;
        }
        if (temp_lo >= var_v0) {
            var_v0_2 = arg3;
            if (arg3 < 0) {
                var_v0_2 = -arg3;
            }
            var_s4 = var_v0_2;
        }
        var_s0 = 0;
        if (var_s4 > 0) {
            sp70 = (s32) (s16) arg5;
            sp6C = (s32) (s16) arg6;
            do {
                func_8083F828(&arg1->world, &spA8, 0.0f, 40.0f, 10.0f);
                D_8085D27C.x = randPlusMinusPoint5Scaled(3.0f);
                D_8085D284 = randPlusMinusPoint5Scaled(3.0f);
                EffectSsDust_Spawn((PlayState* ) arg0, 0U, &spA8, &D_8085D27C, &D_8085D270, &D_8085D26C, &D_8085D26C, (s16) sp70, (s16) sp6C, (s16) 0x2A, (u8) 0);
                var_s0 += 1;
            } while (var_s0 != var_s4);
        }
        return 1;
    }
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        temp_lo_2 = func_80173B48(arg0) / 12000000;
        if (temp_lo_2 > 0) {
            if (temp_lo_2 < arg3) {
                var_v0_3 = temp_lo_2;
            } else {
                var_v0_3 = arg3;
            }
            Actor_SpawnFloorDustRing((PlayState* ) arg0, arg1, arg1 + 0x24, arg2, var_v0_3, arg4, (s16) arg5, (s16) arg6, (u8) arg7);
            return 1;
        }
        goto block_25;
    }
    if (temp_v0 == 8) {
        var_s4_2 = func_80173B48(arg0) / 12000000;
        if (var_s4_2 >= arg3) {
            var_s4_2 = arg3;
        }
        var_s0_2 = 0;
        if (var_s4_2 > 0) {
            do {
                func_8083F828(arg1 + 0x24, &sp84, 0.0f, 20.0f, 20.0f);
                sp90 = randPlusMinusPoint5Scaled(3.0f);
                sp94 = Rand_ZeroFloat(2.0f);
                sp98 = randPlusMinusPoint5Scaled(3.0f);
                D_8085D28C = -0.1f;
                EffectSsHahen_Spawn((PlayState* ) arg0, &sp84, (Vec3f* ) &sp90, &D_8085D288, (s16) 0, (s16) 0x96, (s16) 1, (s16) 0x10, D_040528B0);
                var_s0_2 += 1;
            } while (var_s0_2 != var_s4_2);
        }
    }
block_25:
    return 0;
}

s32 func_8083FBC4(PlayState* arg0, PlayState* arg1) {
    Vec3f* var_s0;
    Vec3f* var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    u16 temp_v0;

    temp_v0 = arg1->unk_B72;
    var_s0 = arg1 + 0xD4;
    var_s1 = 0;
    if ((temp_v0 == 0) || (temp_v0 == 1)) {
        do {
            func_800B1210(arg0, var_s0, &gZeroVec3f, &gZeroVec3f, (s16) 0x32, (s16) 0x1E);
            var_s1 += 1;
            var_s0 += 0xC;
        } while (var_s1 != 2);
        return 1;
    }
    if (temp_v0 == 0xE) {
        var_s0_2 = arg1 + 0xD4;
        var_s1_2 = 0;
        do {
            EffectSsDust_Spawn(arg0, 0U, var_s0_2, &gZeroVec3f, &D_8085D270, &D_8085D26C, &D_8085D26C, (s16) 0x64, (s16) 0x28, (s16) 0x11, (u8) 0);
            var_s1_2 += 1;
            var_s0_2 += 0xC;
        } while (var_s1_2 != 2);
        return 1;
    }
    return 0;
}

? func_8083FCF0(PlayState* arg0, Player* arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 temp_fv0;
    s32 var_a2;

    temp_fv0 = arg1->skelAnime.curFrame;
    if (arg4 < temp_fv0) {
        func_8082DC38(arg1);
        goto block_6;
    }
    if (arg2 <= temp_fv0) {
        var_a2 = -1;
        arg1->stateFlags3 |= 0x02000000;
        if (arg3 <= temp_fv0) {
            var_a2 = 1;
        }
        func_8082FA5C(arg0, arg1, var_a2);
        return 1;
    }
block_6:
    return 0;
}

? func_8083FD80(Player* arg0, PlayState* arg1) {
    if ((Player_IsGoronOrDeku(arg0) == 0) && (Player_GetMeleeWeaponHeld(arg0) != 0) && (arg0->transformation != 2) && (D_80862B48 != 0)) {
        func_8083375C(arg0, 0xC);
        func_8082DB18(arg1, arg0, &D_0400DBE8);
        arg0->unk_AE7 = 1;
        arg0->meleeWeaponAnimation = 0xC;
        arg0->currentYaw = arg0->actor.shape.rot.y + arg0->unk_AB2.y;
        arg0->unk_ADD = 0;
        return 1;
    }
    return 0;
}

s32 func_8083FE38(Player* arg0, PlayState* arg1) {
    s32 var_v0;

    var_v0 = func_80838A90(arg0, arg1) != 0;
    if (var_v0 == 0) {
        var_v0 = func_808391D8(arg0, arg1) != 0;
        if (var_v0 == 0) {
            var_v0 = func_8083D23C(arg0, arg1) != 0;
        }
    }
    return var_v0;
}

void func_8083FE90(PlayState* arg0, Player* arg1, u16 arg2) {
    func_80836EA0(arg0, 0x6C77, 7, 0x14);
    func_8082DF48(arg0, arg1, 0xFFU, 0x14U, (u8) 0x96, 0);
    func_800B8E58(arg1, arg2);
}

void func_8083FEF4(PlayState* arg0, Player* arg1) {
    Inventory_ChangeAmmo(8, -1);
    func_80831990(arg0, arg1, ITEM_NONE);
}

s32 func_8083FF30(PlayState* arg0, Player* arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg1->itemActionParam == 7) && (arg1->unk_B08[1] > 0.5f)) {
        if (gSaveContext.save.inventory.ammo[gItemSlots[8]] != 0) {
            EffectSsStick_Spawn(arg0, arg1 + 0xCA0, (s16) (arg1->actor.shape.rot.y + 0x8000), arg1);
            arg1->unk_B08[1] = 0.5f;
            func_8083FEF4(arg0, arg1);
            func_800B8E58(arg1, 0x181DU);
        }
        var_v0 = 1;
    }
    return var_v0;
}

? func_8083FFEC(PlayState* arg0, Player* arg1) {
    ? var_v0;
    u16 temp_t8;
    u16 temp_v0;

    var_v0 = 0;
    if (arg1->itemActionParam == 4) {
        temp_v0 = gSaveContext.save.playerData.swordHealth;
        temp_t8 = temp_v0 - 1;
        if ((s32) temp_v0 > 0) {
            gSaveContext.save.playerData.swordHealth = temp_t8;
            if ((temp_t8 & 0xFFFF) <= 0) {
                Item_Give(arg0, 0x4DU);
                func_80831990(arg0, arg1, ITEM_SWORD_KOKIRI);
                func_800B8E58(arg1, 0x184CU);
                if (Message_GetState(&arg0->msgCtx) == 0) {
                    Message_StartTextbox(arg0, 0xF9U, NULL);
                }
            }
        }
        var_v0 = 1;
    }
    return var_v0;
}

void func_80840094(PlayState* arg0, Player* arg1) {
    func_8083FF30(arg0, arg1);
    func_8083FFEC(arg0, arg1);
}

void func_808400CC(PlayState* arg0, Player* arg1) {
    u8 sp37;
    s32 sp2C;
    s32 var_v1;
    u8 temp_v0;

    if (arg1->unk_748 != func_8084B5C0) {
        func_8082DD2C(arg0, arg1);
        temp_v0 = arg1->transformation;
        if ((temp_v0 != 4) && (temp_v0 != 0)) {
            sp37 = arg1->skelAnime.moveFlags;
            arg1->skelAnime.moveFlags = 0;
            func_80831494(arg0, arg1, func_80854C70, 0);
            arg1->skelAnime.moveFlags = sp37;
        } else {
            func_80831494(arg0, arg1, func_80854C70, 0);
            if (func_80123420(arg1) != 0) {
                var_v1 = 2;
            } else {
                var_v1 = 0;
            }
            sp2C = var_v1;
            func_8082DB90(arg0, arg1, *(&D_8085D294 + ((Player_IsHoldingTwoHandedWeapon(arg1) * 4) + (var_v1 * 4))));
        }
    }
    func_8082DF48(arg0, arg1, 0xB4U, 0x14U, (u8) 0x64, 0);
    arg1->linearVelocity = -18.0f;
    func_80840094(arg0, arg1);
}

s32 func_808401F4(PlayState* arg0, Actor* arg1) {
    CollisionPoly* spD8;
    s32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    Vec3f spBC;                                     /* compiler-managed */
    Vec3f spB0;
    MtxF sp64;
    Vec3s sp5C;
    u32 sp54;
    Vec3f* sp48;
    CollisionContext* sp44;
    CollisionContext* temp_a0_2;
    DynaPolyActor* temp_v0;
    Vec3f* temp_a0;
    Vec3f* var_a1;
    f32 temp_ft3;
    f32 temp_fv0;
    f32 var_fv1;
    s16* temp_v1;
    s32 temp_v0_3;
    s32 var_v0;
    u32 temp_v0_2;

    if (arg1->unk_ADB > 0) {
        if (arg1->unk_ADA < 0x1E) {
            if (!(arg1->unk_574 & 4) && !(arg1->unk_5F4 & 4)) {
                if (arg1->unk_258 >= 2.0f) {
                    temp_a0 = arg1 + 0xB9C;
                    if (arg1->unk_AD0 >= 0.0f) {
                        var_a1 = arg1 + 0xBA8;
                        if ((arg1->unk_14B == 1) || (arg1->id == 0x159)) {
                            var_a1 = arg1 + 0xAFC;
                        }
                        sp48 = temp_a0;
                        temp_fv0 = Math_Vec3f_DistXYZAndStoreDiff(temp_a0, var_a1, &spB0);
                        var_fv1 = temp_fv0;
                        if (temp_fv0 != 0.0f) {
                            var_fv1 = (temp_fv0 + 10.0f) / temp_fv0;
                        }
                        temp_a0_2 = arg0 + 0x830;
                        spC8 = sp48->x + ((bitwise f32) spB0 * var_fv1);
                        spCC = sp48->y + (spB0.y * var_fv1);
                        sp44 = temp_a0_2;
                        spD0 = sp48->z + (spB0.z * var_fv1);
                        if ((BgCheck_EntityLineTest2(temp_a0_2, (Vec3f* ) &spC8, sp48, &spBC, &spD8, 1, 0, 0, 1, &spD4, arg1) != 0) && (SurfaceType_IsIgnoredByEntities(sp44, spD8, spD4) == 0) && (func_800C99D4(sp44, spD8, spD4) != 6) && (func_800B90AC(arg0, arg1, spD8, spD4, (s32) &spBC) == 0)) {
                            if (arg1->unk_14B == 1) {
                                func_8082DF2C(arg0);
                                func_8083FE90(arg0, (Player* ) arg1, 0x180AU);
                                if (arg1->unk_14B == 1) {
                                    func_800B648C(arg0, 2, 2, 100.0f, &arg1->world.pos);
                                    func_800C0094(spD8, (bitwise f32) spBC, spBC.y, spBC.z, &sp64);
                                    Matrix_MtxFToYXZRot(&sp64, &sp5C, 1);
                                    Actor_Spawn(&arg0->actorCtx, arg0, 1, (bitwise f32) spBC, spBC.y, spBC.z, (s16) (s32) (s16) sp5C, (s16) (s32) sp5C.y, (s16) (s32) sp5C.z, 0x1F4);
                                }
                                if ((spD4 != 0x32) && (((temp_v0 = DynaPoly_GetActor(sp44, spD4), ((arg1->unk_574 & 2) != 0)) && (temp_v0 == arg1->unk_568)) || ((arg1->unk_5F4 & 2) && (temp_v0 == arg1->unk_5E8)))) {
                                    goto block_48;
                                }
                                func_808400CC(arg0, (Player* ) arg1);
                                if (arg1->unk_14B != 1) {
                                    return 1;
                                }
                                goto block_48;
                            }
                            if (arg1->unk_AD0 >= 0.0f) {
                                temp_v0_2 = func_800C9BB8(sp44, spD8, spD4);
                                if (temp_v0_2 == 0xA) {
                                    CollisionCheck_SpawnShieldParticlesWood(arg0, &spBC, &arg1->projectedPos);
                                } else {
                                    temp_ft3 = (bitwise f32) spBC + (8.0f * ((f32) spD8->normal.x * 0.00003051851f));
                                    spBC = temp_ft3;
                                    spBC.y += 8.0f * ((f32) spD8->normal.y * 0.00003051851f);
                                    sp54 = temp_v0_2;
                                    spBC = temp_ft3 + (8.0f * ((f32) spD8->normal.z * 0.00003051851f));
                                    CollisionCheck_SpawnShieldParticles(arg0, &spBC);
                                    if (sp54 == 0xB) {
                                        func_800B8E58((Player* ) arg1, 0x181BU);
                                    } else {
                                        func_800B8E58((Player* ) arg1, 0x181AU);
                                    }
                                }
                                func_80840094(arg0, (Player* ) arg1);
                                func_8082DF48(arg0, (Player* ) arg1, 0xB4U, 0x14U, (u8) 0x64, 0);
                                arg1->unk_AD0 = -14.0f;
                            }
                            goto block_35;
                        }
                        goto block_35;
                    }
                }
                goto block_35;
            }
            func_808400CC(arg0, (Player* ) arg1);
            func_8082DF2C(arg0);
            return 1;
        }
block_35:
        temp_v0_3 = (arg1->unk_574 & 2) != 0;
        if ((temp_v0_3 != 0) || (arg1->unk_5F4 & 2)) {
            if ((arg1->unk_ADA < 0x1E) && (arg1->unk_14B != 1)) {
                if (temp_v0_3 != 0) {
                    var_v0 = 0;
                } else {
                    var_v0 = 1;
                }
                temp_v1 = (arg1 + (var_v0 << 7))->unk_568;
                if ((temp_v1 != NULL) && (*temp_v1 != 0xA8)) {
                    func_8082DF2C(arg0);
                }
            }
            if (func_8083FF30(arg0, (Player* ) arg1) == 0) {
                func_8083FFEC(arg0, (Player* ) arg1);
                if (arg1->colChkInfo.atHitEffect == 1) {
                    arg1->colChkInfo.damage = 8;
                    func_80833B18(arg0, (Player* ) arg1, (Player* )4, 0.0f, 0.0f, (s16) (s32) arg1->shape.rot.y, 0x14);
                    return 1;
                }
            }
            goto block_48;
        }
        goto block_48;
    }
block_48:
    return 0;
}

void func_80840770(PlayState* arg0, Player* arg1) {
    s16 temp_v0;
    u32 temp_t6;

    temp_v0 = arg1->unk_AE8;
    if (temp_v0 != 0) {
        if (temp_v0 > 0) {
            arg1->unk_AE8 = temp_v0 - 1;
            if (arg1->unk_AE8 == 0) {
                if ((arg1->stateFlags1 * 0x10) < 0) {
                    LinkAnimation_Change(arg0, arg1 + 0x240, &D_0400E000, 1.0f, 0.0f, (f32) Animation_GetLastFrame(&D_0400E000), (u8) 2, -16.0f);
                } else {
                    LinkAnimation_Change(arg0, arg1 + 0x240, &D_0400D698, 1.0f, 99.0f, (f32) Animation_GetLastFrame(&D_0400D698), (u8) 2, 0.0f);
                }
                gSaveContext.healthAccumulator = 0xA0;
                arg1->unk_AE8 = -1;
            }
        } else if (gSaveContext.healthAccumulator == 0) {
            func_80838760(arg1);
            temp_t6 = arg1->stateFlags1 & ~0x80;
            arg1->stateFlags1 = temp_t6;
            if ((temp_t6 * 0x10) < 0) {
                func_808353DC(arg0, arg1);
            } else {
                func_8085B384(arg1, arg0, M2C_ERROR(Read from unset register $a2));
            }
            arg1->unk_D6B = 0x14;
            func_808339B4(arg1, -0x14);
            func_801A01C4();
        }
    } else {
        if (arg1->unk_AE7 != 0) {
            func_80838760(arg1);
            arg1->unk_AE8 = 0x3C;
            arg1->unk_A86 = (s8) arg0->playerActorCsIds[7];
            func_80835C64(arg0, arg1, &arg1->actor.world.pos, &D_8085D2A4, 5);
            func_800B8E58(arg1, 0x20A8U);
            return;
        }
        if (arg0->gameOverCtx.state == 2) {
            arg0->gameOverCtx.state = 3;
        }
    }
}

void func_80840980(Player* arg0, s32 arg1) {
    func_8082DF8C(arg0, arg1 & 0xFFFF);
}

void func_808409A8(PlayState* arg0, Player* arg1, f32 arg2, f32 arg3) {
    Actor* sp24;
    Actor* temp_a2;

    temp_a2 = arg1->heldActor;
    sp24 = temp_a2;
    if (func_808313A8(arg0, arg1, temp_a2) == 0) {
        temp_a2->world.rot.y = arg1->actor.shape.rot.y;
        temp_a2->speedXZ = arg2;
        temp_a2->velocity.y = arg3;
        func_808309CC(arg0, arg1);
        func_800B8E58(arg1, 0x83AU);
        func_8082DF8C(arg1, 0x6800U);
    }
}

s32 func_80840A30(PlayState* arg0, Player* arg1, f32* arg2, f32 arg3) {
    Actor* sp2C;
    Actor* var_a3;
    DynaPolyActor* temp_v0_3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 var_v1;
    u32 temp_v0_4;
    u8 temp_a1;

    var_a3 = NULL;
    if (arg3 <= *arg2) {
        if (!(arg1->actor.bgCheckFlags & 0x200) || (D_80862B24 >= 0x1C00)) {
            if (arg1->cylinder.base.ocFlags1 & 2) {
                var_a3 = arg1->cylinder.base.oc;
                if (var_a3 != NULL) {
                    temp_v0 = var_a3->id;
                    if (temp_v0 != 0x1A5) {
                        if ((temp_v0 == 0x41) || (temp_v0 == 0x1D4) || (temp_v0 == 0x229)) {
                            temp_v0_2 = arg1->actor.world.rot.y - var_a3->yawTowardsPlayer;
                            var_v1 = temp_v0_2;
                            if (temp_v0_2 < 0) {
                                var_v1 = -temp_v0_2;
                            }
                            if (var_v1 >= 0x6001) {
                                goto block_12;
                            }
                            goto block_29;
                        }
                        goto block_29;
                    }
                    goto block_12;
                }
            }
            goto block_29;
        }
block_12:
        sp2C = var_a3;
        if (func_8082DA90(arg0) == 0) {
            if (arg1->doorType == 4) {
                func_8085B384(arg1, arg0, M2C_ERROR(Read from unset register $a2));
                return 1;
            }
            if (var_a3 != NULL) {
                var_a3->home.rot.y = 1;
            } else {
                temp_a1 = arg1->actor.wallBgId;
                if (temp_a1 != 0x32) {
                    temp_v0_3 = DynaPoly_GetActor(&arg0->colCtx, (s32) temp_a1);
                    if ((temp_v0_3 != NULL) && ((temp_v1 = temp_v0_3->actor.id, (temp_v1 == 0xE5)) || (temp_v1 == 0x22D) || (temp_v1 == 0x23C))) {
                        temp_v0_3->actor.home.rot.z = 1;
                    }
                }
            }
            temp_v0_4 = arg1->stateFlags3;
            if (!(temp_v0_4 & 0x1000)) {
                if ((temp_v0_4 & 0x8000) && (arg1->unk_748 != func_8084CA24)) {
                    func_80831494(arg0, arg1, func_80851B58, 0);
                    func_8082DB90(arg0, arg1, &D_0400DFF8);
                    func_8082DD2C(arg0, arg1);
                    arg1->linearVelocity *= 0.2f;
                } else {
                    func_80831494(arg0, arg1, func_8084C6EC, 0);
                    func_8082DB18(arg0, arg1, (D_8085BE84 + 0x180)[arg1->modelAnimType]);
                    arg1->unk_AE8 = 1;
                }
            }
            arg1->linearVelocity = -arg1->linearVelocity;
            func_80836EA0(arg0, 0x81F3, 3, 0xC);
            func_8082DF48(arg0, arg1, 0xFFU, 0x14U, (u8) 0x96, 0);
            func_800B648C(arg0, 2, 2, 100.0f, &arg1->actor.world.pos);
            func_800B8E58(arg1, 0x83EU);
            func_8082DF8C(arg1, 0x6804U);
            return 1;
        }
        goto block_29;
    }
block_29:
    return 0;
}

s32 func_80840CD4(Player* arg0, PlayState* arg1) {
    u32 temp_t2;
    u8 var_a2;

    if (func_808387A0(arg1, arg0) != 0) {
        arg0->stateFlags2 |= 0x20000;
        goto block_10;
    }
    if (~(D_80862B44->cur.button | ~0x4000) != 0) {
        if ((arg0->unk_B08[0] >= 0.85f) || (func_808333CC(arg0) != 0)) {
            var_a2 = *(&D_8085CF84 + Player_IsHoldingTwoHandedWeapon(arg0));
        } else {
            var_a2 = *(&D_8085CF80 + Player_IsHoldingTwoHandedWeapon(arg0));
        }
        func_80833864(arg1, arg0, (s32) var_a2);
        func_808339B4(arg0, -8);
        temp_t2 = arg0->stateFlags2 | 0x20000;
        arg0->stateFlags2 = temp_t2;
        if (arg0->unk_AE3[arg0->unk_ADE] == 0) {
            arg0->stateFlags2 = temp_t2 | 0x40000000;
        }
block_10:
        return 1;
    }
    return 0;
}

void func_80840DEC(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_8084CE84, 1);
}

void func_80840E24(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_8084D18C, 1);
}

void func_80840E5C(Player* arg0, PlayState* arg1) {
    func_808369F4(arg0, arg1);
    func_8082DC38(arg0);
    func_8082E438(arg1, arg0, D_8085CF68[Player_IsHoldingTwoHandedWeapon(arg0)]);
    arg0->currentYaw = arg0->actor.shape.rot.y;
}

void func_80840EC0(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_8084CCEC, 1);
    func_8082DB3C(arg1, arg0, D_8085CF60[Player_IsHoldingTwoHandedWeapon(arg0)]);
    arg0->unk_AE8 = 1;
    arg0->unk_B38 = 0.0f;
}

void func_80840F34(Player* arg0) {
    f32 var_fv0;

    if (gSaveContext.save.weekEventReg[0x17] & 2) {
        var_fv0 = 1.0f;
    } else {
        var_fv0 = 0.5f;
    }
    Math_StepToF(arg0 + 0xB08, var_fv0, 0.02f);
}

s32 func_80840F90(PlayState* arg0, PlayState* arg1, void* arg2, f32 arg3, s16 arg4, s32 arg5) {
    f32 sp34;
    f32 sp28;
    s32 sp24;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa1;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv1;
    f32 var_fa0;
    s32 temp_ft1;
    s32 temp_v1;

    var_fa0 = arg3;
    if ((arg5 != 0) && (arg1->unk_AD0 == 0.0f)) {
        return LinkAnimation_Update(arg0, arg1 + 0x240);
    }
    if (arg5 != 2) {
        temp_ft4 = (f32) gGameInfo->data[0x7E] * 0.5f;
        temp_v1 = (arg2->unk_4 - arg0->csCtx.frames) + 1;
        temp_fa1 = (f32) arg2->unk_18 - arg1->unk_24;
        sp34 = temp_ft4;
        sp24 = temp_v1;
        temp_fa0 = (f32) arg2->unk_20 - arg1->unk_2C;
        temp_ft5 = sqrtf((temp_fa1 * temp_fa1) + (temp_fa0 * temp_fa0)) / temp_ft4;
        sp28 = temp_ft5;
        arg4 = Math_FAtan2F(temp_fa0, temp_fa1);
        if (arg5 == 1) {
            temp_fv1 = (f32) (arg2->unk_18 - arg2->unk_C);
            temp_fa0_2 = (f32) (arg2->unk_20 - arg2->unk_14);
            temp_ft1 = (s32) ((((sqrtf((temp_fv1 * temp_fv1) + (temp_fa0_2 * temp_fa0_2)) / temp_ft4) / (f32) (arg2->unk_4 - arg2->unk_2)) / 1.5f) * 4.0f);
            if (temp_ft1 >= temp_v1) {
                var_fa0 = 0.0f;
                arg4 = arg1->unk_BE;
            } else {
                var_fa0 = temp_ft5 / (f32) ((temp_v1 - temp_ft1) + 1);
            }
        } else {
            var_fa0 = temp_ft5 / (f32) temp_v1;
        }
    }
    arg1->colCtx.dyna.bgActors[4].minY |= 0x20;
    arg3 = var_fa0;
    func_8083F57C((bitwise Player* ) var_fa0, arg1, arg0, arg2, arg5);
    func_8083CB58((bitwise Player* ) arg3, (s16) arg1, (bitwise Player* ) arg3, arg4);
    if ((arg3 == 0.0f) && (arg1->unk_AD0 == 0.0f)) {
        func_80839CD8((bitwise Player* ) arg3, arg1, arg0);
    }
    return 0;
}

s32 func_808411D4(PlayState* arg0, PlayState* arg1, Player** arg2, s32 arg3) {
    s32 sp2C;
    f32 temp_fa0;
    f32 temp_fv1;
    s16 var_v1;

    temp_fv1 = arg1->unk_3A0 - arg1->unk_24;
    temp_fa0 = arg1->unk_3A8 - arg1->unk_2C;
    sp2C = (s32) sqrtf((temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0));
    var_v1 = Math_Vec3f_Yaw(arg1 + 0x24, arg1 + 0x3A0);
    if (sp2C < arg3) {
        *arg2 = NULL;
        var_v1 = arg1->unk_BE;
    }
    if (func_80840F90(arg0, arg1, NULL, *arg2, (s16) (s32) var_v1, 2) != 0) {
        return 0;
    }
    return sp2C;
}

void func_808412A0(PlayState* arg0, Player* arg1) {
    arg1->actor.update = func_801229EC;
    arg1->actor.draw = NULL;
}

void func_808412BC(PlayState* arg0, Player* arg1) {
    func_80831494(arg0, arg1, func_80854118, 0);
    arg1->stateFlags1 |= 0x20000000;
    LinkAnimation_Change(arg0, &arg1->skelAnime, &D_0400DF78, 0.6666667f, 0.0f, 24.0f, (u8) 2, 0.0f);
    arg1->actor.world.pos.y += 800.0f;
}

void func_80841358(PlayState* arg0, Player* arg1, s32 arg2) {
    s32 sp24;
    enum PlayerActionParam sp20;
    u8 temp_v0;

    temp_v0 = *(&D_8085D2B0 + arg1->transformation);
    sp24 = (s32) temp_v0;
    sp20 = (enum PlayerActionParam) D_8085C99C[temp_v0];
    func_808317C4(arg1);
    func_8082DCA0(arg0, arg1);
    arg1->heldItemId = (u8) sp24;
    arg1->nextModelGroup = Player_ActionToModelGroup(arg1, sp20);
    func_8082F8BC(arg0, arg1, sp20);
    func_808309CC(arg0, arg1);
    if (arg2 != 0) {
        func_800B8E58(arg1, 0x1803U);
    }
}

void func_80841408(PlayState* arg0, Player* arg1) {
    func_80831494(arg0, arg1, func_80852FD4, 0);
    arg1->stateFlags1 |= 0x20000000;
    Math_Vec3f_Copy(&arg1->actor.world.pos, &D_8085D2B4);
    arg1->actor.shape.rot.y = -0x8000;
    arg1->currentYaw = arg1->actor.shape.rot.y;
    LinkAnimation_Change(arg0, &arg1->skelAnime, arg1->ageProperties->unk_A8, 0.6666667f, 0.0f, 0.0f, (u8) 2, 0.0f);
    func_8082E920(arg0, arg1, 0x28F);
    if (arg1->transformation == 0) {
        func_80841358(arg0, arg1, 0);
    }
    arg1->unk_AE8 = 0x14;
}

void func_808414E0(PlayState* arg0, Player* arg1) {
    func_80831494(arg0, arg1, func_8085437C, 0);
    func_8082E920(arg0, arg1, 0x9B);
}

void func_80841528(Player* arg0, LinkAnimationHeader* arg1) {
    func_80834DB8(arg1, (bitwise f32) &D_0400DCD8, (PlayState* )0x41400000, arg0);
    func_80831494((PlayState* ) arg0, (Player* ) arg1, func_8085439C, 0);
    arg1->unk_A6C = (s32) (arg1->unk_A6C | 0x20000000);
    arg1->unk_B68 = (s16) (s32) arg1->unk_28;
}

void func_808415A0(PlayState* arg1) {
    func_80833B18((PlayState* )1, (Player* )0x40000000, (Player* )0x40000000, (bitwise f32) (arg1->unk_BE + 0x8000), 0.0f);
}

void func_808415E4(PlayState* arg0, Player* arg1) {
    func_80831494(arg0, arg1, func_808540A0, 0);
    arg1->actor.draw = NULL;
    arg1->stateFlags1 |= 0x20000000;
}

void func_80841624(PlayState* arg0, Player* arg1) {
    if (gSaveContext.save.isOwlSave != 0) {
        func_80831494(arg0, arg1, func_808496AC, 0);
        func_8082E514(arg0, arg1, (D_8085BE84 + 0x408)[arg1->modelAnimType]);
        arg1->stateFlags1 |= 0x20000000;
        arg1->unk_AE8 = 0x28;
        gSaveContext.save.isOwlSave = 0;
        return;
    }
    func_80831494(arg0, arg1, func_80849FE0, 0);
    func_8082E514(arg0, arg1, (D_8085BE84 + 0x408)[arg1->modelAnimType]);
    arg1->stateFlags1 |= 0x20000000;
    arg1->stateFlags2 |= 0x20000000;
    Actor_Spawn(&arg0->actorCtx, arg0, 0x1CE, arg1->actor.world.pos.x, arg1->actor.world.pos.y, arg1->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, -1);
}

void func_80841744(PlayState* arg0, Player* arg1) {
    func_80831494(arg0, arg1, func_80855C28, 0);
    if (((s32) (arg1->actor.params & 0xF00) >> 8) == 8) {
        func_8082DBC0(arg0, arg1, D_8085D17C[arg1->transformation]);
        arg1->heldItemActionParam = 0x14;
        Player_SetModels(arg1, Player_ActionToModelGroup(arg1, (enum PlayerActionParam) arg1->heldItemActionParam));
    } else {
        func_8082DB60(arg0, arg1, (D_8085BE84 + 0x408)[arg1->modelAnimType]);
    }
    arg1->stateFlags1 |= 0x20000000;
    arg1->unk_AE8 = 0x2710;
    arg1->unk_ABC = -10000.0f;
    arg1->unk_B08[7] = 8.0f;
}

void Player_InitCommon(Player* this, PlayState* play, FlexSkeletonHeader* skelHeader) {
    Actor_ProcessInitChain(&this->actor, D_8085D2C0);
    this->currentYaw = this->actor.world.rot.y;
    if ((((s32) (this->actor.params & 0xF00) >> 8) != 0xC) && ((gSaveContext.respawnFlag != 2) || (gSaveContext.respawn[1].playerParams != 0xCFF))) {
        func_808309CC(play, this);
        SkelAnime_InitLink(play, &this->skelAnime, skelHeader, D_8085BE84[this->modelAnimType], 9, (Vec3s* ) this->unk_74C, (Vec3s* ) this->unk_7EB, 0x16);
        this->unk_27E = (unaligned s32) D_8085D2C4.unk_0;
        this->skelAnime.baseTransl.z = (s16) (u16) D_8085D2C4.z;
        SkelAnime_InitLink(play, &this->unk_284, skelHeader, func_8082ED20(this), 9, (Vec3s* ) this->unk_929, (Vec3s* ) this->unk_9C8, 0x16);
        this->unk_2C2 = (unaligned s32) D_8085D2C4.unk_0;
        this->unk_284.baseTransl.z = (s16) (u16) D_8085D2C4.z;
        if (this->transformation == 1) {
            SkelAnime_InitFlex(play, &this->unk_2C8, &D_060177B8, &D_060178D0, this->jointTable, this->morphTable, 5);
        }
        ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawFeet, this->ageProperties->unk_04);
    }
    this->unk_3BC = -1;
    Collider_InitAndSetCylinder(play, &this->cylinder, &this->actor, &D_8085C2EC);
    Collider_InitAndSetCylinder(play, &this->shieldCylinder, &this->actor, &D_8085C318);
    Collider_InitAndSetQuad(play, this->meleeWeaponQuads, &this->actor, &D_8085C344);
    Collider_InitAndSetQuad(play, &this->meleeWeaponQuads[1], &this->actor, &D_8085C344);
    Collider_InitAndSetQuad(play, &this->shieldQuad, &this->actor, &D_8085C394);
}

void func_80841A50(PlayState* play, Player* this) {
    void* sp1C;

    if ((play->roomCtx.currRoom.num >= 0) && (play->roomCtx.prevRoom.num < 0)) {
        sp1C = play + 0x18000;
        Math_Vec3f_Copy(&this->unk_3C0, &this->actor.world.pos);
        this->unk_3CC = this->actor.shape.rot.y;
        this->unk_3CF = 1;
        this->unk_3CE = play->roomCtx.currRoom.num;
    }
}

void Player_Init(Actor* thisx, PlayState* play) {
    s32 sp60;
    LightInfo* sp44;
    PosRot* sp40;
    LightInfo* temp_a0;
    LightInfo* temp_v1_2;
    PosRot* temp_a0_2;
    RespawnData* temp_t8;
    RespawnData* temp_t9_2;
    SaveContext* var_v1;
    s16 temp_v0;
    s16 temp_v0_6;
    s16 temp_v1_3;
    s32 temp_v0_7;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 temp_v0_2;
    u32 temp_t7;
    u32 temp_t9;
    u8 temp_t1;
    u8 temp_t6;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 var_v0;
    void* temp_v0_3;
    Player* this = (Player* ) thisx;

    play->playerInit = Player_InitCommon;
    play->playerUpdate = func_80844EF8;
    play->unk_18770 = func_8085B170;
    play->startPlayerFishing = func_8085B134;
    play->grabPlayer = func_8085B1F0;
    play->startPlayerCutscene = func_8085B28C;
    play->func_18780 = (void (*)(Player*, PlayState*)) func_8085B384;
    play->damagePlayer = func_8085B3E0;
    play->talkWithPlayer = (void (*)(PlayState*, Actor*)) func_8085B460;
    play->unk_1878C = func_8085B74C;
    play->unk_18790 = func_8085B820;
    play->unk_18794 = func_8085B854;
    play->setPlayerTalkAnim = func_8085B930;
    gActorOverlayTable->initInfo->objectId = 1;
    temp_v0 = this->actor.shape.rot.x;
    this->actor.room = -1;
    this->unk_A86 = -1;
    temp_t1 = temp_v0 - 1;
    if (temp_v0 != 0) {
        this->transformation = temp_t1;
        temp_v0_2 = Object_GetIndex(&play->objectCtx, gPlayerFormObjectIndices[temp_t1 & 0xFF]);
        this->actor.objBankIndex = temp_v0_2;
        if (temp_v0_2 < 0) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
        Actor_SetObjectDependency(play, &this->actor);
        goto block_10;
    }
    temp_t6 = gSaveContext.save.playerForm;
    temp_v1 = temp_t6 & 0xFF;
    this->transformation = temp_t6;
    if (temp_v1 == 4) {
        var_v0 = gSaveContext.save.equippedMask;
        if (var_v0 == 0x14) {
            gSaveContext.save.equippedMask = 0;
            var_v0 = 0;
        }
        this->currentMask = var_v0;
    } else {
        this->currentMask = temp_v1 + 0x15;
        gSaveContext.save.equippedMask = 0;
    }
    Inventory_UpdateDeitySwordEquip(play);
    this->unk_B28 = 0;
    this->unk_B90 = 0;
    this->unk_B92 = 0;
    this->unk_B94 = 0;
    this->unk_B96 = 0;
    this->stateFlags1 &= 0xFCFFEFF7;
    this->stateFlags2 &= 0xBEFDFFFF;
    this->stateFlags3 &= 0xFC424437;
    this->unk_B08[0] = 0.0f;
    this->unk_B08[1] = 0.0f;
block_10:
    if (this->transformation == 2) {
        if ((this->stateFlags1 * 0x10) < 0) {
            this->unk_B08[2] = 1.0f;
        } else {
            this->unk_B08[2] = 0.0f;
        }
    }
    temp_t7 = this->actor.flags & 0xFBFDFFFF;
    this->actor.flags = temp_t7;
    if (this->transformation != 3) {
        temp_t9 = temp_t7 | 0x04000000;
        this->actor.flags = temp_t9;
        if (this->transformation == 1) {
            this->actor.flags = temp_t9 | 0x20000;
        }
    }
    this->ageProperties = &D_8085BA38[this->transformation];
    this->heldItemActionParam = 0;
    this->itemActionParam = 0;
    this->heldItemId = 0xFF;
    func_80831990(play, this, ITEM_NONE);
    Player_SetEquipmentData(play, this);
    this->prevBoots = this->currentBoots;
    Player_InitCommon(this, play, gPlayerSkeletons[this->transformation]);
    if (this->actor.shape.rot.z != 0) {
        this->actor.shape.rot.z = 0;
        func_8082F938(play, this, 0, 4);
        temp_v0_3 = Effect_GetByIndex(this->meleeWeaponEffectIndex[2]);
        if (this->transformation == 1) {
            temp_v0_3->unk_606 = (unaligned s32) D_8085D338;
        } else {
            temp_v0_3->unk_606 = (unaligned s32) D_8085D33C;
        }
        temp_v0_4 = this->csMode;
        if ((temp_v0_4 == 9) || (temp_v0_4 == 0x5D)) {
            func_80831494(play, this, func_8085B08C, 0);
            this->stateFlags1 |= 0x20000000;
            return;
        }
        func_80831494(play, this, func_80855818, 0);
        this->actor.shape.rot.y = this->currentYaw;
        if (this->prevMask != 0) {
            func_8082DB90(play, this, &D_0400D0A8);
        } else {
            temp_v0_5 = this->transformation;
            if (temp_v0_5 == 4) {
                LinkAnimation_Change(play, &this->skelAnime, D_8085D160[temp_v0_5], -0.6666667f, 9.0f, 0.0f, (u8) 2, 0.0f);
            } else {
                func_8082DB60(play, this, &D_0400D0D0);
            }
        }
        this->stateFlags1 |= 0x30000000;
        this->stateFlags3 |= 0x20000;
        this->unk_B08[7] = 3.0f;
        return;
    }
    this->prevMask = this->currentMask;
    Effect_Add(play, this->meleeWeaponEffectIndex, 2, 0U, (u8) 0, &D_8085D30C);
    Effect_Add(play, &this->meleeWeaponEffectIndex[1], 2, 0U, (u8) 0, &D_8085D30C);
    func_8082F938(play, this, 0, 4);
    if (this->transformation == 1) {
        *(&D_8085D330 + 4) = (unaligned s32) D_8085D338;
    } else {
        *(&D_8085D330 + 4) = (unaligned s32) D_8085D33C;
    }
    Effect_Add(play, &this->meleeWeaponEffectIndex[2], 4, 0U, (u8) 0, &D_8085D330);
    if (this->actor.shape.rot.x != 0) {
        this->actor.shape.rot.x = 0;
        this->csMode = 0x44;
        func_80831494(play, this, func_8085B08C, 0);
        this->stateFlags1 |= 0x20000000;
        return;
    }
    play->unk_1887C = 0;
    play->unk_1887D = 0;
    play->unk_1887E = 0;
    this->giObjectSegment = ZeldaArena_Malloc(0x2000U);
    this->maskObjectSegment = ZeldaArena_Malloc(0x3800U);
    temp_a0 = &this->lightInfo;
    sp44 = temp_a0;
    Lights_PointNoGlowSetInfo(temp_a0, (s16) (s32) this->actor.world.pos.x, (s16) (s32) this->actor.world.pos.y, (s16) (s32) this->actor.world.pos.z, (u8) 0xFF, (u8) 0x80, (u8) 0, (s16) -1);
    this->lightNode = LightContext_InsertLight(play, &play->lightCtx, sp44);
    Play_AssignPlayerActorCsIdsFromScene(&play->state, (s32) this->actor.cutscene);
    var_a2 = gSaveContext.respawnFlag;
    if (var_a2 != 0) {
        if (var_a2 == -3) {
            this->actor.params = gSaveContext.respawn[3].playerParams;
        } else {
            if ((var_a2 == 1) || (var_a2 == -1)) {
                this->unk_D6A = -2;
            }
            if (var_a2 != -7) {
                temp_a0_2 = &this->actor.world;
                if ((var_a2 == -8) || (var_a2 == -5) || (var_a2 == -4)) {
                    var_a2 = 1;
                }
                if ((var_a2 < 0) && (var_a2 != -1) && (var_a2 != -6)) {
                    var_v1 = &gSaveContext;
                } else {
                    var_v0_2 = var_a2 - 1;
                    if (var_a2 < 0) {
                        var_v0_2 = 2;
                    }
                    temp_v1_2 = &gSaveContext + (var_v0_2 << 5);
                    sp44 = temp_v1_2;
                    sp40 = temp_a0_2;
                    sp60 = var_a2;
                    Math_Vec3f_Copy(&temp_a0_2->pos, &gSaveContext.respawn[var_v0_2].pos);
                    Math_Vec3f_Copy(&this->actor.home.pos, &sp40->pos);
                    Math_Vec3f_Copy(&this->actor.prevPos, &sp40->pos);
                    Math_Vec3f_Copy(&this->actor.focus.pos, &sp40->pos);
                    var_v1 = (SaveContext* ) temp_v1_2;
                    this->unk_B68 = (s16) (s32) this->actor.world.pos.y;
                    temp_v0_6 = var_v1->respawn[0].yaw;
                    this->actor.shape.rot.y = temp_v0_6;
                    this->currentYaw = temp_v0_6;
                    this->actor.params = var_v1->respawn[0].playerParams;
                }
                play->actorCtx.flags.switches[2] = var_v1->respawn[0].tempSwitchFlags;
                play->actorCtx.flags.collectible[1] = var_v1->respawn[0].unk_18;
                play->actorCtx.flags.collectible[2] = var_v1->respawn[0].tempCollectFlags;
            }
        }
    }
    if ((var_a2 == 4) || (var_a1 = 0, (gSaveContext.respawnFlag == -4))) {
        var_a1 = 1;
    }
    sp60 = var_a2;
    if (func_801226E0(play, var_a1) == 0) {
        gSaveContext.respawn[0].playerParams = (this->actor.params & 0xFF) | 0xD00;
    }
    gSaveContext.respawn[0].data = 1;
    if (var_a2 == 0) {
        temp_t9_2 = gSaveContext.respawn;
        temp_t8 = &gSaveContext.respawn[2];
        temp_t8->pos.x = temp_t9_2->pos.x;
        temp_t8->pos.y = temp_t9_2->pos.y;
        temp_t8->pos.z = temp_t9_2->pos.z;
        temp_t8->unk_C = (s32) temp_t9_2->unk_C;
        temp_t8->unk_10 = (s32) temp_t9_2->unk_10;
        temp_t8->tempSwitchFlags = temp_t9_2->tempSwitchFlags;
        temp_t8->unk_18 = temp_t9_2->unk_18;
        temp_t8->tempCollectFlags = temp_t9_2->tempCollectFlags;
    }
    gSaveContext.respawn[2].playerParams = (gSaveContext.respawn[2].playerParams & 0xFF) | 0xD00;
    var_v0_3 = (s32) (this->actor.params & 0xF00) >> 8;
    if (((var_v0_3 == 5) || (var_v0_3 == 6)) && (gSaveContext.save.cutscene >= 0xFFF0)) {
        var_v0_3 = 0xD;
    }
    D_8085D2CC[var_v0_3](play, this, var_a2);
    if ((this->actor.draw != NULL) && (gSaveContext.save.hasTatl != 0) && ((temp_v0_7 = gSaveContext.gameMode, (temp_v0_7 == 0)) || (temp_v0_7 == 3)) && (play->sceneNum != 8)) {
        this->tatlActor = func_80835C64(play, this, &this->actor.world.pos, &D_8085D340, 0);
        temp_v1_3 = gSaveContext.dogParams;
        if (temp_v1_3 != 0) {
            gSaveContext.dogParams = temp_v1_3 | 0x8000;
        }
        if (gSaveContext.powderKegTimer != 0) {
            this->nextModelGroup = Player_ActionToModelGroup(this, PLAYER_AP_POWDER_KEG);
            this->heldItemId = 0xC;
            func_8082F8BC(play, this, PLAYER_AP_POWDER_KEG);
            func_808313F0(this, play);
        } else if (gSaveContext.unk_1014 != 0) {
            func_8082F5FC(this, Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, 0xB9, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, 0x8000));
            func_808313F0(this, play);
        }
    }
    Minimap_SavePlayerRoomInitInfo(play);
    func_80841A50(play, this);
    this->unk_3CF = 0;
    gGameInfo->data[0x220] = 0;
}

void func_80842510(s16* arg0) {
    s16 temp_v0;
    s16 var_a2;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_ft0;

    temp_v0 = *arg0;
    var_v1 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -temp_v0;
    }
    temp_ft0 = (s32) (((f32) var_v1 * 100.0f) / 1000.0f);
    if ((s16) temp_ft0 < 0x190) {
        var_a2 = 0x190;
    } else {
        var_v1_2 = (s16) temp_ft0;
        if ((s16) temp_ft0 >= 0xFA1) {
            var_v1_2 = 0xFA0;
        }
        var_a2 = var_v1_2;
    }
    Math_ScaledStepToS(arg0, 0, var_a2);
}

void func_808425B4(Player* arg0) {
    s16 sp26;

    if (!(arg0->unk_AA6 & 2)) {
        sp26 = arg0->actor.focus.rot.y - arg0->actor.shape.rot.y;
        func_80842510(&sp26);
        arg0->actor.focus.rot.y = arg0->actor.shape.rot.y + sp26;
    }
    if (!(arg0->unk_AA6 & 1)) {
        func_80842510(arg0 + 0x48);
    }
    if (!(arg0->unk_AA6 & 8)) {
        func_80842510(arg0 + 0xAAC);
    }
    if (!(arg0->unk_AA6 & 0x40)) {
        func_80842510(arg0 + 0xAB2);
    }
    if (!(arg0->unk_AA6 & 4)) {
        func_80842510(arg0 + 0x4C);
    }
    if (!(arg0->unk_AA6 & 0x10)) {
        func_80842510(arg0 + 0xAAE);
    }
    if (!(arg0->unk_AA6 & 0x20)) {
        func_80842510(arg0 + 0xAB0);
    }
    if (!(arg0->unk_AA6 & 0x80)) {
        if (arg0->unk_AA8 != 0) {
            func_80842510(arg0 + 0xAA8);
        } else {
            func_80842510(arg0 + 0xAB4);
        }
    }
    if (!(arg0->unk_AA6 & 0x100)) {
        func_80842510(arg0 + 0xAB6);
    }
    arg0->unk_AA6 = 0;
}

void func_808426F0(PlayState* arg0, Player* arg1) {
    s32 sp3C;
    s32 sp38;
    Actor* sp34;
    Actor* sp30;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s32 sp18;
    Actor* temp_t5;
    Actor* temp_v0_8;
    Actor* temp_v0_9;
    Actor* temp_v1;
    s16 temp_v0_4;
    s32 temp_a1;
    s32 temp_ft5;
    s32 temp_t3;
    s32 temp_v0_10;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 var_a2;
    s32 var_t0;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t1_3;
    s32 var_v0;
    s8 temp_v0_5;
    u16 temp_v0_3;
    u32 temp_a0;
    u32 temp_a2;
    u32 temp_a2_2;
    u32 temp_t2;
    u8 temp_v0;
    u8 temp_v0_11;
    u8 temp_v0_12;
    u8 temp_v0_2;
    u8 temp_v1_2;
    u8 var_t0_2;
    u8 var_v0_2;
    void (*temp_t4)(Player*, PlayState*);

    if (arg1 == arg0->actorCtx.actorLists[2].first) {
        sp3C = -1;
        var_t1 = func_801242B4(arg1) != 0;
        var_a2 = -1;
        if (var_t1 == 0) {
            var_t1 = (s32) arg1->unk_748 == (s32) func_8084CA24;
        }
        sp38 = var_t1;
        temp_v0 = arg1->transformation;
        if (temp_v0 == 1) {
            temp_a2 = arg1->stateFlags3;
            if (temp_a2 & 0x80000) {
                var_a2 = 0xA;
            } else if (temp_a2 & 0x1000) {
                var_a2 = 0x27;
            } else {
                var_a2 = 0x26;
            }
        } else if (temp_v0 == 2) {
            if (((arg1->stateFlags1 * 0x10) >= 0) || ((var_t1 == 0) && (arg1->actor.bgCheckFlags & 1))) {
                var_a2 = 0x26;
            } else {
                var_a2 = 7;
            }
        } else if (temp_v0 == 3) {
            var_a2 = 0x29;
        } else {
            temp_v0_2 = arg1->currentMask;
            if (temp_v0_2 == 0x12) {
                var_a2 = 0x18;
            } else if (temp_v0_2 == 0x11) {
                var_a2 = 0x1A;
            } else if (temp_v0_2 == 0xE) {
                var_a2 = 0x19;
            }
        }
        if (var_a2 >= 0) {
            sp18 = var_t1;
            func_801155B4(arg0, (s16) var_a2, (s16) var_a2, arg1);
        } else if (arg0->interfaceCtx.unk_21C != 0) {
            arg0->interfaceCtx.unk_21C = 0;
            arg0->interfaceCtx.bButtonDoAction = 0;
        }
        sp18 = var_t1;
        if ((Message_GetState(&arg0->msgCtx) == 0) || ((temp_v0_3 = arg0->msgCtx.currentTextId, (((s32) temp_v0_3 < 0x100) == 0)) && ((s32) temp_v0_3 < 0x201)) || (((s32) temp_v0_3 >= 0x1BB2) && ((s32) temp_v0_3 < 0x1BB7))) {
            var_t0 = 0xA;
            sp34 = arg1->heldActor;
            temp_t5 = arg1->interactRangeActor;
            sp28 = (s32) arg1->unk_AE3[arg1->unk_ADE];
            if ((arg1->transformation == 1) && ((arg1->stateFlags1 << 9) >= 0)) {
                var_t0 = 0x23;
            }
            if (arg0->actorCtx.unk5 & 4) {
                var_t0_2 = 0x17;
            } else {
                sp20 = var_t0;
                sp18 = var_t1;
                sp30 = temp_t5;
                if ((Player_InBlockingCsMode(arg0, arg1) != 0) || ((arg1->actor.flags * 4) < 0) || (temp_t2 = arg1->stateFlags1, ((temp_t2 & 0x1000) != 0)) || (temp_a2_2 = arg1->stateFlags3, ((temp_a2_2 << 0xC) < 0)) || (temp_t4 = arg1->unk_748, (temp_t4 == func_80854430))) {
                    var_t0_2 = 0xA;
                } else if (temp_t2 & 0x100000) {
                    var_t0_2 = 3;
                } else if ((arg1->itemActionParam == 2) && (temp_v0_4 = arg1->unk_B28, (temp_v0_4 != 0))) {
                    if (temp_v0_4 == (s16) 2) {
                        var_t0_2 = 0x14;
                    } else {
                        var_t0_2 = 0xA;
                    }
                } else if (temp_a2_2 & 0x2000) {
                    var_t0_2 = 0xD;
                } else {
                    temp_v0_5 = arg1->doorType;
                    if ((temp_v0_5 != 0) && (temp_v0_5 != 4) && !(temp_t2 & 0x800)) {
                        var_t0_2 = 4;
                    } else {
                        temp_t3 = temp_t2 & 0x800;
                        if (temp_a2_2 & 0x200000) {
                            var_t0_2 = *(&D_8085D34C + arg1->unk_B67);
                        } else if (((temp_t3 == 0) || (sp34 == NULL)) && (temp_t5 != NULL) && (arg1->getItemId < 0)) {
                            var_t0_2 = 4;
                        } else if ((var_t1 == 0) && (arg1->stateFlags2 & 1)) {
                            var_t0_2 = 0x11;
                        } else {
                            temp_a0 = arg1->stateFlags2;
                            temp_a1 = temp_t2 & 0x800000;
                            if ((temp_a0 & 4) || ((temp_a1 == 0) && (arg1->rideActor != NULL))) {
                                var_t0_2 = 0xB;
                            } else if (temp_a1 != 0) {
                                temp_v1 = arg1->rideActor;
                                temp_v0_6 = temp_v1->unk_144;
                                if (((temp_v0_6 == 7) || (temp_v0_6 == 0) || (temp_v0_6 == 8)) && (temp_v0_7 = temp_v1->unk_1E8, ((temp_v0_7 << 0xC) >= 0)) && ((temp_v0_7 << 6) >= 0)) {
                                    var_t1_2 = 1;
                                } else {
                                    var_t1_2 = 0;
                                }
                                if ((var_t1_2 == 0) && (temp_t4 != func_808505D0)) {
                                    if ((temp_a0 & 2) && (temp_v0_8 = arg1->targetActor, (temp_v0_8 != NULL))) {
                                        if ((temp_v0_8->category == 4) || (temp_v0_8->id == 0x19A)) {
                                            var_t0_2 = 0xF;
                                        } else {
                                            var_t0_2 = 1;
                                        }
                                    } else if ((func_8082DA90(arg0) == 0) && (func_800B7128(arg1) == 0) && ((arg1->stateFlags1 << 0xB) >= 0)) {
                                        var_t0_2 = 8;
                                    } else {
                                        var_t0_2 = 0xA;
                                    }
                                } else {
                                    goto block_91;
                                }
                            } else {
block_91:
                                if ((temp_a0 & 2) && (temp_v0_9 = arg1->targetActor, (temp_v0_9 != NULL))) {
                                    temp_v1_2 = temp_v0_9->category;
                                    if ((temp_v1_2 == 4) || (temp_v1_2 == 5) || (temp_v0_9->id == 0x19A)) {
                                        var_t0_2 = 0xF;
                                    } else {
                                        var_t0_2 = 1;
                                    }
                                } else if ((temp_t2 & 0x202000) || ((temp_a1 != 0) && (temp_a0 & 0x400000))) {
                                    var_t0_2 = 0xD;
                                } else if ((temp_t3 != 0) && (arg1->getItemId == 0) && (sp34 != NULL)) {
                                    if ((arg1->actor.bgCheckFlags & 1) || (sp34->id == 0x11)) {
                                        if (func_8083D738(arg1, sp34, temp_a2_2, arg1) == 0) {
                                            var_t0_2 = 0xC;
                                        } else {
                                            var_t0_2 = 9;
                                        }
                                    } else {
                                        var_t0_2 = 0xA;
                                    }
                                } else if (temp_a0 & 0x10000) {
                                    var_t0_2 = 0x11;
                                } else if (temp_a0 & 0x800) {
                                    temp_ft5 = (s32) ((120.0f - arg1->actor.depthInWater) / 40.0f);
                                    if (temp_ft5 < 0) {
                                        var_v0 = 0;
                                    } else {
                                        var_t1_3 = temp_ft5;
                                        if (temp_ft5 >= 2) {
                                            var_t1_3 = 1;
                                        }
                                        var_v0 = var_t1_3;
                                    }
                                    var_t0_2 = *(&D_8085D354 + var_v0);
                                } else if (temp_a2_2 & 0x100) {
                                    var_t0_2 = 5;
                                } else if (temp_a2_2 & 0x1000) {
                                    var_t0_2 = 3;
                                } else {
                                    sp20 = var_t0;
                                    sp30 = temp_t5;
                                    if ((func_8082FBE8(arg1) == 0) && ((arg1->stateFlags1 * 0x10) < 0) && (sp38 == 0)) {
                                        var_t0_2 = 0x24;
                                    } else {
                                        var_v0_2 = arg1->transformation;
                                        if ((var_v0_2 == 3) || ((sp38 == 0) && (((arg1->stateFlags1 * 0x10) >= 0) || (arg1->actor.bgCheckFlags & 1)))) {
                                            if ((var_v0_2 == 3) && (arg1->actor.bgCheckFlags & 1)) {
                                                sp30 = temp_t5;
                                                sp20 = var_t0;
                                                if (func_800C9DDC(&arg0->colCtx, arg1->actor.floorPoly, (s32) arg1->actor.floorBgId) != 0) {
                                                    var_v0_2 = arg1->transformation;
                                                    goto block_136;
                                                }
                                            }
                                            sp20 = var_t0;
                                            temp_v0_10 = func_8082FBE8(arg1);
                                            var_t0_2 = (u8) var_t0;
                                            sp24 = temp_v0_10;
                                            if (((temp_v0_10 != 0) && (arg1->transformation != 3)) || !(arg1->stateFlags1 & 0x400000) || (sp20 = (s32) var_t0_2, (Player_IsGoronOrDeku(arg1) == 0))) {
                                                if ((arg1->transformation != 1) && !(arg1->stateFlags1 & 0x4004) && (sp28 <= 0) && ((sp20 = (s32) var_t0_2, (func_80123420(arg1) != 0)) || ((D_80862B08 != 7) && ((sp20 = (s32) var_t0_2, (func_80123434(arg1) != 0)) || ((arg0->roomCtx.currRoom.unk3 != 2) && ((arg1->stateFlags1 << 9) >= 0) && (sp28 == 0)))))) {
                                                    var_t0_2 = 0;
                                                } else if ((arg0->roomCtx.currRoom.unk3 != 2) && (sp24 != 0) && (sp28 > 0)) {
                                                    var_t0_2 = 5;
                                                } else {
                                                    temp_v0_11 = arg1->transformation;
                                                    if ((temp_v0_11 == 3) && ((arg1->stateFlags1 * 0x10) >= 0) && (arg1->actor.bgCheckFlags & 1)) {
                                                        var_t0_2 = 0;
                                                    } else if (((temp_v0_11 == 4) || (temp_v0_11 == 2)) && ((arg1->itemActionParam >= 3) || ((arg1->stateFlags2 & 0x100000) && (arg0->actorCtx.targetContext.arrowPointedActor == NULL)))) {
                                                        var_t0_2 = 0x13;
                                                    }
                                                }
                                            }
                                        } else {
block_136:
                                            if (var_v0_2 == 2) {
                                                var_t0_2 = 0x25;
                                            } else if (((arg1->stateFlags1 * 0x10) < 0) && (temp_t5 != NULL) && (temp_t5->id == 0x224)) {
                                                var_t0_2 = 0x11;
                                            } else {
                                                var_t0_2 = 7;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (var_t0_2 != 0x13) {
                arg1->unk_ACF = 0x14;
            } else {
                temp_v0_12 = arg1->unk_ACF;
                if (temp_v0_12 != 0) {
                    var_t0_2 = 0xA;
                    arg1->unk_ACF = temp_v0_12 - 1;
                }
            }
            func_8011552C(arg0, var_t0_2 & 0xFFFF);
            if ((Play_InCsMode(arg0) == 0) && (arg1->stateFlags2 & 0x200000) && !(arg1->stateFlags3 & 0x100)) {
                if (arg1->unk_730 != NULL) {
                    func_80115764(arg0, 0x2B);
                } else {
                    func_80115764(arg0, 0x2A);
                }
                ActorCutscene_SetIntentToPlay(0x7C);
                return;
            }
            func_80115764(arg0, 0x2C);
        }
    }
}

s32 func_808430E0(Player* arg0) {
    if ((arg0->transformation == 3) && (arg0->actor.bgCheckFlags & 1) && (func_8083784C() != 0)) {
        arg0->actor.bgCheckFlags &= 0xFFFE;
    }
    if (arg0->actor.bgCheckFlags & 1) {
        return 0;
    }
    if ((arg0->stateFlags1 * 0x10) >= 0) {
        D_80862B08 = 0;
    }
    arg0->unk_B6C = 0;
    arg0->unk_B6E = 0;
    D_80862B28 = 0;
    return 1;
}

void func_80843178(PlayState* arg0, Player* arg1) {
    u8 spC7;
    CollisionPoly* spC0;
    f32 spBC;
    f32 spB4;
    u32 spB0;
    s32 spAC;
    CollisionPoly* spA8;
    s32 spA4;
    s16 spA2;
    CollisionPoly* sp98;
    f32 sp94;
    f32 sp8C;
    CollisionPoly* sp84;
    CollisionPoly* sp80;
    s32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp4C;
    void* sp3C;
    CollisionContext* sp38;
    PosRot* sp34;
    CollisionContext* temp_a0_2;
    CollisionPoly* temp_a0_3;
    CollisionPoly* temp_t2;
    PlayerAgeProperties* temp_v1;
    PlayerAgeProperties* temp_v1_7;
    PosRot* temp_v0_4;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0_7;
    f32 temp_fv0_8;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 var_fv1;
    s16 temp_a0_4;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 var_v0_2;
    s16 var_v0_4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_6;
    s32 var_v0;
    s32 var_v0_3;
    u32 temp_a0;
    u32 temp_v0_3;
    u32 var_v1;
    u32 var_v1_2;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 temp_v0_5;

    spC7 = 0;
    var_v0 = arg1->unk_748 == (s32) func_8084D820;
    if (var_v0 != 0) {
        var_v0 = arg1->unk_397 == 4;
    }
    spAC = var_v0;
    D_80862B1C = (s32) arg1->unk_D5E;
    temp_a0 = arg1->stateFlags1;
    temp_v1 = arg1->ageProperties;
    temp_fv0 = temp_v1->unk_38;
    temp_fv1 = temp_v1->unk_00;
    if (temp_a0 & 0xA0000000) {
        if ((!(temp_a0 & 0x80) && !(arg1->stateFlags2 & 0x4000) && ((temp_a0 << 0) < 0)) || (var_v0 != 0)) {
            var_v1 = 0x38;
            arg1->actor.bgCheckFlags &= 0xFFFE;
        } else {
            temp_v0 = temp_a0 & 1;
            if ((temp_v0 != 0) && (arg0->roomCtx.currRoom.unk3 != 1) && ((arg1->unk_D68 - (s32) arg1->actor.world.pos.y) >= 0x64)) {
                var_v1 = 0x39;
            } else {
                var_v1 = 0x3F;
                if ((temp_v0 == 0) && ((temp_v0_2 = arg1->unk_748, (temp_v0_2 == func_8084E034)) || (temp_v0_2 == func_8084D820))) {
                    var_v1 = 0x3C;
                    arg1->actor.bgCheckFlags &= 0xFDF7;
                }
            }
        }
    } else {
        var_v1 = 0x814;
        if (arg1->unk_748 == func_808561B0) {

        } else if ((arg1->stateFlags3 & 0x81000) && (arg1->linearVelocity >= 8.0f)) {
            var_v1 = 0x337;
        } else {
            var_v1 = 0x3F;
        }
    }
    if (arg1->stateFlags3 & 1) {
        var_v1 &= ~6;
    }
    if (var_v1 & 4) {
        arg1->stateFlags3 |= 0x10;
    }
    spB0 = var_v1;
    spBC = temp_fv0;
    spB4 = temp_fv1;
    var_v1_2 = var_v1;
    if (func_801242B4(arg1) != 0) {
        var_v1_2 &= ~0x18;
    }
    spB0 = var_v1_2;
    Actor_UpdateBgCheckInfo(arg0, &arg1->actor, 26.800001f, temp_fv0, temp_fv1, var_v1_2);
    var_fv1 = -1000.0f;
    arg1->unk_AC0 -= (arg1->actor.world.pos.y - arg1->actor.prevPos.y) / arg1->actor.scale.y;
    temp_fv0_2 = arg1->unk_AC0;
    if (temp_fv0_2 < -1000.0f) {

    } else if (temp_fv0_2 > 1000.0f) {
        var_fv1 = 1000.0f;
    } else {
        var_fv1 = temp_fv0_2;
    }
    arg1->unk_AC0 = var_fv1;
    if (arg1->actor.bgCheckFlags & 0x10) {
        arg1->actor.velocity.y = 0.0f;
    }
    D_80862B18 = arg1->actor.world.pos.y - arg1->actor.floorHeight;
    D_80862B10 = 0;
    temp_t2 = arg1->actor.floorPoly;
    spC0 = temp_t2;
    if ((temp_t2 != NULL) && (var_v1_2 & 4)) {
        temp_a0_2 = &arg0->colCtx;
        sp38 = temp_a0_2;
        arg1->unk_D5E = func_800C9B40(temp_a0_2, temp_t2, (s32) arg1->actor.floorBgId);
        if (arg1 == arg0->actorCtx.actorLists[2].first) {
            func_801A3CF4(SurfaceType_GetEcho(temp_a0_2, spC0, (s32) arg1->actor.floorBgId));
            temp_a2 = arg1->actor.floorBgId;
            if (temp_a2 == 0x32) {
                func_800FAAB4(arg0, SurfaceType_GetLightSettingIndex(sp38, spC0, (s32) temp_a2) & 0xFF);
            } else {
                DynaPolyActor_SetRidingRotatingStateByIndex(sp38, (s32) temp_a2);
            }
        }
        temp_v0_3 = SurfaceType_GetConveyorSpeed(sp38, spC0, (s32) arg1->actor.floorBgId);
        D_80862B10 = temp_v0_3;
        if (temp_v0_3 != 0) {
            D_80862B14 = SurfaceType_GetConveyorType(sp38, spC0, (s32) arg1->actor.floorBgId);
            temp_v1_2 = D_80862B14;
            if (((temp_v1_2 == 0) && (arg1->actor.depthInWater > 20.0f)) || ((temp_v1_2 != 0) && (arg1->actor.bgCheckFlags & 1))) {
                D_80862B16 = SurfaceType_GetConveyorDirection(sp38, spC0, (s32) arg1->actor.floorBgId) << 0xA;
            } else {
                D_80862B10 = 0;
            }
        }
    }
    arg1->actor.bgCheckFlags &= 0xFDFF;
    sp38 = &arg0->colCtx;
    if (arg1->actor.bgCheckFlags & 8) {
        D_8085D35C = 17.800001f;
        D_8085D360 = arg1->ageProperties->unk_38 + 10.0f;
        if (func_80835D58(arg0, arg1, &D_8085D358, &spA8, &spA4, &D_80862B30) != 0) {
            arg1->actor.bgCheckFlags |= 0x200;
            if (spA8 != arg1->actor.wallPoly) {
                arg1->actor.wallPoly = spA8;
                arg1->actor.wallBgId = (u8) spA4;
                arg1->actor.wallYaw = Math_FAtan2F((f32) spA8->normal.z, (f32) spA8->normal.x);
            }
        }
        temp_v1_3 = arg1->actor.shape.rot.y - (arg1->actor.wallYaw + 0x8000);
        spA2 = temp_v1_3;
        D_80862B0C = func_800C9A4C(sp38, arg1->actor.wallPoly, (s32) arg1->actor.wallBgId);
        if (temp_v1_3 < 0) {
            D_80862B20 = (s32) -temp_v1_3;
        } else {
            D_80862B20 = (s32) temp_v1_3;
        }
        temp_v1_4 = arg1->currentYaw - (arg1->actor.wallYaw + 0x8000);
        if (temp_v1_4 < 0) {
            D_80862B24 = (s32) -temp_v1_4;
        } else {
            D_80862B24 = (s32) temp_v1_4;
        }
        temp_fv0_3 = (f32) D_80862B24 * 0.00008f;
        if (!(arg1->actor.bgCheckFlags & 1) || (temp_fv0_3 >= 1.0f)) {
            arg1->unk_B50 = (f32) gGameInfo->data[0x2D] / 100.0f;
        } else {
            temp_fv1_2 = ((f32) gGameInfo->data[0x2D] / 100.0f) * temp_fv0_3;
            arg1->unk_B50 = temp_fv1_2;
            if (temp_fv1_2 < 0.1f) {
                arg1->unk_B50 = 0.1f;
            }
        }
        if ((arg1->actor.bgCheckFlags & 0x200) && (D_80862B20 < 0x3000)) {
            temp_a0_3 = arg1->actor.wallPoly;
            temp_v1_5 = temp_a0_3->normal.y;
            var_v0_2 = temp_v1_5;
            if (temp_v1_5 < 0) {
                var_v0_2 = -temp_v1_5;
            }
            if (var_v0_2 < 0x258) {
                temp_v0_4 = &arg1->actor.world;
                sp34 = temp_v0_4;
                sp98 = temp_a0_3;
                temp_fa0 = (f32) temp_a0_3->normal.x * 0.00003051851f;
                temp_ft4 = (f32) temp_a0_3->normal.z * 0.00003051851f;
                sp94 = temp_fa0;
                sp8C = temp_ft4;
                temp_fv0_4 = Math3D_UDistPlaneToPos(temp_fa0, (f32) temp_v1_5 * 0.00003051851f, temp_ft4, (f32) temp_a0_3->dist, &temp_v0_4->pos);
                temp_fv1_3 = temp_fv0_4 + 10.0f;
                arg1->unk_B58 = temp_fv0_4;
                sp70 = arg1->actor.world.pos.x - (temp_fv1_3 * temp_fa0);
                sp78 = arg1->actor.world.pos.z - (temp_fv1_3 * temp_ft4);
                sp74 = arg1->actor.world.pos.y + arg1->ageProperties->unk_0C;
                temp_fv0_5 = BgCheck_EntityRaycastFloor5(sp38, &sp84, &sp7C, &arg1->actor, (Vec3f* ) &sp70);
                temp_fa0_2 = arg1->actor.world.pos.y;
                temp_fv1_4 = temp_fv0_5 - temp_fa0_2;
                arg1->unk_B54 = temp_fv1_4;
                if ((temp_fv1_4 < 17.800001f) || (sp6C = temp_fv0_5, (BgCheck_EntityCheckCeiling(sp38, &sp68, &sp34->pos, (temp_fv0_5 - temp_fa0_2) + 20.0f, &sp80, &sp7C, &arg1->actor) != 0))) {
                    arg1->unk_B54 = 399.96002f;
                } else {
                    D_8085D35C = (sp6C + 5.0f) - arg1->actor.world.pos.y;
                    if (func_80835D58(arg0, arg1, &D_8085D358, &sp80, &sp7C, &D_80862B30) != 0) {
                        temp_v1_6 = arg1->actor.wallYaw - Math_FAtan2F((f32) sp80->normal.z, (f32) sp80->normal.x);
                        var_v0_3 = temp_v1_6;
                        if (temp_v1_6 < 0) {
                            var_v0_3 = -temp_v1_6;
                        }
                        if ((var_v0_3 < 0x4000) && (func_800C9AB0(sp38, sp80, sp7C) == 0)) {
                            arg1->unk_B54 = 399.96002f;
                        } else {
                            goto block_78;
                        }
                    } else {
block_78:
                        if (func_800C9A7C(sp38, sp98, (s32) arg1->actor.wallBgId) == 0) {
                            temp_v1_7 = arg1->ageProperties;
                            temp_fv0_6 = arg1->unk_B54;
                            if (temp_v1_7->unk_1C <= temp_fv0_6) {
                                temp_a0_4 = sp84->normal.y;
                                var_v0_4 = temp_a0_4;
                                if (temp_a0_4 < 0) {
                                    var_v0_4 = -temp_a0_4;
                                }
                                if (var_v0_4 >= 0x5DC1) {
                                    if ((temp_v1_7->unk_14 <= temp_fv0_6) || (func_801242B4(arg1) != 0)) {
                                        spC7 = 4;
                                    } else if (arg1->ageProperties->unk_18 <= arg1->unk_B54) {
                                        spC7 = 3;
                                    } else {
                                        spC7 = 2;
                                    }
                                }
                            } else {
                                spC7 = 1;
                            }
                        }
                    }
                }
            }
        }
    } else {
        arg1->unk_B5D = 0;
        arg1->unk_B54 = 0.0f;
        arg1->unk_B50 = (f32) gGameInfo->data[0x2D] / 100.0f;
    }
    if (arg1->unk_B5C == spC7) {
        if (arg1->linearVelocity != 0.0f) {
            temp_v0_5 = arg1->unk_B5D;
            if ((s32) temp_v0_5 < 0x64) {
                arg1->unk_B5D = temp_v0_5 + 1;
            }
        }
    } else {
        arg1->unk_B5C = spC7;
        arg1->unk_B5D = 0;
    }
    D_80862B08 = func_800C99D4(sp38, spC0, (s32) arg1->actor.floorBgId);
    if (arg1->actor.bgCheckFlags & 1) {
        D_80862B40 = SurfaceType_GetSlope(sp38, arg1->actor.floorPoly, (s32) arg1->actor.floorBgId);
        if (func_808430E0(arg1) == 0) {
            sp5C = (f32) spC0->normal.y * 0.00003051851f;
            temp_a2_2 = arg1->actor.floorBgId;
            if (temp_a2_2 != 0x32) {
                DynaPolyActor_SetRidingMovingStateByIndex(sp38, (s32) temp_a2_2);
            } else if (!(arg1->actor.bgCheckFlags & 2) && (arg1->actor.depthInWater <= 24.0f) && (D_80862B40 != 1) && (D_80862B10 == 0) && (sp5C > 0.5f)) {
                sp3C = arg0 + 0x18000;
                if (ActorCutscene_GetCurrentIndex() != sp3C->unk_7AC) {
                    func_80841A50(arg0, arg1);
                }
            }
            sp60 = (f32) spC0->normal.x * 0.00003051851f;
            sp5C = 1.0f / sp5C;
            temp_ft5 = (f32) spC0->normal.z * 0.00003051851f;
            sp58 = temp_ft5;
            sp54 = Math_SinS(arg1->currentYaw);
            temp_fv0_7 = Math_CosS(arg1->currentYaw);
            sp4C = temp_fv0_7;
            arg1->unk_B6C = Math_FAtan2F(1.0f, (-(sp60 * sp54) - (temp_ft5 * temp_fv0_7)) * sp5C);
            arg1->unk_B6E = Math_FAtan2F(1.0f, (-(sp60 * sp4C) - (sp58 * sp54)) * sp5C);
            sp54 = Math_SinS(arg1->actor.shape.rot.y);
            D_80862B28 = Math_FAtan2F(1.0f, (-(sp60 * sp54) - (sp58 * Math_CosS(arg1->actor.shape.rot.y))) * sp5C);
            func_8083CF68(arg0, arg1);
        }
    } else {
        func_808430E0(arg1);
        D_80862B40 = 0;
    }
    if (spC0 != NULL) {
        arg1->unk_D66 = arg1->unk_B72;
        if (spAC != 0) {
            arg1->unk_B72 = 2;
            return;
        }
        if (arg1->actor.bgCheckFlags & 0x20) {
            temp_fv0_8 = arg1->actor.depthInWater;
            if (temp_fv0_8 < 50.0f) {
                if (temp_fv0_8 < 20.0f) {
                    if (D_80862B08 == 0xD) {
                        arg1->unk_B72 = 3;
                        return;
                    }
                    arg1->unk_B72 = 4;
                    return;
                }
                if (D_80862B08 == 0xD) {
                    arg1->unk_B72 = 0xD;
                    return;
                }
                arg1->unk_B72 = 5;
                return;
            }
        }
        if (arg1->stateFlags2 & 0x200) {
            arg1->unk_B72 = 1;
            return;
        }
        if (((f32) spC0->normal.y * 0.00003051851f) > 0.5f) {
            arg1->unk_B72 = SurfaceType_GetSfx(sp38, spC0, (s32) arg1->actor.floorBgId);
        }
    }
}

/*
Decompilation failure in function func_80843EC0:

Label L80844238 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_808442D8(PlayState* arg0, Player* arg1) {
    f32 sp3C;
    f32 temp_fv1;
    f32 var_fa0;
    s16 temp_v0;
    s16 var_v1;

    if (arg1->unk_B08[1] == 0.0f) {
        func_80831990(arg0, arg1, ITEM_NONE);
        return;
    }
    temp_v0 = arg1->unk_B28;
    var_fa0 = 1.0f;
    if (temp_v0 == 0) {
        var_v1 = 0;
    } else {
        arg1->unk_B28 = temp_v0 - 1;
        var_v1 = arg1->unk_B28;
    }
    if (var_v1 == 0) {
        Inventory_ChangeAmmo(8, -1);
        arg1->unk_B28 = 1;
        arg1->unk_B08[1] = 0.0f;
        var_fa0 = 0.0f;
    } else if (arg1->unk_B28 >= 0xC9) {
        var_fa0 = (f32) (0xD2 - arg1->unk_B28) / 10.0f;
    } else if (arg1->unk_B28 < 0x14) {
        var_fa0 = (f32) arg1->unk_B28 / 20.0f;
        arg1->unk_B08[1] = var_fa0;
    }
    if ((var_fa0 > 0.0f) && ((sp3C = var_fa0, func_800B0EB0(arg0, &arg1->meleeWeaponInfo[0].tip, &D_8085D364, &D_8085D370, &D_8085D37C, &D_8085D380, (s16) (s32) (var_fa0 * 200.0f), (s16) 0, (s16) 8), (arg0->roomCtx.currRoom.enablePosLights != 0)) || (gGameInfo->data[0x23D] != 0))) {
        sp3C = var_fa0;
        temp_fv1 = (Rand_ZeroOne() * 30.0f) + 225.0f;
        Lights_PointSetColorAndRadius(&arg1->lightInfo, (u32) temp_fv1 & 0xFF, (u32) (temp_fv1 * 0.7f) & 0xFF, 0U, (s16) (s32) (var_fa0 * 300.0f));
    }
}

void func_808445C4(PlayState* arg0, Actor* arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    void* sp38;
    s32 sp34;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    u8 temp_t7;
    u8 temp_t9;

    temp_t7 = arg1->unk_B65 - 1;
    temp_v1 = temp_t7 & 0xFF;
    temp_t9 = arg1->unk_B66 + temp_v1;
    temp_v0 = temp_t9 & 0xFF;
    arg1->unk_B65 = temp_t7;
    arg1->unk_B66 = temp_t9;
    if (temp_v0 >= 0x15) {
        var_a0 = temp_v1 * 2;
        arg1->unk_B66 = (u8) (temp_v0 - 0x14);
        if (var_a0 >= 0x29) {
            var_a0 = 0x28;
        }
        sp34 = var_a0;
        sp38 = ((s32) Rand_ZeroFloat(17.9f) * 0xC) + arg1 + 0xBEC;
        sp3C = (randPlusMinusPoint5Scaled(5.0f) + sp38->unk_0) - arg1->world.pos.x;
        sp40 = (randPlusMinusPoint5Scaled(5.0f) + sp38->unk_4) - arg1->world.pos.y;
        sp44 = (randPlusMinusPoint5Scaled(5.0f) + sp38->unk_8) - arg1->world.pos.z;
        EffectSsFhgFlash_SpawnShock(arg0, arg1, &sp3C, unksp36, 1);
        func_800B8F98(arg1, 0x68U);
    }
}

void func_808446F4(PlayState* arg0, Player* arg1) {
    f32 var_fv0;

    var_fv0 = 200000.0f - (arg1->unk_AA0 * 5.0f);
    if (var_fv0 < 0.0f) {
        var_fv0 = 0.0f;
    }
    arg1->unk_A9C += var_fv0;
    if (arg1->unk_A9C > 4000000.0f) {
        arg1->unk_A9C = 0.0f;
        func_8082DF48(arg0, arg1, 0x78U, 0x14U, (u8) 0xA, 0);
    }
}

void func_80844784(PlayState* arg0, Player* arg1) {
    f32 sp6C;
    s16 sp6A;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp2C;
    Vec3f* sp24;
    void* sp20;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_ft0;
    f32 temp_ft2_2;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 var_fv0;
    s16 temp_v0;
    s16 var_a3;
    s16 var_v1;
    s32 temp_ft2;
    s32 var_v0;
    s32 var_v1_2;

    if ((arg1->actor.bgCheckFlags & 1) && (D_80862B08 == 5) && (arg1->currentBoots < 5)) {
        var_a3 = arg1->currentYaw;
        var_fv0 = arg1->linearVelocity;
        temp_v0 = arg1->actor.world.rot.y - var_a3;
        var_v1 = temp_v0;
        if (temp_v0 < 0) {
            var_v1 = -temp_v0;
        }
        if ((var_v1 >= 0x6001) && (arg1->actor.speedXZ != 0.0f)) {
            var_fv0 = 0.0f;
            var_a3 += 0x8000;
        }
        sp6A = var_a3;
        sp6C = var_fv0;
        if ((Math_StepToF(arg1 + 0x70, var_fv0, 0.35f) != 0) && (var_fv0 == 0.0f)) {
            arg1->actor.world.rot.y = arg1->currentYaw;
        }
        temp_fv1 = arg1->linearVelocity;
        if (temp_fv1 != 0.0f) {
            temp_ft2 = (s32) ((fabsf(temp_fv1) * 700.0f) - (fabsf(arg1->actor.speedXZ) * 100.0f));
            if (temp_ft2 < 0) {
                var_v0 = 0;
            } else {
                var_v1_2 = temp_ft2;
                if (temp_ft2 >= 0x547) {
                    var_v1_2 = 0x546;
                }
                var_v0 = var_v1_2;
            }
            Math_ScaledStepToS(arg1 + 0x32, var_a3, (s16) var_v0);
        }
        if ((arg1->linearVelocity == 0.0f) && (arg1->actor.speedXZ != 0.0f)) {
            func_8019F780(&arg1->actor.projectedPos, func_8082E078(arg1, 0xD0U) & 0xFFFF, arg1->actor.speedXZ);
        }
    } else {
        arg1->actor.speedXZ = arg1->linearVelocity;
        arg1->actor.world.rot.y = arg1->currentYaw;
    }
    Actor_UpdateVelocityWithGravity(&arg1->actor);
    D_80862B3C = 0.0f;
    if ((gSaveContext.save.playerData.health != 0) && ((arg1->unk_B80 != 0.0f) || (arg1->windSpeed != 0.0f) || (arg0->envCtx.windSpeed >= 50.0f)) && (Player_InCsMode(arg0) == 0) && !(arg1->stateFlags1 & 0x206004) && !(arg1->stateFlags3 & 0x100) && (arg1->unk_748 != func_8084D4EC) && (arg1->actor.id == 0)) {
        arg1->actor.velocity.x += arg1->unk_B80 * Math_SinS(arg1->unk_B84);
        temp_fv1_2 = 10.0f - arg1->actor.velocity.y;
        arg1->actor.velocity.z += arg1->unk_B80 * Math_CosS(arg1->unk_B84);
        if (temp_fv1_2 > 0.0f) {
            temp_fv0 = D_8085D3E0[arg1->transformation];
            sp54 = arg1->windSpeed * temp_fv0;
            sp5C = temp_fv1_2;
            sp20 = arg0 + 0x10000;
            sp58 = temp_fv0;
            temp_ft0 = Math_SinS(arg1->windAngleX) * sp54;
            sp50 = temp_ft0;
            sp4C = Math_CosS(arg1->windAngleX) * sp54;
            sp48 = Math_SinS(arg1->windAngleY) * sp4C;
            sp44 = Math_CosS(arg1->windAngleY) * sp4C;
            if ((temp_ft0 > 0.0f) && (arg1->transformation == 3) && !(arg1->actor.bgCheckFlags & 1)) {
                if (func_80831494(arg0, arg1, func_80856918, 1) != 0) {
                    arg1->stateFlags3 |= 0x01002000;
                    func_8082E1F0(arg1, 0x1850U);
                    func_8019FD90(4, 2);
                }
                arg1->unk_AE8 = 0x270F;
                Math_Vec3f_Copy(arg1->unk_AF0, &arg1->actor.world.pos);
            }
            temp_ft5 = sp20->unk_70B8;
            if (temp_ft5 >= 50.0f) {
                temp_fa0 = (f32) sp20->unk_70B0;
                temp_fa1 = (f32) sp20->unk_70B2;
                temp_ft4 = (f32) sp20->unk_70B4;
                temp_fv0_2 = sqrtf((temp_fa0 * temp_fa0) + (temp_fa1 * temp_fa1) + (temp_ft4 * temp_ft4));
                if (temp_fv0_2 != 0.0f) {
                    temp_fv1_3 = ((temp_ft5 - 50.0f) * 0.1f * sp58) / temp_fv0_2;
                    sp48 -= temp_fa0 * temp_fv1_3;
                    sp50 -= temp_fa1 * temp_fv1_3;
                    sp44 -= temp_ft4 * temp_fv1_3;
                }
            }
            if (sp5C < sp50) {
                temp_fv0_3 = sp5C / sp50;
                sp48 *= temp_fv0_3;
                sp50 *= temp_fv0_3;
                sp44 *= temp_fv0_3;
            }
            if (arg1->actor.bgCheckFlags & 1) {
                sp24 = &arg1->actor.projectedPos;
                sp2C = Math_CosS(arg1->currentYaw);
                temp_ft2_2 = (Math_SinS(arg1->currentYaw) * sp48) + (sp44 * sp2C);
                D_80862B3C = temp_ft2_2;
                if (fabsf(temp_ft2_2) > 4.0f) {
                    func_8083FBC4((bitwise PlayState* ) sp2C, arg0, arg1);
                }
                func_8019F780(sp24, func_8082E078(arg1, 0xD0U) & 0xFFFF, fabsf(D_80862B3C));
            }
            arg1->actor.velocity.x += sp48;
            arg1->actor.velocity.z += sp44;
            arg1->actor.velocity.y += sp50;
        }
    }
    Actor_UpdatePos(&arg1->actor);
}

void func_80844D80(PlayState* arg0, Player* arg1) {
    Vec3f spAC;
    Vec3f spA0;
    Vec3f sp94;
    Vec3f sp88;
    Vec3f sp7C;
    Vec3f* temp_s7;
    s32 var_s1;

    temp_s7 = arg1 + 0xBA8;
    Math_Vec3f_Diff(arg1 + 0xB9C, temp_s7, &sp7C);
    Math_Vec3f_SumScaled(temp_s7, &sp7C, 0.3f, &spA0);
    var_s1 = 0;
    do {
        Math_Vec3f_SumScaled(temp_s7, &sp7C, Rand_ZeroOne(), &spAC);
        Math_Vec3f_AddRand(&spAC, 15.0f, &spAC);
        Math_Vec3f_DistXYZAndStoreNormDiff(&spA0, &spAC, 1.7f, &sp94);
        Math_Vec3f_ScaleAndStore(&sp94, 0.01f, &sp88);
        EffectSsKirakira_SpawnDispersed(arg0, &spAC, &sp94, &sp88, &D_8085D3F4, &D_8085D3F8, (s16) Rand_S16Offset(-0x14, -0x78), 0xF);
        var_s1 += 1;
    } while (var_s1 != 2);
}

void func_80844EF8(Player* player, PlayState* play, Input* input) {
    s32 sp58;
    f32 sp50;
    f32 sp44;
    PosRot* sp38;
    CollisionCheckContext* sp34;
    void* sp30;
    ColliderCylinder* sp2C;                         /* compiler-managed */
    ColliderCylinder* sp28;
    Actor* temp_v0_13;
    Actor* temp_v0_16;
    ColliderCylinder* temp_a1_3;
    ColliderCylinder* temp_a1_4;
    ColliderCylinder* temp_a1_5;
    CollisionCheckContext* temp_a1_6;
    CsCmdActorAction* temp_v0_14;
    LinkAnimationHeader* var_a2_2;
    LinkAnimationHeader* var_v0_2;
    PosRot* temp_a1;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv0_4;
    f32 var_fv0_5;
    f32 var_fv1;
    f32 var_fv1_2;
    s16 temp_v0_19;
    s16 temp_v0_9;
    s32 temp_v0_17;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;
    s8 temp_v0;
    s8 temp_v0_10;
    s8 temp_v0_11;
    s8 temp_v0_4;
    s8 temp_v0_8;
    s8 temp_v1_2;
    u16 temp_v0_6;
    u16 temp_v0_7;
    u16 temp_v1_7;
    u32 temp_a0;
    u32 temp_t7;
    u32 temp_v1_3;
    u32 temp_v1_4;
    u8 temp_a1_2;
    u8 temp_v0_12;
    u8 temp_v0_18;
    u8 temp_v0_20;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_5;
    u8 temp_v1;
    u8 temp_v1_5;
    u8 temp_v1_6;
    void (*temp_v0_15)(Player*, PlayState*);
    void (*temp_v0_21)(Player*, PlayState*);
    void (*temp_v0_22)(Player*, PlayState*);

    D_80862B44 = input;
    temp_v0 = player->unk_D6A;
    if (temp_v0 < 0) {
        player->unk_D6A = temp_v0 + 1;
        if (player->unk_D6A == 0) {
            player->unk_D6A = 1;
            play_sound(0x5806U);
        }
    }
    temp_a1 = &player->actor.home;
    sp38 = temp_a1;
    Math_Vec3f_Copy(&player->actor.prevPos, &temp_a1->pos);
    sp44 = fabsf(player->linearVelocity);
    temp_fv1 = (fabsf(Math_SinS(player->unk_B6C) * 800.0f) + 100.0f) * sp44;
    if (temp_fv1 < 300.0f) {
        var_fv0 = 300.0f;
    } else {
        var_fv0 = temp_fv1;
    }
    Math_StepToF(&player->unk_AC0, 0.0f, var_fv0);
    temp_v1 = player->unk_D57;
    if (temp_v1 != 0) {
        player->unk_D57 = temp_v1 - 1;
    }
    temp_v0_2 = player->unk_B5E;
    if (temp_v0_2 != 0) {
        player->unk_B5E = temp_v0_2 - 1;
    }
    temp_v0_3 = player->unk_D6B;
    if (temp_v0_3 != 0) {
        player->unk_D6B = temp_v0_3 - 1;
    }
    temp_v0_4 = player->invincibilityTimer;
    if (temp_v0_4 < 0) {
        player->invincibilityTimer = temp_v0_4 + 1;
    } else if (temp_v0_4 > 0) {
        player->invincibilityTimer = temp_v0_4 - 1;
    }
    temp_v0_5 = player->unk_B64;
    if (temp_v0_5 != 0) {
        player->unk_B64 = temp_v0_5 - 1;
    }
    temp_v0_6 = player->unk_B60;
    if (temp_v0_6 != 0) {
        player->unk_B60 = temp_v0_6 - 1;
    }
    temp_v0_7 = gSaveContext.jinxTimer;
    if (temp_v0_7 != 0) {
        gSaveContext.jinxTimer = temp_v0_7 - 1;
    }
    func_80122C20(play, &player->unk_3D0);
    if ((player->transformation == 0) && (func_8082FBE8(player) != 0)) {
        func_80844D80(play, player);
    }
    if (player->transformation == 2) {
        var_v0 = 0;
        if ((player->stateFlags1 * 0x10) < 0) {
            var_v0 = 1;
        }
        Math_StepToF(&player->unk_B08[2], (f32) var_v0, D_8085D3FC[var_v0]);
    }
    func_80832888(player, play);
    sp30 = play + 0x18000;
    if (play->roomCtx.currRoom.enablePosLights != 0) {
        Lights_PointSetColorAndRadius(&player->lightInfo, 0xFFU, 0xFFU, 0xFFU, (s16) 0x3C);
    } else {
        player->lightInfo.params.point.radius = -1;
    }
    temp_v0_8 = player->itemActionParam;
    if ((temp_v0_8 == 7) && (player->unk_B28 != 0)) {
        func_808442D8(play, player);
    } else if (temp_v0_8 == 2) {
        temp_v0_9 = player->unk_B28;
        if (temp_v0_9 < 0) {
            player->unk_B28 = temp_v0_9 + 1;
        }
    }
    if (player->unk_B65 != 0) {
        func_808445C4(play, &player->actor);
    }
    if (player->isBurning != 0) {
        func_808341F4(play, player);
    }
    if (player->stateFlags2 & 0x8000) {
        if (!(player->actor.bgCheckFlags & 1)) {
            func_8082DABC(player);
            Actor_MoveWithGravity(&player->actor);
        }
        func_80843178(play, player);
        sp28 = &player->cylinder;
        sp2C = &player->shieldCylinder;
    } else {
        temp_v0_10 = player->prevBoots;
        temp_v1_2 = player->currentBoots;
        sp2C = &player->lightInfo;
        if (temp_v0_10 != temp_v1_2) {
            if (temp_v1_2 == 5) {
                if ((player->stateFlags1 * 0x10) < 0) {
                    func_8082DC64(play, player);
                    if (player->ageProperties->unk_2C < player->actor.depthInWater) {
                        player->stateFlags2 |= 0x400;
                    }
                }
            } else if (((player->stateFlags1 * 0x10) < 0) && ((temp_v0_10 == 5) || (player->actor.bgCheckFlags & 1))) {
                func_8083B930(play, player);
                player->stateFlags2 &= ~0x400;
                if (player->unk_748 == func_808508C8) {
                    player->unk_AE8 = 0x14;
                }
            }
            player->prevBoots = player->currentBoots;
        }
        if ((player->actor.parent == NULL) && (player->stateFlags1 & 0x800000)) {
            player->actor.parent = player->rideActor;
            func_80837BD0(play, player);
            player->unk_AE8 = -1;
            func_8082DB18(play, player, &D_0400E088);
            func_8082E920(play, player, 0x9B);
        }
        temp_v0_11 = player->unk_ADC;
        if (temp_v0_11 == 0) {
            player->unk_ADD = 0;
        } else if (temp_v0_11 < 0) {
            player->unk_ADC = temp_v0_11 + 1;
        } else {
            player->unk_ADC = temp_v0_11 - 1;
        }
        if (!(player->stateFlags3 & 0x2000)) {
            Math_ScaledStepToS(&player->unk_AAA, 0, 0x190);
        }
        temp_v0_12 = player->transformation;
        if (((s32) temp_v0_12 > 0) && ((s32) temp_v0_12 < 4)) {
            func_800BBB74(&player->eyeTexId, 0x14, 0x50, 3);
        } else {
            func_800BBAC0(&player->eyeTexId, 0x14, 0x50, 6);
        }
        if (sp30->unk_840 & 0x20) {
            var_a2 = 0;
        } else {
            var_a2 = 3;
        }
        player->actor.shape.face = var_a2 + player->eyeTexId;
        if (player->currentMask == 4) {
            func_80124420(player);
        }
        if (func_800B7118(player) != 0) {
            func_808484F0(player);
        }
        if ((sp30->unk_844 == 0) && !(player->skelAnime.moveFlags & 0x80)) {
            if (!(player->stateFlags1 & 2) && (player->actor.parent == NULL)) {
                func_80844784(play, player);
            }
            func_80843178(play, player);
        } else {
            D_80862B08 = 0;
            player->unk_D5E = 0;
            if (player->stateFlags1 & 0x800000) {
                temp_v0_13 = player->rideActor;
                player->actor.floorPoly = temp_v0_13->floorPoly;
                player->actor.floorBgId = temp_v0_13->floorBgId;
            }
            D_80862B10 = 0;
            player->unk_B80 = 0.0f;
        }
        func_8083562C(play, &player->actor, player->actor.floorPoly, (s32) player->actor.floorBgId);
        temp_v1_3 = D_80862B10;
        temp_t7 = temp_v1_3 - 1;
        if (temp_v1_3 != 0) {
            D_80862B10 = temp_t7;
            if (D_80862B14 == 0) {
                var_fv1 = D_8085D404[temp_t7];
                if ((player->stateFlags1 * 0x10) >= 0) {
                    var_fv1 *= 0.25f;
                }
            } else {
                var_fv1 = D_8085D410[D_80862B10];
            }
            sp50 = var_fv1;
            Math_StepToF(&player->unk_B80, var_fv1, var_fv1 * 0.1f);
            if ((player->stateFlags1 * 0x10) < 0) {
                var_fv0_2 = 400.0f;
            } else {
                var_fv0_2 = 800.0f;
            }
            Math_ScaledStepToS(&player->unk_B84, D_80862B16, (s16) (s32) (var_fv0_2 * var_fv1));
        } else if (player->unk_B80 != 0.0f) {
            if ((player->stateFlags1 * 0x10) < 0) {
                var_fv0_3 = 0.5f;
            } else {
                var_fv0_3 = 2.0f;
            }
            Math_StepToF(&player->unk_B80, 0.0f, var_fv0_3);
        }
        if (!(player->stateFlags1 & 0x20000080) && !(player->stateFlags3 & 0x80) && (player->unk_748 != func_80854430)) {
            func_8083BB4C(play, player);
            if (Play_InCsMode(play) == 0) {
                if ((player->actor.id == 0) && ((player->stateFlags1 << 0) >= 0) && (gSaveContext.save.playerData.health == 0) && (func_808323C0(&player->actor, sp30->unk_7A8) != 0)) {
                    if (player->stateFlags3 & 0x01000000) {
                        func_808355D8(play, player, &D_0400E2D8);
                    } else {
                        temp_v1_4 = player->stateFlags1;
                        if (temp_v1_4 & 0x206004) {
                            func_8082DD2C(play, player);
                            func_80833AA0(player, play);
                        } else if ((player->actor.bgCheckFlags & 1) || ((temp_v1_4 * 0x10) < 0)) {
                            if (func_801242B4(player) != 0) {
                                var_a2_2 = &D_0400DFE8;
                            } else {
                                var_v0_2 = &D_0400D698;
                                if (player->unk_B65 != 0) {
                                    var_v0_2 = &D_0400DC28;
                                }
                                var_a2_2 = var_v0_2;
                            }
                            func_80831F34(play, player, var_a2_2);
                        }
                    }
                } else {
                    if ((player->actor.parent == NULL) && ((func_8082DA90(play) != 0) || (player->unk_D6B != 0) || (func_80834600(player, play) == 0))) {
                        func_8083827C(player, play);
                    } else {
                        player->unk_B68 = (s16) (s32) player->actor.world.pos.y;
                    }
                    func_808446F4(play, player);
                }
            }
        } else if (!(player->actor.bgCheckFlags & 1) && (player->unk_748 == func_8084D820) && (player->unk_397 == 4)) {
            player->actor.world.pos.y = player->actor.prevPos.y;
        }
        temp_a1_2 = play->csCtx.state;
        if (temp_a1_2 != 0) {
            temp_v1_5 = player->csMode;
            if ((temp_v1_5 != 5) && ((player->stateFlags1 << 8) >= 0)) {
                temp_a0 = player->stateFlags2;
                if (!(temp_a0 & 0x80) && (player->actor.id == 0)) {
                    temp_v0_14 = play->csCtx.playerAction;
                    if ((temp_v0_14 != NULL) && (*(&D_8085D384 + temp_v0_14->action) != 0)) {
                        func_800B7298(play, NULL, 5U);
                        func_8082DABC(player);
                    } else if ((temp_v1_5 == 0) && !(temp_a0 & 0x08000400) && (temp_a1_2 != 3)) {
                        func_800B7298(play, NULL, 0x14U);
                        func_8082DABC(player);
                    }
                }
            }
        }
        temp_v1_6 = player->csMode;
        if (temp_v1_6 != 0) {
            temp_v0_15 = player->unk_748;
            if ((temp_v1_6 != 6) || !(player->stateFlags1 & 0x04206004)) {
                if (temp_v0_15 != func_8085B08C) {
                    player->unk_AA5 = 4;
                    if (temp_v1_6 == 5) {
                        func_808387A0(play, player);
                        func_8082DAD4(player);
                    }
                }
            } else if (temp_v0_15 != func_8085B08C) {
                func_8085AACC(play, player, 0, play);
            }
        } else {
            player->unk_395 = 0;
        }
        func_8083BF54(play, &player->actor);
        Lights_PointSetPosition(sp2C, (s16) (s32) player->actor.world.pos.x, (s16) (s32) (player->actor.world.pos.y + 40.0f), (s16) (s32) player->actor.world.pos.z);
        temp_v0_16 = player->unk_730;
        if (((temp_v0_16 == NULL) || (player->targetActor == temp_v0_16) || (temp_v0_16->hintId == 0xFF)) && (player->tatlTextId == 0)) {
            player->stateFlags2 &= 0xFFDFFFFD;
        }
        player->stateFlags1 &= 0xFFBFEFEF;
        player->stateFlags2 &= 0xFBBEAC92;
        player->stateFlags3 &= 0xE1EFE6AF;
        func_808425B4(player);
        func_8082EB38(play, player);
        if ((player->stateFlags1 * 0x10) < 0) {
            D_8085C3E4 = 0.5f;
        } else {
            D_8085C3E4 = 1.0f;
        }
        D_8085C3E8 = 1.0f / D_8085C3E4;
        D_80862B4C = 0;
        D_80862B48 = 0;
        temp_v0_17 = Play_InCsMode(play);
        var_v1 = temp_v0_17;
        D_80862B2C = (s32) player->currentMask;
        if (!(player->stateFlags3 & 4)) {
            sp58 = temp_v0_17;
            player->unk_748(player, play);
            var_v1 = sp58;
        }
        if (var_v1 == 0) {
            func_808426F0(play, player);
        }
        func_80843EC0(play, player);
        temp_v0_18 = player->skelAnime.moveFlags;
        if (temp_v0_18 & 8) {
            if (temp_v0_18 & 4) {
                var_fv0_4 = 1.0f;
            } else {
                var_fv0_4 = player->ageProperties->unk_08;
            }
            AnimationContext_SetMoveActor(play, &player->actor, &player->skelAnime, var_fv0_4);
        }
        func_80832578(player, play);
        if (player->actor.flags & 0x100) {
            player->targetActorDistance = 0.0f;
        } else {
            player->targetActor = NULL;
            player->exchangeItemId = 0;
            player->targetActorDistance = 3.4028235e38f;
        }
        if (((player->actor.flags * 4) >= 0) && (player->unk_AA5 != 5)) {
            player->unk_A90 = NULL;
            player->unk_A94 = 3.4028235e38f;
        }
        if (!(player->stateFlags1 & 0x800)) {
            player->interactRangeActor = NULL;
            player->getItemDirection = 0x6000;
        }
        if (player->actor.parent == NULL) {
            player->rideActor = NULL;
        }
        player->tatlTextId = 0;
        player->unk_B2B = -1;
        player->unk_AA0 = 3.4028235e38f;
        player->doorType = 0;
        player->unk_B75 = 0;
        player->unk_A78 = NULL;
        Math_StepToF(&player->windSpeed, 0.0f, 0.5f);
        if ((player->unk_B62 != 0) || ((gSaveContext.unk_3F28 == 0) && (gSaveContext.save.playerData.magic != 0) && (player->stateFlags1 & 0x10))) {
            func_8082F1AC(play, player);
        }
        temp_fv0 = player->actor.world.pos.y - player->actor.prevPos.y;
        var_fv1_2 = ((player->bodyPartsPos[3].y + player->bodyPartsPos[6].y) * 0.5f) + temp_fv0;
        var_fv0_5 = temp_fv0 + (player->bodyPartsPos[7].y + 10.0f);
        if (player->cylinder.info.toucher.dmgFlags == 0x80000) {
            player->cylinder.dim.height = 0x50;
            var_fv1_2 = ((var_fv0_5 + var_fv1_2) * 0.5f) - 40.0f;
        } else {
            player->cylinder.dim.height = (s16) (s32) (var_fv0_5 - var_fv1_2);
            temp_v0_19 = player->cylinder.dim.height;
            if (temp_v0_19 < 0) {
                temp_fa0 = var_fv0_5;
                var_fv0_5 = var_fv1_2;
                var_fv1_2 = temp_fa0;
                player->cylinder.dim.height = -temp_v0_19;
            }
        }
        temp_fa0_2 = player->actor.world.pos.y;
        player->cylinder.dim.yShift = (s16) (s32) (var_fv1_2 - temp_fa0_2);
        if (player->unk_B62 != 0) {
            player->shieldCylinder.base.acFlags = 0;
            player->shieldCylinder.info.toucher.dmgFlags = 0x80000;
            player->shieldCylinder.info.toucherFlags = 1;
            player->shieldCylinder.info.bumperFlags = 0;
            player->shieldCylinder.dim.height = 0x50;
            player->shieldCylinder.dim.radius = 0x32;
            temp_a1_3 = &player->shieldCylinder;
            player->shieldCylinder.dim.yShift = (s16) (s32) ((((var_fv0_5 + var_fv1_2) * 0.5f) - 40.0f) - temp_fa0_2);
            sp2C = temp_a1_3;
            Collider_UpdateCylinder(&player->actor, temp_a1_3);
            CollisionCheck_SetAT(play, &play->colChkCtx, &sp2C->base);
        } else if (player->stateFlags1 & 0x400000) {
            temp_v0_20 = player->transformation;
            if ((temp_v0_20 == 1) || (temp_v0_20 == 3)) {
                player->shieldCylinder.base.acFlags = 0x15;
                player->shieldCylinder.info.toucher.dmgFlags = 0x100000;
                player->shieldCylinder.info.toucherFlags = 0;
                player->shieldCylinder.info.bumperFlags = 1;
                if (temp_v0_20 == 1) {
                    player->shieldCylinder.dim.height = 0x23;
                } else {
                    player->shieldCylinder.dim.height = 0x1E;
                }
                temp_a1_4 = &player->shieldCylinder;
                if (player->transformation == 1) {
                    player->shieldCylinder.dim.radius = 0x1E;
                } else {
                    player->shieldCylinder.dim.radius = 0x14;
                }
                player->shieldCylinder.dim.yShift = 0;
                sp2C = temp_a1_4;
                Collider_UpdateCylinder(&player->actor, temp_a1_4);
                CollisionCheck_SetAC(play, &play->colChkCtx, &sp2C->base);
                player->cylinder.dim.yShift = 0;
                player->cylinder.dim.height = player->shieldCylinder.dim.height;
            } else {
                player->cylinder.dim.height = (s16) (s32) ((f32) player->cylinder.dim.height * 0.8f);
            }
        }
        temp_a1_5 = &player->cylinder;
        sp2C = &player->shieldCylinder;
        sp28 = temp_a1_5;
        Collider_UpdateCylinder(&player->actor, temp_a1_5);
        if (!(player->stateFlags2 & 0x4000)) {
            if (!(player->stateFlags1 & 0x806084) && ((player->stateFlags3 * 8) >= 0)) {
                temp_v0_21 = player->unk_748;
                if ((temp_v0_21 != func_808561B0) && (temp_v0_21 != func_80853D68) && (player->actor.draw != NULL)) {
                    if ((player->actor.id != 0) && (player->csMode == 0x6E)) {
                        player->cylinder.dim.radius = 8;
                    }
                    CollisionCheck_SetOC(play, &play->colChkCtx, &sp28->base);
                }
            }
            if (!(player->stateFlags1 & 0x04000080) && (player->invincibilityTimer <= 0)) {
                temp_v0_22 = player->unk_748;
                if ((temp_v0_22 != func_808561B0) && ((temp_v0_22 != func_80857BE8) || (player->unk_AE7 != 1))) {
                    temp_a1_6 = &play->colChkCtx;
                    if (player->cylinder.base.atFlags != 0) {
                        sp34 = temp_a1_6;
                        CollisionCheck_SetAT(play, temp_a1_6, &sp28->base);
                    }
                    CollisionCheck_SetAC(play, temp_a1_6, &sp28->base);
                }
            }
        }
        AnimationContext_SetNextQueue(play);
    }
    func_801229FC(player);
    Math_Vec3f_Copy(&sp38->pos, &player->actor.world.pos);
    if ((player->stateFlags1 & 0x30000080) || (player != play->actorCtx.actorLists[2].first)) {
        player->actor.colChkInfo.mass = 0xFF;
    } else {
        player->actor.colChkInfo.mass = D_8085D174[player->transformation];
    }
    player->stateFlags3 &= ~0x404;
    Collider_ResetCylinderAC(play, &sp28->base);
    Collider_ResetCylinderAC(play, &sp2C->base);
    Collider_ResetCylinderAT(play, &sp2C->base);
    Collider_ResetQuadAT(play, &player->meleeWeaponQuads[0].base);
    Collider_ResetQuadAT(play, &player->meleeWeaponQuads[1].base);
    Collider_ResetQuadAC(play, &player->shieldQuad.base);
    temp_v1_7 = player->actor.bgCheckFlags;
    if (!(temp_v1_7 & 1) || (temp_v1_7 & 2) || (player->actor.floorBgId != 0x32)) {
        player->unk_AC0 = 0.0f;
    }
    player->actor.shape.yOffset = player->unk_ABC + player->unk_AC0;
}

void Player_Update(Actor* thisx, PlayState* play) {
    u16 sp50;
    u16 sp44;
    Input* sp38;
    Actor* temp_v0;
    Actor* temp_v0_2;
    Actor* temp_v0_3;
    Player* this = (Player* ) thisx;

    this->stateFlags3 &= ~0x10;
    if (gSaveContext.dogParams < 0) {
        if (Object_GetIndex(&play->objectCtx, 0x132) < 0) {
            gSaveContext.dogParams = 0;
        } else {
            gSaveContext.dogParams = gSaveContext.dogParams & 0x7FFF;
            func_80835BC8(this, &this->actor.world.pos, &D_8085D41C, &D_80862AF0);
            temp_v0 = Actor_Spawn(&play->actorCtx, play, 0xE2, D_80862AF0.x, D_80862AF4, D_80862AF8, (s16) 0, (s16) (s32) this->actor.shape.rot.y, (s16) 0, gSaveContext.dogParams | 0x8000);
            if (temp_v0 != NULL) {
                temp_v0->room = -1;
            }
        }
    }
    temp_v0_2 = this->interactRangeActor;
    if ((temp_v0_2 != NULL) && (temp_v0_2->update == NULL)) {
        this->interactRangeActor = NULL;
    }
    temp_v0_3 = this->heldActor;
    if ((temp_v0_3 != NULL) && (temp_v0_3->update == NULL)) {
        func_8082DCA0(play, this);
    }
    if ((play->actorCtx.unk268 != 0) && (this == play->actorCtx.actorLists[2].first)) {
        sp44.unk_0 = (s32) (unaligned s32) play->unk_1F0C;
        sp44.unk_4 = (s32) (unaligned s32) play->actorCtx.unk_26C.cur.errno;
        sp44.unk_8 = (s32) (unaligned s32) play->actorCtx.unk_26C.prev.stick_x;
        sp44.unk_C = (s32) (unaligned s32) play->unk_1F18;
        sp44.unk_10 = (s32) (unaligned s32) play->actorCtx.unk_26C.press.errno;
        sp44.unk_14 = (s32) (unaligned s32) play->actorCtx.unk_26C.rel.stick_x;
    } else if ((this->csMode == 5) || (this->stateFlags1 & 0x20000020) || (this != play->actorCtx.actorLists[2].first) || (func_8082DA90(play) != 0) || (gSaveContext.save.playerData.health == 0)) {
        bzero(&sp44, 0x18);
        this->unk_B68 = (s16) (s32) this->actor.world.pos.y;
    } else {
        sp44.unk_0 = (s32) (unaligned s32) play->unk_14;
        sp44.unk_4 = (s32) (unaligned s32) play->state.input[0].cur.errno;
        sp44.unk_8 = (s32) (unaligned s32) play->state.input[0].prev.stick_x;
        sp44.unk_C = (s32) (unaligned s32) play->unk_20;
        sp44.unk_10 = (s32) (unaligned s32) play->state.input[0].press.errno;
        sp44.unk_14 = (s32) (unaligned s32) play->state.input[0].rel.stick_x;
        if (this->unk_B5E != 0) {
            sp44 &= 0xFFFF3FF7;
            sp50 &= 0xFFFF3FF7;
        }
    }
    sp38 = &play->actorCtx.unk_26C;
    func_80844EF8(this, play, (Input* ) &sp44);
    play->actorCtx.unk268 = 0;
    bzero(sp38, 0x18);
    gGameInfo->data[0x214] = (s16) (s32) this->actor.world.pos.x;
    gGameInfo->data[0x215] = (s16) (s32) this->actor.world.pos.y;
    gGameInfo->data[0x216] = (s16) (s32) this->actor.world.pos.z;
    gGameInfo->data[0x217] = this->actor.world.rot.y;
}

void Player_DrawGameplay(PlayState* play, Player* this, s32 lod, Gfx* cullDList, s32 (*overrideLimbDraw)(PlayState*, s32, Gfx**, Vec3f*, Vec3s*, Actor*)) {
    Gfx* temp_v1;
    Gfx* temp_v1_2;
    GraphicsContext* temp_t0;

    temp_t0 = play->state.gfxCtx;
    temp_v1 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w1 = (u32) cullDList;
    temp_v1->words.w0 = 0xDB060030;
    temp_v1_2 = temp_t0->polyXlu.p;
    temp_t0->polyXlu.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = (u32) cullDList;
    temp_v1_2->words.w0 = 0xDB060030;
    Player_DrawImpl(play, this->skelAnime.skeleton, this->skelAnime.jointTable, (s32) this->skelAnime.dListCount, lod, (s32) this->transformation, 0, (s32) this->actor.shape.face, overrideLimbDraw, func_80128BD0, &this->actor);
}

void func_80846460(Player* this) {
    PosRot* temp_s4;
    Vec3f* var_s0;
    f32 temp_fv0;
    s32 var_s1;

    var_s0 = this->bodyPartsPos;
    var_s1 = 0;
    temp_s4 = &this->actor.world;
    this->actor.focus.pos.y = this->actor.world.pos.y + 24.0f;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    do {
        Math_Vec3f_Copy(var_s0, &temp_s4->pos);
        var_s1 += 1;
        var_s0 += 0xC;
    } while (var_s1 != 0x12);
    temp_fv0 = this->actor.world.pos.y;
    this->bodyPartsPos[7].y = temp_fv0 + 24.0f;
    this->bodyPartsPos[0].y = temp_fv0 + 60.0f;
    Math_Vec3f_Copy(this->actor.shape.feetPos, &temp_s4->pos);
    Math_Vec3f_Copy(&this->actor.shape.feetPos[1], &temp_s4->pos);
}

void Player_Draw(Actor* thisx, PlayState* play) {
    s32 spEC;
    struct_80124618** spE8;
    struct_80124618** spE4;
    f32 spE0;
    Gfx** spDC;
    s32 spD8;
    Gfx* spCC;
    GraphicsContext* spC4;
    Color_RGB8 spBC;
    f32 spB8;
    f32 spB4;
    u8 sp9B;
    s32 (*sp84)(PlayState*, s32, Gfx**, Vec3f*, Vec3s*, Actor*);
    s32 sp80;
    Vec3f sp74;
    s16 sp70;
    f32 sp64;
    Vec3f* sp48;
    struct_80122D44_arg1* sp44;
    Gfx* temp_v0_11;
    Gfx* temp_v0_12;
    Gfx* temp_v0_13;
    Gfx* temp_v0_14;
    Gfx* temp_v0_16;
    Gfx* temp_v0_17;
    Gfx* temp_v0_18;
    Gfx* temp_v0_19;
    Gfx* temp_v0_20;
    Gfx* temp_v0_21;
    Gfx* temp_v0_2;
    Gfx* temp_v0_3;
    Gfx* temp_v0_4;
    Gfx* temp_v0_5;
    Gfx* temp_v0_6;
    Gfx* temp_v0_8;
    Gfx* temp_v0_9;
    GraphicsContext* temp_s0;
    GraphicsContext* var_a0;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_ft2;
    f32 temp_fv0;
    f32 var_fa1;
    f32 var_fv1;
    s16 temp_s0_2;
    s16 temp_v0_10;
    s16 temp_v0_7;
    s32 temp_v0;
    s8 temp_v1;
    struct_80122D44_arg1* temp_a1;
    u32 temp_v0_15;
    u32 temp_v1_2;
    Player* this = (Player* ) thisx;

    spEC = 0;
    Math_Vec3f_Copy(&this->unk_D6C, this->bodyPartsPos);
    if (this->stateFlags3 & 0x40100) {
        spE8 = D_8085D550;
        temp_s0 = play->state.gfxCtx;
        Matrix_Push();
        func_8012C268(play);
        spEC = 1;
        if (this->stateFlags3 & 0x40000) {
            Matrix_SetTranslateRotateYXZ(this->unk_AF0[0].x, this->unk_AF0[0].y, this->unk_AF0[0].z, &gZeroVec3s);
            Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, MTXMODE_APPLY);
            spE8 = D_8085D568;
            spE0 = 0.0f;
        } else {
            Matrix_Translate(0.0f, -this->unk_ABC, 0.0f, MTXMODE_APPLY);
            temp_ft2 = (f32) (this->unk_AE8 - 6);
            spE0 = temp_ft2;
            if (temp_ft2 < 0.0f) {
                spE8 = D_8085D55C;
                spE0 = (f32) this->unk_B86;
            }
        }
        spDC = D_8085D574;
        sp48 = &this->unk_AF0[1];
        spD8 = 0;
        spE4 = spE8;
        do {
            Matrix_Push();
            func_80124618(*spE4, spE0, sp48);
            Matrix_Scale(this->unk_AF0[1].x, this->unk_AF0[1].y, this->unk_AF0[1].z, MTXMODE_APPLY);
            temp_v0_2 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDA380003;
            spCC = temp_v0_2;
            spCC->words.w1 = Matrix_NewMtx(play->state.gfxCtx);
            temp_v0_3 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDE000000;
            temp_v0_3->words.w1 = (u32) *spDC;
            Matrix_Pop();
            temp_v0 = spD8 + 1;
            spD8 = temp_v0;
            spDC += 4;
            spE4 += 4;
        } while (temp_v0 != 3);
        Matrix_Pop();
    }
    if (((this->stateFlags2 * 4) >= 0) && (this->unk_ABC > -3900.0f)) {
        var_a0 = play->state.gfxCtx;
        spC4 = var_a0;
        if (spEC == 0) {
            func_8012C268(play);
            var_a0 = play->state.gfxCtx;
        }
        func_8012C2DC(var_a0);
        func_800B8050(&this->actor, play, 0);
        func_800B8118(&this->actor, play, 0);
        func_80122868(play, this);
        if (this->stateFlags3 & 0x1000) {
            temp_fv0 = this->unk_ABC;
            spB8 = temp_fv0 + 1.0f;
            spB4 = 1.0f - (temp_fv0 * 0.5f);
            func_80846460(this);
            Matrix_Translate(this->actor.world.pos.x, this->actor.world.pos.y + (1200.0f * this->actor.scale.y * spB8), this->actor.world.pos.z, MTXMODE_NEW);
            if (this->unk_B86 != 0) {
                Matrix_RotateYS(this->unk_B28, MTXMODE_APPLY);
                Matrix_RotateXS(this->unk_B86, MTXMODE_APPLY);
                Matrix_RotateYS((s16) (this->unk_B28 * -1), MTXMODE_APPLY);
            }
            Matrix_RotateYS(this->actor.shape.rot.y, MTXMODE_APPLY);
            Matrix_RotateZS(this->actor.shape.rot.z, MTXMODE_APPLY);
            if (spB8 < spB4) {
                var_fv1 = spB4;
            } else {
                var_fv1 = spB8;
            }
            Matrix_Scale(this->actor.scale.x * spB4 * 1.15f, this->actor.scale.y * spB8 * 1.15f, var_fv1 * this->actor.scale.z * 1.15f, MTXMODE_APPLY);
            Matrix_RotateXS(this->actor.shape.rot.x, MTXMODE_APPLY);
            Scene_SetRenderModeXlu(play, 0, 1U);
            Lib_LerpRGB(&D_8085D580, &D_8085D584, this->unk_B08[2], &spBC);
            temp_v0_4 = spC4->polyOpa.p;
            spC4->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFB000000;
            temp_v0_4->words.w1 = ((u8) spBC << 0x18) | (spBC.g << 0x10) | (spBC.b << 8) | 0xFF;
            temp_v0_5 = spC4->polyOpa.p;
            spC4->polyOpa.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(play->state.gfxCtx);
            temp_v0_6 = spC4->polyOpa.p;
            spC4->polyOpa.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDE000000;
            temp_v0_6->words.w1 = (u32) D_0600BDD8;
            temp_v0_7 = this->unk_B88;
            if (temp_v0_7 != 0) {
                if (temp_v0_7 < 3) {
                    func_80124618(D_8085D540, (f32) temp_v0_7, this->unk_AF0);
                    Matrix_Scale(this->unk_AF0[0].x, this->unk_AF0[0].y, this->unk_AF0[0].z, MTXMODE_APPLY);
                    temp_v0_8 = spC4->polyOpa.p;
                    spC4->polyOpa.p = temp_v0_8 + 8;
                    temp_v0_8->words.w0 = 0xDA380003;
                    temp_v0_8->words.w1 = Matrix_NewMtx(play->state.gfxCtx);
                }
                temp_v0_9 = spC4->polyOpa.p;
                spC4->polyOpa.p = temp_v0_9 + 8;
                temp_v0_9->words.w0 = 0xDE000000;
                temp_v0_9->words.w1 = (u32) D_0600C540;
            }
            temp_a1 = &this->unk_3D0;
            sp44 = temp_a1;
            func_80122BA4(play, temp_a1, 1, 0xFF);
            func_80122BA4(play, temp_a1, 2, 0xFF);
            temp_v0_10 = this->unk_B88;
            if (temp_v0_10 < 3) {
                temp_v1 = this->unk_AE7;
                if (temp_v1 >= 5) {
                    temp_fa1 = (f32) (temp_v1 - 4) * 0.02f;
                    if (temp_v0_10 != 0) {
                        sp9B = (temp_v0_10 * -0x55) + 0xFF;
                    } else {
                        sp9B = (u8) (u32) (200.0f * temp_fa1);
                    }
                    if (temp_v0_10 != 0) {
                        var_fa1 = 0.65f;
                    } else {
                        var_fa1 = temp_fa1 * 1.0f;
                    }
                    Matrix_Scale(1.0f, var_fa1, var_fa1, MTXMODE_APPLY);
                    temp_v0_11 = spC4->polyXlu.p;
                    spC4->polyXlu.p = temp_v0_11 + 8;
                    temp_v0_11->words.w0 = 0xDA380003;
                    temp_v0_11->words.w1 = Matrix_NewMtx(play->state.gfxCtx);
                    AnimatedMat_DrawXlu(play, Lib_SegmentedToVirtual(&D_06013138));
                    temp_v0_12 = spC4->polyXlu.p;
                    spC4->polyXlu.p = temp_v0_12 + 8;
                    temp_v0_12->words.w0 = 0xFB000000;
                    temp_v0_12->words.w1 = sp9B | 0x9B000000;
                    temp_v0_13 = spC4->polyXlu.p;
                    spC4->polyXlu.p = temp_v0_13 + 8;
                    temp_v0_13->words.w1 = (u32) D_060127B0;
                    temp_v0_13->words.w0 = 0xDE000000;
                    AnimatedMat_DrawXlu(play, Lib_SegmentedToVirtual(&D_06014684));
                    temp_v0_14 = spC4->polyXlu.p;
                    spC4->polyXlu.p = temp_v0_14 + 8;
                    temp_v0_14->words.w1 = (u32) D_060134D0;
                    temp_v0_14->words.w0 = 0xDE000000;
                }
            }
        } else if ((this->transformation == 1) && (this->stateFlags1 & 0x400000)) {
            func_80846460(this);
            SkelAnime_DrawFlexOpa(play, this->unk_2C8.skeleton, this->unk_2C8.jointTable, (s32) this->unk_2C8.dListCount, NULL, NULL, NULL);
            sp44 = &this->unk_3D0;
        } else {
            sp84 = func_80125D4C;
            if ((this->csMode != 0) || (this->actor.projectedPos.z < 320.0f)) {
                sp80 = 0;
            } else {
                sp80 = 1;
            }
            if (this->stateFlags1 & 0x100000) {
                SkinMatrix_Vec3fMtxFMultXYZ(&play->viewProjectionMtxF, &this->actor.focus.pos, &sp74);
                if (sp74.z < -4.0f) {
                    sp84 = func_801262C8;
                }
            }
            if (this->stateFlags2 & 0x04000000) {
                temp_v0_15 = play->gameplayFrames;
                temp_s0_2 = temp_v0_15 * 0x258;
                sp70 = temp_v0_15 * 0x3E8;
                Matrix_Push();
                this->actor.scale.y = -this->actor.scale.y;
                Matrix_SetTranslateRotateYXZ(this->actor.world.pos.x, this->actor.world.pos.y + (2.0f * this->actor.depthInWater) + (this->unk_ABC * this->actor.scale.y), this->actor.world.pos.z, &this->actor.shape.rot);
                Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, MTXMODE_APPLY);
                Matrix_RotateXS(temp_s0_2, MTXMODE_APPLY);
                Matrix_RotateYS(sp70, MTXMODE_APPLY);
                Matrix_Scale(1.1f, 0.95f, 1.05f, MTXMODE_APPLY);
                Matrix_RotateYS((s16) (sp70 * -1), MTXMODE_APPLY);
                Matrix_RotateXS((s16) (temp_s0_2 * -1), MTXMODE_APPLY);
                Player_DrawGameplay(play, this, sp80, gCullFrontDList, sp84);
                this->actor.scale.y = -this->actor.scale.y;
                Matrix_Pop();
            }
            temp_v0_16 = spC4->polyOpa.p;
            spC4->polyOpa.p = temp_v0_16 + 8;
            temp_v0_16->words.w1 = 0;
            temp_v0_16->words.w0 = 0xD9FFF9FF;
            temp_v0_17 = spC4->polyXlu.p;
            spC4->polyXlu.p = temp_v0_17 + 8;
            temp_v0_17->words.w1 = 0;
            temp_v0_17->words.w0 = 0xD9FFF9FF;
            if ((this->transformation == 2) && (this->unk_B62 != 0) && !(this->stateFlags3 & 0x8000)) {
                Matrix_Push();
                Matrix_RotateXS(-0x4000, MTXMODE_APPLY);
                Matrix_Translate(0.0f, 0.0f, -1800.0f, MTXMODE_APPLY);
                Player_DrawZoraShield(play, this);
                Matrix_Pop();
            }
            Player_DrawGameplay(play, this, sp80, gCullBackDList, sp84);
            sp44 = &this->unk_3D0;
        }
        func_801229A0(play, this);
        if (this->stateFlags2 & 0x4000) {
            temp_fa0 = this->unk_B48;
            temp_v0_18 = spC4->polyXlu.p;
            spC4->polyXlu.p = temp_v0_18 + 8;
            temp_v0_18->words.w0 = 0xDB060020;
            temp_v1_2 = play->gameplayFrames;
            sp64 = temp_fa0;
            temp_v0_18->words.w1 = Gfx_TwoTexScroll(play->state.gfxCtx, 0, 0U, -(s32) temp_v1_2 & 0x7F, 0x20, 0x20, 1, 0U, ((s32) temp_v1_2 * -2) & 0x7F, 0x20, 0x20);
            Matrix_Scale(temp_fa0, temp_fa0, temp_fa0, MTXMODE_APPLY);
            temp_v0_19 = spC4->polyXlu.p;
            spC4->polyXlu.p = temp_v0_19 + 8;
            temp_v0_19->words.w0 = 0xDA380003;
            temp_v0_19->words.w1 = Matrix_NewMtx(play->state.gfxCtx);
            temp_v0_20 = spC4->polyXlu.p;
            spC4->polyXlu.p = temp_v0_20 + 8;
            temp_v0_20->words.w1 = 0x3264FF;
            temp_v0_20->words.w0 = 0xFB000000;
            temp_v0_21 = spC4->polyXlu.p;
            spC4->polyXlu.p = temp_v0_21 + 8;
            temp_v0_21->words.w1 = (u32) D_04050D10;
            temp_v0_21->words.w0 = 0xDE000000;
        }
        if (this->unk_B2A > 0) {
            Player_DrawGetItem(play, this);
        }
        func_80122D44(play, sp44);
    }
    play->actorCtx.unk5 &= 0xFFF7;
}

void Player_Destroy(Actor* thisx, PlayState* play) {
    Player* this = (Player* ) thisx;
    Effect_Destroy(play, this->meleeWeaponEffectIndex[0]);
    Effect_Destroy(play, this->meleeWeaponEffectIndex[1]);
    Effect_Destroy(play, this->meleeWeaponEffectIndex[2]);
    LightContext_RemoveLight(play, &play->lightCtx, this->lightNode);
    Collider_DestroyCylinder(play, &this->cylinder);
    Collider_DestroyCylinder(play, &this->shieldCylinder);
    Collider_DestroyQuad(play, this->meleeWeaponQuads);
    Collider_DestroyQuad(play, &this->meleeWeaponQuads[1]);
    Collider_DestroyQuad(play, &this->shieldQuad);
    ZeldaArena_Free(this->giObjectSegment);
    ZeldaArena_Free(this->maskObjectSegment);
    func_80115D5C(&play->state);
    func_80831454(this);
}

void func_80847190(PlayState* arg0, Player* arg1, s32 arg2) {
    s32 sp2C;
    s16 temp_s0;
    s16 temp_s0_2;
    s16 temp_s0_3;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 var_a1;
    s16 var_a1_3;
    s16 var_a1_5;
    s16 var_s0;
    s16 var_v0;
    s32 var_a1_2;
    s32 var_a1_4;
    s32 var_a1_6;
    s8 temp_v0;
    s8 temp_v0_4;

    if ((func_800B7128(arg1) == 0) && (func_8082EF20(arg1) == 0) && (arg2 == 0)) {
        Math_SmoothStepToS(&arg1->actor.focus.rot.x, (s16) (D_80862B44->rel.stick_y * 0xF0), 0xE, 0xFA0, (s16) 0x1E);
        temp_s0 = D_80862B44->rel.stick_x * -0x10;
        if (temp_s0 < -0xBB8) {
            var_s0 = -0xBB8;
        } else {
            var_a1 = temp_s0;
            if (temp_s0 >= 0xBB9) {
                var_a1 = 0xBB8;
            }
            var_s0 = var_a1;
        }
        arg1->actor.focus.rot.y += var_s0;
    } else {
        var_a1_2 = -1;
        temp_v0 = D_80862B44->rel.stick_y;
        if (temp_v0 >= 0) {
            var_a1_2 = 1;
        }
        sp2C = var_a1_2;
        arg1->actor.focus.rot.x += (s32) ((1.0f - Math_CosS((s16) (temp_v0 * 0xC8))) * 1500.0f) * var_a1_2;
        if (arg1->stateFlags1 & 0x800000) {
            temp_v0_2 = arg1->actor.focus.rot.x;
            if (temp_v0_2 < -0x1F40) {
                arg1->actor.focus.rot.x = -0x1F40;
            } else {
                var_a1_3 = temp_v0_2;
                if (temp_v0_2 >= 0xFA1) {
                    var_a1_3 = 0xFA0;
                }
                goto block_21;
            }
        } else {
            temp_v0_3 = arg1->actor.focus.rot.x;
            if (temp_v0_3 < -0x36B0) {
                arg1->actor.focus.rot.x = -0x36B0;
            } else {
                var_a1_3 = temp_v0_3;
                if (temp_v0_3 >= 0x36B1) {
                    var_a1_3 = 0x36B0;
                }
block_21:
                arg1->actor.focus.rot.x = var_a1_3;
            }
        }
        temp_v0_4 = D_80862B44->rel.stick_x;
        var_a1_4 = -1;
        temp_s0_2 = arg1->actor.focus.rot.y - arg1->actor.shape.rot.y;
        if (temp_v0_4 >= 0) {
            var_a1_4 = 1;
        }
        sp2C = var_a1_4;
        temp_s0_3 = temp_s0_2 + ((s32) ((1.0f - Math_CosS((s16) (temp_v0_4 * 0xC8))) * -1500.0f) * var_a1_4);
        if (temp_s0_3 < -0x4AAA) {
            var_a1_5 = -0x4AAA;
        } else {
            var_v0 = temp_s0_3;
            if (temp_s0_3 >= 0x4AAB) {
                var_v0 = 0x4AAA;
            }
            var_a1_5 = var_v0;
        }
        arg1->actor.focus.rot.y = var_a1_5 + arg1->actor.shape.rot.y;
    }
    arg1->unk_AA6 |= 2;
    var_a1_6 = arg0->unk_1887C != 0;
    if (var_a1_6 == 0) {
        var_a1_6 = func_800B7128(arg1) != 0;
        if (var_a1_6 == 0) {
            var_a1_6 = func_8082EF20(arg1) != 0;
        }
    }
    func_80832754(arg1, var_a1_6);
}

void func_8084748C(f32* arg0, f32* arg1, f32 arg2, s16 arg3) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_fv1;

    var_fa1 = arg2;
    var_fa0 = *arg1;
    temp_fv1 = arg0->unk_258 - 10.0f;
    temp_fv0 = ((f32) gGameInfo->data[0x2D] / 100.0f) * 0.8f;
    if (temp_fv0 < var_fa0) {
        *arg1 = temp_fv0;
        var_fa0 = *arg1;
    }
    if ((temp_fv1 > 0.0f) && (temp_fv1 < 16.0f)) {
        var_fv1 = fabsf(temp_fv1) * 0.5f;
    } else {
        var_fa1 = 0.0f;
        var_fv1 = 0.0f;
    }
    Math_AsymStepToF(arg1, var_fa1 * 0.8f, var_fv1, (fabsf(var_fa0) * 0.02f) + 0.05f);
    Math_ScaledStepToS(arg0 + 0xAD4, arg3, 0x640);
}

void func_808475B4(Player* arg0) {
    f32 sp4;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_ft0;
    f32 var_ft4;
    f32 var_ft5;
    f32 var_ft5_2;
    f32 var_ft5_3;
    f32 var_ft5_4;
    f32 var_ft5_5;
    f32 var_fv0;

    temp_fv1 = arg0->actor.velocity.y;
    temp_fa1 = arg0->actor.depthInWater;
    var_ft5 = arg0->ageProperties->unk_28;
    var_ft4 = -5.0f;
    temp_fv0 = temp_fa1 - var_ft5;
    if (temp_fv1 < 0.0f) {
        var_ft5 += 1.0f;
    }
    if (temp_fa1 < var_ft5) {
        if (temp_fv0 < -0.4f) {
            var_fv0 = -0.4f;
        } else {
            if (temp_fv0 > -0.1f) {
                var_ft5_2 = -0.1f;
            } else {
                var_ft5_2 = temp_fv0;
            }
            var_fv0 = var_ft5_2;
        }
        if (temp_fv1 <= 0.0f) {
            var_ft5_3 = 0.0f;
        } else {
            var_ft5_3 = temp_fv1 * 0.5f;
        }
        sp4 = var_fv0 - var_ft5_3;
    } else {
        if (!(arg0->stateFlags1 & 0x80) && (arg0->currentBoots >= 5) && (temp_fv1 >= -5.0f)) {
            var_ft0 = -0.3f;
            goto block_29;
        }
        if ((arg0->transformation == 3) && (temp_fv1 < 0.0f)) {
            var_ft4 = 0.0f;
            sp4 = -temp_fv1;
        } else {
            var_ft5_4 = 0.1f;
            var_ft4 = 2.0f;
            if (temp_fv0 < 0.1f) {

            } else if (temp_fv0 > 0.4f) {
                var_ft5_4 = 0.4f;
            } else {
                var_ft5_4 = temp_fv0;
            }
            if (temp_fv1 >= 0.0f) {
                var_ft5_5 = 0.0f;
            } else {
                var_ft5_5 = temp_fv1 * -0.3f;
            }
            var_ft0 = var_ft5_5 + var_ft5_4;
block_29:
            sp4 = var_ft0;
        }
        if (temp_fa1 > 100.0f) {
            arg0->stateFlags2 |= 0x400;
        }
    }
    arg0->actor.velocity.y += sp4;
    if (((arg0->actor.velocity.y - var_ft4) * sp4) > 0.0f) {
        arg0->actor.velocity.y = var_ft4;
    }
    arg0->actor.gravity = 0.0f;
}

void func_808477D0(PlayState* arg0, Player* arg1, Input* arg2, f32 arg3) {
    f32 temp_fv0;
    f32 var_fv0;
    f32 var_fv1;

    if ((arg2 != NULL) && (arg2->press.button & 0xC000)) {
        var_fv1 = 1.0f;
        var_fv0 = 1.0f;
    } else {
        var_fv0 = 0.5f;
        var_fv1 = 1.0f;
    }
    temp_fv0 = var_fv0 * arg3;
    if (temp_fv0 < var_fv1) {

    } else if (temp_fv0 > 2.5f) {
        var_fv1 = 2.5f;
    } else {
        var_fv1 = temp_fv0;
    }
    arg1->skelAnime.playSpeed = var_fv1;
    LinkAnimation_Update(arg0, arg1 + 0x240);
}

s32 func_80847880(PlayState* arg0, Player* arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0->unk_1887C != 0) {
        if (arg0->sceneNum == 0x45) {
            func_80831494(arg0, arg1, func_80854430, 0);
            arg0->unk_1887C = 0;
            arg1->csMode = 0;
            return 1;
        }
        func_8082DE50(arg0, arg1);
        func_80831494(arg0, arg1, func_80854614, 0);
        if ((func_800B7118(arg1) == 0) || (Player_IsHoldingHookshot(arg1) != 0)) {
            func_80831990(arg0, arg1, ITEM_BOW);
        }
        func_8082DB18(arg0, arg1, func_8082ED20(arg1));
        arg1->csMode = 0;
        arg1->stateFlags1 |= 0x100000;
        func_8082DABC(arg1);
        func_80836D8C(arg1);
        var_v0 = 1;
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

s32 func_80847994(PlayState* arg0, Player* arg1) {
    u32 temp_v0;

    temp_v0 = arg1->stateFlags3;
    if (temp_v0 & 0x20) {
        arg1->stateFlags3 = temp_v0 & ~0x20;
        arg1->heldItemActionParam = 0x14;
        arg1->unk_AA5 = 5;
        func_80838A90(arg1, arg0, arg1, arg0);
        return 1;
    }
    return 0;
}

void func_808479F4(PlayState* arg0, Player* arg1, f32 arg2) {
    DynaPolyActor* temp_v0;
    u8 temp_a2;

    temp_a2 = arg1->actor.wallBgId;
    if (temp_a2 != 0x32) {
        temp_v0 = DynaPoly_GetActor(arg0 + 0x830, (s32) temp_a2);
        if (temp_v0 != NULL) {
            func_800B72F8(temp_v0, arg2, arg1->actor.world.rot.y);
        }
    }
}

void func_80847A50(Player* arg0) {
    s32 var_v0;

    var_v0 = 0x80A;
    if (arg0->unk_AE7 != 0) {
        var_v0 = 0x80C;
    }
    func_800B8E58(arg0, (var_v0 + arg0->ageProperties->unk_94) & 0xFFFF);
}

s32 func_80847A94(PlayState* arg0, Player* arg1, s32 arg2, f32* arg3) {
    f32 sp60;
    f32 sp5C;
    Vec3f sp50;
    Vec3f sp44;
    CollisionPoly* sp40;
    CollisionPoly* sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    f32 temp_fv0;
    f32 temp_fv0_2;

    temp_fv0 = arg1->rideActor->world.pos.y;
    sp60 = temp_fv0 + 20.0f;
    sp5C = temp_fv0 - 20.0f;
    sp30 = arg2 * 0xC;
    temp_fv0_2 = (bitwise f32) func_80835CD8(arg0, arg1, (Vec3f* ) &D_8085D588[arg2], &sp50, &sp3C, &sp34);
    *arg3 = temp_fv0_2;
    if ((sp5C < temp_fv0_2) && (*arg3 < sp60) && (func_80835D58(arg0, arg1, sp30 + &D_8085D5A0, &sp40, &sp38, &sp44) == 0) && (func_80835D58(arg0, arg1, sp30 + &D_8085D5B8, &sp40, &sp38, &sp44) == 0)) {
        arg1->actor.floorPoly = sp3C;
        arg1->actor.floorBgId = (u8) sp38;
        arg1->unk_B72 = SurfaceType_GetSfx(&arg0->colCtx, sp3C, sp34);
        return 1;
    }
    return 0;
}

s32 func_80847BF0(Player* arg0, PlayState* arg1) {
    Actor* sp3C;
    s32 sp38;
    f32 sp34;
    LinkAnimationHeader* var_a2_4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_v0;
    s32 var_v0_2;

    if (arg0->unk_AE8 < 0) {
        arg0->unk_AE8 = 0x63;
        goto block_36;
    }
    var_a2 = 1;
    if (arg0->mountSide < 0) {
        var_a2 = 0;
    }
    sp38 = var_a2;
    sp3C = arg0->rideActor;
    if (func_80847A94(arg1, arg0, var_a2, &sp34) == 0) {
        sp3C = sp3C;
        if (func_80847A94(arg1, arg0, sp38 ^ 1, &sp34) == 0) {
            goto block_36;
        }
        arg0->mountSide = -arg0->mountSide;
        goto block_8;
    }
block_8:
    if (arg1->csCtx.state == 0) {
        sp3C = sp3C;
        if (func_8082DA90(arg1) == 0) {
            temp_v1 = sp3C->unk_1E8;
            var_a2_2 = 0;
            if (temp_v1 & 0x40) {
                var_a2_2 = 1;
            }
            if (var_a2_2 == 0) {
                temp_v0 = sp3C->unk_144;
                if (((temp_v0 == 7) || (temp_v0 == 0) || (temp_v0 == 8)) && ((temp_v1 << 0xC) >= 0) && ((temp_v1 << 6) >= 0)) {
                    var_v0 = 1;
                } else {
                    var_v0 = 0;
                }
                if (var_v0 != 0) {
                    goto block_21;
                }
                goto block_36;
            }
block_21:
            var_a2_3 = 0;
            arg0->stateFlags2 |= 0x400000;
            temp_v1_2 = sp3C->unk_1E8;
            if (temp_v1_2 & 0x40) {
                var_a2_3 = 1;
            }
            if (var_a2_3 == 0) {
                temp_v0_2 = sp3C->unk_144;
                if (((temp_v0_2 == 7) || (temp_v0_2 == 0) || (temp_v0_2 == 8)) && ((temp_v1_2 << 0xC) >= 0) && ((temp_v1_2 << 6) >= 0)) {
                    var_v0_2 = 1;
                } else {
                    var_v0_2 = 0;
                }
                if ((var_v0_2 != 0) && (~(D_80862B44->press.button | 0xFFFF7FFF) == 0)) {
                    goto block_33;
                }
                goto block_36;
            }
block_33:
            sp3C->child = NULL;
            sp3C = sp3C;
            func_8083172C(arg1, arg0, func_808505D0, 0);
            var_a2_4 = &D_0400E070;
            arg0->unk_B48 = sp34 - sp3C->world.pos.y;
            if (arg0->mountSide < 0) {
                var_a2_4 = &D_0400E060;
            }
            func_8082DB18(arg1, arg0, var_a2_4);
            return 1;
        }
    }
block_36:
    return 0;
}

void func_80847E2C(Player* arg0, f32 arg1, f32 arg2) {
    f32 temp_fv1;
    f32 var_fa0;

    temp_fv1 = arg0->unk_B48;
    if ((temp_fv1 != 0.0f) && (arg2 <= arg0->skelAnime.curFrame)) {
        if (arg1 < fabsf(temp_fv1)) {
            if (temp_fv1 >= 0.0f) {
                var_fa0 = 1.0f * arg1;
            } else {
                var_fa0 = -1.0f * arg1;
            }
        } else {
            var_fa0 = temp_fv1;
        }
        arg0->unk_B48 = temp_fv1 - var_fa0;
        arg0->actor.world.pos.y += var_fa0;
    }
}

s32 func_80847ED4(Player* arg0) {
    s16* temp_v1;
    s32 var_v0;

    temp_v1 = arg0->interactRangeActor;
    var_v0 = temp_v1 != NULL;
    if (var_v0 != 0) {
        var_v0 = *temp_v1 == 0x224;
        if (var_v0 != 0) {
            var_v0 = ~(D_80862B44->cur.button | 0xFFFF7FFF) == 0;
        }
    }
    return var_v0;
}

void func_80847F1C(Player* arg0) {
    f32 sp28;
    s16 sp26;
    Actor* temp_s0;
    s16 temp_a1;
    s16 temp_v0;
    s16 var_v1;

    temp_s0 = arg0->interactRangeActor;
    if (func_80847ED4(arg0) != 0) {
        sp28 = arg0->actor.world.pos.y;
        temp_a1 = temp_s0->shape.rot.y;
        temp_v0 = arg0->currentYaw - temp_a1;
        sp26 = temp_v0;
        Lib_Vec3f_TranslateAndRotateY(temp_s0 + 0x24, temp_a1, &D_8085D5D0, &arg0->actor.world.pos);
        arg0->actor.world.pos.y = sp28;
        var_v1 = temp_v0;
        arg0->actor.shape.rot.y = temp_s0->shape.rot.y;
        if (temp_v0 < 0) {
            var_v1 = -temp_v0;
        }
        temp_s0->speedXZ = Math_CosS(var_v1) * arg0->linearVelocity * 0.5f;
        if (temp_s0->speedXZ < 0.0f) {
            temp_s0->speedXZ = 0.0f;
        }
        func_8083133C(arg0);
    }
}

void func_80847FF8(f32* arg0, f32* arg2, s16 arg3) {
    func_8084748C(arg2, arg0, (bitwise f32) arg2, arg3);
    func_8082E224((Player* ) arg0, &D_8085D5DC);
    func_80847F1C((Player* ) arg0);
}

void func_80848048(PlayState* arg0, Player* arg1) {
    func_80831494(arg0, arg1, func_80851588, 0);
    func_8082E634(arg0, arg1, &D_0400DFD0);
}

? func_80848094(PlayState* arg0, Player* arg1, f32* arg2, s16* arg3) {
    LinkAnimationHeader* sp24;
    ? var_v0;
    LinkAnimationHeader* var_a3;
    s16 temp_v0;
    s16 var_v1;
    s32 temp_v0_2;

    temp_v0 = arg1->currentYaw - *arg3;
    var_v1 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -temp_v0;
    }
    if (var_v1 >= 0x6001) {
        sp24 = &D_0400E000;
        var_a3 = &D_0400E000;
        if (Math_StepToF(arg1 + 0xAD0, 0.0f, 1.0f) != 0) {
            arg1->currentYaw = *arg3;
        } else {
            *arg2 = 0.0f;
            *arg3 = arg1->currentYaw;
        }
    } else {
        temp_v0_2 = func_8083E514(arg1, arg2, arg3, arg0);
        if (temp_v0_2 > 0) {
            var_a3 = &D_0400DFD0;
        } else if (temp_v0_2 < 0) {
            var_a3 = &D_0400DFB8;
        } else {
            var_a3 = &D_0400DFA8;
            if ((s16) (arg1->actor.shape.rot.y - *arg3) > 0) {
                var_a3 = &D_0400DFB0;
            }
        }
    }
    var_v0 = 0;
    if (var_a3 != arg1->skelAnime.animation) {
        func_8082E634(arg0, arg1, var_a3);
        var_v0 = 1;
    }
    return var_v0;
}

void func_808481CC(Player* arg0, f32* arg1, f32 arg2) {
    s16 sp2C;
    s16 sp2A;

    func_80832F78(arg1, &sp2C, (bitwise f32) &sp2A, NULL, arg0);
    func_8084748C(arg1, arg1 + 0xAD0, (bitwise f32) sp2C * 0.5f, sp2A);
    func_8084748C(arg1, arg1 + 0x68, arg2, arg1->unk_AD4);
}

void func_80848250(PlayState* arg0, Player* arg1) {
    arg1->unk_B2A = 0;
    arg1->stateFlags1 &= ~0xC00;
    arg1->getItemId = 0;
    func_800E0238(Play_GetCamera(arg0, 0));
}

void func_80848294(PlayState* arg0, Player* arg1) {
    func_80848250(arg0, arg1);
    func_8082DC28(arg1);
    func_80839E74(arg1, arg0);
    arg1->currentYaw = arg1->actor.shape.rot.y;
}

s32 func_808482E0(PlayState* arg0, Actor* arg1) {
    void* sp1C;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 var_v0;
    s32 var_v1;
    void* temp_v0;

    temp_v1 = arg1->unk_384;
    if (temp_v1 == 0) {
        return 1;
    }
    if (arg1->unk_AE7 == 0) {
        temp_v0 = (temp_v1 * 6) - 6 + D_8085C3F4;
        arg1->unk_AE7 = 1;
        sp1C = temp_v0;
        Message_StartTextbox(arg0, (u16) temp_v0->unk_3, arg1);
        Item_Give(arg0, temp_v0->unk_0);
        temp_v1_2 = arg1->unk_384;
        if ((temp_v1_2 >= 0x78) && (temp_v1_2 < 0x90)) {
            func_801A3098(0x37U);
        } else if (((temp_v1_2 > 0) && (temp_v1_2 < 4)) || (temp_v1_2 == 0xA)) {
            play_sound(0x4831U);
        } else {
            if ((temp_v1_2 == 0xD) || ((temp_v1_2 == 0xC) && ((gSaveContext.save.inventory.questItems & 0xF0000000) == 0x40000000))) {
                var_v0 = 0x924;
            } else {
                if ((temp_v1_2 == 0xC) || ((temp_v1_2 >= 5) && (temp_v1_2 < 8))) {
                    var_v1 = 0x39;
                } else {
                    var_v1 = 0x922;
                }
                var_v0 = var_v1;
            }
            func_801A3098(var_v0 & 0xFFFF);
        }
    } else if (Message_GetState(arg0 + 0x4908) == 2) {
        if (arg1->unk_384 == 0x4C) {
            arg0->nextEntranceIndex = 0x1C00;
            gSaveContext.nextCutsceneIndex = 0xFFF2;
            arg0->sceneLoadFlag = 0x14;
            arg0->unk_1887F = 3;
            gSaveContext.nextTransition = 3;
            arg1->unk_A6C = (s32) (arg1->unk_A6C & 0xDFFFFFFF);
            func_8085B28C(arg0, NULL, 7);
        }
        arg1->unk_384 = 0;
    }
    return 0;
}

void func_808484CC(Player* arg0) {
    func_8082E224(arg0, &D_8085D5E0);
}

void func_808484F0(Player* arg0) {
    f32 temp_fa0;
    f32 temp_fv1;
    s32 temp_cond;

    temp_fa0 = arg0->unk_B08[1];
    arg0->unk_B08[0] += temp_fa0;
    temp_fv1 = arg0->unk_B08[0];
    arg0->unk_B08[1] = temp_fa0 - (temp_fv1 * 5.0f);
    arg0->unk_B08[1] *= 0.3f;
    if (fabsf(arg0->unk_B08[1]) < 0.00001f) {
        temp_cond = fabsf(temp_fv1) < 0.00001f;
        arg0->unk_B08[1] = 0.0f;
        if (temp_cond) {
            arg0->unk_B08[0] = 0.0f;
        }
    }
}

s32 func_80848570(Player* arg0, PlayState* arg1) {
    s32 sp24;
    s32 temp_v0;

    if (func_8083A6C0(arg1, arg0) == 0) {
        if (func_808396B8((Player* ) arg1, arg0) != 0) {
            temp_v0 = func_808335F4(arg0);
            sp24 = temp_v0;
            func_80833864(arg1, arg0, temp_v0);
            if ((sp24 >= 0x1E) || ((arg0->transformation == 0) && (func_8082FBE8(arg0) != 0))) {
                arg0->stateFlags2 |= 0x20000;
                func_808332A0(arg1, arg0, 0, sp24 < 0x1E);
            }
            goto block_7;
        }
        return 0;
    }
block_7:
    return 1;
}

void func_80848640(PlayState* arg0, Player* arg1) {
    Actor* sp4C;
    ActorContext* sp3C;
    Actor* temp_v0_2;
    Actor* temp_v1;
    Actor* var_v1;
    ActorContext* temp_a0;
    u8 temp_v0;

    temp_v0 = arg1->transformation;
    temp_a0 = arg0 + 0x1CA0;
    temp_v1 = (arg0 + (temp_v0 * 4))->unk_1EF4;
    if (temp_v1 != NULL) {
        sp4C = temp_v1;
        Math_Vec3f_Copy(temp_v1 + 8, arg1 + 0x24);
        var_v1 = temp_v1;
        var_v1->unk_190 = 0;
        var_v1->unk_191 = 0x14;
        var_v1->home.rot.y = arg1->actor.shape.rot.y;
        sp3C = arg0 + 0x1CA0;
    } else {
        sp3C = temp_a0;
        var_v1 = Actor_Spawn(temp_a0, arg0, 0x21, arg1->actor.world.pos.x, arg1->actor.world.pos.y, arg1->actor.world.pos.z, (s16) 0, (s16) (s32) arg1->actor.shape.rot.y, (s16) 0, (s32) temp_v0);
    }
    if (var_v1 != NULL) {
        arg0->actorCtx.unk254[arg1->transformation] = (u32) var_v1;
        Play_SetupRespawnPoint(&arg0->state, arg1->transformation + 3, 0xBFF);
    }
    temp_v0_2 = Actor_Spawn(sp3C, arg0, 0x160, arg1->actor.world.pos.x, arg1->actor.world.pos.y, arg1->actor.world.pos.z, (s16) 0, (s16) (s32) arg1->actor.shape.rot.y, (s16) 0, (gSaveContext.save.playerForm * 8) | arg1->transformation);
    if (temp_v0_2 != NULL) {
        func_800B8E58((Player* ) temp_v0_2, 0x8E4U);
    }
}

s32 func_80848780(Player* this, PlayState* play) {
    if (func_80830B88(play, this) != 0) {
        return 1;
    }
    return 0;
}

s32 func_808487B8(Player* this, PlayState* play) {
    if ((func_80830B88(play, this) != 0) || (func_80830DF0(this, play) != 0)) {
        return 1;
    }
    return 0;
}

s32 func_80848808(Player* this, PlayState* play) {
    s32 var_v0;
    s8 temp_v1;

    if (LinkAnimation_Update(play, &this->unk_284) == 0) {
        temp_v1 = this->itemActionParam;
        if (func_8082F524(this, (s32) this->heldItemId) == temp_v1) {
            var_v0 = D_80862B48 != 0;
            if (var_v0 == 0) {
                var_v0 = this->modelAnimType != 3;
                if (var_v0 != 0) {
                    var_v0 = temp_v1 != 7;
                    if (var_v0 != 0) {
                        var_v0 = play->unk_1887C == 0;
                    }
                }
            }
            D_80862B48 = var_v0;
            if (var_v0 != 0) {
                goto block_7;
            }
            goto block_8;
        }
block_8:
        if (func_8082ED94(this) != 0) {
            func_80830D40(play, this);
            func_8082DB18(play, this, func_8082ED20(this));
            this->unk_AA4 = 0;
        } else {
            func_80830D40(play, this);
        }
        return 1;
    }
block_7:
    func_8082F43C(play, this, D_8085C9F0[this->itemActionParam]);
    this->unk_ACC = 0;
    this->unk_AA4 = 0;
    D_80862B4C = D_80862B48;
    return this->unk_AC4(this, play);
}

s32 func_8084894C(Player* this, PlayState* play) {
    LinkAnimation_Update(play, &this->unk_284);
    if (~(D_80862B44->cur.button | ~0x10) != 0) {
        func_80830CE8(play, this, this);
    } else {
        this->stateFlags1 |= 0x400000;
        Player_SetModelsForHoldingShield(this);
        if ((this->transformation == 2) && (~(D_80862B44->cur.button | ~0x4000) == 0)) {
            func_8082F164(this, 0x4010U);
        }
    }
    return 1;
}

s32 func_80848A0C(Player* this, PlayState* play) {
    LinkAnimationHeader* sp3C;
    SkelAnime* sp34;
    LinkAnimationHeader* temp_v0;
    SkelAnime* temp_a1;
    f32 temp_fv0;

    temp_a1 = &this->unk_284;
    sp34 = temp_a1;
    if (LinkAnimation_Update(play, temp_a1) != 0) {
        temp_v0 = func_80830A58(play, this);
        sp3C = temp_v0;
        temp_fv0 = (f32) Animation_GetLastFrame(temp_v0);
        LinkAnimation_Change(play, sp34, sp3C, 1.0f, temp_fv0, temp_fv0, (u8) 2, 0.0f);
    }
    this->stateFlags1 |= 0x400000;
    Player_SetModelsForHoldingShield(this);
    return 1;
}

s32 func_80848AB0(Player* this, PlayState* play) {
    SkelAnime* sp24;
    s32 temp_t6;

    temp_t6 = D_80862B4C;
    D_80862B48 = temp_t6;
    if ((temp_t6 != 0) || (LinkAnimation_Update(play, &this->unk_284) != 0)) {
        sp24 = &this->unk_284;
        func_8082F43C(play, this, D_8085C9F0[this->itemActionParam]);
        LinkAnimation_PlayLoop(play, sp24, D_8085BE84[this->modelAnimType]);
        this->unk_AA4 = 0;
        this->unk_AC4(this, play);
        return 0;
    }
    return 1;
}

s32 func_80848B6C(Player* this, PlayState* play) {
    s16 temp_v0;

    temp_v0 = this->unk_B28;
    if (temp_v0 >= 0) {
        this->unk_B28 = -temp_v0;
    }
    if (((Player_IsHoldingHookshot(this) == 0) || (func_80831124(play, this) != 0)) && (func_80830B88(play, this) == 0) && (func_80831094(this, play) == 0)) {
        return 0;
    }
    return 1;
}

s32 func_80848BF4(Player* this, PlayState* play) {
    s32 sp2C;
    SkelAnime* sp24;
    SkelAnime* temp_a1;
    SkelAnime* temp_a1_2;
    s16 temp_v0;
    s32 var_v0;

    if (Player_IsHoldingHookshot(this) != 0) {
        sp2C = 0;
    } else {
        var_v0 = 2;
        if (this->transformation != 3) {
            var_v0 = 1;
        }
        sp2C = var_v0;
    }
    if (this->transformation != 3) {
        Math_ScaledStepToS(&this->unk_AB2.z, 0x4B0, 0x190);
        this->unk_AA6 |= 0x100;
    }
    if ((this->unk_ACE == 0) && (func_8082ED94(this) == 0) && (&D_0400D520 == this->skelAnime.animation)) {
        temp_a1 = &this->unk_284;
        sp24 = temp_a1;
        LinkAnimation_PlayOnce(play, temp_a1, D_8085D5E4[sp2C]);
        this->unk_ACE = -1;
    } else {
        temp_a1_2 = &this->unk_284;
        sp24 = temp_a1_2;
        if (LinkAnimation_Update(play, temp_a1_2) != 0) {
            LinkAnimation_PlayLoop(play, sp24, *(&D_8085D5F0 + (sp2C * 4)));
            this->unk_ACE = 1;
        } else if (this->unk_ACE == 1) {
            this->unk_ACE = 2;
        }
    }
    temp_v0 = this->unk_ACC;
    if (temp_v0 >= 0xB) {
        this->unk_ACC = temp_v0 - 1;
    }
    func_80831010(this, play);
    if ((this->unk_ACE > 0) && ((this->unk_B28 < 0) || ((D_80862B4C == 0) && (func_80830FD4(play) == 0)))) {
        func_8082F43C(play, this, func_80848E4C);
        if (this->unk_B28 >= 0) {
            if (sp2C != 0) {
                if (func_80831194(play, this) == 0) {
                    func_800B8E58(this, D_8085D5FA[this->unk_B28]);
                }
                if (this->transformation == 3) {
                    LinkAnimation_PlayOnceSetSpeed(play, sp24, &D_0400E2F0, 0.6666667f);
                }
            } else if (this->actor.bgCheckFlags & 1) {
                func_80831194(play, this);
            }
        }
        this->unk_ACC = 0xA;
        func_8082DABC(this);
    } else {
        this->stateFlags3 |= 0x40;
    }
    return 1;
}

s32 func_80848E4C(Player* this, PlayState* play) {
    s32 sp2C;
    SkelAnime* sp24;
    LinkAnimationHeader* var_a2;
    LinkAnimationHeader* var_a2_2;
    SkelAnime* temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_a1 = &this->unk_284;
    sp24 = temp_a1;
    sp2C = LinkAnimation_Update(play, temp_a1);
    if ((Player_IsHoldingHookshot(this) != 0) && (func_80831124(play, this) == 0)) {

    } else if (func_80830B88(play, this) == 0) {
        if (((this->unk_B28 >= 0) || (D_80862B4C == 0)) && (((sp2C == 0) && (this->transformation == 3)) || (D_80862B48 == 0))) {
            if (func_80830F9C(play) != 0) {
                goto block_11;
            }
            goto block_20;
        }
block_11:
        if (this->unk_B28 < 0) {
            this->unk_B28 = -this->unk_B28;
        } else {
            this->unk_B28 = this->unk_B28;
        }
        if (func_808306F8(this, play) != 0) {
            if (Player_IsHoldingHookshot(this) != 0) {
                this->unk_ACE = 1;
            } else {
                var_a2 = &D_0400D500;
                if (this->transformation == 3) {
                    var_a2 = &D_0400E2F8;
                }
                LinkAnimation_PlayOnce(play, sp24, var_a2);
            }
        }
    } else {
block_20:
        temp_v0 = this->unk_ACC;
        if (temp_v0 != 0) {
            this->unk_ACC = temp_v0 - 1;
        }
        if ((func_8082FBE8(this) != 0) || (this->unk_AA5 != 0) || (this->stateFlags1 & 0x100000)) {
            temp_v0_2 = this->unk_ACC;
            if (temp_v0_2 == 0) {
                this->unk_ACC = temp_v0_2 + 1;
            }
        } else {
            if (Player_IsHoldingHookshot(this) != 0) {
                func_8082F43C(play, this, func_80848B6C);
            } else {
                func_8082F43C(play, this, func_80849054);
                if (this->transformation == 3) {
                    var_a2_2 = &D_0400E2F8;
                } else {
                    var_a2_2 = &D_0400D4F8;
                }
                LinkAnimation_PlayOnce(play, sp24, var_a2_2);
            }
            this->unk_ACC = 0;
        }
    }
    return 1;
}

s32 func_80849054(Player* this, PlayState* play) {
    if (!(this->actor.bgCheckFlags & 1) || (LinkAnimation_Update(play, &this->unk_284) != 0)) {
        func_8082F43C(play, this, func_80848B6C);
    }
    return 1;
}

s32 func_808490B4(Player* this, PlayState* play) {
    Actor* sp24;
    SkelAnime* sp20;
    Actor* temp_t6;
    SkelAnime* temp_a1;

    temp_t6 = this->heldActor;
    sp24 = temp_t6;
    if (temp_t6 == NULL) {
        func_808309CC(play, this);
    }
    if (func_80830B88(play, this) != 0) {
        return 1;
    }
    temp_a1 = &this->unk_284;
    if (this->stateFlags1 & 0x800) {
        sp20 = temp_a1;
        if (LinkAnimation_Update(play, temp_a1) != 0) {
            LinkAnimation_PlayLoop(play, temp_a1, &D_0400DB30);
        }
        if ((sp24->id == 0x11) && (this->actor.velocity.y <= 0.0f)) {
            this->actor.terminalVelocity = -2.0f;
            this->actor.gravity = -0.5f;
            this->unk_B68 = (s16) (s32) this->actor.world.pos.y;
        }
        return 1;
    }
    return func_80848780(this, play);
}

s32 func_808491B4(Player* this, PlayState* play) {
    if (func_80830B88(play, this) != 0) {
        return 1;
    }
    if (this->stateFlags1 & 0x02000000) {
        func_8082F43C(play, this, func_80849570);
        goto block_6;
    }
    if (func_80831094(this, play) != 0) {
        return 1;
    }
block_6:
    return 0;
}

s32 func_8084923C(Player* this, PlayState* play) {
    SkelAnime* sp1C;
    SkelAnime* temp_a1;

    temp_a1 = &this->unk_284;
    sp1C = temp_a1;
    if (LinkAnimation_Update(play, temp_a1) != 0) {
        func_8082F43C(play, this, func_808492C4);
        LinkAnimation_PlayLoop(play, sp1C, &D_0400E3C0);
    }
    if (&D_0400E3C0 == this->unk_284.animation) {
        func_80831010(this, play);
    }
    return 1;
}

s32 func_808492C4(Player* this, PlayState* play) {
    SkelAnime* sp1C;
    SkelAnime* temp_a1;

    temp_a1 = &this->unk_284;
    sp1C = temp_a1;
    LinkAnimation_Update(play, temp_a1);
    func_80831010(this, play);
    if (D_80862B4C == 0) {
        func_8082F43C(play, this, func_8084933C);
        LinkAnimation_PlayOnce(play, sp1C, &D_0400E398);
    }
    return 1;
}

s32 func_8084933C(Player* this, PlayState* play) {
    Vec3f sp54;
    Actor* sp4C;
    SkelAnime* sp40;
    ActorContext* sp3C;
    Actor* temp_t8;
    Actor* temp_t8_2;
    Actor* temp_v0_2;
    Actor* temp_v0_4;
    ActorContext* temp_a0;
    SkelAnime* temp_a2;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 var_t0;
    s16 var_t0_2;

    temp_a2 = &this->unk_284;
    sp40 = temp_a2;
    if (LinkAnimation_Update(play, temp_a2) != 0) {
        func_8082F43C(play, this, func_80849570);
        this->unk_ACC = 0;
    } else if (LinkAnimation_OnFrame(temp_a2, 6.0f) != 0) {
        func_80835BF8((PosRot* ) &this->bodyPartsPos[0xC], this->actor.shape.rot.y, 0.0f, &sp54);
        temp_a0 = &play->actorCtx;
        sp54.y = this->actor.world.pos.y + 50.0f;
        temp_v0 = this->actor.shape.rot.y;
        if (this->unk_730 != NULL) {
            var_t0 = temp_v0 + 0x36B0;
        } else {
            var_t0 = temp_v0 - 0x190;
        }
        sp3C = temp_a0;
        temp_v0_2 = Actor_Spawn(temp_a0, play, 0x20, (bitwise f32) sp54, sp54.y, sp54.z, (s16) (s32) this->actor.focus.rot.x, (s16) (s32) var_t0, (s16) 0, 0);
        this->boomerangActor = temp_v0_2;
        if (temp_v0_2 != NULL) {
            temp_t8 = this->unk_730;
            temp_v0_2->unk_1C4 = temp_t8;
            if (temp_t8 != NULL) {
                temp_v0_2->unk_1CF = 0x10;
            }
            temp_v0_2->unk_1CC = (s8) (temp_v0_2->unk_1CF + 0x24);
            sp4C = temp_v0_2;
            func_80835BF8((PosRot* ) &this->bodyPartsPos[0xF], this->actor.shape.rot.y, 0.0f, &sp54);
            temp_v0_3 = this->actor.shape.rot.y;
            if (this->unk_730 != NULL) {
                var_t0_2 = temp_v0_3 - 0x36B0;
            } else {
                var_t0_2 = temp_v0_3 + 0x190;
            }
            sp4C = sp4C;
            temp_v0_4 = Actor_Spawn(sp3C, play, 0x20, (bitwise f32) sp54, sp54.y, sp54.z, (s16) (s32) this->actor.focus.rot.x, (s16) (s32) var_t0_2, (s16) 0, 1);
            if (temp_v0_4 != NULL) {
                temp_t8_2 = this->unk_730;
                temp_v0_4->unk_1C4 = temp_t8_2;
                if (temp_t8_2 != NULL) {
                    temp_v0_4->unk_1CF = 0x10;
                }
                temp_v0_4->unk_1CC = (s8) (temp_v0_4->unk_1CF + 0x24);
                sp4C->child = temp_v0_4;
                temp_v0_4->parent = sp4C;
            }
            this->stateFlags1 |= 0x02000000;
            this->stateFlags3 &= 0xFF7FFFFF;
            if (func_80123420(this) == 0) {
                func_8083133C(this);
            }
            this->unk_D57 = 0x14;
            func_800B8E58(this, 0x1805U);
            func_8082DF8C(this, 0x6800U);
        }
    }
    return 1;
}

s32 func_80849570(Player* this, PlayState* play) {
    s32 var_v0;

    if (func_80830B88(play, this) != 0) {
        return 1;
    }
    var_v0 = 0;
    if (this->stateFlags3 & 0x800000) {
        func_8082F43C(play, this, func_80849620);
        LinkAnimation_PlayOnce(play, &this->unk_284, &D_0400E3A0);
        this->stateFlags3 &= 0xFF7FFFFF;
        func_800B8E58(this, 0x836U);
        func_8082DF8C(this, 0x6800U);
        var_v0 = 1;
    }
    return var_v0;
}

s32 func_80849620(Player* this, PlayState* play) {
    if ((func_808491B4(this, play) == 0) && (LinkAnimation_Update(play, &this->unk_284) != 0)) {
        if (this->stateFlags1 & 0x02000000) {
            func_8082F43C(play, this, func_80849570);
            this->unk_ACC = 0;
        } else {
            func_8082F43C(play, this, func_80848780);
        }
    }
    return 1;
}

void func_808496AC(Player* arg0, PlayState* arg1) {
    s16 temp_v1;
    s16 var_v0;

    LinkAnimation_Update(arg1, &arg0->skelAnime);
    func_808323C0(&arg0->actor, arg1->playerActorCsIds[2]);
    temp_v1 = arg0->unk_AE8;
    if (temp_v1 == 0) {
        var_v0 = 0;
    } else {
        arg0->unk_AE8 = temp_v1 - 1;
        var_v0 = arg0->unk_AE8;
    }
    if (var_v0 == 0) {
        if (Message_GetState(&arg1->msgCtx) == 0) {
            func_80838760(arg0);
            func_80831494(arg1, arg0, func_80849FE0, 0);
            arg0->stateFlags1 &= 0xDFFFFFFF;
        }
    } else if (arg0->unk_AE8 == 0x1E) {
        if (Message_GetState(&arg1->msgCtx) != 0) {
            arg0->unk_AE8 += 1;
            return;
        }
        Message_StartTextbox(arg1, 0xC03U, NULL);
    }
}

void func_808497A0(Player* arg0, PlayState* arg1) {
    PosRot* sp24;
    GameInfo* temp_v1;
    GameInfo* temp_v1_2;
    GameInfo* temp_v1_3;
    GameInfo* temp_v1_4;
    PosRot* temp_a2;
    PosRot* temp_a2_2;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;

    arg0->stateFlags3 |= 0x10000000;
    LinkAnimation_Update(arg1, &arg0->skelAnime);
    func_8083216C(arg0, arg1);
    temp_v1 = gGameInfo;
    temp_a0 = temp_v1->data[0x220];
    if (temp_a0 == 0) {
        temp_v1->data[0x220] = 0x14;
        gGameInfo->data[0x224] = 0;
        temp_v1_2 = gGameInfo;
        temp_v0 = temp_v1_2->data[0x224];
        temp_v1_2->data[0x223] = temp_v0;
        gGameInfo->data[0x222] = temp_v0;
        gGameInfo->data[0x221] = temp_v0;
        play_sound(0x484DU);
        return;
    }
    if (temp_a0 > 0) {
        temp_v1->data[0x224] += temp_a0;
        temp_v1_3 = gGameInfo;
        if (temp_v1_3->data[0x224] >= 0x100) {
            temp_v1_3->data[0x224] = 0xFF;
            if (arg0->unk_B86 == 0) {
                arg0->unk_B86 = 1;
                func_8082DE50(arg1, arg0);
                return;
            }
            gGameInfo->data[0x220] = -0x14;
            arg0->stateFlags1 &= 0xF7FFFFFF;
            arg0->actor.bgCheckFlags &= 0xFFFE;
            Player_SetEquipmentData(arg1, arg0);
            temp_a2 = &arg0->actor.world;
            arg0->prevBoots = arg0->currentBoots;
            if (arg0->unk_3CF != 0) {
                temp_a2_2 = &arg0->actor.world;
                sp24 = temp_a2_2;
                Math_Vec3f_Copy(&temp_a2_2->pos, &arg0->unk_3C0);
                arg0->actor.shape.rot.y = arg0->unk_3CC;
            } else {
                sp24 = temp_a2;
                Math_Vec3f_Copy(&temp_a2->pos, &gSaveContext.respawn[0].pos);
                arg0->actor.shape.rot.y = gSaveContext.respawn[0].yaw;
            }
            Math_Vec3f_Copy(&arg0->actor.prevPos, &arg0->actor.world.pos);
            arg0->linearVelocity = 0.0f;
            arg0->currentYaw = arg0->actor.shape.rot.y;
            arg0->actor.velocity.y = 0.0f;
            func_8082DB18(arg1, arg0, func_8082ED20(arg0));
            if ((arg0->unk_3CE == arg1->roomCtx.currRoom.num) && (arg1->roomCtx.prevRoom.num < 0)) {
                arg0->unk_AE8 = 5;
                return;
            }
            arg1->roomCtx.currRoom.num = -1;
            arg1->roomCtx.prevRoom.num = -1;
            arg1->roomCtx.currRoom.segment = NULL;
            arg1->roomCtx.prevRoom.segment = NULL;
            func_8012EBF8(arg1, &arg1->roomCtx);
            arg0->unk_AE8 = -1;
            arg0->unk_AE7 = arg0->unk_3CE;
        }
    } else {
        temp_v0_2 = arg0->unk_AE8;
        if (temp_v0_2 < 0) {
            if (Room_StartRoomTransition(arg1, &arg1->roomCtx, (s32) arg0->unk_AE7) != 0) {
                Map_InitRoomData(arg1, (s16) arg1->roomCtx.currRoom.num);
                Minimap_SavePlayerRoomInitInfo(arg1);
                arg0->unk_AE8 = 5;
            }
        } else {
            if (temp_v0_2 > 0) {
                arg0->unk_AE8 = temp_v0_2 - 1;
                return;
            }
            temp_v1->data[0x224] += temp_a0;
            temp_v1_4 = gGameInfo;
            if (temp_v1_4->data[0x224] < 0) {
                temp_v1_4->data[0x224] = 0;
                gGameInfo->data[0x220] = 0;
                func_808339B4(arg0, -0x28, &gGameInfo);
                func_8085B384(arg0, arg1, M2C_ERROR(Read from unset register $a2));
                arg0->actor.bgCheckFlags |= 1;
            }
        }
    }
}

void func_80849A9C(Player* arg0, PlayState* arg1) {
    s16 sp44;
    s16 sp42;
    s32 sp30;
    s16 temp_v0_3;
    s16 var_v1;
    s32 temp_v0;
    u32 temp_v0_2;

    if (arg0->unk_AE8 != 0) {
        if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
            func_8082E794(arg0);
            func_8082DB3C(arg1, arg0, func_8082EF54(arg0));
            arg0->unk_AE8 = 0;
            arg0->stateFlags3 &= ~8;
        }
        func_8082FC60(arg0);
    } else {
        func_8083E958(arg1, arg0);
    }
    func_80832F24(arg0);
    if (func_80833058(arg1, arg0, D_8085CFE4, (s8* )1) == 0) {
        if ((func_8082FB68(arg0) == 0) && ((func_80123434(arg0) == 0) || (arg0->unk_AC4 != func_8084894C))) {
            func_8083B29C(arg0, arg1);
            return;
        }
        func_80832F78((f32* ) arg0, &sp44, (bitwise f32) &sp42, NULL, (Player* ) arg1);
        temp_v0 = func_8083E404(arg0, (bitwise f32) sp44, sp42);
        if (temp_v0 > 0) {
            func_8083A844(arg0, (s16) arg1, sp42);
            return;
        }
        if (temp_v0 < 0) {
            func_8083AF8C(arg0, sp42, arg1);
            return;
        }
        if ((bitwise f32) sp44 > 4.0f) {
            func_8083B030(arg0, arg1);
            return;
        }
        func_8083EA44(arg0, (arg0->linearVelocity * 0.3f) + 1.0f);
        func_8083E8E0(arg0, (bitwise f32) sp44, sp42);
        temp_v0_2 = (u32) arg0->unk_B38;
        if ((temp_v0_2 < 6U) || ((u32) (temp_v0_2 - 0xE) < 6U)) {
            Math_StepToF(&arg0->linearVelocity, 0.0f, 1.5f);
            return;
        }
        temp_v0_3 = sp42 - arg0->currentYaw;
        var_v1 = temp_v0_3;
        if (temp_v0_3 < 0) {
            var_v1 = -temp_v0_3;
        }
        if (var_v1 >= 0x4001) {
            if (Math_StepToF(&arg0->linearVelocity, 0.0f, 1.5f) != 0) {
                arg0->currentYaw = sp42;
            }
        } else {
            sp30 = (s32) var_v1;
            Math_AsymStepToF(&arg0->linearVelocity, (bitwise f32) sp44 * 0.3f, 2.0f, 1.5f);
            Math_ScaledStepToS(&arg0->currentYaw, sp42, (s16) (s32) ((f32) var_v1 * 0.1f));
        }
    }
}

void func_80849DD0(Player* arg0, PlayState* arg1) {
    s16 sp3C;
    s16 sp3A;
    s16 temp_v0_2;
    s16 var_v1;
    s32 temp_v0;

    if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
        func_8082E794(arg0);
        func_8082DB18(arg1, arg0, func_8082ED20(arg0));
        arg0->stateFlags3 &= ~8;
    }
    func_80832F24(arg0);
    if (func_80833058(arg1, arg0, D_8085CFEC, (s8* )1) == 0) {
        if (func_8082FB68(arg0) != 0) {
            func_8083B23C(arg0, arg1);
            return;
        }
        if (func_80123434(arg0) == 0) {
            func_8083172C(arg1, arg0, func_80849FE0, 1);
            arg0->currentYaw = arg0->actor.shape.rot.y;
            return;
        }
        if (arg0->unk_AC4 == func_8084894C) {
            func_8083B23C(arg0, arg1);
            return;
        }
        func_80832F78((f32* ) arg0, &sp3C, (bitwise f32) &sp3A, NULL, (Player* ) arg1);
        temp_v0 = func_8083E514(arg0, (f32* ) &sp3C, &sp3A, arg1);
        if (temp_v0 > 0) {
            func_8083A844(arg0, (s16) arg1, sp3A);
            return;
        }
        if (temp_v0 < 0) {
            func_8083AECC(arg0, sp3A, arg1);
            return;
        }
        if ((bitwise f32) sp3C > 4.9f) {
            func_8083B030(arg0, arg1);
            func_8082FC60(arg0);
            return;
        }
        if ((bitwise f32) sp3C != 0.0f) {
            func_8083AF30(arg0, arg1);
            return;
        }
        temp_v0_2 = sp3A - arg0->actor.shape.rot.y;
        var_v1 = temp_v0_2;
        if (temp_v0_2 < 0) {
            var_v1 = -temp_v0_2;
        }
        if (var_v1 >= 0x321) {
            func_8083B0E4(arg1, arg0, sp3A);
        }
    }
}

void func_80849FE0(Player* arg0, PlayState* arg1) {
    s32 sp44;
    s32 sp40;
    s16 sp3C;
    s16 sp3A;
    Vec3s* temp_v0_3;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_v0;
    s16 var_v0_2;
    s32 temp_v0;
    u8 temp_v0_2;

    temp_v0 = func_8082ED94(arg0);
    sp44 = temp_v0;
    sp40 = LinkAnimation_Update(arg1, &arg0->skelAnime);
    func_8083C85C(arg0);
    if (temp_v0 > 0) {
        func_8082EEA4(arg0, temp_v0 - 1);
    }
    if ((sp40 != 0) || ((temp_v0_2 = arg0->currentMask, (temp_v0_2 == 0x13)) && (&D_0400D0B0 != arg0->skelAnime.animation)) || ((temp_v0_2 != 0x13) && (&D_0400D0B0 == arg0->skelAnime.animation))) {
        temp_v1 = arg0->unk_AE8;
        if (temp_v1 != 0) {
            if (temp_v1 == 0) {
                var_v0 = 0;
            } else {
                arg0->unk_AE8 = temp_v1 - 1;
                var_v0 = arg0->unk_AE8;
            }
            if (var_v0 == 0) {
                arg0->skelAnime.endFrame = arg0->skelAnime.animLength - 1.0f;
            }
            temp_v0_3 = arg0->skelAnime.jointTable;
            temp_v0_3->y = (temp_v0_3->y + ((arg0->unk_AE8 & 1) * 0x50)) - 0x28;
        } else {
            func_8082E794(arg0);
            func_8083EBD0(arg1, arg0);
        }
        arg0->stateFlags3 &= ~8;
    }
    func_80832F24(arg0);
    if ((arg0->unk_AE8 == 0) && (func_80847880(arg1, arg0) == 0) && (func_80833058(arg1, arg0, D_8085D01C, (s8* )1) == 0)) {
        if (func_8082FB68(arg0) != 0) {
            func_8083B23C(arg0, arg1);
            return;
        }
        if (func_80123434(arg0) != 0) {
            func_8083692C(arg0, arg1);
            return;
        }
        func_80832F78((f32* ) arg0, &sp3C, (bitwise f32) &sp3A, (PlayState* )0x3C9374BC, (Player* ) arg1);
        if ((bitwise f32) sp3C != 0.0f) {
            func_8083A844(arg0, (s16) arg1, sp3A);
            return;
        }
        temp_v1_2 = sp3A - arg0->actor.shape.rot.y;
        var_v0_2 = temp_v1_2;
        if (temp_v1_2 < 0) {
            var_v0_2 = -temp_v1_2;
        }
        if (var_v0_2 >= 0x321) {
            func_8083B0E4(arg1, arg0, sp3A);
            return;
        }
        Math_ScaledStepToS(&arg0->actor.shape.rot.y, sp3A, 0x4B0);
        arg0->currentYaw = arg0->actor.shape.rot.y;
        if (func_8082ED20(arg0) == arg0->skelAnime.animation) {
            func_8083C6E8(arg0, arg1);
        }
    }
}

void func_8084A26C(Player* arg0, PlayState* arg1) {
    f32 sp4C;
    s16 sp44;
    s16 sp42;
    s32 sp34;
    SkelAnime* sp2C;
    LinkAnimationHeader* temp_v0;
    SkelAnime* temp_a0;
    f32 var_fv0;
    f32 var_fv1;
    s16 temp_v0_3;
    s16 var_v1;
    s32 temp_v0_2;
    s32 var_v0;

    arg0->skelAnime.mode = 0;
    temp_a0 = &arg0->skelAnime;
    sp2C = temp_a0;
    LinkAnimation_SetUpdateFunction(temp_a0);
    temp_v0 = func_8082EFE4(arg0);
    arg0->skelAnime.animation = temp_v0;
    if (temp_v0 == &D_0400D520) {
        var_fv0 = 24.0f;
        var_fv1 = -((f32) gGameInfo->data[0x23F] / 100.0f);
    } else {
        var_fv0 = 29.0f;
        var_fv1 = (f32) gGameInfo->data[0x23F] / 100.0f;
    }
    arg0->skelAnime.animLength = var_fv0;
    arg0->skelAnime.endFrame = var_fv0 - 1.0f;
    if ((s16) (arg0->currentYaw - arg0->actor.shape.rot.y) >= 0) {
        var_v0 = 1;
    } else {
        var_v0 = -1;
    }
    arg0->skelAnime.playSpeed = (f32) var_v0 * (arg0->linearVelocity * var_fv1);
    sp4C = var_fv0;
    LinkAnimation_Update(arg1, sp2C);
    if ((LinkAnimation_OnFrame(sp2C, 0.0f) != 0) || (LinkAnimation_OnFrame(sp2C, var_fv0 * 0.5f) != 0)) {
        func_8082E12C(arg0, arg0->linearVelocity);
    }
    if (func_80833058(arg1, arg0, D_8085CFF8, (s8* )1) == 0) {
        if (func_8082FB68(arg0) != 0) {
            func_8083B23C(arg0, arg1);
            return;
        }
        if (func_80123434(arg0) == 0) {
            func_8085B384(arg0, arg1, M2C_ERROR(Read from unset register $a2));
            return;
        }
        func_80832F78((f32* ) arg0, &sp44, (bitwise f32) &sp42, NULL, (Player* ) arg1);
        temp_v0_2 = func_8083E514(arg0, (f32* ) &sp44, &sp42, arg1);
        if (temp_v0_2 > 0) {
            func_8083A844(arg0, (s16) arg1, sp42);
            return;
        }
        if (temp_v0_2 < 0) {
            func_8083AECC(arg0, sp42, arg1);
            return;
        }
        if ((bitwise f32) sp44 > 4.9f) {
            func_8083B030(arg0, arg1);
            func_8082FC60(arg0);
            return;
        }
        if (((bitwise f32) sp44 == 0.0f) && (arg0->linearVelocity == 0.0f)) {
            func_8083692C(arg0, arg1);
            return;
        }
        temp_v0_3 = sp42 - arg0->currentYaw;
        var_v1 = temp_v0_3;
        if (temp_v0_3 < 0) {
            var_v1 = -temp_v0_3;
        }
        if (var_v1 >= 0x4001) {
            if (Math_StepToF(&arg0->linearVelocity, 0.0f, 1.5f) != 0) {
                arg0->currentYaw = sp42;
            }
        } else {
            sp34 = (s32) var_v1;
            Math_AsymStepToF(&arg0->linearVelocity, (bitwise f32) sp44 * 0.4f, 1.5f, 1.5f);
            Math_ScaledStepToS(&arg0->currentYaw, sp42, (s16) (s32) ((f32) var_v1 * 0.1f));
        }
    }
}

void func_8084A5C0(Player* arg0, PlayState* arg1) {
    s16 sp34;
    s16 sp32;
    s32 sp2C;
    s16 sp2A;
    s32 temp_v0;

    func_8083EE60(arg0, arg1);
    if (func_80833058(arg1, arg0, D_8085D004, (s8* )1) == 0) {
        if (func_8082FC24(arg0) == 0) {
            func_8083A844(arg0, (s16) arg1, arg0->currentYaw);
            return;
        }
        func_80832F78((f32* ) arg0, &sp34, (bitwise f32) &sp32, NULL, (Player* ) arg1);
        temp_v0 = func_8083E514(arg0, (f32* ) &sp34, &sp32, arg1);
        if (temp_v0 >= 0) {
            sp2C = temp_v0;
            if (func_8083F190(arg0, (f32* ) &sp34, &sp32, (Player* ) arg1) == 0) {
                if (sp2C != 0) {
                    func_8083A794(arg0, arg1);
                    return;
                }
                if ((bitwise f32) sp34 > 4.9f) {
                    func_8083B030(arg0, arg1);
                    return;
                }
                func_8083AF30(arg0, arg1);
            }
        } else {
            sp2A = sp32 - arg0->currentYaw;
            Math_AsymStepToF(&arg0->linearVelocity, (bitwise f32) sp34 * 1.5f, 1.5f, 2.0f);
            Math_ScaledStepToS(&arg0->currentYaw, sp32, (s16) (s32) ((f32) sp2A * 0.1f));
            if (((bitwise f32) sp34 == 0.0f) && (arg0->linearVelocity == 0.0f)) {
                func_8083692C(arg0, arg1);
            }
        }
    }
}

void func_8084A794(Player* arg0, PlayState* arg1) {
    s32 sp34;
    s16 sp30;
    s16 sp2E;

    sp34 = LinkAnimation_Update(arg1, &arg0->skelAnime);
    func_80832F24(arg0);
    if ((func_80833058(arg1, arg0, D_8085D004, (s8* )1) == 0) && (func_80832F78((f32* ) arg0, &sp30, (bitwise f32) &sp2E, NULL, (Player* ) arg1), (arg0->linearVelocity == 0.0f))) {
        arg0->currentYaw = arg0->actor.shape.rot.y;
        if (func_8083E514(arg0, (f32* ) &sp30, &sp2E, arg1) > 0) {
            func_8083A794(arg0, arg1);
            return;
        }
        if (((bitwise f32) sp30 != 0.0f) || (sp34 != 0)) {
            func_8083F230(arg0, arg1);
        }
    }
}

void func_8084A884(Player* arg0, PlayState* arg1) {
    s32 sp1C;

    sp1C = LinkAnimation_Update(arg1, &arg0->skelAnime);
    if ((func_80833058(arg1, arg0, D_8085D004, (s8* )1) == 0) && (sp1C != 0)) {
        func_8083692C(arg0, arg1);
    }
}

void func_8084A8E8(Player* arg0, PlayState* arg1) {
    s16 sp3C;
    s16 sp3A;
    s32 sp2C;
    f32 temp_fv0;
    s16 temp_v0;
    s16 var_v1;
    s32 var_v0;

    func_8083F27C(arg1, arg0);
    if (func_80833058(arg1, arg0, D_8085D00C, (s8* )1) == 0) {
        if (func_8082FC24(arg0) == 0) {
            func_8083A794(arg0, arg1);
            return;
        }
        func_80832F78((f32* ) arg0, &sp3C, (bitwise f32) &sp3A, NULL, (Player* ) arg1);
        if (func_80123434(arg0) != 0) {
            var_v0 = func_8083E514(arg0, (f32* ) &sp3C, &sp3A, arg1);
        } else {
            var_v0 = func_8083E404(arg0, (bitwise f32) sp3C, sp3A);
        }
        if (var_v0 > 0) {
            func_8083A794(arg0, arg1);
            return;
        }
        if (var_v0 < 0) {
            if (func_80123434(arg0) != 0) {
                func_8083AECC(arg0, sp3A, arg1);
                return;
            }
            func_8083AF8C(arg0, sp3A, arg1);
            return;
        }
        if ((arg0->linearVelocity < 3.6f) && ((bitwise f32) sp3C < 4.0f)) {
            if ((func_80123420(arg0) == 0) && (func_80123434(arg0) != 0)) {
                func_8083AF30(arg0, arg1);
                return;
            }
            func_80836988(arg0, arg1);
            return;
        }
        func_8083E8E0(arg0, (bitwise f32) sp3C, sp3A);
        temp_v0 = sp3A - arg0->currentYaw;
        var_v1 = temp_v0;
        if (temp_v0 < 0) {
            var_v1 = -temp_v0;
        }
        if (var_v1 >= 0x4001) {
            if (Math_StepToF(&arg0->linearVelocity, 0.0f, 3.0f) != 0) {
                arg0->currentYaw = sp3A;
            }
        } else {
            temp_fv0 = (bitwise f32) sp3C * 0.9f;
            sp2C = (s32) var_v1;
            sp3C = temp_fv0;
            Math_AsymStepToF(&arg0->linearVelocity, temp_fv0, 2.0f, 3.0f);
            Math_ScaledStepToS(&arg0->currentYaw, sp3A, (s16) (s32) ((f32) var_v1 * 0.1f));
        }
    }
}

void func_8084AB4C(Player* arg0, PlayState* arg1) {
    s16 sp34;
    s16 sp32;

    LinkAnimation_Update(arg1, &arg0->skelAnime);
    if (Player_IsHoldingTwoHandedWeapon(arg0) != 0) {
        AnimationContext_SetLoadFrame(arg1, func_8082ED20(arg0), 0, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.morphTable);
        AnimationContext_SetCopyTrue(arg1, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.jointTable, arg0->skelAnime.morphTable, D_8085B9F0);
    }
    func_80832F78((f32* ) arg0, &sp34, (bitwise f32) &sp32, (PlayState* )0x3C9374BC, (Player* ) arg1);
    if ((arg0 != arg1->actorCtx.actorLists[2].first) && (arg0->unk_730 == NULL)) {
        sp32 = arg0->actor.home.rot.y;
    }
    if (func_80833058(arg1, arg0, &D_8085D018, (s8* )1) == 0) {
        if ((bitwise f32) sp34 != 0.0f) {
            arg0->actor.shape.rot.y = sp32;
            func_8083A794(arg0, arg1);
        } else if (Math_ScaledStepToS(&arg0->actor.shape.rot.y, sp32, arg0->unk_B4E) != 0) {
            func_80839E74(arg0, arg1);
        }
        arg0->currentYaw = arg0->actor.shape.rot.y;
    }
}

void func_8084AC84(Player* arg0, PlayState* arg1) {
    s16 sp3C;
    s16 sp32;
    s16 sp30;
    f32 temp_fv0;
    f32 temp_fv1;

    arg0->stateFlags2 |= 0x20;
    if (arg0->linearVelocity < 1.0f) {
        arg0->skelAnime.animation = &D_0400D228;
    } else {
        arg0->skelAnime.animation = &D_0400D220;
    }
    LinkAnimation_Update(arg1, &arg0->skelAnime);
    if ((func_80847880(arg1, arg0) == 0) && ((func_80833058(arg1, arg0, D_8085D01C, (s8* )1) == 0) || (arg0->unk_748 == func_8084AC84))) {
        if (~(D_80862B44->cur.button | ~0x4000) != 0) {
            func_80839E74(arg0, arg1);
            return;
        }
        arg0->linearVelocity = arg0->unk_B48;
        func_80832F78((f32* ) arg0, &sp3C, (bitwise f32) &sp32, (PlayState* )0x3C9374BC, (Player* ) arg1);
        sp30 = sp32;
        if (func_8083A4A4(arg0, (f32* ) &sp3C, &sp32, (f32) gGameInfo->data[0x2B] / 100.0f) == 0) {
            func_8083CB04(arg0, (bitwise f32) sp3C, sp32, (f32) gGameInfo->data[0x13] / 100.0f, 1.5f, (s16) 0x3E8);
            func_8083C8E8(arg0, arg1);
            if ((arg0->linearVelocity == 0.0f) && ((bitwise f32) sp3C == 0.0f)) {
                arg0->currentYaw = sp30;
                arg0->actor.shape.rot.y = arg0->currentYaw;
            }
        }
        temp_fv1 = arg0->skelAnime.animLength * 0.5f;
        temp_fv0 = arg0->skelAnime.curFrame + 5.0f;
        arg0->unk_B48 = arg0->linearVelocity;
        arg0->linearVelocity *= Math_CosS((s16) (s32) ((temp_fv0 - (temp_fv1 * (f32) (s32) (temp_fv0 / temp_fv1))) * 1000.0f)) * 0.4f;
    }
}

void func_8084AEEC(Player* arg0, PlayState* arg1) {
    arg0->stateFlags2 |= 0x20;
    LinkAnimation_Update(arg1, arg0 + 0x240);
    func_80832F24(arg0);
    if ((func_80847880(arg1, arg0) == 0) && ((func_80833058(arg1, arg0, D_8085D01C, NULL) == 0) || (arg0->unk_748 == func_8084AEEC)) && (~(D_80862B44->cur.button | ~0x4000) != 0)) {
        func_80839E74(arg0, arg1);
    }
}

void func_8084AF9C(Player* arg0, PlayState* arg1) {
    s16 sp2C;
    s16 sp2A;

    arg0->stateFlags2 |= 0x20;
    func_8083F57C(arg0, arg1);
    if (func_80833058(arg1, arg0, D_8085D028, (s8* )1) == 0) {
        if (func_8082FC24(arg0) != 0) {
            func_8083A794(arg0, arg1);
            return;
        }
        func_80832F78((f32* ) arg0, &sp2C, (bitwise f32) &sp2A, (PlayState* )0x3C9374BC, (Player* ) arg1);
        if (arg0->currentMask == 4) {
            sp2C = (bitwise f32) sp2C * 1.5f;
        }
        if (func_8083A4A4(arg0, (f32* ) &sp2C, &sp2A, (f32) gGameInfo->data[0x2B] / 100.0f) == 0) {
            func_8083CB58(arg0, (s16) (s32) sp2C, (Player* ) sp2A);
            func_8083C8E8(arg0, arg1);
            if ((arg0->linearVelocity == 0.0f) && ((bitwise f32) sp2C == 0.0f)) {
                func_80839E3C(arg0, arg1);
            }
        }
    }
}

void func_8084B0EC(Player* arg0, PlayState* arg1) {
    s16 sp2C;
    s16 sp2A;

    arg0->stateFlags2 |= 0x20;
    func_8083F57C(arg0, arg1);
    if (func_80833058(arg1, arg0, D_8085D034, (s8* )1) == 0) {
        if (func_8082FC24(arg0) == 0) {
            func_8083A794(arg0, arg1);
            return;
        }
        func_80832F78((f32* ) arg0, &sp2C, (bitwise f32) &sp2A, NULL, (Player* ) arg1);
        if (func_8083A4A4(arg0, (f32* ) &sp2C, &sp2A, (f32) gGameInfo->data[0x2B] / 100.0f) == 0) {
            if (((func_80123434(arg0) != 0) && ((bitwise f32) sp2C != 0.0f) && (func_8083E514(arg0, (f32* ) &sp2C, &sp2A, arg1) <= 0)) || ((func_80123434(arg0) == 0) && (func_8083E404(arg0, (bitwise f32) sp2C, sp2A) <= 0))) {
                func_80836988(arg0, arg1);
                return;
            }
            func_8083CB58(arg0, (s16) (s32) sp2C, (Player* ) sp2A);
            func_8083C8E8(arg0, arg1);
            if ((arg0->linearVelocity == 0.0f) && ((bitwise f32) sp2C == 0.0f)) {
                func_80836988(arg0, arg1);
            }
        }
    }
}

void func_8084B288(Player* arg0, PlayState* arg1) {
    s32 sp34;
    s16 sp30;
    s16 sp2E;

    sp34 = LinkAnimation_Update(arg1, &arg0->skelAnime);
    if (func_80833058(arg1, arg0, D_8085D00C, (s8* )1) == 0) {
        if (func_8082FC24(arg0) == 0) {
            func_8083A794(arg0, arg1);
            return;
        }
        func_80832F78((f32* ) arg0, &sp30, (bitwise f32) &sp2E, NULL, (Player* ) arg1);
        if ((arg0->skelAnime.morphWeight == 0.0f) && (arg0->skelAnime.curFrame > 5.0f)) {
            func_80832F24(arg0);
            if ((arg0->skelAnime.curFrame > 10.0f) && (func_8083E404(arg0, (bitwise f32) sp30, sp2E) < 0)) {
                func_8083AF8C(arg0, sp2E, arg1);
                return;
            }
            if (sp34 != 0) {
                func_8083B090(arg0, arg1);
            }
        }
    }
}

void func_8084B3B8(Player* arg0, PlayState* arg1) {
    s32 sp34;
    s16 sp30;
    s16 sp2E;

    sp34 = LinkAnimation_Update(arg1, &arg0->skelAnime);
    func_80832F24(arg0);
    if ((func_80833058(arg1, arg0, D_8085D044, (s8* )1) == 0) && (func_80832F78((f32* ) arg0, &sp30, (bitwise f32) &sp2E, NULL, (Player* ) arg1), (arg0->linearVelocity == 0.0f))) {
        arg0->currentYaw = arg0->actor.shape.rot.y;
        if (func_8083E404(arg0, (bitwise f32) sp30, sp2E) > 0) {
            func_8083A794(arg0, arg1);
            return;
        }
        if (((bitwise f32) sp30 != 0.0f) || (sp34 != 0)) {
            func_80836988(arg0, arg1);
        }
    }
}

void func_8084B4A8(Player* arg0, PlayState* arg1) {
    s16 temp_v0;
    s16 var_v1;

    if (&D_0400DB10 == arg0->skelAnime.animation) {
        if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
            func_8082E794(arg0);
            func_8082E438(arg1, arg0, (D_8085BE84 + 0x2E8)[arg0->modelAnimType]);
        }
    } else {
        func_8082E67C(arg1, arg0, (D_8085BE84 + 0x300)[arg0->modelAnimType]);
    }
    temp_v0 = arg0->unk_AE8;
    if (temp_v0 == 0) {
        var_v1 = 0;
    } else {
        arg0->unk_AE8 = temp_v0 - 1;
        var_v1 = arg0->unk_AE8;
    }
    if (var_v1 == 0) {
        if (func_80838A90(arg0, arg1) == 0) {
            func_80836A98(arg0, (D_8085BE84 + 0x318)[arg0->modelAnimType], arg1);
        }
        arg0->actor.flags &= ~0x100;
        func_800E0238(Play_GetCamera(arg1, 0));
    }
}

void func_8084B5C0(Player* arg0, PlayState* arg1) {
    f32 sp54;
    f32 sp50;
    s16 sp4E;
    s16 sp4C;
    s16 sp4A;
    s16 sp46;
    f32 sp40;
    SkelAnime* sp34;
    Input* temp_v0;
    SkelAnime* temp_a1;
    s16 temp_a0;
    s16 var_a1;
    s16 var_a2;
    s16 var_a3;
    s32 temp_ft0;
    s32 temp_ft3;
    s32 temp_ft4;
    s32 temp_ft5;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v1;
    s32 var_v1_2;

    func_80832F24(arg0);
    temp_a1 = &arg0->skelAnime;
    if (arg0->transformation == 1) {
        SkelAnime_Update(&arg0->unk_2C8);
        if (func_8083FE38(arg0, arg1) == 0) {
            if (func_8083A274(arg0, arg1) == 0) {
                arg0->stateFlags1 &= 0xFFBFFFFF;
                if (arg0->heldItemActionParam < 0) {
                    func_80123C58(arg0);
                }
                func_80836A98(arg0, (D_8085BE84 + 0x1F8)[arg0->modelAnimType], arg1);
                func_80830B38(arg0);
                return;
            }
            arg0->stateFlags1 |= 0x400000;
        }
    } else {
        sp34 = temp_a1;
        if (LinkAnimation_Update(arg1, temp_a1) != 0) {
            if (Player_IsGoronOrDeku(arg0) == 0) {
                func_8082DB3C(arg1, arg0, (D_8085BE84 + 0x1E0)[arg0->modelAnimType]);
            }
            arg0->unk_AE8 = 1;
            arg0->unk_AE7 = 0;
        }
        if (Player_IsGoronOrDeku(arg0) == 0) {
            arg0->stateFlags1 |= 0x400000;
            func_8083216C(arg0, arg1);
            arg0->stateFlags1 &= 0xFFBFFFFF;
            if (arg0->transformation == 2) {
                func_8082F164(arg0, 0x4010U);
            }
        }
        if (arg0->unk_AE8 != 0) {
            temp_v0 = D_80862B44;
            sp54 = (f32) (temp_v0->rel.stick_y * 0xB4);
            sp50 = (f32) (temp_v0->rel.stick_x * -0x78);
            temp_a0 = arg0->actor.shape.rot.y - Camera_GetInputDirYaw(arg1->cameraPtrs[arg1->activeCamId]);
            sp4E = temp_a0;
            sp40 = Math_CosS(temp_a0);
            temp_ft4 = (s32) ((Math_SinS(temp_a0) * sp50) + (sp54 * sp40));
            sp4C = (s16) temp_ft4;
            sp40 = Math_CosS(temp_a0);
            var_a1 = (s16) temp_ft4;
            temp_ft5 = (s32) ((sp50 * sp40) - (Math_SinS(temp_a0) * sp54));
            sp4A = (s16) temp_ft5;
            if (var_a1 >= 0xDAD) {
                var_a1 = 0xDAC;
            }
            temp_v0_2 = var_a1 - arg0->actor.focus.rot.x;
            var_v1 = temp_v0_2;
            if (temp_v0_2 < 0) {
                var_v1 = -temp_v0_2;
            }
            temp_ft3 = (s32) ((f32) var_v1 * 0.25f);
            var_a2 = (s16) temp_ft3;
            if ((s16) temp_ft3 < 0x64) {
                var_a2 = 0x64;
            }
            temp_v0_3 = (s16) temp_ft5 - arg0->unk_AB2.y;
            if (temp_v0_3 < 0) {
                var_v1_2 = -temp_v0_3;
            } else {
                var_v1_2 = temp_v0_3;
            }
            temp_ft0 = (s32) ((f32) var_v1_2 * 0.25f);
            var_a3 = (s16) temp_ft0;
            if ((s16) temp_ft0 < 0x32) {
                var_a3 = 0x32;
            }
            sp46 = var_a3;
            Math_ScaledStepToS(&arg0->actor.focus.rot.x, var_a1, var_a2);
            arg0->unk_AB2.x = arg0->actor.focus.rot.x;
            Math_ScaledStepToS(&arg0->unk_AB2.y, sp4A, var_a3);
            if (arg0->unk_AE7 != 0) {
                if (func_808401F4(arg1, &arg0->actor) == 0) {
                    if (arg0->skelAnime.curFrame < 2.0f) {
                        func_8082FA5C(arg1, arg0, 1);
                    }
                } else {
                    arg0->unk_AE8 = 1;
                    arg0->unk_AE7 = 0;
                }
                goto block_40;
            }
            if (func_8083FE38(arg0, arg1) == 0) {
                if (func_8083A274(arg0, arg1) != 0) {
                    func_8083FD80(arg0, arg1);
                    goto block_40;
                }
                arg0->stateFlags1 &= 0xFFBFFFFF;
                func_8082DC38(arg0);
                if (Player_IsGoronOrDeku(arg0) != 0) {
                    func_80836A5C(arg0, arg1);
                    LinkAnimation_Change(arg1, sp34, (LinkAnimationHeader* ) arg0->skelAnime.animation, 1.0f, (f32) Animation_GetLastFrame(arg0->skelAnime.animation), 0.0f, (u8) 2, 0.0f);
                } else {
                    if (arg0->heldItemActionParam < 0) {
                        func_80123C58(arg0);
                    }
                    func_80836A98(arg0, (D_8085BE84 + 0x1F8)[arg0->modelAnimType], arg1);
                }
                func_800B8E58(arg0, 0x1826U);
            }
        } else {
block_40:
            arg0->stateFlags1 |= 0x400000;
            Player_SetModelsForHoldingShield(arg0);
            arg0->unk_AA6 |= 0xC1;
        }
    }
}

void func_8084BAA4(Player* arg0, PlayState* arg1) {
    LinkAnimationHeader* sp38;
    SkelAnime* sp30;
    LinkAnimationHeader* temp_a0;
    SkelAnime* temp_a2;
    f32 temp_fv0;
    s32 temp_v0;

    func_80832F24(arg0);
    if (arg0->unk_AE7 == 0) {
        D_80862B04 = func_8083216C(arg0, arg1);
        if ((arg0->unk_AC4 == func_8084894C) || (func_808331FC((Player* ) arg1, (s8* ) arg0, &arg0->unk_284, 4.0f) > 0)) {
            func_80831494(arg1, arg0, func_80849A9C, 1);
        }
    } else {
        temp_a2 = &arg0->skelAnime;
        arg0->stateFlags1 |= 0x400000;
        sp30 = temp_a2;
        temp_v0 = func_808331FC((Player* ) arg1, (s8* ) arg0, temp_a2, 4.0f);
        if ((temp_v0 != 0) && ((temp_v0 > 0) || (LinkAnimation_Update(arg1, sp30) != 0))) {
            func_80831494(arg1, arg0, func_8084B5C0, 1);
            Player_SetModelsForHoldingShield(arg0);
            temp_a0 = (D_8085BE84 + 0x1C8)[arg0->modelAnimType];
            sp38 = temp_a0;
            temp_fv0 = (f32) Animation_GetLastFrame(temp_a0);
            LinkAnimation_Change(arg1, sp30, sp38, 1.0f, temp_fv0, temp_fv0, (u8) 2, 0.0f);
        }
    }
}

void func_8084BBF0(Player* arg0, PlayState* arg1) {
    s32 sp1C;
    SkelAnime* sp18;
    SkelAnime* temp_a2;
    s32 temp_v0;

    func_80832F24(arg0);
    temp_a2 = &arg0->skelAnime;
    sp18 = temp_a2;
    temp_v0 = func_808331FC((Player* ) arg1, (s8* ) arg0, temp_a2, 16.0f);
    if ((temp_v0 != 0) && ((sp1C = temp_v0, (LinkAnimation_Update(arg1, temp_a2) != 0)) || (sp1C > 0))) {
        func_80836988(arg0, arg1);
    }
}

void func_8084BC64(Player* arg0, PlayState* arg1) {
    LinkAnimationHeader* var_a2_2;
    s16 temp_t2;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_a2;
    s32 temp_v0_2;

    arg0->stateFlags2 |= 0x60;
    func_808345A8(arg0);
    if (((arg0->stateFlags1 * 4) >= 0) && (arg0->unk_AE8 == 0) && (arg0->unk_B75 != 0)) {
        temp_v0 = arg0->unk_B76;
        temp_t2 = arg0->actor.shape.rot.y;
        arg0->actor.shape.rot.y = temp_v0;
        temp_v1 = temp_t2 - temp_v0;
        arg0->currentYaw = temp_v0;
        arg0->linearVelocity = arg0->unk_B78;
        if (temp_v1 < 0) {
            var_a2 = -temp_v1;
        } else {
            var_a2 = temp_v1;
        }
        if (var_a2 >= 0x4001) {
            arg0->actor.shape.rot.y = temp_v0 + 0x8000;
        }
        if (arg0->actor.velocity.y < 0.0f) {
            arg0->actor.gravity = 0.0f;
            arg0->actor.velocity.y = 0.0f;
        }
    }
    if ((LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) && (arg0->actor.bgCheckFlags & 1)) {
        temp_v1_2 = arg0->unk_AE8;
        if (temp_v1_2 != 0) {
            arg0->unk_AE8 = temp_v1_2 - 1;
            if (arg0->unk_AE8 == 0) {
                func_8085B384(arg0, arg1, M2C_ERROR(Read from unset register $a2));
            }
        } else {
            temp_v0_2 = arg0->stateFlags1 & 0x20000000;
            if ((temp_v0_2 != 0) || (!(arg0->cylinder.base.acFlags & 2) && (arg0->unk_B75 == 0))) {
                if (temp_v0_2 != 0) {
                    arg0->unk_AE8 = temp_v1_2 + 1;
                } else {
                    func_80831494(arg1, arg0, func_8084BE40, 0);
                    arg0->stateFlags1 |= 0x04000000;
                }
                var_a2_2 = &D_0400DAD8;
                if (arg0->actor.shape.rot.y != arg0->currentYaw) {
                    var_a2_2 = &D_0400DC80;
                }
                func_8082DB18(arg1, arg0, var_a2_2);
                func_8082DF8C(arg0, 0x6806U);
            }
        }
    }
    if (arg0->actor.bgCheckFlags & 2) {
        func_8082E094(arg0, 0x850U);
    }
}

void func_8084BE40(Player* arg0, PlayState* arg1) {
    LinkAnimationHeader* var_a2;

    arg0->stateFlags2 |= 0x60;
    func_808345A8(arg0);
    func_80832F24(arg0);
    if ((LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) && (arg0->linearVelocity == 0.0f)) {
        if ((arg0->stateFlags1 * 4) < 0) {
            arg0->unk_AE8 += 1;
        } else {
            func_80831494(arg1, arg0, func_8084BF28, 0);
            arg0->stateFlags1 |= 0x04000000;
        }
        var_a2 = &D_0400DAE0;
        if (arg0->actor.shape.rot.y != arg0->currentYaw) {
            var_a2 = &D_0400DC88;
        }
        func_8082DB90(arg1, arg0, var_a2);
        arg0->currentYaw = arg0->actor.shape.rot.y;
    }
}

void func_8084BF28(Player* arg0, PlayState* arg1) {
    s32 sp24;
    SkelAnime* sp20;
    SkelAnime* temp_a2;
    s32 temp_v0;

    arg0->stateFlags2 |= 0x20;
    func_808345A8(arg0);
    temp_a2 = &arg0->skelAnime;
    if ((arg0->stateFlags1 * 4) < 0) {
        LinkAnimation_Update(arg1, &arg0->skelAnime);
    } else {
        sp20 = temp_a2;
        temp_v0 = func_808331FC((Player* ) arg1, (s8* ) arg0, temp_a2, 16.0f);
        if ((temp_v0 != 0) && ((sp24 = temp_v0, (LinkAnimation_Update(arg1, temp_a2) != 0)) || (sp24 > 0))) {
            func_80836988(arg0, arg1);
        }
    }
    func_8082E224(arg0, D_8085D604);
}

void func_8084BFDC(Player* arg0, PlayState* arg1) {
    SkelAnime* sp24;
    SkelAnime* temp_a2;
    u32 temp_a0;
    void* temp_v0;

    if ((arg0->transformation != 1) && (arg0->actor.depthInWater <= 0.0f) && ((arg1->roomCtx.currRoom.unk2 == 3) || (temp_a0 = D_80862B08, (temp_a0 == 9)) || ((func_808340AC(temp_a0) >= 0) && (SurfaceType_IsWallDamage(&arg1->colCtx, arg0->actor.floorPoly, (s32) arg0->actor.floorBgId) == 0)))) {
        func_808344C0(arg1, arg0);
    }
    func_80832F24(arg0);
    temp_a2 = &arg0->skelAnime;
    sp24 = temp_a2;
    if (LinkAnimation_Update(arg1, temp_a2) != 0) {
        if (arg0 == arg1->actorCtx.actorLists[2].first) {
            func_80840770(arg1, arg0, temp_a2);
        }
    } else {
        temp_v0 = arg0->skelAnime.animation;
        if (&D_0400D698 == temp_v0) {
            func_8082E224(arg0, D_8085D60C);
            return;
        }
        if ((&D_0400DC28 == temp_v0) && (LinkAnimation_OnFrame(temp_a2, 88.0f) != 0)) {
            func_8082E094(arg0, 0x850U);
        }
    }
}

? func_8084C124(PlayState* arg1) {
    if (func_80837730(arg1, (Player* )0x40400000, 7e-43.0f) != 0) {
        func_800B8E58((Player* ) arg1, 0x2889U);
        return 1;
    }
    return 0;
}

void func_8084C16C(Player* arg0, PlayState* arg1) {
    s16 sp44;
    s16 sp42;
    Actor* sp3C;
    s16 sp3A;
    SkelAnime* sp34;
    Actor* temp_a2;
    SkelAnime* temp_a1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    s16 temp_v0_2;
    s8 temp_v0;
    u8 temp_v0_3;

    if (func_80123420(arg0) != 0) {
        arg0->actor.gravity = -1.2f;
    }
    if (!(arg0->actor.bgCheckFlags & 1)) {
        func_80832F78((f32* ) arg0, &sp44, (bitwise f32) &sp42, NULL, (Player* ) arg1);
        if (arg0->stateFlags1 & 0x800) {
            temp_a2 = arg0->heldActor;
            sp3C = temp_a2;
            if ((func_808313A8(arg1, arg0, temp_a2) == 0) && (temp_a2->id == 0x11) && (D_80862B44->press.button & 0xC007)) {
                func_808409A8(arg1, arg0, arg0->linearVelocity + 2.0f, arg0->actor.velocity.y + 2.0f);
            }
        }
        temp_a1 = &arg0->skelAnime;
        sp34 = temp_a1;
        LinkAnimation_Update(arg1, temp_a1);
        if ((&D_0400DD50 == arg0->skelAnime.animation) && (LinkAnimation_OnFrame(sp34, 4.0f) != 0)) {
            func_800B8E58(arg0, 0x83CU);
        }
        if (arg0->transformation == 3) {
            sp3A = arg0->currentYaw;
            func_808378FC((Player* ) arg1, arg0);
            func_8083CBC4(arg0, (bitwise f32) sp44 * 0.5f, sp42, 2.0f, 0.2f, 0.1f, (s16) 0x190);
            if (&D_0400E270 == arg0->skelAnime.animation) {
                arg0->stateFlags2 |= 0x60;
                arg0->unk_B08[2] += -800.0f;
                temp_fv0 = arg0->unk_B08[2];
                arg0->actor.shape.rot.y += (s32) temp_fv0 + (arg0->currentYaw - sp3A);
                Math_StepToF(&arg0->unk_B08[3], 0.0f, temp_fv0);
            }
        } else {
            func_8083CBC4(arg0, (bitwise f32) sp44, sp42, 1.0f, 0.05f, 0.1f, (s16) 0xC8);
        }
        func_8083216C(arg0, arg1);
        if ((((arg0->stateFlags2 & 0x80000) && ((temp_v0 = arg0->unk_AE7, (temp_v0 == 2)) || (temp_v0 >= 4))) || (func_80839770(arg0, (Player* ) arg1) == 0)) && (arg0->actor.velocity.y < 0.0f)) {
            temp_v0_2 = arg0->unk_AE8;
            if (temp_v0_2 >= 0) {
                if ((arg0->actor.bgCheckFlags & 8) || (temp_v0_2 == 0) || (arg0->unk_B6A > 0)) {
                    if ((D_80862B18 > 800.0f) || (arg0->stateFlags3 & 0x10000)) {
                        func_80840980(arg0, 0x6807);
                        arg0->stateFlags3 &= 0xFFFEFFFF;
                    }
                    LinkAnimation_Change(arg1, sp34, &D_0400DD10, 1.0f, 0.0f, 0.0f, (u8) 2, 8.0f);
                    arg0->unk_AE8 = -1;
                }
            } else {
                if ((temp_v0_2 == -1) && (arg0->unk_B6A >= 0x79) && (D_80862B18 > 280.0f)) {
                    arg0->unk_AE8 = -2;
                    func_80840980(arg0, 0x6808);
                }
                if ((arg0->actor.bgCheckFlags & 0x200) && !(arg0->stateFlags1 & 0x08000800) && (arg0->linearVelocity > 0.0f)) {
                    temp_v0_3 = arg0->transformation;
                    if ((temp_v0_3 != 1) && ((temp_v0_3 != 3) || (arg0->unk_B67 != 0))) {
                        temp_fv0_2 = arg0->unk_B54;
                        if ((temp_fv0_2 >= 150.0f) && (arg0->unk_AE3[arg0->unk_ADE] == 0)) {
                            if (func_8083D860((bitwise Actor* ) 150.0f, (PlayState* ) arg0, (Actor* ) arg1) != 0) {
                                func_8084C124(arg1, arg0);
                            }
                        } else if ((s32) arg0->unk_B5C >= 2) {
                            temp_fv1 = arg0->ageProperties->unk_08;
                            if ((temp_fv0_2 < (150.0f * temp_fv1)) && ((70.0f * temp_fv1) < ((arg0->actor.world.pos.y - arg0->actor.floorHeight) + temp_fv0_2))) {
                                AnimationContext_DisableQueue(arg1);
                                if (arg0->stateFlags3 & 0x10000) {
                                    func_8082DF8C(arg0, 0x6819U);
                                } else {
                                    func_8082DF8C(arg0, 0x6803U);
                                }
                                arg0->actor.world.pos.y += arg0->unk_B54;
                                func_80837CEC(arg1, arg0, arg0->actor.wallPoly, arg0->unk_B58, (D_8085BE84 + 0x390)[arg0->modelAnimType]);
                                arg0->currentYaw += 0x8000;
                                arg0->stateFlags1 |= 0x2000;
                                arg0->actor.shape.rot.y = arg0->currentYaw;
                                func_8084C124(arg1, arg0);
                            }
                        }
                    }
                }
            }
        }
    } else {
        func_80837134(arg1, arg0, &sp42);
        func_8083216C(arg0, arg1);
    }
    func_80838A90(arg0, arg1);
}

void func_8084C6EC(Player* arg0, PlayState* arg1) {
    s32 sp44;
    s16 sp3C;                                       /* compiler-managed */
    ? sp3A;
    SkelAnime* sp30;
    SkelAnime* temp_a1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 temp_v0;
    s32 var_v0;

    arg0->stateFlags2 |= 0x20;
    arg0->stateFlags3 |= 0x08000000;
    temp_a1 = &arg0->skelAnime;
    sp30 = temp_a1;
    sp44 = LinkAnimation_Update(arg1, temp_a1);
    if (LinkAnimation_OnFrame(sp30, 8.0f) != 0) {
        func_808339B4(arg0, -0xA);
    }
    temp_fv0 = arg0->skelAnime.curFrame;
    if (temp_fv0 >= 8.0f) {
        if (temp_fv0 < 18.0f) {
            func_8082F0E4(arg0, 0x04000000U, 1, 0xC);
        } else {
            func_8082F09C(arg0);
        }
    }
    if (func_8083FE38(arg0, arg1) == 0) {
        if (arg0->unk_AE8 != 0) {
            Math_StepToF(&arg0->linearVelocity, 0.0f, 2.0f);
            temp_v0 = func_808331FC((Player* ) arg1, (s8* ) arg0, sp30, 5.0f);
            if ((temp_v0 != 0) && ((temp_v0 > 0) || (sp44 != 0))) {
                func_80836A5C(arg0, arg1);
            }
        } else if (func_80840A30(arg1, arg0, &arg0->linearVelocity, 6.0f) == 0) {
            if (!(arg0->skelAnime.curFrame < 15.0f)) {
                if (func_80848570(arg0, arg1) == 0) {
                    goto block_16;
                }
            } else {
block_16:
                if (arg0->skelAnime.curFrame >= 20.0f) {
                    func_80836A5C(arg0, arg1, &sp3A, 0x3C930000);
                    return;
                }
                func_80832F78((f32* ) arg0, &sp3C, (bitwise f32) &sp3A, (PlayState* )0x3C9374BC, (Player* ) arg1);
                temp_fv0_2 = (bitwise f32) sp3C * 1.5f;
                if ((temp_fv0_2 < 3.0f) || (sp3C = temp_fv0_2, (arg0->unk_AE3[arg0->unk_ADE] != 0))) {
                    sp3C = 3.0f;
                }
                func_8083CB58(arg0, (bitwise s16) sp3C, (Player* ) arg0->actor.shape.rot.y);
                if (func_8083FBC4(arg1, (PlayState* ) arg0) != 0) {
                    var_v0 = 0xC1;
                    if (arg0->unk_B72 == 0xE) {
                        var_v0 = 0x1AE;
                    }
                    func_800B8F98(&arg0->actor, var_v0 & 0xFFFF);
                }
                func_8082E224(arg0, D_8085D61C);
            }
        }
    }
}

void func_8084C94C(Player* arg0, PlayState* arg1) {
    arg0->stateFlags2 |= 0x20;
    if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
        func_8082DB3C(arg1, arg0, &D_0400DE60);
    }
    Math_StepToF(&arg0->linearVelocity, 0.0f, 0.05f);
    if (arg0->actor.bgCheckFlags & 1) {
        if (arg0->unk_B6A >= 0x190) {
            arg0->actor.colChkInfo.damage = 0x10;
            func_80833B18(arg1, arg0, (Player* )1, 4.0f, 5.0f, (s16) (s32) arg0->actor.shape.rot.y, 0x14);
            return;
        }
        func_80836B3C(arg1, arg0, 4.0f);
    }
}

void func_8084CA24(Player* arg0, PlayState* arg1) {
    arg0->stateFlags2 |= 0x20;
    if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
        func_8082DB60(arg1, arg0, &D_0400E3D8);
    }
    Math_SmoothStepToS(&arg0->unk_B88, 0, 6, 0x7D0, (s16) 0x190);
    if (func_80840A30(arg1, arg0, &arg0->linearVelocity, 0.0f) == 0) {
        if (arg0->actor.bgCheckFlags & 1) {
            if (arg0->unk_AAA >= 0x36B1) {
                arg0->actor.colChkInfo.damage = 0x10;
                func_80833B18(arg1, arg0, (Player* )1, 4.0f, 5.0f, (s16) (s32) arg0->actor.shape.rot.y, 0x14);
                return;
            }
            func_80836B3C(arg1, arg0, 4.0f);
            return;
        }
        arg0->actor.gravity = -1.0f;
        arg0->unk_AAA = Math_FAtan2F(arg0->actor.speedXZ, -arg0->actor.velocity.y);
        func_8082F164(arg0, 0x10U);
    }
}

void func_8084CB58(Player* arg0, PlayState* arg1) {
    struct _struct_D_8085CD30_0x10* sp3C;
    s16 sp38;
    ? sp36;
    f32 var_ft5;
    struct _struct_D_8085CD30_0x10* temp_v1;
    u8 temp_t3;

    temp_v1 = &D_8085CD30[arg0->meleeWeaponAnimation];
    arg0->stateFlags2 |= 0x20;
    if (arg0->transformation == 2) {
        arg0->actor.gravity = -0.8f;
    } else {
        arg0->actor.gravity = -1.2f;
    }
    sp3C = temp_v1;
    LinkAnimation_Update(arg1, &arg0->skelAnime);
    if (func_808401F4(arg1, &arg0->actor) == 0) {
        temp_t3 = temp_v1->unk_D;
        var_ft5 = (f32) temp_t3;
        if ((s32) temp_t3 < 0) {
            var_ft5 += 4294967296.0f;
        }
        func_8083FCF0(arg1, arg0, 6.0f, (f32) temp_v1->unk_C, var_ft5);
        if (!(arg0->actor.bgCheckFlags & 1)) {
            func_80832F78((f32* ) arg0, &sp38, (bitwise f32) &sp36, NULL, (Player* ) arg1);
            func_8083CBC4(arg0, (bitwise f32) sp38, arg0->currentYaw, 1.0f, 0.05f, 0.1f, (s16) 0xC8);
            return;
        }
        if (func_80836F10(arg1, arg0, &sp36) >= 0) {
            arg0->meleeWeaponAnimation += 3;
            func_80833864(arg1, arg0, (s32) arg0->meleeWeaponAnimation);
            arg0->unk_ADD = 3;
            arg0->meleeWeaponState = 0;
            func_8082E1BC(arg0);
        }
    }
}

void func_8084CCEC(Player* arg0, PlayState* arg1) {
    s16 sp34;
    s16 sp32;
    s32 temp_v0;

    arg0->stateFlags1 |= 0x1000;
    if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
        func_8082E794(arg0);
        func_8083133C(arg0);
        arg0->stateFlags1 &= 0xFFFDFFFF;
        func_8082DB3C(arg1, arg0, D_8085CF60[Player_IsHoldingTwoHandedWeapon(arg0)]);
        arg0->unk_AE8 = -1;
    }
    func_80832F24(arg0);
    if ((func_8083FE38(arg0, arg1) == 0) && (arg0->unk_AE8 != 0)) {
        func_80840F34(arg0);
        if (arg0->unk_AE8 < 0) {
            if (arg0->unk_B08[0] >= 0.1f) {
                arg0->unk_ADD = 0;
                arg0->unk_AE8 = 1;
                return;
            }
            if (~(D_80862B44->cur.button | ~0x4000) != 0) {
                func_80840E5C(arg0, arg1);
            }
        } else if (func_80840CD4(arg0, arg1) == 0) {
            func_80832F78((f32* ) arg0, &sp34, (bitwise f32) &sp32, NULL, (Player* ) arg1);
            temp_v0 = func_8083E7F8(arg0, (f32* ) &sp34, &sp32, arg1);
            if (temp_v0 > 0) {
                func_80840DEC(arg0, arg1);
                return;
            }
            if (temp_v0 < 0) {
                func_80840E24(arg0, arg1);
            }
        }
    }
}

void func_8084CE84(Player* arg0, PlayState* arg1) {
    f32 sp5C;
    f32 sp58;
    s16 sp54;
    s16 sp52;
    s32 sp44;
    s32 sp38;
    f32 temp_fa0;
    f32 temp_ft4;
    f32 temp_fv1;
    f32 var_fa0;
    f32 var_fa0_2;
    f32 var_fv0;
    f32 var_fv0_2;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_v0_2;

    temp_v0 = arg0->currentYaw - arg0->actor.shape.rot.y;
    var_v1 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -temp_v0;
    }
    temp_ft4 = fabsf(arg0->linearVelocity);
    var_fa0 = temp_ft4 * 1.5f;
    arg0->stateFlags1 |= 0x1000;
    if (var_fa0 < 1.5f) {
        var_fa0 = 1.5f;
    }
    if (var_v1 < 0x4000) {
        var_fv0 = -1.0f;
    } else {
        var_fv0 = 1.0f;
    }
    temp_fa0 = var_fv0 * var_fa0;
    sp5C = temp_ft4;
    func_8083EA44((bitwise Player* ) temp_fa0, 1.5f, (bitwise f32) arg0, temp_fa0);
    temp_fv1 = temp_ft4 * 0.5f;
    if (temp_fv1 < 0.5f) {
        var_fa0_2 = 0.5f;
    } else {
        if (temp_fv1 > 1.0f) {
            var_fv0_2 = 1.0f;
        } else {
            var_fv0_2 = temp_fv1;
        }
        var_fa0_2 = var_fv0_2;
    }
    sp58 = var_fa0_2;
    sp38 = Player_IsHoldingTwoHandedWeapon(arg0);
    LinkAnimation_BlendToJoint(arg1, &arg0->skelAnime, D_8085CF60[sp38], 0.0f, D_8085CF70[Player_IsHoldingTwoHandedWeapon(arg0)], arg0->unk_B38 * 0.7241379f, var_fa0_2, (Vec3s* ) arg0->unk_88A);
    if ((func_8083FE38(arg0, arg1) == 0) && (func_80840CD4(arg0, arg1) == 0)) {
        func_80840F34(arg0);
        func_80832F78((f32* ) arg0, &sp54, (bitwise f32) &sp52, NULL, (Player* ) arg1);
        temp_v0_2 = func_8083E7F8(arg0, (f32* ) &sp54, &sp52, arg1);
        if (temp_v0_2 < 0) {
            func_80840E24(arg0, arg1);
            return;
        }
        if (temp_v0_2 == 0) {
            sp54 = 0.0f;
            sp52 = arg0->currentYaw;
        }
        temp_v0_3 = sp52 - arg0->currentYaw;
        var_v1_2 = temp_v0_3;
        if (temp_v0_3 < 0) {
            var_v1_2 = -temp_v0_3;
        }
        if (var_v1_2 >= 0x4001) {
            if (Math_StepToF(&arg0->linearVelocity, 0.0f, 1.0f) != 0) {
                arg0->currentYaw = sp52;
            }
        } else {
            sp44 = (s32) var_v1_2;
            Math_AsymStepToF(&arg0->linearVelocity, (bitwise f32) sp54 * 0.2f, 1.0f, 0.5f);
            Math_ScaledStepToS(&arg0->currentYaw, sp52, (s16) (s32) ((f32) var_v1_2 * 0.1f));
            if (((bitwise f32) sp54 == 0.0f) && (arg0->linearVelocity == 0.0f)) {
                func_80840EC0(arg0, arg1);
            }
        }
    }
}

void func_8084D18C(Player* arg0, PlayState* arg1) {
    f32 sp5C;
    f32 sp58;
    s16 sp54;
    s16 sp52;
    s32 sp44;
    s32 sp38;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_fa0;
    f32 var_fa0_2;
    f32 var_fv1;
    f32 var_fv1_2;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 var_v0;
    s16 var_v1;
    s32 temp_v0;
    s32 var_v0_2;

    temp_fv0 = fabsf(arg0->linearVelocity);
    sp5C = temp_fv0;
    arg0->stateFlags1 |= 0x1000;
    if (temp_fv0 == 0.0f) {
        temp_v1 = arg0->unk_B4C;
        var_v0 = temp_v1;
        if (temp_v1 < 0) {
            var_v0 = -temp_v1;
        }
        var_v0_2 = -1;
        var_fv1 = (f32) var_v0 * 0.0015f;
        if (var_fv1 < 400.0f) {
            var_fv1 = 0.0f;
        }
        if (temp_v1 >= 0) {
            var_v0_2 = 1;
        }
        sp5C = var_fv1;
        func_8083EA44(arg0, (f32) var_v0_2 * var_fv1);
    } else {
        var_fa0 = temp_fv0 * 1.5f;
        if (var_fa0 < 1.5f) {
            var_fa0 = 1.5f;
        }
        func_8083EA44((bitwise Player* ) var_fa0, 1.5f, (bitwise f32) arg0, var_fa0);
    }
    temp_fv0_2 = sp5C * 0.5f;
    if (temp_fv0_2 < 0.5f) {
        var_fa0_2 = 0.5f;
    } else {
        if (temp_fv0_2 > 1.0f) {
            var_fv1_2 = 1.0f;
        } else {
            var_fv1_2 = temp_fv0_2;
        }
        var_fa0_2 = var_fv1_2;
    }
    sp58 = var_fa0_2;
    sp38 = Player_IsHoldingTwoHandedWeapon(arg0);
    LinkAnimation_BlendToJoint(arg1, &arg0->skelAnime, D_8085CF60[sp38], 0.0f, D_8085CF78[Player_IsHoldingTwoHandedWeapon(arg0)], arg0->unk_B38 * 0.7241379f, var_fa0_2, (Vec3s* ) arg0->unk_88A);
    if ((func_8083FE38(arg0, arg1) == 0) && (func_80840CD4(arg0, arg1) == 0)) {
        func_80840F34(arg0);
        func_80832F78((f32* ) arg0, &sp54, (bitwise f32) &sp52, NULL, (Player* ) arg1);
        temp_v0 = func_8083E7F8(arg0, (f32* ) &sp54, &sp52, arg1);
        if (temp_v0 > 0) {
            func_80840DEC(arg0, arg1);
            return;
        }
        if (temp_v0 == 0) {
            sp54 = 0.0f;
            sp52 = arg0->currentYaw;
        }
        temp_v0_2 = sp52 - arg0->currentYaw;
        var_v1 = temp_v0_2;
        if (temp_v0_2 < 0) {
            var_v1 = -temp_v0_2;
        }
        if (var_v1 >= 0x4001) {
            if (Math_StepToF(&arg0->linearVelocity, 0.0f, 1.0f) != 0) {
                arg0->currentYaw = sp52;
            }
        } else {
            sp44 = (s32) var_v1;
            Math_AsymStepToF(&arg0->linearVelocity, (bitwise f32) sp54 * 0.2f, 1.0f, 0.5f);
            Math_ScaledStepToS(&arg0->currentYaw, sp52, (s16) (s32) ((f32) var_v1 * 0.1f));
            if (((bitwise f32) sp54 == 0.0f) && (arg0->linearVelocity == 0.0f) && (sp5C == 0.0f)) {
                func_80840EC0(arg0, arg1);
            }
        }
    }
}

void func_8084D4EC(Player* arg0, PlayState* arg1) {
    s32 sp3C;
    SkelAnime* sp2C;
    SkelAnime* temp_a1;
    f32 temp_fv1;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    s32 temp_v0;
    s32 temp_v1;
    void* temp_v0_2;

    temp_a1 = &arg0->skelAnime;
    arg0->stateFlags2 |= 0x20;
    sp2C = temp_a1;
    temp_v1 = LinkAnimation_Update(arg1, temp_a1);
    if (&D_0400DA70 == arg0->skelAnime.animation) {
        arg0->linearVelocity = 1.0f;
        if (LinkAnimation_OnFrame(sp2C, 8.0f) != 0) {
            var_fv0 = arg0->unk_B54;
            temp_fv1 = arg0->ageProperties->unk_0C;
            if (temp_fv1 < var_fv0) {
                var_fv0 = temp_fv1;
            }
            if ((arg0->stateFlags1 * 0x10) < 0) {
                var_fv0_2 = var_fv0 * 0.085f;
            } else {
                var_fv0_2 = var_fv0 * 0.072f;
            }
            if (arg0->transformation == 4) {
                var_fv0_2 += 1.0f;
            }
            func_80834D50(arg1, arg0, NULL, var_fv0_2, (u16) 0x6814);
            arg0->unk_AE8 = -1;
        }
    } else {
        sp3C = temp_v1;
        temp_v0 = func_808331FC((Player* ) arg1, (s8* ) arg0, sp2C, 4.0f);
        if (temp_v0 == 0) {
            arg0->stateFlags1 &= 0xFFFBBFFB;
            return;
        }
        if ((temp_v1 != 0) || (temp_v0 > 0)) {
            func_80839E74(arg0, arg1);
            arg0->stateFlags1 &= 0xFFFBBFFB;
            arg0->unk_ABC = 0.0f;
            return;
        }
        temp_v0_2 = arg0->skelAnime.animation;
        var_fv0_3 = 0.0f;
        if (&D_0400DFC8 == temp_v0_2) {
            if (LinkAnimation_OnFrame(sp2C, 30.0f) != 0) {
                func_8083B32C(arg1, arg0, 10.0f);
            }
            var_fv0_3 = 50.0f;
        } else if (&D_0400DA68 == temp_v0_2) {
            var_fv0_3 = 30.0f;
        } else if (&D_0400DA60 == temp_v0_2) {
            var_fv0_3 = 16.0f;
        }
        if (LinkAnimation_OnFrame(sp2C, var_fv0_3) != 0) {
            func_8082E1BC(arg0);
            func_8082DF8C(arg0, 0x6804U);
        }
        if ((&D_0400DA60 == arg0->skelAnime.animation) || (arg0->skelAnime.curFrame > 5.0f)) {
            if (arg0->unk_AE8 == 0) {
                func_8082E188(arg0);
                arg0->unk_AE8 = 1;
            }
            Math_SmoothStepToF(&arg0->unk_ABC, 0.0f, 0.1f, 400.0f, 150.0f);
        }
    }
}

void func_8084D770(Player* arg0, PlayState* arg1) {
    s32 temp_v0;
    u32 temp_t7;

    temp_t7 = arg0->stateFlags2 | 0x60;
    arg0->stateFlags2 = temp_t7;
    if (func_80837BF8 == arg0->unk_D58) {
        arg0->stateFlags2 = temp_t7 | 1;
    }
    LinkAnimation_Update(arg1, &arg0->skelAnime);
    func_8083249C(&arg0->actor);
    temp_v0 = func_8083216C(arg0, arg1);
    if (((arg0->stateFlags1 & 0x800) && (arg0->heldActor != NULL) && (arg0->getItemId == 0)) || (temp_v0 == 0)) {
        arg0->unk_D58(arg1, arg0);
    }
}

void func_8084D820(Player* arg0, PlayState* arg1) {
    f32 sp6C;
    s32 sp68;
    CollisionPoly* sp64;
    s32 sp60;
    f32 sp5C;
    s32 sp58;
    TransitionActorEntry* sp50;
    PosRot* sp38;
    Vec3f* sp34;
    GameInfo* temp_v0;
    GameInfo* temp_v0_2;
    GameInfo* temp_v0_4;
    GameInfo* temp_v0_5;
    GameInfo* temp_v0_6;
    PosRot* temp_a1_3;
    Room* temp_t9;
    RoomContext* temp_a1_2;
    TransitionActorEntry* temp_v1_4;
    Vec3f* temp_a2;
    Vec3f* temp_a3;
    f32 var_fv0;
    f32 var_fv0_2;
    s16 temp_v0_3;
    s16 temp_v0_7;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_v0_8;
    s32 var_t0;
    s32 var_v1_2;
    s8 temp_a0;
    s8 temp_a1;
    s8 var_v1;

    if (func_80838A90(arg0, arg1) == 0) {
        if ((arg0->stateFlags3 & 0x10) && !(arg0->actor.bgCheckFlags & 1)) {
            func_80833AA0(arg0, arg1);
            arg0->stateFlags1 |= 0x20000000;
        } else if (arg0->unk_AE8 == 0) {
            LinkAnimation_Update(arg1, &arg0->skelAnime);
            temp_a0 = arg0->doorTimer;
            if (temp_a0 == 0) {
                var_v1 = 0;
            } else {
                arg0->doorTimer = temp_a0 - 1;
                var_v1 = arg0->doorTimer;
            }
            if (var_v1 == 0) {
                arg0->unk_AE8 = 1;
                arg0->linearVelocity = 0.1f;
            }
        } else if (arg0->unk_AE7 == 0) {
            sp6C = 5.0f * D_8085C3E4;
            var_t0 = func_808411D4(arg1, (PlayState* ) arg0, (Player** ) &sp6C, -1);
            if (arg0->unk_397 == 4) {
                temp_v0 = gGameInfo;
                temp_v1 = temp_v0->data[0x220];
                if (temp_v1 < 0) {
                    if (arg1->roomCtx.unk31 != 1) {
                        temp_v0->data[0x224] += temp_v1;
                        temp_v0_2 = gGameInfo;
                        if (temp_v0_2->data[0x224] < 0) {
                            temp_v0_2->data[0x224] = 0;
                        }
                        if (arg0->doorDirection != 0) {
                            var_fv0 = 3.0f;
                        } else {
                            var_fv0 = -3.0f;
                        }
                        arg0->actor.world.pos.y += var_fv0;
                        arg0->actor.prevPos.y = arg0->actor.world.pos.y;
                    }
                } else if (temp_v1 == 0) {
                    sp68 = var_t0;
                    var_t0 = sp68;
                    if (func_80835DF8(arg1, arg0, &sp64, &sp60) != 0) {
                        arg0->actor.floorPoly = sp64;
                        arg0->actor.floorBgId = (u8) sp60;
                    }
                }
            }
            if (var_t0 < 0x1E) {
                arg0->unk_AE7 = 1;
                arg0->stateFlags1 |= 0x20000000;
                arg0->unk_3A0.x = arg0->unk_3AC.x;
                arg0->unk_3A0.z = arg0->unk_3AC.z;
            }
        } else {
            sp58 = 0x14;
            sp5C = 5.0f;
            if (arg0->stateFlags1 & 1) {
                sp5C = gSaveContext.entranceSpeed;
                if (D_80862B10 != 0) {
                    arg0->unk_3A0.x = (Math_SinS(D_80862B16) * 400.0f) + arg0->actor.world.pos.x;
                    arg0->unk_3A0.z = (Math_CosS(D_80862B16) * 400.0f) + arg0->actor.world.pos.z;
                }
            } else {
                temp_v0_3 = arg0->unk_AE8;
                if (temp_v0_3 < 0) {
                    arg0->unk_AE8 = temp_v0_3 + 1;
                    sp58 = -1;
                    sp5C = gSaveContext.entranceSpeed;
                } else if (arg0->unk_397 == 4) {
                    temp_v0_4 = gGameInfo;
                    temp_v1_2 = temp_v0_4->data[0x220];
                    if (temp_v1_2 == 0) {
                        temp_v0_4->data[0x220] = 0x10;
                        gGameInfo->data[0x224] = 0;
                        temp_v0_5 = gGameInfo;
                        temp_v1_3 = temp_v0_5->data[0x224];
                        temp_v0_5->data[0x223] = temp_v1_3;
                        gGameInfo->data[0x222] = temp_v1_3;
                        gGameInfo->data[0x221] = temp_v1_3;
                    } else if (temp_v1_2 >= 0) {
                        temp_v0_4->data[0x224] += temp_v1_2;
                        temp_v0_6 = gGameInfo;
                        if (temp_v0_6->data[0x224] >= 0x100) {
                            temp_v1_4 = &arg1->doorCtx.transitionActorList[arg0->doorNext];
                            temp_v0_6->data[0x224] = 0xFF;
                            temp_a1 = arg1->roomCtx.currRoom.num;
                            if ((temp_v1_4->sides[0].room != temp_a1) && (temp_a1 >= 0)) {
                                temp_a1_2 = &arg1->roomCtx;
                                temp_t9 = &arg1->roomCtx.prevRoom;
                                temp_t9->unk_0 = (s32) temp_a1_2->unk_0;
                                temp_t9->unk_4 = (s32) temp_a1_2->unk_4;
                                temp_t9->mesh = temp_a1_2->currRoom.mesh;
                                temp_t9->segment = temp_a1_2->currRoom.segment;
                                temp_t9->unk_10 = (s32) temp_a1_2->unk_10;
                                arg1->roomCtx.currRoom.num = -1;
                                arg1->roomCtx.currRoom.segment = NULL;
                                func_8012EBF8(arg1, temp_a1_2);
                            } else {
                                gGameInfo->data[0x220] = -0x10;
                                if (arg1->roomCtx.currRoom.num < 0) {
                                    sp50 = temp_v1_4;
                                    Room_StartRoomTransition(arg1, &arg1->roomCtx, (s32) temp_v1_4->sides[0].room);
                                    arg1->roomCtx.prevRoom.num = -1;
                                    arg1->roomCtx.prevRoom.segment = NULL;
                                }
                                arg0->actor.world.pos.x = (f32) temp_v1_4->pos.x;
                                arg0->actor.world.pos.y = (f32) temp_v1_4->pos.y;
                                arg0->actor.world.pos.z = (f32) temp_v1_4->pos.z;
                                arg0->actor.shape.rot.y = (s16) (s32) (((f32) (((s16) temp_v1_4->rotY >> 7) & 0x1FF) / 180.0f) * 32768.0f);
                                if (arg0->doorDirection != 0) {
                                    D_8085D62C.x = -120.0f;
                                } else {
                                    D_8085D62C.x = 120.0f;
                                }
                                if (arg0->doorDirection != 0) {
                                    D_8085D630 = -75.0f;
                                } else {
                                    D_8085D630 = 75.0f;
                                }
                                D_8085D634 = -240.0f;
                                if (arg0->doorDirection != 0) {
                                    Camera_ChangeDoorCam(arg1->cameraPtrs[0], &arg0->actor, -2, 0.0f, (s16) (temp_v1_4->pos.x + 0x32), (s16) (temp_v1_4->pos.y + 0x5F), (s16) (temp_v1_4->pos.z - 0x32));
                                } else {
                                    Camera_ChangeDoorCam(arg1->cameraPtrs[0], &arg0->actor, -2, 0.0f, (s16) (temp_v1_4->pos.x - 0x32), (s16) (temp_v1_4->pos.y + 5), (s16) (temp_v1_4->pos.z - 0x32));
                                }
                                temp_a1_3 = &arg0->actor.world;
                                sp38 = temp_a1_3;
                                func_80835BC8(arg0, &temp_a1_3->pos, &D_8085D62C, &temp_a1_3->pos);
                                if (arg0->doorDirection != 0) {
                                    D_8085D638.x = 130.0f;
                                } else {
                                    D_8085D638.x = -130.0f;
                                }
                                temp_a3 = &arg0->unk_3A0;
                                sp34 = temp_a3;
                                D_8085D640 = 160.0f;
                                func_80835BC8(arg0, &temp_a1_3->pos, &D_8085D638, temp_a3);
                                D_8085D64C = 160.0f;
                                func_80835BC8(arg0, sp34, &D_8085D644, &arg0->unk_3AC);
                                var_v1_2 = -0x4000;
                                if (arg0->doorDirection != 0) {
                                    var_v1_2 = 0x4000;
                                }
                                arg0->unk_AE7 = 0;
                                arg0->actor.shape.rot.y += var_v1_2;
                                temp_v0_7 = arg0->actor.shape.rot.y;
                                arg0->currentYaw = temp_v0_7;
                                arg0->actor.world.rot.y = temp_v0_7;
                            }
                        }
                        if (arg0->doorDirection != 0) {
                            var_fv0_2 = 3.0f;
                        } else {
                            var_fv0_2 = -3.0f;
                        }
                        arg0->actor.world.pos.y += var_fv0_2;
                        arg0->actor.prevPos.y = arg0->actor.world.pos.y;
                    }
                }
            }
            temp_v0_8 = func_808411D4(arg1, (PlayState* ) arg0, (Player** ) &sp5C, sp58);
            if ((arg0->unk_AE8 == 0) || ((temp_v0_8 == 0) && (arg0->linearVelocity == 0.0f) && (Play_GetCamera(arg1, 0)->stateFlags & 0x10))) {
                temp_a2 = arg1 + 0x18000;
                if (arg0->unk_397 == 4) {
                    sp34 = temp_a2;
                    Map_InitRoomData(arg1, (s16) arg1->roomCtx.currRoom.num);
                    Minimap_SavePlayerRoomInitInfo(arg1);
                }
                gGameInfo->data[0x220] = 0;
                sp34 = temp_a2;
                func_800E0238(Play_GetCamera(arg1, 0));
                func_80838760(arg0);
                if ((arg0->stateFlags3 << 0xE) >= 0) {
                    sp34 = temp_a2;
                    func_801226E0(arg1, (s32) gSaveContext.respawn[0].data);
                }
                if (arg1->unk_1887C != 0) {
                    arg1->func_18780(arg0, arg1);
                    func_80831494(arg1, arg0, func_80854430, 0);
                    if (arg1->sceneNum == 0x45) {
                        arg1->unk_1887C = 0;
                    }
                } else if (func_808391D8(arg0, arg1, temp_a2) == 0) {
                    func_8083B2E4(arg0, arg1);
                }
            }
        }
    }
    if (arg0->stateFlags1 & 0x800) {
        func_8083216C(arg0, arg1);
    }
}

void func_8084E034(Player* arg0, PlayState* arg1) {
    Actor* sp3C;
    s32 sp38;
    s32 sp34;
    CollisionPoly* sp30;
    s32 sp2C;
    SkelAnime* sp20;
    Actor* temp_t6;
    SkelAnime* temp_a1;
    s16 var_v0_4;
    s32 var_v0;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 var_v0_2;
    s8 var_v0_3;

    temp_t6 = arg0->doorActor;
    var_v0 = temp_t6 != NULL;
    sp3C = temp_t6;
    if (var_v0 != 0) {
        var_v0 = temp_t6->unk_1A4 == 7;
    }
    sp38 = var_v0;
    temp_v1 = arg0->unk_AE7;
    arg0->stateFlags2 |= 0x20;
    if (temp_v1 == 0) {
        var_v0_2 = 0;
    } else {
        arg0->unk_AE7 = temp_v1 - 1;
        var_v0_2 = arg0->unk_AE7;
    }
    if (var_v0_2 == 0) {
        func_80835DF8(arg1, arg0, &sp30, &sp2C);
    }
    temp_a1 = &arg0->skelAnime;
    sp20 = temp_a1;
    sp34 = LinkAnimation_Update(arg1, temp_a1);
    func_8083216C(arg0, arg1);
    if (sp34 != 0) {
        if (arg0->unk_AE8 == 0) {
            temp_v1_2 = arg0->doorTimer;
            if (temp_v1_2 == 0) {
                var_v0_3 = 0;
            } else {
                arg0->doorTimer = temp_v1_2 - 1;
                var_v0_3 = arg0->doorTimer;
            }
            if (var_v0_3 == 0) {
                arg0->unk_AE8 = 1;
                arg0->skelAnime.endFrame = arg0->skelAnime.animLength - 1.0f;
            }
        } else {
            func_80838760(arg0);
            func_80839E74(arg0, arg1);
            if ((arg0->actor.category == 2) && (sp38 == 0)) {
                if (arg1->roomCtx.prevRoom.num >= 0) {
                    func_8012EBF8(arg1, &arg1->roomCtx);
                }
                func_800E0238(Play_GetCamera(arg1, 0));
                Play_SetupRespawnPoint(&arg1->state, 0, 0xBFF);
            }
        }
    } else {
        if (((arg0->stateFlags1 * 4) >= 0) && (LinkAnimation_OnFrame(sp20, 15.0f) != 0)) {
            func_80838760(arg0);
            arg1->func_18780(arg0, arg1);
            return;
        }
        if ((sp38 != 0) && (LinkAnimation_OnFrame(sp20, 15.0f) != 0)) {
            if (arg0->doorDirection < 0) {
                var_v0_4 = sp3C->world.rot.x;
            } else {
                var_v0_4 = sp3C->world.rot.z;
            }
            if (var_v0_4 != 0) {
                func_808354A4(arg1, var_v0_4 - 1, 0);
            }
        }
    }
}

void func_8084E25C(Player* arg0, PlayState* arg1) {
    Actor* sp24;
    SkelAnime* sp20;
    Actor* temp_a2_2;
    SkelAnime* temp_a2;

    func_80832F24(arg0);
    temp_a2 = &arg0->skelAnime;
    sp20 = temp_a2;
    if (LinkAnimation_Update(arg1, temp_a2) != 0) {
        func_80836988(arg0, arg1, temp_a2);
        func_808313F0(arg0, arg1);
        return;
    }
    if (LinkAnimation_OnFrame(temp_a2, 4.0f) != 0) {
        temp_a2_2 = arg0->interactRangeActor;
        sp24 = temp_a2_2;
        if (func_808313A8(arg1, arg0, temp_a2_2) == 0) {
            arg0->actor.child = temp_a2_2;
            arg0->heldActor = temp_a2_2;
            temp_a2_2->parent = &arg0->actor;
            temp_a2_2->bgCheckFlags &= 0xFF00;
            arg0->leftHandWorld.rot.y = temp_a2_2->shape.rot.y - arg0->actor.shape.rot.y;
        }
    } else {
        Math_ScaledStepToS(&arg0->leftHandWorld.rot.y, 0, 0xFA0);
    }
}

void func_8084E334(Player* arg0, PlayState* arg1) {
    SkelAnime* sp20;
    Actor* temp_v0;
    SkelAnime* temp_a1;

    func_80832F24(arg0);
    temp_a1 = &arg0->skelAnime;
    sp20 = temp_a1;
    if (LinkAnimation_Update(arg1, temp_a1) != 0) {
        func_8082DB3C(arg1, arg0, &D_0400DFA0);
        arg0->unk_AE8 = 1;
        return;
    }
    if (arg0->unk_AE8 == 0) {
        if (LinkAnimation_OnFrame(sp20, 27.0f) != 0) {
            temp_v0 = arg0->interactRangeActor;
            arg0->heldActor = temp_v0;
            arg0->actor.child = temp_v0;
            temp_v0->parent = &arg0->actor;
            return;
        }
        if (LinkAnimation_OnFrame(sp20, 25.0f) != 0) {
            func_8082DF8C(arg0, 0x6801U);
        }
    } else if (D_80862B44->press.button & 0xC007) {
        func_80831494(arg1, arg0, func_8084E434, 1);
        func_8082DB18(arg1, arg0, &D_0400DF98);
    }
}

void func_8084E434(Player* arg0, PlayState* arg1) {
    SkelAnime* sp20;
    Actor* temp_v0;
    SkelAnime* temp_a2;

    temp_a2 = &arg0->skelAnime;
    sp20 = temp_a2;
    if (LinkAnimation_Update(arg1, temp_a2) != 0) {
        func_80836988(arg0, arg1, temp_a2);
        return;
    }
    if (LinkAnimation_OnFrame(temp_a2, 6.0f) != 0) {
        temp_v0 = arg0->heldActor;
        temp_v0->speedXZ = 10.0f;
        temp_v0->world.rot.y = arg0->actor.shape.rot.y;
        temp_v0->velocity.y = 20.0f;
        func_808309CC(arg1, arg0);
        func_800B8E58(arg0, 0x83AU);
        func_8082DF8C(arg0, 0x6800U);
    }
}

void func_8084E4E4(Player* arg0, PlayState* arg1) {
    s16 temp_v0;

    if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
        func_8082DB3C(arg1, arg0, &D_0400DD80);
        arg0->unk_AE8 = 0xF;
        return;
    }
    temp_v0 = arg0->unk_AE8;
    if (temp_v0 != 0) {
        arg0->unk_AE8 = temp_v0 - 1;
        if (arg0->unk_AE8 == 0) {
            func_80836A98(arg0, &D_0400DD78, arg1, arg1);
            arg0->stateFlags1 &= ~0x800;
            func_8082DF8C(arg0, 0x6805U);
        }
    }
}

void func_8084E58C(Player* arg0, PlayState* arg1) {
    Actor* sp24;
    SkelAnime* sp20;
    Actor* temp_a2_2;
    SkelAnime* temp_a2;

    func_80832F24(arg0);
    temp_a2 = &arg0->skelAnime;
    sp20 = temp_a2;
    if (LinkAnimation_Update(arg1, temp_a2) != 0) {
        func_80836988(arg0, arg1, temp_a2);
        return;
    }
    if (LinkAnimation_OnFrame(temp_a2, 4.0f) != 0) {
        temp_a2_2 = arg0->heldActor;
        sp24 = temp_a2_2;
        if (func_808313A8(arg1, arg0, temp_a2_2) == 0) {
            temp_a2_2->velocity.y = 0.0f;
            temp_a2_2->speedXZ = 0.0f;
            sp24 = temp_a2_2;
            func_808309CC(arg1, arg0);
            if (temp_a2_2->id == 0x6A) {
                func_80831814(arg0, arg1, 0);
            }
        }
    }
}

void func_8084E65C(Player* arg0, PlayState* arg1) {
    s16 sp34;
    ? sp32;
    SkelAnime* sp2C;
    SkelAnime* temp_a1;

    func_80832F24(arg0);
    temp_a1 = &arg0->skelAnime;
    sp2C = temp_a1;
    if ((LinkAnimation_Update(arg1, temp_a1) != 0) || ((arg0->skelAnime.curFrame >= 8.0f) && (func_80832F78((f32* ) arg0, &sp34, (bitwise f32) &sp32, (PlayState* )0x3C9374BC, (Player* ) arg1) != 0))) {
        func_80836988(arg0, arg1);
        return;
    }
    if (LinkAnimation_OnFrame(sp2C, 3.0f) != 0) {
        func_808409A8(arg1, arg0, arg0->linearVelocity + 8.0f, 12.0f);
    }
}

void func_8084E724(Player* arg0, PlayState* arg1) {
    s16 temp_v1_2;
    s16 var_v0;
    u8 temp_v1;

    if ((arg0->stateFlags1 * 0x10) < 0) {
        func_808475B4(arg0);
        func_8084748C((f32* ) arg0, &arg0->linearVelocity, 0.0f, arg0->actor.shape.rot.y);
    } else {
        func_80832F24(arg0);
    }
    if ((arg0->unk_AA5 == 3) && ((func_800B7118(arg0) != 0) || (func_8082ECCC(arg0) != 0))) {
        func_8083216C(arg0, arg1);
    }
    temp_v1 = arg0->unk_AA5;
    if (((temp_v1 == 2) && !(arg1->actorCtx.unk5 & 4)) || ((temp_v1 != 2) && ((arg0->csMode != 0) || (temp_v1 == 0) || ((s32) temp_v1 >= 5) || (func_8082FB68(arg0) != 0) || (arg0->unk_730 != NULL) || (func_8083868C(arg1, arg0) == 0) || ((arg0->unk_AA5 == 3) && (((func_8082F524(arg0, Inventory_GetBtnBItem(arg1)) != arg0->itemActionParam) && (D_80862B44->press.button & 0x4000)) || (D_80862B44->press.button & 0x8010) || (func_80123434(arg0) != 0) || ((func_800B7128(arg0) == 0) && (func_8082EF20(arg0) == 0)))) || ((arg0->unk_AA5 == 1) && (D_80862B44->press.button & 0xC01F)) || (func_808391D8(arg0, arg1) != 0)))) {
        func_80839ED0(arg0, arg1);
        play_sound(0x4813U);
    } else {
        temp_v1_2 = arg0->unk_AE8;
        if (temp_v1_2 == 0) {
            var_v0 = 0;
        } else {
            arg0->unk_AE8 = temp_v1_2 - 1;
            var_v0 = arg0->unk_AE8;
        }
        if ((var_v0 == 0) || (arg0->unk_AA5 != 3)) {
            if (func_801240DC(arg0) != 0) {
                arg0->unk_AA6 |= 0x43;
            } else {
                arg0->actor.shape.rot.y = func_80847190(arg1, arg0, 0);
            }
        }
    }
    arg0->currentYaw = arg0->actor.shape.rot.y;
}

void func_8084E980(Player* arg0, PlayState* arg1) {
    s32 sp44;
    SkelAnime* sp34;
    SkelAnime* temp_a1;
    s32 temp_v0;
    s32 var_v1;

    arg0->stateFlags2 |= 0x20;
    func_8083249C(&arg0->actor);
    func_8083216C(arg0, arg1);
    if (Message_GetState(&arg1->msgCtx) == 2) {
        arg0->actor.flags &= ~0x100;
        if ((arg0->targetActor->flags & 5) != 5) {
            arg0->stateFlags2 &= ~0x2000;
        }
        func_800E0238(Play_GetCamera(arg1, 0));
        ActorCutscene_Stop(0x7C);
        if (arg0->stateFlags1 & 0x800000) {
            sp44 = (s32) arg0->unk_AE8;
            func_80837BD0(arg1, arg0);
            arg0->unk_AE8 = (s16) sp44;
        } else if ((func_80847994(arg1, arg0) == 0) && (func_80847880(arg1, arg0) == 0) && (func_808387A0(arg1, arg0) == 0) && ((arg0->interactRangeActor != arg0->targetActor) || (func_8083D23C(arg0, arg1) == 0))) {
            if (func_801242B4(arg0) != 0) {
                func_808353DC(arg1, arg0);
            } else {
                func_8085B384(arg0, arg1, M2C_ERROR(Read from unset register $a2));
            }
        }
        arg0->unk_B5E = 0xA;
        return;
    }
    if (arg0->stateFlags1 & 0x800000) {
        func_8084FE7C(arg0, arg1);
    } else if (func_801242B4(arg0) != 0) {
        func_808508C8(arg0, arg1);
        if (arg0->actor.depthInWater > 100.0f) {
            arg0->actor.velocity.y = 0.0f;
            arg0->actor.gravity = 0.0f;
        }
    } else if ((func_80123420(arg0) == 0) && (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0)) {
        if (arg0->skelAnime.moveFlags != 0) {
            func_8082E794(arg0);
            if ((arg0->targetActor->category == 4) && (arg0->itemActionParam != 2)) {
                func_8082DB90(arg1, arg0, &D_0400DEA0);
            } else {
                func_8082DB3C(arg1, arg0, func_8082ED20(arg0));
            }
        } else {
            func_8082DB60(arg1, arg0, &D_0400DEA8);
        }
    }
    if (arg0->unk_730 != NULL) {
        arg0->currentYaw = func_8083C62C(arg0, 0);
        arg0->actor.shape.rot.y = arg0->currentYaw;
        if (arg0->unk_AE7 != 0) {
            temp_a1 = &arg0->unk_284;
            if (!(arg0->stateFlags1 & 0x800)) {
                sp34 = temp_a1;
                if (LinkAnimation_Update(arg1, temp_a1) != 0) {
                    arg0->unk_AE7 -= 1;
                    if (arg0->unk_AE7 != 0) {
                        LinkAnimation_Change(arg1, sp34, &D_0400DEA0, 1.0f, 0.0f, (f32) Animation_GetLastFrame(&D_0400DEA0), (u8) 2, -6.0f);
                    }
                }
            }
            AnimationContext_SetCopyFalse(arg1, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.jointTable, arg0->unk_284.jointTable, D_8085B9F0);
            return;
        }
        if (!(arg0->stateFlags1 & 0x800) && (&D_0400DEA8 == arg0->skelAnime.animation)) {
            temp_v0 = arg0->actor.focus.rot.y - arg0->actor.shape.rot.y;
            var_v1 = temp_v0;
            if (temp_v0 < 0) {
                var_v1 = -temp_v0;
            }
            if (var_v1 >= 0xFA1) {
                LinkAnimation_Change(arg1, &arg0->unk_284, (D_8085BE84 + 0x258)[arg0->modelAnimType], 0.4f, 0.0f, (f32) Animation_GetLastFrame((D_8085BE84 + 0x258)[arg0->modelAnimType]), (u8) 2, -6.0f);
                arg0->unk_AE7 = 2;
            }
        }
    }
}

void func_8084ED9C(Player* arg0, PlayState* arg1) {
    s16 sp34;
    s16 sp32;
    s32 temp_v0;

    arg0->stateFlags2 |= 0x141;
    func_8083DEE4(arg1, arg0);
    if ((LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) && (func_8083E14C(arg1, arg0) == 0)) {
        func_80832F78((f32* ) arg0, &sp34, (bitwise f32) &sp32, NULL, (Player* ) arg1);
        temp_v0 = func_8083E758(arg0, (f32* ) &sp34, &sp32);
        if (temp_v0 > 0) {
            func_8083E234(arg0, arg1);
            return;
        }
        if (temp_v0 < 0) {
            func_8083E28C(arg0, arg1);
        }
    }
}

void func_8084EE50(Player* arg0, PlayState* arg1) {
    s16 sp34;
    s16 sp32;
    s32 temp_v0;

    arg0->stateFlags2 |= 0x141;
    if (func_8082E67C(arg1, arg0, &D_0400DE10) != 0) {
        arg0->unk_AE8 = 1;
    } else if ((arg0->unk_AE8 == 0) && (LinkAnimation_OnFrame(&arg0->skelAnime, 11.0f) != 0)) {
        func_8082DF8C(arg0, 0x6818U);
    }
    func_8082E224(arg0, D_8085D650);
    func_8083DEE4(arg1, arg0);
    if (func_8083E14C(arg1, arg0) == 0) {
        func_80832F78((f32* ) arg0, &sp34, (bitwise f32) &sp32, NULL, (Player* ) arg1);
        temp_v0 = func_8083E758(arg0, (f32* ) &sp34, &sp32);
        if (temp_v0 < 0) {
            func_8083E28C(arg0, arg1);
        } else if (temp_v0 == 0) {
            func_8083DF38(&arg0->actor, &D_0400DDF0, arg1);
        } else {
            arg0->stateFlags2 |= 0x10;
        }
    }
    if (arg0->stateFlags2 & 0x10) {
        func_808479F4(arg1, arg0, 2.0f);
        arg0->linearVelocity = 2.0f;
    }
}

void func_8084EF9C(Player* arg0, PlayState* arg1) {
    s16 sp78;
    s16 sp76;
    Vec3f sp64;
    CollisionPoly* sp5C;
    s32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    Vec3f sp40;
    f32 temp_ft4;
    s32 temp_v0;

    arg0->stateFlags2 |= 0x141;
    if (func_8082E67C(arg1, arg0, (D_8085BE84 + 0x348)[arg0->modelAnimType]) != 0) {
        arg0->unk_AE8 = 1;
    } else if (arg0->unk_AE8 == 0) {
        if (LinkAnimation_OnFrame(&arg0->skelAnime, 11.0f) != 0) {
            func_8082DF8C(arg0, 0x6818U);
        }
    } else {
        func_8082E224(arg0, D_8085D658);
    }
    func_8083DEE4(arg1, arg0);
    if (func_8083E14C(arg1, arg0) == 0) {
        func_80832F78((f32* ) arg0, &sp78, (bitwise f32) &sp76, NULL, (Player* ) arg1);
        temp_v0 = func_8083E758(arg0, (f32* ) &sp78, &sp76);
        if (temp_v0 > 0) {
            func_8083E234(arg0, arg1);
        } else if (temp_v0 == 0) {
            func_8083DF38(&arg0->actor, (D_8085BE84 + 0x360)[arg0->modelAnimType], arg1);
        } else {
            arg0->stateFlags2 |= 0x10;
        }
    }
    if (arg0->stateFlags2 & 0x10) {
        if (fabsf((bitwise f32) func_80835D2C(arg1, arg0, D_8085D660, &sp64) - arg0->actor.world.pos.y) < 26.800001f) {
            temp_ft4 = sp64.y - 7.0f;
            sp64.y = temp_ft4;
            sp4C = arg0->actor.world.pos.x;
            sp50 = temp_ft4;
            sp54 = arg0->actor.world.pos.z;
            if (BgCheck_EntityLineTest2(&arg1->colCtx, (Vec3f* ) &sp4C, &sp64, &sp40, &sp5C, 1, 0, 0, 1, &sp58, &arg0->actor) == 0) {
                func_808479F4(arg1, arg0, -2.0f);
                return;
            }
        }
        arg0->stateFlags2 &= ~0x10;
    }
}

void func_8084F1B8(Player* arg0, PlayState* arg1) {
    s16 sp3C;
    ? sp3A;
    SkelAnime* sp2C;
    LinkAnimationHeader* var_a3;
    LinkAnimationHeader* var_a3_2;
    SkelAnime* temp_a2;
    f32 var_fv0;

    temp_a2 = &arg0->skelAnime;
    arg0->stateFlags2 |= 0x40;
    sp2C = temp_a2;
    if (LinkAnimation_Update(arg1, temp_a2) != 0) {
        if (arg0->unk_AE7 > 0) {
            var_a3 = &D_0400DC48;
        } else {
            var_a3 = (D_8085BE84 + 0x3A8)[arg0->modelAnimType];
        }
        func_8082DB3C(arg1, arg0, var_a3);
    } else if (arg0->unk_AE7 == 0) {
        if (&D_0400DC30 == arg0->skelAnime.animation) {
            var_fv0 = 11.0f;
        } else {
            var_fv0 = 1.0f;
        }
        if (LinkAnimation_OnFrame(temp_a2, var_fv0) != 0) {
            func_8082E094(arg0, 0x800U);
            if (&D_0400DC30 == arg0->skelAnime.animation) {
                arg0->unk_AE7 = 1;
            } else {
                arg0->unk_AE7 = -1;
            }
        }
    }
    Math_ScaledStepToS(&arg0->actor.shape.rot.y, arg0->currentYaw, 0x800);
    if (arg0->unk_AE7 != 0) {
        func_80832F78((f32* ) arg0, &sp3C, (bitwise f32) &sp3A, NULL, (Player* ) arg1);
        if (arg0->unk_ADF[arg0->unk_ADE] >= 0) {
            if (arg0->unk_AE7 > 0) {
                var_a3_2 = (D_8085BE84 + 0x378)[arg0->modelAnimType];
            } else {
                var_a3_2 = (D_8085BE84 + 0x3C0)[arg0->modelAnimType];
            }
            func_808381A0(arg0, var_a3_2, arg1, var_a3_2);
            return;
        }
        if ((~(D_80862B44->cur.button | 0xFFFF7FFF) == 0) || (arg0->actor.shape.feetFloorFlags != 0)) {
            func_80833A64(arg0);
            if (arg0->unk_AE7 < 0) {
                arg0->linearVelocity = -0.8f;
            } else {
                arg0->linearVelocity = 0.8f;
            }
            func_80833AA0(arg0, arg1);
            arg0->stateFlags1 &= ~0x6004;
            arg0->actor.bgCheckFlags &= 0xFFFE;
        }
    }
}

void func_8084F3DC(Player* arg0, PlayState* arg1) {
    SkelAnime* sp24;
    SkelAnime* temp_a1;

    temp_a1 = &arg0->skelAnime;
    arg0->stateFlags2 |= 0x40;
    sp24 = temp_a1;
    if (LinkAnimation_Update(arg1, temp_a1) != 0) {
        arg0->currentYaw = arg0->skelAnime.jointTable->unk_8 + arg0->actor.shape.rot.y;
        func_8082E820(arg0, 1);
        arg0->actor.shape.rot.y = arg0->currentYaw;
        func_80839E74(arg0, arg1);
        arg0->stateFlags1 &= ~0x6004;
        return;
    }
    if (LinkAnimation_OnFrame(sp24, arg0->skelAnime.endFrame - 6.0f) != 0) {
        func_8082E1BC(arg0);
        return;
    }
    if (LinkAnimation_OnFrame(sp24, arg0->skelAnime.endFrame - 34.0f) != 0) {
        func_800B8E58(arg0, 0x831U);
        func_8082DF8C(arg0, 0x6804U);
        func_8084C124(arg1, arg0);
    }
}

void func_8084F4E8(Actor* arg0, PlayState* arg1) {
    s32 sp94;
    s32 sp90;
    Vec3f sp7C;
    s32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    Vec3f sp60;
    LinkAnimationHeader* sp58;
    LinkAnimationHeader* sp54;
    SkelAnime* sp34;
    DynaPolyActor* temp_v0_2;
    Input* temp_v0;
    LinkAnimationHeader* temp_a0_3;
    LinkAnimationHeader* temp_a2;
    SkelAnime* temp_a0_4;
    SkelAnime* temp_a0_5;
    SkelAnime* temp_a1_2;
    Vec3f* temp_a0;
    f32 temp_fv0;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv1;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_v0_4;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s8 temp_a0_2;
    s8 var_t0;
    s8 var_t1;
    s8 var_v0;
    s8 var_v0_2;
    s8 var_v0_3;
    s8 var_v1;
    u8 temp_a1;
    void* temp_t2;
    void* temp_t3;
    void* temp_t4;
    void* temp_t4_2;
    void* temp_t8;
    void* temp_v0_5;

    temp_v0 = D_80862B44;
    var_t0 = temp_v0->rel.stick_y;
    var_t1 = temp_v0->rel.stick_x;
    arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x40);
    arg0->unk_B68 = (s16) (s32) arg0->world.pos.y;
    if (arg0->unk_AE7 != 0) {
        var_v1 = var_t0;
        if (var_t0 < 0) {
            var_v1 = -var_t0;
        }
        var_v0 = var_t1;
        if (var_t1 < 0) {
            var_v0 = -var_t1;
        }
        if (var_v1 < var_v0) {
            var_v0_2 = var_t1;
            if (var_t1 < 0) {
                var_v0_2 = -var_t1;
            }
            var_t0 = 0;
            var_fv0 = (f32) var_v0_2 * 0.0325f;
        } else {
            goto block_9;
        }
    } else {
block_9:
        var_v0_3 = var_t0;
        if (var_t0 < 0) {
            var_v0_3 = -var_t0;
        }
        var_t1 = 0;
        var_fv0 = (f32) var_v0_3 * 0.05f;
    }
    if (var_fv0 < 1.0f) {
        var_fv0 = 1.0f;
    } else if (var_fv0 > 3.35f) {
        var_fv0 = 3.35f;
    }
    if (arg0->unk_25C >= 0.0f) {
        var_fv1 = 1.0f;
    } else {
        var_fv1 = -1.0f;
    }
    arg0->unk_25C = (f32) (var_fv1 * var_fv0);
    if (arg0->unk_AE8 >= 0) {
        if (arg0->wallPoly != NULL) {
            temp_a1 = arg0->wallBgId;
            if (temp_a1 != 0x32) {
                sp94 = (s32) var_t0;
                sp90 = (s32) var_t1;
                temp_v0_2 = DynaPoly_GetActor(arg1 + 0x830, (s32) temp_a1);
                if (temp_v0_2 != NULL) {
                    sp94 = (s32) var_t0;
                    sp90 = (s32) var_t1;
                    Math_Vec3f_Diff(&temp_v0_2->actor.world.pos, &temp_v0_2->actor.prevPos, &sp7C);
                    temp_a0 = arg0 + 0x24;
                    Math_Vec3f_Sum(temp_a0, &sp7C, temp_a0);
                    var_t0 = (s8) sp94;
                    var_t1 = (s8) sp90;
                }
            }
        }
        sp90 = (s32) var_t1;
        sp94 = (s32) var_t0;
        Actor_UpdateBgCheckInfo(arg1, arg0, 26.800001f, 6.0f, arg0->unk_A68->unk_0 + 15.0f, 7U);
        func_8083DD1C(arg1, arg0, 26.800001f, arg0->unk_A68->unk_3C, 50.0f, -20.0f);
    }
    sp94 = (s32) var_t0;
    sp90 = (s32) var_t1;
    func_80831944(arg1, (Player* ) arg0);
    if ((arg0->unk_AE8 < 0) || (sp94 = (s32) var_t0, sp90 = (s32) var_t1, (func_8083E354((Player* ) arg0, arg1) == 0))) {
        temp_a1_2 = arg0 + 0x240;
        sp34 = temp_a1_2;
        sp94 = (s32) var_t0;
        sp90 = (s32) var_t1;
        if (LinkAnimation_Update(arg1, temp_a1_2) != 0) {
            temp_v1 = arg0->unk_AE8;
            if (temp_v1 < 0) {
                var_v0_4 = temp_v1;
                if (temp_v1 < 0) {
                    var_v0_4 = -temp_v1;
                }
                arg0->unk_AE8 = (s16) (var_v0_4 & 1);
                return;
            }
            if (var_t0 != 0) {
                temp_a0_2 = arg0->unk_AE7;
                temp_v0_3 = temp_a0_2 + temp_v1;
                if (var_t0 > 0) {
                    sp6C = 0.0f;
                    sp70 = arg0->unk_A68->unk_40;
                    sp78 = temp_v0_3;
                    sp74 = arg0->unk_A68->unk_3C + 10.0f;
                    temp_fv0 = (bitwise f32) func_80835D2C(arg1, (Player* ) arg0, &sp6C, &sp60);
                    if (arg0->world.pos.y < temp_fv0) {
                        if (arg0->unk_AE7 != 0) {
                            arg0->world.pos.y = temp_fv0;
                            arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xFFDFFFFF);
                            func_80837CEC(arg1, (Player* ) arg0, arg0->wallPoly, arg0->unk_A68->unk_3C, &D_0400DCF8);
                            arg0->unk_AD4 = (s16) (arg0->unk_AD4 + 0x8000);
                            arg0->shape.rot.y = arg0->unk_AD4;
                            func_808381A0((Player* ) arg0, &D_0400DCF8, arg1);
                            arg0->unk_A6C = (s32) (arg0->unk_A6C | 0x4000);
                        } else {
                            func_8083DCC4((Player* ) arg0, (arg0->unk_A68 + (arg0->unk_AE8 * 4))->unk_D4, arg1);
                        }
                    } else {
                        temp_t4 = arg0->unk_A68 + (sp78 * 6);
                        arg0->unk_278 = (unaligned s32) temp_t4->unk_4A;
                        arg0->unk_27C = (u16) temp_t4->unk_4E;
                        func_8082DB18(arg1, (Player* ) arg0, (arg0->unk_A68 + (sp78 * 4))->unk_B4);
                    }
                } else {
                    temp_v0_4 = temp_v0_3 ^ 1;
                    if ((arg0->world.pos.y - arg0->floorHeight) < 15.0f) {
                        if (temp_a0_2 != 0) {
                            func_8083E2F4((Player* ) arg0, arg1);
                        } else {
                            if (temp_v1 != 0) {
                                temp_t2 = arg0->unk_A68;
                                arg0->unk_278 = (unaligned s32) temp_t2->unk_44;
                                arg0->unk_27C = (u16) temp_t2->unk_48;
                            }
                            func_8083DCC4((Player* ) arg0, (arg0->unk_A68 + (arg0->unk_AE8 * 4))->unk_CC, arg1);
                            arg0->unk_AE8 = 1;
                        }
                    } else {
                        temp_t3 = arg0->unk_A68 + (temp_v0_4 * 6);
                        arg0->unk_278 = (unaligned s32) temp_t3->unk_62;
                        arg0->unk_27C = (u16) temp_t3->unk_66;
                        temp_a0_3 = (arg0->unk_A68 + (temp_v0_4 * 4))->unk_B4;
                        sp58 = temp_a0_3;
                        LinkAnimation_Change(arg1, sp34, sp58, -1.0f, (f32) Animation_GetLastFrame(temp_a0_3), 0.0f, (u8) 2, 0.0f);
                    }
                }
                arg0->unk_AE8 = (s16) (arg0->unk_AE8 ^ 1);
                return;
            }
            if ((arg0->unk_AE7 != 0) && (var_t1 != 0)) {
                temp_v0_5 = arg0->unk_A68;
                temp_a2 = (temp_v0_5 + (temp_v1 * 4))->unk_C4;
                if (var_t1 > 0) {
                    temp_t8 = temp_v0_5 + (temp_v1 * 6);
                    arg0->unk_278 = (unaligned s32) temp_t8->unk_7A;
                    arg0->unk_27C = (u16) temp_t8->unk_7E;
                    func_8082DB18(arg1, (Player* ) arg0, temp_a2);
                    return;
                }
                temp_t4_2 = temp_v0_5 + (temp_v1 * 6);
                arg0->unk_278 = (unaligned s32) temp_t4_2->unk_86;
                arg0->unk_27C = (u16) temp_t4_2->unk_8A;
                sp54 = temp_a2;
                LinkAnimation_Change(arg1, sp34, temp_a2, -1.0f, (f32) Animation_GetLastFrame(temp_a2), 0.0f, (u8) 2, 0.0f);
                return;
            }
            arg0->unk_A70 = (s32) (arg0->unk_A70 | 0x1000);
            return;
        }
    }
    temp_v1_2 = arg0->unk_AE8;
    if (temp_v1_2 < 0) {
        temp_a0_4 = arg0 + 0x240;
        if (temp_v1_2 == -2) {
            sp34 = temp_a0_4;
            if ((LinkAnimation_OnFrame(temp_a0_4, 14.0f) == 0) && (LinkAnimation_OnFrame(temp_a0_4, 29.0f) == 0)) {
                goto block_58;
            }
            goto block_63;
        }
block_58:
        temp_a0_5 = arg0 + 0x240;
        if ((arg0->unk_AE8 == -4) && ((sp34 = temp_a0_5, (LinkAnimation_OnFrame(temp_a0_5, 22.0f) != 0)) || (LinkAnimation_OnFrame(temp_a0_5, 35.0f) != 0) || (LinkAnimation_OnFrame(sp34, 49.0f) != 0) || (LinkAnimation_OnFrame(sp34, 55.0f) != 0))) {
block_63:
            func_80847A50((Player* ) arg0);
        }
    } else {
        if (arg0->unk_25C > 0.0f) {
            var_fv0_2 = 20.0f;
        } else {
            var_fv0_2 = 0.0f;
        }
        if (LinkAnimation_OnFrame(arg0 + 0x240, var_fv0_2) != 0) {
            func_80847A50((Player* ) arg0);
        }
    }
}

void func_8084FC0C(Player* arg0, PlayState* arg1) {
    ?* sp40;
    CollisionPoly* sp3C;
    s32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    SkelAnime* sp28;                                /* compiler-managed */
    ?* var_v1;
    CollisionContext* temp_a0;
    SkelAnime* temp_a2;
    s32 temp_v0;

    temp_a2 = &arg0->skelAnime;
    arg0->stateFlags2 |= 0x40;
    sp28 = temp_a2;
    temp_v0 = func_808331FC((Player* ) arg1, (s8* ) arg0, temp_a2, 4.0f);
    if (temp_v0 == 0) {
        arg0->stateFlags1 &= 0xFFDFFFFF;
        return;
    }
    if ((temp_v0 > 0) || (LinkAnimation_Update(arg1, sp28) != 0)) {
        func_80839E74(arg0, arg1);
        arg0->stateFlags1 &= 0xFFDFFFFF;
        return;
    }
    var_v1 = &D_8085D66C;
    if (arg0->unk_AE8 != 0) {
        func_8082E224(arg0, &D_8085D67C);
        var_v1 = &D_8085D674;
    }
    sp40 = var_v1;
    if ((LinkAnimation_OnFrame(sp28, var_v1->unk_0) != 0) || (LinkAnimation_OnFrame(sp28, var_v1->unk_4) != 0)) {
        sp2C = arg0->actor.world.pos.x;
        temp_a0 = &arg1->colCtx;
        sp30 = arg0->actor.world.pos.y + 20.0f;
        sp28 = temp_a0;
        sp34 = arg0->actor.world.pos.z;
        if (BgCheck_EntityRaycastFloor5(temp_a0, &sp3C, &sp38, &arg0->actor, (Vec3f* ) &sp2C) != 0.0f) {
            arg0->unk_B72 = SurfaceType_GetSfx(sp28, sp3C, sp38);
            func_8082E1BC(arg0);
        }
    }
}

void func_8084FD7C(PlayState* arg1, Player* arg2) {
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 var_a3;
    s16 var_v1;
    s32 var_v1_2;

    temp_v0 = arg1->colCtx.dyna.bgActors[7].curTransform.unk_12;
    if (temp_v0 != 0) {
        arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 = temp_v0 - 1;
        return;
    }
    arg1->unk_AB4 = (s16) (func_80847190((PlayState* )1) - arg1->unk_BE);
    temp_a0 = arg1->unk_AB4;
    var_v1 = temp_a0;
    if (temp_a0 < 0) {
        var_v1 = -temp_a0;
    }
    temp_v0_2 = var_v1 - 0x4000;
    var_a3 = temp_v0_2;
    if (temp_v0_2 > 0) {
        var_v1_2 = -1;
        if (temp_v0_2 >= 0x15F) {
            var_a3 = 0x15E;
        }
        if (temp_a0 >= 0) {
            var_v1_2 = 1;
        }
        arg2->actor.shape.rot.y += var_a3 * var_v1_2;
        arg2->actor.world.rot.y = arg2->actor.shape.rot.y;
    }
    arg1->unk_AB4 = (s16) (arg1->unk_AB4 + 0x2710);
    arg1->unk_AA8 = -0x1388;
}

s32 func_8084FE48(Player* arg0) {
    s32 var_v0;

    var_v0 = arg0->unk_730 == NULL;
    if (var_v0 != 0) {
        var_v0 = func_8082FC24(arg0) == 0;
    }
    return var_v0;
}

void func_8084FE7C(Player* arg0, PlayState* arg1) {
    Actor* sp4C;
    s32 sp44;
    SkelAnime* sp2C;
    s16* sp28;
    LinkAnimationHeader* var_a2;
    SkelAnime* temp_a1;
    SkelAnime* temp_a2;
    f32 temp_fv0;
    f32 var_ft0;
    f32 var_ft2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 var_v0_5;
    s16* temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    u8 temp_t5;
    u8 temp_t6;

    sp4C = arg0->rideActor;
    arg0->stateFlags2 |= 0x40;
    func_80847E2C(arg0, 1.0f, 10.0f);
    temp_a1 = &arg0->skelAnime;
    if (arg0->unk_AE8 == 0) {
        sp2C = temp_a1;
        if (LinkAnimation_Update(arg1, temp_a1) != 0) {
            arg0->skelAnime.animation = &D_0400E088;
            arg0->unk_AE8 = 0x63;
        } else {
            var_v0 = 1;
            if (arg0->mountSide < 0) {
                var_v0 = 0;
            }
            temp_v1 = &D_8085D6DC[var_v0];
            temp_t5 = temp_v1->unk_0;
            var_ft0 = (f32) temp_t5;
            if ((s32) temp_t5 < 0) {
                var_ft0 += 4294967296.0f;
            }
            sp28 = temp_v1;
            if (LinkAnimation_OnFrame(sp2C, var_ft0) != 0) {
                Actor_SetCameraHorseSetting(arg1, arg0);
                func_800B8E58(arg0, 0x831U);
            } else {
                temp_t6 = temp_v1->unk_1;
                var_ft2 = (f32) temp_t6;
                if ((s32) temp_t6 < 0) {
                    var_ft2 += 4294967296.0f;
                }
                if (LinkAnimation_OnFrame(sp2C, var_ft2) != 0) {
                    func_800B8E58(arg0, 0x832U);
                }
            }
        }
    } else {
        if (sp4C->bgCheckFlags & 1) {
            func_80841A50(arg1, arg0);
        }
        Actor_SetCameraHorseSetting(arg1, arg0);
        temp_v0 = arg0->unk_AE8;
        arg0->unk_278 = (unaligned s32) D_8085D6E0.unk_0;
        arg0->skelAnime.prevTransl.z = (s16) D_8085D6E0.unk_4;
        if ((temp_v0 < 0) || ((temp_v1_2 = sp4C->unk_20C, ((temp_v0 & 0xFFFF) != temp_v1_2)) && ((temp_v1_2 >= 2) || (temp_v0 >= 2)))) {
            var_v1 = sp4C->unk_20C;
            if (var_v1 < 2) {
                temp_fv0 = Rand_ZeroOne();
                var_v0_2 = 0;
                if (temp_fv0 < 0.1f) {
                    var_v0_2 = 2;
                } else if (temp_fv0 < 0.2f) {
                    var_v0_2 = 1;
                }
                sp44 = 1;
                func_8082DB18(arg1, arg0, D_8085D6D0[var_v0_2]);
                var_v1 = 1;
            } else {
                arg0->skelAnime.animation = D_8085D680[var_v1];
                if (temp_v0 >= 0) {
                    sp44 = var_v1;
                    Animation_SetMorph(arg1, &arg0->skelAnime, 8.0f);
                }
                if (var_v1 < 4) {
                    sp44 = var_v1;
                    func_808309CC(arg1, arg0);
                    arg0->unk_AE7 = 0;
                }
            }
            arg0->unk_AE8 = (s16) var_v1;
        }
        if (arg0->unk_AE8 == 1) {
            if ((D_80862B04 != 0) || (func_8082DAFC(arg1) != 0)) {
                func_8082DB18(arg1, arg0, &D_0400E098);
            } else if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
                arg0->unk_AE8 = 0x63;
            } else if (&D_0400E088 == arg0->skelAnime.animation) {
                func_8082E224(arg0, D_8085D6E8);
            }
        } else {
            arg0->skelAnime.curFrame = sp4C->unk_210;
            LinkAnimation_AnimateFrame(arg1, &arg0->skelAnime);
        }
        AnimationContext_SetCopyAll(arg1, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.morphTable, arg0->skelAnime.jointTable);
        if ((arg1->csCtx.state != 0) || (arg0->csMode != 0)) {
            arg0->unk_AA5 = 0;
            goto block_45;
        }
        temp_v0_2 = arg0->unk_AE8;
        if ((temp_v0_2 < 2) || (temp_v0_2 >= 4)) {
            D_80862B04 = func_8083216C(arg0, arg1);
            if (D_80862B04 != 0) {
block_45:
                arg0->unk_AE7 = 0;
            }
        }
        arg0->actor.world.pos.x = sp4C->world.pos.x + sp4C->unk_258;
        arg0->actor.world.pos.y = (sp4C->world.pos.y + sp4C->unk_25C) - 27.0f;
        arg0->actor.world.pos.z = sp4C->world.pos.z + sp4C->unk_260;
        temp_v0_3 = sp4C->shape.rot.y;
        arg0->actor.shape.rot.y = temp_v0_3;
        arg0->currentYaw = temp_v0_3;
        if (D_80862B04 == 0) {
            temp_a2 = &arg0->unk_284;
            if (arg0->unk_AE7 != 0) {
                sp2C = temp_a2;
                if (LinkAnimation_Update(arg1, temp_a2) != 0) {
                    sp4C->unk_1E8 = (s32) (sp4C->unk_1E8 & ~0x100);
                    arg0->unk_AE7 = 0;
                }
                if (&D_0400E080 == arg0->unk_284.animation) {
                    if (LinkAnimation_OnFrame(temp_a2, 23.0f) != 0) {
                        func_800B8E58(arg0, 0x181EU);
                        func_8082DF8C(arg0, 0x6802U);
                    }
                    AnimationContext_SetCopyAll(arg1, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.jointTable, arg0->unk_284.jointTable);
                } else {
                    if (LinkAnimation_OnFrame(temp_a2, 10.0f) != 0) {
                        func_800B8E58(arg0, 0x181EU);
                        func_8082DF8C(arg0, 0x6802U);
                    }
                    AnimationContext_SetCopyTrue(arg1, (s32) arg0->skelAnime.limbCount, arg0->skelAnime.jointTable, arg0->unk_284.jointTable, D_8085B9F0);
                }
            } else if ((arg0->actor.flags & 0x100) != 0x100) {
                temp_v1_3 = sp4C->unk_1E8;
                var_a2 = NULL;
                var_v0_3 = 0;
                if (temp_v1_3 & 0x200) {
                    var_v0_3 = 1;
                }
                if (var_v0_3 != 0) {
                    var_a2 = &D_0400E080;
                } else {
                    var_v0_4 = 0;
                    if (temp_v1_3 & 0x100) {
                        var_v0_4 = 1;
                    }
                    if (var_v0_4 != 0) {
                        temp_v0_4 = arg0->unk_AE8;
                        if ((temp_v0_4 >= 2) && (temp_v0_4 != 0x63)) {
                            var_a2 = D_8085D6A4[temp_v0_4];
                        }
                    }
                }
                if (var_a2 != NULL) {
                    LinkAnimation_PlayOnce(arg1, &arg0->unk_284, var_a2);
                    arg0->unk_AE7 = 1;
                }
            }
        }
        if (arg0->stateFlags1 & 0x100000) {
            if (!(D_80862B44->press.button & 0x8000)) {
                if (func_8084FE48(arg0) == 0) {
                    goto block_75;
                }
                func_8084FD7C(arg1, arg0, sp4C);
            } else {
block_75:
                arg0->unk_AA5 = 0;
                arg0->stateFlags1 &= 0xFFEFFFFF;
            }
        } else if ((arg0->csMode != 0) || ((func_8082DAFC(arg1) == 0) && ((sp4C->speedXZ != 0.0f) || (func_808391D8(arg0, arg1) == 0)) && (func_80847BF0(arg0, arg1) == 0) && (func_80838A90(arg0, arg1) == 0))) {
            if (arg0->unk_730 != NULL) {
                if (func_800B7128(arg0) != 0) {
                    arg0->unk_AB2.y = func_8083C62C(arg0, 1) - arg0->actor.shape.rot.y;
                    temp_v1_4 = arg0->unk_AB2.y;
                    if (temp_v1_4 < -0x4AAA) {
                        arg0->unk_AB2.y = -0x4AAA;
                    } else {
                        var_v0_5 = temp_v1_4;
                        if (temp_v1_4 >= 0x4AAB) {
                            var_v0_5 = 0x4AAA;
                        }
                        arg0->unk_AB2.y = var_v0_5;
                    }
                    temp_v1_5 = arg0->unk_AB2.y;
                    arg0->actor.focus.rot.y = arg0->actor.shape.rot.y + temp_v1_5;
                    arg0->unk_AB2.y = temp_v1_5 + 0xFA0;
                    arg0->unk_AA6 |= 0x80;
                } else {
                    func_8083C62C(arg0, 0);
                }
                arg0->unk_AA8 = 0;
            } else if (func_8084FE48(arg0) != 0) {
                if (func_800B7128(arg0) != 0) {
                    func_80831010(arg0, arg1);
                }
                arg0->unk_B86 = 0xC;
            } else if (func_800B7128(arg0) != 0) {
                func_8084FD7C(arg1, arg0, sp4C);
            }
        }
    }
    if (arg0->csMode == 6) {
        arg0->csMode = 0;
    }
}

void func_808505D0(Player* arg0, PlayState* arg1) {
    Actor* sp24;
    Actor* temp_a2;

    arg0->stateFlags2 |= 0x40;
    func_80847E2C(arg0, 1.0f, 10.0f);
    if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
        temp_a2 = arg0->rideActor;
        sp24 = temp_a2;
        Camera_ChangeSetting(Play_GetCamera(arg1, 0), 1);
        func_80839E74(arg0, arg1);
        arg0->stateFlags1 &= 0xFF7FFFFF;
        arg0->actor.parent = NULL;
        D_801BDA9C = 0;
        if ((*(gBitFlags + 0x38) & gSaveContext.save.inventory.questItems) || (gGameInfo->data[0x2A1] != 0)) {
            gSaveContext.save.horseData.scene = arg1->sceneNum;
            gSaveContext.save.horseData.pos.x = (s16) (s32) temp_a2->world.pos.x;
            gSaveContext.save.horseData.pos.y = (s16) (s32) temp_a2->world.pos.y;
            gSaveContext.save.horseData.pos.z = (s16) (s32) temp_a2->world.pos.z;
            gSaveContext.save.horseData.yaw = temp_a2->shape.rot.y;
        }
    } else {
        if (arg0->mountSide < 0) {
            D_8085D708->unk_2 = 0x2828;
        } else {
            D_8085D708->unk_2 = 0x281D;
        }
        func_8082E224(arg0, D_8085D708);
    }
}

s32 func_80850734(PlayState* arg0, Player* arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg1->transformation == 2) && (arg1->windSpeed == 0.0f) && (arg1->currentBoots < 5) && (~(D_80862B44->cur.button | 0xFFFF7FFF) == 0)) {
        func_8083B850(arg0, arg1);
        arg1->stateFlags2 |= 0x400;
        LinkAnimation_Change(arg0, &arg1->skelAnime, &D_0400E418, 0.6666667f, 4.0f, (f32) Animation_GetLastFrame(&D_0400E418), (u8) 2, -6.0f);
        arg1->unk_AE8 = 5;
        arg1->unk_B86 = 0;
        arg1->unk_B48 = arg1->linearVelocity;
        arg1->actor.velocity.y = 0.0f;
        func_800B8E58(arg1, 0x8ECU);
        var_v0 = 1;
    }
    return var_v0;
}

s32 func_80850854(PlayState* arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg1->unk_14B == 3) && (arg1->unk_B67 != 0) && (gSaveContext.save.playerData.health != 0) && (D_80862AFC != 0.0f)) {
        func_808373F8(NULL);
        var_v0 = 1;
    }
    return var_v0;
}

void func_808508C8(Player* arg0, PlayState* arg1) {
    f32 sp34;
    s16 sp32;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 var_v1;

    arg0->stateFlags2 |= 0x20;
    func_8082E67C(arg1, arg0, &D_0400E000);
    func_808475B4(arg0);
    temp_v0 = arg0->unk_AE8;
    if (temp_v0 != 0) {
        arg0->unk_AE8 = temp_v0 - 1;
    }
    func_8082F164(arg0, 0x10U);
    if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
        arg0->unk_AE8 = 0;
    }
    if ((func_8082DAFC(arg1) == 0) && (func_80833058(arg1, arg0, D_8085D048, (s8* )1) == 0) && (func_8083B3B4(arg1, arg0, D_80862B44) == 0) && ((arg0->unk_AE8 != 0) || (func_80850734(arg1, arg0) == 0))) {
        sp34 = 0.0f;
        sp32 = arg0->actor.shape.rot.y;
        if ((s32) arg0->unk_AA5 >= 3) {
            arg0->unk_AA5 = 0;
        }
        if (arg0->currentBoots >= 5) {
            if (arg0->actor.bgCheckFlags & 1) {
                func_80836A98(arg0, (D_8085BE84 + 0x150)[arg0->modelAnimType], arg1);
                func_8082E1BC(arg0);
            }
            goto block_24;
        }
        if ((func_80850854(arg1, arg0) == 0) && (func_80832F78((f32* ) arg0, (s16* ) &sp34, (bitwise f32) &sp32, NULL, (Player* ) arg1), (sp34 != 0.0f))) {
            temp_v0_2 = arg0->actor.shape.rot.y - sp32;
            var_v1 = temp_v0_2;
            if (temp_v0_2 < 0) {
                var_v1 = -temp_v0_2;
            }
            if ((var_v1 < 0x6001) || (Math_StepToF(&arg0->linearVelocity, 0.0f, 1.0f) != 0)) {
                if ((func_8082FC24(arg0) != 0) || (func_80847ED4(arg0) != 0)) {
                    func_80848048(arg1, arg0);
                } else {
                    func_8083B73C(arg1, arg0, sp32);
                }
                goto block_24;
            }
        } else {
block_24:
            func_8084748C((f32* ) arg0, &arg0->linearVelocity, sp34, sp32);
            func_80847F1C(arg0);
        }
    }
}

void func_80850B18(Player* arg0, PlayState* arg1) {
    s16 temp_v0;
    s16 var_v1;

    if (func_80838A90(arg0, arg1) == 0) {
        arg0->stateFlags2 |= 0x20;
        func_808477D0(arg1, arg0, NULL, arg0->linearVelocity);
        func_808475B4(arg0);
        temp_v0 = arg0->unk_AE8;
        if (temp_v0 == 0) {
            var_v1 = 0;
        } else {
            arg0->unk_AE8 = temp_v0 - 1;
            var_v1 = arg0->unk_AE8;
        }
        if (var_v1 == 0) {
            func_808353DC(arg1, arg0);
        }
    }
}

void func_80850BA8(Player* arg0) {
    arg0->linearVelocity = Math_CosS(arg0->unk_AAA) * arg0->unk_B48;
    arg0->actor.velocity.y = -Math_SinS(arg0->unk_AAA) * arg0->unk_B48;
}

void func_80850BF8(Player* arg0, f32 arg1) {
    f32 temp_fv0;
    s16 var_a0;
    s16 var_v1_2;
    s32 temp_ft0;
    s32 var_v1;

    Math_AsymStepToF(arg0 + 0xB48, arg1, 1.0f, (fabsf(arg0->unk_B48) * 0.01f) + 0.4f);
    temp_fv0 = Math_CosS((s16) (D_80862B44->rel.stick_x * 0x10E));
    var_v1 = -1;
    if (D_80862B44->rel.stick_x >= 0) {
        var_v1 = 1;
    }
    temp_ft0 = (s32) ((f32) var_v1 * (1.0f - temp_fv0) * -1100.0f);
    if ((s16) temp_ft0 < -0x1F40) {
        var_a0 = -0x1F40;
    } else {
        var_v1_2 = (s16) temp_ft0;
        if ((s16) temp_ft0 >= 0x1F41) {
            var_v1_2 = 0x1F40;
        }
        var_a0 = var_v1_2;
    }
    arg0->currentYaw += var_a0;
}

void func_80850D20(void) {
    func_8083F8A8((GameState* )0x41400000, (Actor* )-1, 1.0f, 0xA0, 2.8e-44f, 1);
}

void func_80850D68(Player* arg0, PlayState* arg1) {
    f32 sp44;
    s16 sp42;
    s16 sp40;
    s16 sp3C;
    s16 sp3A;
    SkelAnime* sp28;
    DynaPolyActor* temp_v0_3;
    GameInfo* temp_v1_2;
    GameInfo* temp_v1_4;
    GameInfo* temp_v1_5;
    SkelAnime* temp_a1;
    s16 temp_a1_2;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s16 temp_v1;
    s16 temp_v1_3;
    s16 var_a1;
    s16 var_t1;
    s16 var_v0;
    s16 var_v0_2;
    u8 temp_a1_3;

    arg0->stateFlags2 |= 0x20;
    func_808475B4(arg0);
    func_8082F164(arg0, 0x10U);
    if ((func_80833058(arg1, arg0, D_8085D048, NULL) == 0) && (func_8083B3B4(arg1, arg0, D_80862B44) == 0) && (func_80840A30(arg1, arg0, &arg0->linearVelocity, 0.0f) == 0)) {
        sp44 = 0.0f;
        if (arg0->unk_AE8 != 0) {
            temp_a1 = &arg0->skelAnime;
            if (((func_8082DA90(arg1) == 0) && (~(D_80862B44->cur.button | 0xFFFF7FFF) != 0)) || (arg0->currentBoots != 4)) {
                arg0->unk_B86 = 1;
            }
            sp28 = temp_a1;
            if (LinkAnimation_Update(arg1, temp_a1) != 0) {
                temp_v1 = arg0->unk_AE8;
                if (temp_v1 == 0) {
                    var_v0 = 0;
                } else {
                    arg0->unk_AE8 = temp_v1 - 1;
                    var_v0 = arg0->unk_AE8;
                }
                if (var_v0 == 0) {
                    if (arg0->unk_B86 != 0) {
                        arg0->stateFlags3 &= 0xFFFF7FFF;
                        func_8082DB90(arg1, arg0, &D_0400E408);
                    } else {
                        func_8082DB60(arg1, arg0, &D_0400E3D8);
                    }
                } else {
                    goto block_16;
                }
            } else {
block_16:
                func_80832F78((f32* ) arg0, (s16* ) &sp44, (bitwise f32) &sp40, NULL, (Player* ) arg1);
                Math_ScaledStepToS(&arg0->currentYaw, sp40, 0x640);
                if (arg0->skelAnime.curFrame >= 13.0f) {
                    sp44 = 12.0f;
                    if (LinkAnimation_OnFrame(sp28, 13.0f) != 0) {
                        arg0->unk_B48 = 16.0f;
                    }
                    arg0->stateFlags3 |= 0x8000;
                } else {
                    sp44 = 0.0f;
                }
            }
            Math_SmoothStepToS(&arg0->unk_B88, (s16) (D_80862B44->rel.stick_x * 0xC8), 0xA, 0x3E8, (s16) 0x64);
            temp_v1_2 = gGameInfo;
            Math_SmoothStepToS(&arg0->unk_B8E, arg0->unk_B88, (s16) (temp_v1_2->data[0x388] + 1), temp_v1_2->data[0x389], (s16) (s32) temp_v1_2->data[0x38A]);
        } else if (arg0->unk_B86 == 0) {
            LinkAnimation_Update(arg1, &arg0->skelAnime);
            if (((func_8082DA90(arg1) == 0) && (~(D_80862B44->cur.button | 0xFFFF7FFF) != 0)) || (arg0->currentBoots != 4) || (arg0->windSpeed > 9.0f)) {
                arg0->stateFlags3 &= 0xFFFF7FFF;
                func_8082DB90(arg1, arg0, &D_0400E408);
                arg0->unk_B86 = 1;
            } else {
                sp44 = 9.0f;
                func_800B8F98(&arg0->actor, 0xEDU);
            }
            temp_v0 = arg0->unk_B8C;
            var_a1 = D_80862B44->rel.stick_y * 0xC8;
            if (temp_v0 != 0) {
                arg0->unk_B8C = temp_v0 - 1;
                temp_v1_3 = arg0->unk_B6C - 0xFA0;
                if (temp_v1_3 < var_a1) {
                    var_a1 = temp_v1_3;
                }
            }
            if ((arg0->unk_AAA >= -0x1555) && (arg0->actor.depthInWater < (arg0->ageProperties->unk_24 + 10.0f)) && (var_a1 < 0x7D0)) {
                var_a1 = 0x7D0;
            }
            Math_SmoothStepToS(&arg0->unk_AAA, var_a1, 4, 0xFA0, (s16) 0x190);
            temp_a1_2 = D_80862B44->rel.stick_x * 0x64;
            sp42 = temp_a1_2;
            if ((Math_ScaledStepToS(&arg0->unk_B8A, temp_a1_2, 0x384) != 0) && (temp_a1_2 == 0)) {
                Math_SmoothStepToS(&arg0->unk_B88, 0, 4, 0x5DC, (s16) 0x64);
                temp_v1_4 = gGameInfo;
                Math_SmoothStepToS(&arg0->unk_B8E, arg0->unk_B88, (s16) (temp_v1_4->data[0x38C] + 1), temp_v1_4->data[0x38D], (s16) (s32) temp_v1_4->data[0x38E]);
            } else {
                temp_v0_2 = arg0->unk_B88;
                temp_t0 = arg0->unk_B8A;
                if (temp_t0 < 0) {
                    var_t1 = -0x3A98;
                } else {
                    var_t1 = 0x3A98;
                }
                arg0->unk_B88 = temp_v0_2 + temp_t0;
                temp_v1_5 = gGameInfo;
                sp3C = temp_v0_2;
                sp3A = var_t1;
                Math_SmoothStepToS(&arg0->unk_B8E, arg0->unk_B88, (s16) (temp_v1_5->data[0x38F] + 1), temp_v1_5->data[0x390], (s16) (s32) temp_v1_5->data[0x391]);
                temp_t0_2 = arg0->unk_B8A;
                var_v0_2 = temp_t0_2;
                if (temp_t0_2 < 0) {
                    var_v0_2 = -temp_t0_2;
                }
                if ((var_v0_2 >= 0xFA1) && ((((temp_v0_2 + temp_t0_2) - var_t1) * (temp_v0_2 - var_t1)) <= 0)) {
                    func_800B8E58(arg0, 0x8EEU);
                }
            }
            if (D_80862B18 < 20.0f) {
                func_80850D20(arg1, arg0);
            }
        } else {
            Math_SmoothStepToS(&arg0->unk_B88, 0, 4, 0xFA0, (s16) 0x190);
            if (((arg0->skelAnime.curFrame <= 5.0f) || (func_80850734(arg1, arg0) == 0)) && (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0)) {
                func_808353DC(arg1, arg0);
            }
            func_8082F09C(arg0);
        }
        if ((arg0->unk_B8C < 8) && (arg0->actor.bgCheckFlags & 1)) {
            temp_a1_3 = arg0->actor.floorBgId;
            if ((temp_a1_3 == 0x32) || (temp_v0_3 = DynaPoly_GetActor(&arg1->colCtx, (s32) temp_a1_3), (temp_v0_3 == NULL)) || (temp_v0_3->actor.id != 0x1A5)) {
                temp_v0_4 = arg0->unk_AAA;
                arg0->unk_AAA = temp_v0_4 + ((-arg0->unk_B6C - temp_v0_4) * 2);
                arg0->unk_B8C = 0xF;
            }
            func_80850D20(arg1, arg0);
            func_800B8E58(arg0, 0x83BU);
        }
        func_80850BF8(arg0, sp44);
        func_80850BA8(arg0);
    }
}

void func_808513EC(Player* arg0, PlayState* arg1) {
    f32 sp34;
    s16 sp32;
    s16 sp30;
    s16 var_v0;

    arg0->stateFlags2 |= 0x20;
    func_808475B4(arg0);
    func_8082F164(arg0, 0x10U);
    if ((func_80833058(arg1, arg0, D_8085D048, (s8* )1) == 0) && (func_8083B3B4(arg1, arg0, D_80862B44) == 0) && (func_80850854(arg1, arg0) == 0)) {
        func_808477D0(arg1, arg0, D_80862B44, arg0->linearVelocity);
        if (func_8082DA90(arg1) != 0) {
            sp34 = arg0->linearVelocity;
            sp32 = arg0->actor.shape.rot.y;
        } else {
            func_80832F78((f32* ) arg0, (s16* ) &sp34, (bitwise f32) &sp32, NULL, (Player* ) arg1);
        }
        sp30 = arg0->actor.shape.rot.y - sp32;
        if (func_80850734(arg1, arg0) == 0) {
            if ((func_8082FC24(arg0) != 0) || (func_80847ED4(arg0) != 0)) {
                func_80848048(arg1, arg0);
            } else if (sp34 != 0.0f) {
                var_v0 = sp30;
                if (sp30 < 0) {
                    var_v0 = -sp30;
                }
                if ((var_v0 >= 0x6001) || (arg0->currentBoots >= 5)) {
                    goto block_15;
                }
            } else {
block_15:
                func_808353DC(arg1, arg0);
            }
            func_80847FF8((f32* ) arg0, &arg0->linearVelocity, (bitwise s16) sp34, sp32);
        }
    }
}

void func_80851588(Player* arg0, PlayState* arg1) {
    s16 sp2C;
    s16 sp2A;

    func_808477D0(arg1, arg0, D_80862B44, arg0->linearVelocity);
    func_808475B4(arg0);
    func_8082F164(arg0, 0x10U);
    if ((func_80833058(arg1, arg0, D_8085D048, (s8* )1) == 0) && (func_8083B3B4(arg1, arg0, D_80862B44) == 0)) {
        func_80832F78((f32* ) arg0, &sp2C, (bitwise f32) &sp2A, NULL, (Player* ) arg1);
        if ((bitwise f32) sp2C == 0.0f) {
            func_808353DC(arg1, arg0);
        } else if ((func_8082FC24(arg0) == 0) && (func_80847ED4(arg0) == 0)) {
            func_8083B73C(arg1, arg0, sp2A);
        } else {
            func_80848094(arg1, arg0, (f32* ) &sp2C, &sp2A);
        }
        func_80847FF8((f32* ) arg0, &arg0->linearVelocity, (s16) (s32) sp2C, sp2A);
    }
}

void func_808516B4(Player* arg0, PlayState* arg1) {
    f32 sp28;
    SkelAnime* sp20;
    SkelAnime* temp_a2;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fv1;
    s8 temp_v0;

    arg0->stateFlags2 |= 0x20;
    arg0->actor.gravity = 0.0f;
    func_8083216C(arg0, arg1);
    func_8082F164(arg0, 0x10U);
    if (func_80838A90(arg0, arg1) == 0) {
        if (arg0->currentBoots >= 5) {
            func_808353DC(arg1, arg0);
            return;
        }
        temp_v0 = arg0->unk_AE7;
        if (temp_v0 == 0) {
            if (arg0->unk_AE8 == 0) {
                temp_a2 = &arg0->skelAnime;
                sp20 = temp_a2;
                if ((LinkAnimation_Update(arg1, temp_a2) != 0) || ((arg0->skelAnime.curFrame >= 22.0f) && (~(D_80862B44->cur.button | 0xFFFF7FFF) != 0))) {
                    func_8083B798(arg1, arg0, temp_a2);
                } else if (LinkAnimation_OnFrame(temp_a2, 20.0f) != 0) {
                    arg0->actor.velocity.y = -2.0f;
                }
                func_80832F24(arg0);
            } else {
                func_808477D0(arg1, arg0, D_80862B44, arg0->actor.velocity.y);
                arg0->unk_AAA = 0x3E80;
                if ((~(D_80862B44->cur.button | 0xFFFF7FFF) == 0) && (func_8083D23C(arg0, arg1) == 0) && !(arg0->actor.bgCheckFlags & 1) && (arg0->actor.depthInWater < 120.0f)) {
                    func_808481CC((Player* ) arg1, (f32* ) arg0, -2.0f);
                } else {
                    arg0->unk_AE7 += 1;
                    func_8082E634(arg1, arg0, &D_0400E000);
                }
            }
            temp_fv0 = (arg0->actor.depthInWater - arg0->ageProperties->unk_30) * 0.04f;
            if (temp_fv0 < arg0->actor.velocity.y) {
                arg0->actor.velocity.y = temp_fv0;
            }
        } else if (temp_v0 == 1) {
            LinkAnimation_Update(arg1, &arg0->skelAnime);
            func_808475B4(arg0);
            if (arg0->unk_AAA < 0x2710) {
                arg0->unk_AE7 += 1;
                arg0->unk_AE8 = (s16) (s32) arg0->actor.depthInWater;
                func_8082E634(arg1, arg0, &D_0400DFD0);
            }
        } else if (func_8083B3B4(arg1, arg0, D_80862B44) == 0) {
            temp_fv1 = ((f32) arg0->unk_AE8 * 0.018f) + 4.0f;
            if (arg0->stateFlags1 & 0x800) {
                D_80862B44 = NULL;
            }
            sp28 = temp_fv1;
            func_808477D0(arg1, arg0, D_80862B44, fabsf(arg0->actor.velocity.y));
            Math_ScaledStepToS(&arg0->unk_AAA, -0x2710, 0x320);
            var_fv1 = temp_fv1;
            if (var_fv1 > 8.0f) {
                var_fv1 = 8.0f;
            }
            func_808481CC((Player* ) arg1, (f32* ) arg0, var_fv1);
        }
    }
}

void func_808519FC(Player* arg0, PlayState* arg1) {
    SkelAnime* sp24;
    SkelAnime* temp_a0;

    arg0->stateFlags2 |= 0x20;
    func_8082F164(arg0, 0x10U);
    if (((arg0->stateFlags1 & 0x400) || (arg0->skelAnime.curFrame <= 1.0f) || (func_80850734(arg1, arg0) == 0)) && (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0)) {
        if (!(arg0->stateFlags1 & 0x400) || (func_808482E0(arg1, &arg0->actor) != 0)) {
            func_80848250(arg1, arg0);
            func_808353DC(arg1, arg0);
            func_8082DC64(arg1, arg0);
        }
    } else {
        temp_a0 = &arg0->skelAnime;
        if ((arg0->stateFlags1 & 0x400) && (sp24 = temp_a0, (LinkAnimation_OnFrame(temp_a0, 10.0f) != 0))) {
            func_8082ECE0(arg0);
            func_8082DC64(arg1, arg0);
        } else if (LinkAnimation_OnFrame(temp_a0, 5.0f) != 0) {
            func_8082DF8C(arg0, 0x680AU);
        }
    }
    func_808475B4(arg0);
    func_8084748C((f32* ) arg0, &arg0->linearVelocity, 0.0f, arg0->actor.shape.rot.y);
}

void func_80851B58(Player* arg0, PlayState* arg1) {
    func_808475B4(arg0);
    Math_StepToF(&arg0->linearVelocity, 0.0f, 0.4f);
    if ((LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) && (arg0->linearVelocity < 10.0f)) {
        func_808353DC(arg1, arg0);
    }
}

void func_80851BD4(Player* arg0, PlayState* arg1) {
    func_808475B4(arg0);
    if ((LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) && (arg0 == arg1->actorCtx.actorLists[2].first)) {
        func_80840770(arg1, arg0);
    }
    func_8084748C((f32* ) arg0, &arg0->linearVelocity, 0.0f, arg0->actor.shape.rot.y);
}

s32 func_80851C40(PlayState* arg0, Player* arg1) {
    s16 var_v1;
    s32 var_v0;
    u16 temp_v1_2;
    u8 temp_v1;

    var_v1 = arg0->sceneNum;
    if (var_v1 == 0x15) {
        var_v0 = Audio_IsSequencePlaying(0x54U) != 0;
        if (var_v0 == 0) {
            var_v1 = arg0->sceneNum;
            goto block_3;
        }
    } else {
block_3:
        if ((var_v1 == 0x15) || (var_v0 = arg1->csMode == 0x44, (var_v0 == 0))) {
            temp_v1 = arg0->msgCtx.msgMode;
            var_v0 = temp_v1 == 0x12;
            if (var_v0 == 0) {
                var_v0 = temp_v1 == 0x13;
                if (var_v0 == 0) {
                    var_v0 = temp_v1 == 0x14;
                    if (var_v0 == 0) {
                        temp_v1_2 = arg0->msgCtx.ocarinaMode;
                        var_v0 = temp_v1_2 != 1;
                        if (var_v0 != 0) {
                            var_v0 = arg1->csMode == 5;
                            if (var_v0 == 0) {
                                var_v0 = temp_v1_2 == 3;
                                if (var_v0 == 0) {
                                    var_v0 = arg0->msgCtx.ocarinaAction == 0x32;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return var_v0;
}

void func_80851D30(PlayState* arg0, Player* arg1) {
    Vec3f sp50;
    f32* sp44;
    f32* temp_a0;
    f32* temp_s0;
    f32* var_s0;
    s32 var_s1;
    u8 temp_v1;

    var_s0 = arg1 + 0xAF4;
    sp44 = var_s0;
    if (func_80851C40(arg0, arg1) != 0) {
        if (arg1->skelAnime.mode != 0) {
            sp44 = sp44;
            func_8082DB60(arg0, arg1, D_8085D190[arg1->transformation]);
        }
        sp44 = sp44;
        func_80124618(D_801C03A0, arg1->skelAnime.curFrame, &sp50);
        temp_s0 = sp44 + 0x10;
        temp_s0->unk_-10 = (f32) sp50;
        temp_s0->unk_-C = (f32) sp50;
        temp_s0->unk_-8 = (f32) sp50;
        temp_s0->unk_-4 = (f32) sp50;
        temp_s0->unk_0 = (bitwise f32) sp50;
        return;
    }
    if (arg0->msgCtx.ocarinaMode == 1) {
        temp_v1 = arg0->msgCtx.unk12048;
        if (temp_v1 != 0xFF) {
            sp44[temp_v1] = 1.2f;
            func_8082DB90(arg0, arg1, D_8085D190[arg1->transformation]);
            return;
        }
        var_s1 = 0;
        do {
            temp_a0 = var_s0;
            var_s0 += 4;
            Math_StepToF(temp_a0, 1.0f, 0.04000001f);
            var_s1 += 1;
        } while (var_s1 != 5);
    }
}

void func_80851EAC(Player* arg0) {
    arg0->unk_B86 = -1;
    arg0->unk_B88 = -1;
    arg0->unk_B08[2] = 0.0f;
}

void func_80851EC8(PlayState* arg0, PlayState* arg1) {
    u8 temp_v1;

    temp_v1 = arg0->msgCtx.unk12048;
    (arg1 + (D_8085D714[temp_v1].unk_0 * 2))->unk_B86 = (s16) temp_v1;
    *(arg1 + (temp_v1 * 4) + 0xB10) = 3.0f;
}

void func_80851F18(PlayState* arg0, PlayState* arg1) {
    s32 sp2C;
    f32* temp_a1;
    f32* temp_v0_4;
    s16 temp_t1;
    s16 temp_t1_2;
    s32 temp_t2;
    void* temp_v0;
    void* temp_v0_2;
    void* temp_v0_3;

    temp_t1 = arg1->colCtx.dyna.bgActors[7].curTransform.unk_12;
    if (temp_t1 >= 0) {
        AnimationContext_SetLoadFrame(arg0, D_8085D714[temp_t1].unk_4, (s32) (arg1 + (temp_t1 * 4))->unk_B10, (s32) arg1->mainCamera.paramData[0x20], arg1->unk_264);
        AnimationContext_SetCopyTrue(arg0, (s32) arg1->mainCamera.paramData[0x20], arg1->unk_260, arg1->unk_264, D_8085BA08);
    }
    temp_t1_2 = arg1->unk_B88;
    if (temp_t1_2 >= 0) {
        temp_t2 = (s32) (arg1 + 0x899) & ~0xF;
        sp2C = temp_t2;
        AnimationContext_SetLoadFrame(arg0, D_8085D714[temp_t1_2].unk_4, (s32) (arg1 + (temp_t1_2 * 4))->unk_B10, (s32) arg1->mainCamera.paramData[0x20], (Vec3s* ) temp_t2);
        AnimationContext_SetCopyTrue(arg0, (s32) arg1->mainCamera.paramData[0x20], arg1->unk_260, (Vec3s* ) sp2C, D_8085BA20);
    }
    temp_a1 = arg1 + 0xB10;
    temp_v0 = temp_a1 + 4;
    *temp_a1 += 1.0f;
    if (*temp_a1 >= 9.0f) {
        *temp_a1 = 8.0f;
        if (arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 == 0) {
            arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 = -1;
        } else if (arg1->unk_B88 == 0) {
            arg1->unk_B88 = -1;
        }
    }
    temp_v0->unk_0 = (f32) (temp_v0->unk_0 + 1.0f);
    if (temp_v0->unk_0 >= 9.0f) {
        temp_v0->unk_0 = 8.0f;
        if (arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 == 1) {
            arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 = -1;
        } else if (arg1->unk_B88 == 1) {
            arg1->unk_B88 = -1;
        }
    }
    temp_v0_2 = temp_v0 + 4;
    temp_v0_2->unk_0 = (f32) (temp_v0->unk_4 + 1.0f);
    if (temp_v0_2->unk_0 >= 9.0f) {
        temp_v0_2->unk_0 = 8.0f;
        if (arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 == 2) {
            arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 = -1;
        } else if (arg1->unk_B88 == 2) {
            arg1->unk_B88 = -1;
        }
    }
    temp_v0_3 = temp_v0_2 + 4;
    temp_v0_3->unk_0 = (f32) (temp_v0_2->unk_4 + 1.0f);
    if (temp_v0_3->unk_0 >= 9.0f) {
        temp_v0_3->unk_0 = 8.0f;
        if (arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 == 3) {
            arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 = -1;
        } else if (arg1->unk_B88 == 3) {
            arg1->unk_B88 = -1;
        }
    }
    temp_v0_4 = temp_v0_3 + 4;
    *temp_v0_4 = temp_v0_3->unk_4 + 1.0f;
    if (*temp_v0_4 >= 9.0f) {
        *temp_v0_4 = 8.0f;
        if (arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 == 4) {
            arg1->colCtx.dyna.bgActors[7].curTransform.unk_12 = -1;
            return;
        }
        if (arg1->unk_B88 == 4) {
            arg1->unk_B88 = -1;
        }
    }
}

void func_808521E0(PlayState* arg0, PlayState* arg1) {
    if (func_80851C40(arg1) != 0) {
        if (&D_0400E1F0 != arg1->unk_248) {
            func_8082DB60(arg0, (Player* ) arg1, &D_0400E1F0);
        }
        func_80124618(D_801C0490, arg1->unk_258, (Vec3f* ) &arg1->colCtx.dyna.bgActors[6].prevTransform.rot);
        return;
    }
    if (arg0->msgCtx.ocarinaMode == 1) {
        if (arg0->msgCtx.unk12048 != 0xFF) {
            func_80851EC8(arg0, arg1);
        }
        func_80851F18(arg0, arg1);
    }
}

void func_80852290(PlayState* arg0, Player* arg1) {
    f32 sp3C;
    s16 sp38;
    Actor* temp_v0;
    Input* temp_a2;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 var_a1;
    s16 var_a1_2;
    s16 var_a1_3;
    s16 var_v1;
    s32 temp_a1;
    s32 temp_ft0;
    s32 var_a1_4;

    if (func_80851C40(arg0, arg1, arg0) != 0) {
        if (arg1->skelAnime.mode != 0) {
            func_8082DB60(arg0, arg1, D_8085D190[arg1->transformation]);
        }
        arg1->unk_B8A = 8;
    } else {
        if ((arg0->msgCtx.ocarinaMode == 1) && (arg0->msgCtx.unk12048 != 0xFF)) {
            temp_v0 = arg1->unk_A90;
            if ((temp_v0 != NULL) && (arg1->unk_A94 < 0.0f)) {
                temp_v0->flags |= 0x20000000;
                arg1->unk_A94 = 0.0f;
            }
            func_8082DB90(arg0, arg1, D_8085D190[arg1->transformation]);
            arg1->unk_B8A = 8;
        }
        temp_a2 = arg0->state.input;
        D_80862B44 = temp_a2;
        func_800FF3A0(&sp3C, &sp38, temp_a2);
        var_a1 = sp38;
        if ((s16) (var_a1 + 0x4000) < 0) {
            var_a1 -= 0x8000;
            sp3C = -sp3C;
        }
        if (var_a1 < -0x1F40) {
            var_a1_2 = -0x1F40;
            goto block_16;
        }
        sp38 = var_a1;
        if (var_a1 >= 0x2EE1) {
            var_a1_2 = 0x2EE0;
block_16:
            sp38 = var_a1_2;
        }
        temp_ft0 = (s32) (sp3C * -100.0f);
        var_a1_3 = (s16) temp_ft0;
        if ((s16) temp_ft0 >= 0xFA1) {
            var_a1_3 = 0xFA0;
        }
        Math_SmoothStepToS(&arg1->unk_AB2.x, var_a1_3, 4, 0x7D0, (s16) 0);
        Math_SmoothStepToS(&arg1->unk_AB2.y, sp38, 4, 0x7D0, (s16) 0);
        temp_v1 = arg1->unk_AB2.x;
        arg1->unk_AAC.x = -temp_v1;
        arg1->unk_AA6 |= 0xC8;
        if (temp_v1 < 0) {
            var_a1_4 = temp_v1 * -0x10000;
        } else {
            var_a1_4 = temp_v1 << 0x10;
        }
        temp_a1 = var_a1_4 >> 0x10;
        if (temp_a1 < 0x7D0) {
            arg1->actor.shape.face = 0;
        } else if (temp_a1 < 0xFA0) {
            arg1->actor.shape.face = 0xD;
        } else {
            arg1->actor.shape.face = 8;
        }
    }
    temp_v0_2 = arg1->unk_B8A;
    if (temp_v0_2 == 0) {
        var_v1 = 0;
    } else {
        arg1->unk_B8A = temp_v0_2 - 1;
        var_v1 = arg1->unk_B8A;
    }
    if (var_v1 != 0) {
        arg1->unk_B86 += (s32) ((f32) arg1->unk_AB2.x * 2.5f);
        arg1->unk_B88 += (s32) ((f32) arg1->unk_AB2.y * 3.0f);
        return;
    }
    arg1->unk_B86 = 0;
    arg1->unk_B88 = 0;
}

void func_8085255C(PlayState* arg1) {
    u8 temp_v0;

    temp_v0 = arg1->unk_14B;
    if (temp_v0 == 3) {
        func_80851D30();
        return;
    }
    if (temp_v0 == 1) {
        func_808521E0();
        return;
    }
    if (temp_v0 == 2) {
        func_80852290();
    }
}

void func_808525C4(PlayState* arg0, Player* arg1) {
    s16 temp_v0;
    u8 temp_v1;

    temp_v0 = arg1->unk_AE8;
    arg1->unk_AE8 = temp_v0 + 1;
    if (((temp_v0 < 3) ^ 1) != 0) {
        temp_v1 = arg1->transformation;
        if ((temp_v1 == 2) || (temp_v1 == 3)) {
            func_8082E5A8(arg0, arg1, D_8085D190[temp_v1]);
        } else if (temp_v1 == 1) {
            func_80851EAC(arg1, arg0);
            func_8082DB60(arg0, arg1, &D_0400E200);
        } else {
            func_8082DB60(arg0, arg1, D_8085D190[temp_v1]);
        }
        arg1->unk_B48 = 1.0f;
    }
}

void func_8085269C(Player* arg0, PlayState* arg1) {
    s32 sp40;
    void* sp3C;
    Actor* temp_a1;
    Actor* temp_v0_2;
    Vec3s* temp_v0_3;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 var_fv1;
    s16 temp_v1;
    s16 var_v1_2;
    s32 var_v1;
    u16 temp_v0;

    if ((arg0->unk_AA5 != (u8) (Player* )4) && (((LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) && (arg0->skelAnime.animation == D_8085D17C[arg0->transformation])) || ((arg0->skelAnime.mode == 0) && (arg0->unk_AE8 == 0)))) {
        func_808525C4(arg1, arg0, (Player* )4);
        if (((arg0->actor.flags * 4) >= 0) || (arg0->unk_A90->id == 0x228)) {
            func_80152434(arg1, 1U);
        }
    } else if (arg0->unk_AE8 != 0) {
        temp_v0 = arg1->msgCtx.ocarinaMode;
        if (temp_v0 == (u16) (Player* )4) {
            arg1->interfaceCtx.unk_222 = 0;
            ActorCutscene_Stop(arg1->playerActorCsIds[0]);
            temp_a1 = arg0->targetActor;
            arg0->actor.flags &= 0xDFFFFFFF;
            if ((temp_a1 != NULL) && (arg0->unk_A90 == temp_a1) && (arg0->unk_A94 >= 0.0f)) {
                func_8085B460(arg1, temp_a1, M2C_ERROR(Read from unset register $a2));
                return;
            }
            temp_v1 = arg0->tatlTextId;
            if (temp_v1 < 0) {
                temp_v0_2 = arg0->tatlActor;
                arg0->targetActor = temp_v0_2;
                temp_v0_2->textId = (u16) -temp_v1;
                func_8085B460(arg1, arg0->targetActor, M2C_ERROR(Read from unset register $a2));
                return;
            }
            if (func_80838A90(arg0, arg1) == 0) {
                func_80836A5C(arg0, arg1);
                func_8082DBC0(arg1, arg0, D_8085D17C[arg0->transformation]);
            }
        } else {
            var_v1 = ((s32) temp_v0 < 0x1C) ^ 1;
            if (var_v1 != 0) {
                var_v1 = (s32) temp_v0 < 0x27;
            }
            if ((var_v1 != 0) || (temp_v0 == 0x16) || (temp_v0 == 0x1A) || (temp_v0 == 0x18) || (temp_v0 == 0x19)) {
                if (temp_v0 == 0x16) {
                    if (func_8082DA90(arg1) == 0) {
                        if (gSaveContext.save.playerData.deaths == 1) {
                            arg1->nextEntranceIndex = 0x1C10;
                        } else {
                            arg1->nextEntranceIndex = 0x1C00;
                        }
                        gSaveContext.nextCutsceneIndex = 0xFFF7;
                        arg1->sceneLoadFlag = 0x14;
                    }
                } else {
                    arg1->interfaceCtx.unk_222 = 0;
                    sp3C = arg1 + 0x10000;
                    sp40 = var_v1;
                    ActorCutscene_Stop(arg1->playerActorCsIds[0]);
                    arg0->actor.flags &= 0xDFFFFFFF;
                    if (var_v1 != 0) {
                        var_v1_2 = 0x1CE;
                    } else {
                        var_v1_2 = 0x18C;
                    }
                    if (Actor_Spawn(&arg1->actorCtx, arg1, var_v1_2, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s32) arg1->msgCtx.ocarinaMode) != NULL) {
                        arg0->stateFlags1 &= 0xDFFFFFFF;
                        arg0->csMode = 0;
                        func_8085B28C(arg1, NULL, 0x13);
                        arg0->stateFlags1 |= 0x30000000;
                        return;
                    }
                    func_80836A5C(arg0, arg1);
                    func_8082DBC0(arg1, arg0, D_8085D17C[arg0->transformation]);
                }
            } else {
                if ((temp_v0 == 3) && (arg1->msgCtx.unk1202E == 3)) {
                    arg1->interfaceCtx.unk_222 = 0;
                    ActorCutscene_Stop(arg1->playerActorCsIds[0]);
                    arg0->actor.flags &= 0xDFFFFFFF;
                    func_80831760(arg1, arg0, func_80855A7C, 0);
                    arg0->stateFlags1 |= 0x30000000;
                    return;
                }
                if (arg0->unk_AA5 == (u8) (Player* )4) {
                    temp_v0_3 = arg0->skelAnime.jointTable;
                    temp_fa0 = (f32) temp_v0_3->x;
                    temp_fa1 = (f32) temp_v0_3->z;
                    temp_fv0 = sqrtf((temp_fa0 * temp_fa0) + (temp_fa1 * temp_fa1));
                    var_fv1 = temp_fv0;
                    if (temp_fv0 != 0.0f) {
                        var_fv1 = (temp_fv0 - 100.0f) / temp_fv0;
                        if (var_fv1 < 0.0f) {
                            var_fv1 = 0.0f;
                        }
                    }
                    temp_v0_3->x = (s16) (s32) (temp_fa0 * var_fv1);
                    arg0->skelAnime.jointTable->z = (s16) (s32) (temp_fa1 * var_fv1);
                    return;
                }
                func_8085255C(arg1, arg0, (Player* )4);
            }
        }
    }
}

void func_80852B28(Player* arg0, PlayState* arg1) {
    SkelAnime* sp3C;
    SkelAnime* temp_a2;

    func_80832F24(arg0);
    temp_a2 = &arg0->skelAnime;
    sp3C = temp_a2;
    if (LinkAnimation_Update(arg1, temp_a2) != 0) {
        func_80836A98(arg0, &D_0400DD40, arg1);
        return;
    }
    if (LinkAnimation_OnFrame(temp_a2, 3.0f) != 0) {
        if (Actor_Spawn(&arg1->actorCtx, arg1, 0xF, arg0->bodyPartsPos[0xF].x, arg0->bodyPartsPos[0xF].y, arg0->bodyPartsPos[0xF].z, (s16) 0xFA0, (s16) (s32) arg0->actor.shape.rot.y, (s16) 0, 8) != NULL) {
            Inventory_ChangeAmmo(9, -1);
            arg0->unk_D57 = 4;
        }
        func_8082DF8C(arg0, 0x6800U);
    }
}

void func_80852C04(Actor* arg0, PlayState* arg1) {
    s32 sp38;
    SkelAnime* sp30;
    LinkAnimationHeader* var_a2_2;
    LinkAnimationHeader* var_a2_3;
    SkelAnime* temp_a1;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_v0_5;
    s32 var_a2;
    s8 temp_v0_2;
    u8 temp_v0_4;

    func_8083249C(arg0);
    temp_a1 = arg0 + 0x240;
    sp30 = temp_a1;
    if (LinkAnimation_Update(arg1, temp_a1) != 0) {
        temp_v0 = arg0->unk_AE8;
        if (temp_v0 != 0) {
            if (temp_v0 >= 2) {
                arg0->unk_AE8 = (s16) (temp_v0 - 1);
            }
            if ((func_808482E0(arg1, arg0) != 0) && (arg0->unk_AE8 == 1)) {
                Player_SetModels((Player* ) arg0, Player_ActionToModelGroup((Player* ) arg0, (enum PlayerActionParam) arg0->unk_14A));
                temp_v0_2 = arg0->unk_B2A;
                if ((temp_v0_2 == 0x5D) || (temp_v0_2 == 0x64) || (temp_v0_2 == 0x65) || (temp_v0_2 == 0x66)) {
                    func_80838760((Player* ) arg0);
                    func_80848250(arg1, (Player* ) arg0);
                    arg0->unk_A6C = (s32) (arg0->unk_A6C & 0xDFFFFFFF);
                    func_8085B28C(arg1, NULL, 0x5D);
                    return;
                }
                if ((arg0->unk_A88 == NULL) || (var_a2 = arg0->unk_A87 < 0, (var_a2 == 0))) {
                    var_a2 = (arg0->unk_A74 & 0x20) != 0;
                }
                if ((var_a2 != 0) || (gSaveContext.healthAccumulator == 0)) {
                    sp38 = var_a2;
                    func_80838760((Player* ) arg0);
                    if (var_a2 != 0) {
                        func_80848250(arg1, (Player* ) arg0, var_a2);
                        arg0->unk_A87 = 0;
                        if (func_80847994(arg1, (Player* ) arg0) == 0) {
                            func_8085B460(arg1, arg0->unk_A88, M2C_ERROR(Read from unset register $a2));
                        }
                    } else {
                        func_80848294(arg1, (Player* ) arg0, var_a2);
                    }
                }
            }
        } else {
            func_8082E794((Player* ) arg0);
            temp_v0_3 = arg0->unk_384;
            if ((temp_v0_3 == 0x11) || (temp_v0_3 == 0x52) || (temp_v0_3 == 0x76)) {
                func_80838760((Player* ) arg0);
                arg0->unk_A6C = (s32) (arg0->unk_A6C & ~0xC00);
                if (arg0->unk_384 == 0x11) {
                    func_80839E74((Player* ) arg0, arg1);
                    return;
                }
                arg0->colChkInfo.damage = 0;
                func_80833B18(arg1, (Player* ) arg0, (Player* )3, 0.0f, 0.0f, (s16) 0, 0x14);
                return;
            }
            if (&D_0400DB18 == arg0->unk_248) {
                if (arg0->unk_14B == 3) {
                    var_a2_2 = &D_0400E2C0;
                } else {
                    var_a2_2 = &D_0400D5B0;
                }
                func_8082DB90(arg1, (Player* ) arg0, var_a2_2);
            } else {
                var_a2_3 = &D_0400D5A8;
                if (arg0->unk_14B == 3) {
                    var_a2_3 = &D_0400E2B8;
                }
                func_8082DB90(arg1, (Player* ) arg0, var_a2_3);
            }
            func_8082E920(arg1, (Player* ) arg0, 0x9F);
            func_80838760((Player* ) arg0);
            arg0->unk_AE8 = 2;
            arg0->unk_A86 = (s8) arg1->playerActorCsIds[1];
        }
    } else if (arg0->unk_AE8 == 0) {
        temp_v0_4 = arg0->unk_14B;
        if (temp_v0_4 == 4) {
            func_8082E224((Player* ) arg0, D_8085D73C);
            return;
        }
        if (temp_v0_4 == 3) {
            func_8082E224((Player* ) arg0, D_8085D74C);
        }
    } else {
        temp_v0_5 = arg0->unk_248;
        if ((&D_0400D5B0 == temp_v0_5) || (&D_0400E2C0 == temp_v0_5)) {
            Math_ScaledStepToS(&arg0->shape.rot.y, (s16) (Camera_GetCamDirYaw(arg1->cameraPtrs[arg1->activeCamId]) + 0x8000), 0xFA0);
        } else if ((&D_0400E2B8 == temp_v0_5) && (LinkAnimation_OnFrame(sp30, 10.0f) != 0)) {
            func_8082E1BC((Player* ) arg0);
        }
        if (LinkAnimation_OnFrame(sp30, 21.0f) != 0) {
            func_8082ECE0((Player* ) arg0);
        }
    }
}

void func_80852FD4(Player* arg0, PlayState* arg1) {
    SkelAnime* sp18;
    SkelAnime* temp_a3;
    s16 temp_v0;
    s16 var_v1;

    temp_a3 = &arg0->skelAnime;
    sp18 = temp_a3;
    if (LinkAnimation_Update(arg1, temp_a3) != 0) {
        if (arg0->unk_AE7 == 0) {
            temp_v0 = arg0->unk_AE8;
            if (temp_v0 == 0) {
                var_v1 = 0;
            } else {
                arg0->unk_AE8 = temp_v0 - 1;
                var_v1 = arg0->unk_AE8;
            }
            if (var_v1 == 0) {
                arg0->unk_AE7 = 1;
                arg0->skelAnime.endFrame = arg0->skelAnime.animLength - 1.0f;
            }
        } else {
            func_80839E74(arg0, arg1, arg0, temp_a3);
        }
    } else {
        if ((arg0->transformation == 0) && (LinkAnimation_OnFrame(temp_a3, 158.0f) != 0)) {
            func_8082DF8C(arg0, 0x6800U);
            return;
        }
        if (arg0->transformation != 0) {
            func_8082E224(arg0, D_8085D75C);
            return;
        }
        func_808484CC(arg0, D_8085D75C, arg0);
    }
}

void func_808530E0(PlayState* arg0, Player* arg1) {
    Vec3f sp4C;
    Vec3f sp40;
    Vec3f sp34;

    func_80835BC8(arg1, arg1 + 0x24, &D_8085D764, &sp4C);
    func_80835BC8(arg1, &gZeroVec3f, &D_8085D770, &sp40);
    func_80835BC8(arg1, &gZeroVec3f, &D_8085D77C, &sp34);
    func_800B0EB0(arg0, &sp4C, &sp40, &sp34, &D_8085D788, D_8085D78C, (s16) 0x28, (s16) 0xA, (s16) 0xA);
}

void func_80853194(Player* arg0, PlayState* arg1) {
    s32 sp40;
    SkelAnime* sp34;
    LinkAnimationHeader* var_a2;
    SkelAnime* temp_a1;
    s16 temp_v0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 var_v1;
    s32 var_a2_2;
    s8 temp_v0_2;
    u8 temp_v1;

    func_808323C0(&arg0->actor, arg1->playerActorCsIds[2]);
    temp_a1 = &arg0->skelAnime;
    sp34 = temp_a1;
    if (LinkAnimation_Update(arg1, temp_a1) != 0) {
        temp_v0 = arg0->unk_AE8;
        if (temp_v0 == 0) {
            temp_v0_2 = arg0->heldItemActionParam;
            if (temp_v0_2 == 0x21) {
                temp_v0_3 = Rand_S16Offset(-1, 3);
                var_v1 = temp_v0_3;
                if (temp_v0_3 == 0) {
                    var_v1 = 3;
                }
                if ((var_v1 < 0) && (gSaveContext.save.playerData.health < 0x11)) {
                    var_v1 = 3;
                }
                if (var_v1 < 0) {
                    Health_ChangeBy(arg1, -0x10);
                } else {
                    gSaveContext.healthAccumulator = var_v1 * 0x10;
                }
            } else {
                temp_v1 = *(&D_8085D76D + temp_v0_2);
                if (temp_v1 & 1) {
                    gSaveContext.healthAccumulator = 0x140;
                }
                if (temp_v1 & 2) {
                    sp40 = (s32) temp_v1;
                    Parameter_AddMagic(arg1, (s16) (gSaveContext.unk_3F30 + (gSaveContext.save.playerData.doubleMagic * 0x30) + 0x30));
                }
                if (temp_v1 & 4) {
                    gSaveContext.healthAccumulator = 0x50;
                }
                if (arg0->heldItemActionParam == 0x28) {
                    gSaveContext.save.weekEventReg[0xE] |= 8;
                }
                gSaveContext.jinxTimer = 0;
            }
            if (arg0->transformation == 3) {
                var_a2 = &D_0400E290;
            } else {
                var_a2 = &D_0400D4C0;
            }
            func_8082DB60(arg1, arg0, var_a2);
            arg0->unk_AE8 = 1;
            return;
        }
        if (temp_v0 < 0) {
            arg0->unk_AE8 = temp_v0 + 1;
            temp_v0_4 = arg0->unk_AE8;
            if (temp_v0_4 == 0) {
                arg0->unk_AE8 = 3;
                arg0->skelAnime.endFrame = arg0->skelAnime.animLength - 1.0f;
                return;
            }
            if (temp_v0_4 == -6) {
                func_808530E0(arg1, arg0);
            }
        } else {
            func_80838760(arg0);
            func_80839E74(arg0, arg1);
        }
    } else {
        temp_v0_5 = arg0->unk_AE8;
        if (temp_v0_5 == 1) {
            if ((gSaveContext.healthAccumulator == 0) && (gSaveContext.unk_3F28 != 9)) {
                if (arg0->transformation == 3) {
                    LinkAnimation_Change(arg1, sp34, &D_0400E298, 0.6666667f, 0.0f, 5.0f, (u8) 2, -6.0f);
                    arg0->unk_AE8 = -7;
                } else {
                    func_8082E4A4(arg1, arg0, &D_0400D4B0);
                    arg0->unk_AE8 = 2;
                }
                if (arg0->heldItemActionParam == 0x26) {
                    var_a2_2 = ITEM_MILK_HALF;
                } else {
                    var_a2_2 = ITEM_BOTTLE;
                }
                func_80123D50(arg1, arg0, var_a2_2, PLAYER_AP_BOTTLE);
            }
            func_8082DF8C(arg0, 0x6010U);
            return;
        }
        if ((temp_v0_5 == 2) && (LinkAnimation_OnFrame(sp34, 29.0f) != 0)) {
            func_8082DF8C(arg0, 0x680AU);
        }
    }
}

void func_808534C0(Player* arg0, PlayState* arg1) {
    struct _struct_D_8085D200_0xC* sp24;
    ?* var_v1;
    Actor* temp_a1;
    Actor* temp_t1;
    f32 var_ft2;
    s32 temp_ft5;
    s32 var_t0;
    s8 temp_v0;
    u8 temp_t3;

    sp24 = &D_8085D200[arg0->unk_AE8];
    func_80832F24(arg0);
    if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
        if (arg0->unk_AE7 != 0) {
            func_808323C0(&arg0->actor, arg1->playerActorCsIds[3]);
            if (arg0->unk_AE8 == 0) {
                Message_StartTextbox(arg1, (u16) *(&D_8085D797 + (arg0->unk_AE7 * 6)), &arg0->actor);
                func_801A3098(0x922U);
                arg0->unk_AE8 = 1;
                return;
            }
            if (Message_GetState(&arg1->msgCtx) == 2) {
                arg0->unk_AE7 = 0;
                func_80838760(arg0);
                func_800E0238(Play_GetCamera(arg1, 0));
                temp_a1 = arg0->targetActor;
                if ((temp_a1 != NULL) && (arg0->exchangeItemId < 0)) {
                    func_8085B460(arg1, temp_a1, M2C_ERROR(Read from unset register $a2));
                }
            }
        } else {
            func_80839E74(arg0, arg1);
        }
    } else {
        if (arg0->unk_AE7 == 0) {
            temp_t3 = sp24->unk_8;
            var_ft2 = (f32) temp_t3;
            if ((s32) temp_t3 < 0) {
                var_ft2 += 4294967296.0f;
            }
            temp_ft5 = (s32) (arg0->skelAnime.curFrame - var_ft2);
            if ((temp_ft5 >= 0) && ((s32) sp24->unk_9 >= temp_ft5)) {
                if ((arg0->unk_AE8 != 0) && (temp_ft5 == 0)) {
                    func_800B8E58(arg0, 0x2868U);
                }
                if (func_8012364C(arg1, arg0, (s32) arg0->heldItemButton) == ITEM_BOTTLE) {
                    temp_t1 = arg0->interactRangeActor;
                    var_v1 = &D_8085D798;
                    var_t0 = 0;
                    if (temp_t1 != NULL) {
loop_20:
                        if ((var_v1->unk_0 != temp_t1->id) || ((temp_v0 = var_v1->unk_2, (temp_v0 >= 0)) && (temp_v0 != temp_t1->params))) {
                            var_t0 += 1;
                            var_v1 += 6;
                            if (var_t0 != 0xE) {
                                goto loop_20;
                            }
                        }
                        if (var_t0 < 0xE) {
                            arg0->unk_AE7 = var_t0 + 1;
                            arg0->unk_AE8 = 0;
                            arg0->stateFlags1 |= 0x30000000;
                            temp_t1->parent = &arg0->actor;
                            func_80123D50(arg1, arg0, (s32) var_v1->unk_3, (enum PlayerActionParam) var_v1->unk_4);
                            func_8082DB90(arg1, arg0, sp24->unk_4);
                        }
                    }
                }
            }
        }
        if (arg0->skelAnime.curFrame <= 7.0f) {
            arg0->stateFlags3 |= 0x800;
        }
    }
}

void func_80853754(Player* arg0, PlayState* arg1) {
    s32 sp2C;
    SkelAnime* sp28;
    SkelAnime* temp_a2;

    func_808323C0(&arg0->actor, arg1->playerActorCsIds[2]);
    temp_a2 = &arg0->skelAnime;
    sp28 = temp_a2;
    if (LinkAnimation_Update(arg1, temp_a2) != 0) {
        func_80838760(arg0);
        func_80839E74(arg0, arg1);
        return;
    }
    if (LinkAnimation_OnFrame(temp_a2, 37.0f) != 0) {
        sp2C = 8;
        func_800B8E58(arg0, 0x286CU);
        func_8082DF8C(arg0, 0x6814U);
        if (arg0->heldItemActionParam == 0x29) {
            func_80123D50(arg1, arg0, ITEM_BOTTLE, PLAYER_AP_BOTTLE);
            func_800B8E58(arg0, 0x20A8U);
            sp2C = 1;
        }
        func_80835C64(arg1, arg0, &arg0->leftHandWorld.pos, &D_8085D7EC, sp2C);
    }
}

void func_80853850(Player* arg0, PlayState* arg1) {
    CollisionPoly* sp6C;
    s32 sp68;
    Vec3f sp5C;
    void* sp4C;
    f32 sp44;
    SkelAnime* sp40;
    SkelAnime* temp_a2;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv1;

    D_8085D800 = (f32) *(&D_8085D804 + arg0->transformation);
    if (func_80835D58(arg1, arg0, &D_8085D7F8, &sp6C, &sp68, &sp5C) != 0) {
        temp_ft4 = arg0->actor.world.pos.x;
        temp_ft5 = arg0->actor.world.pos.z;
        temp_fv1 = temp_ft4 - (bitwise f32) sp5C;
        temp_fa0 = temp_ft5 - sp5C.z;
        temp_fv0 = sqrtf((temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0));
        if (temp_fv0 != 0.0f) {
            temp_fa1 = 3.0f / temp_fv0;
            arg0->actor.world.pos.x = temp_ft4 + (temp_fv1 * temp_fa1);
            arg0->actor.world.pos.z = temp_ft5 + (temp_fa0 * temp_fa1);
        }
    }
    func_80832F24(arg0);
    func_8083249C(&arg0->actor);
    temp_a2 = &arg0->skelAnime;
    sp40 = temp_a2;
    if (LinkAnimation_Update(arg1, temp_a2) != 0) {
        func_80838760(arg0);
        if (func_80838A90(arg0, arg1) == 0) {
            func_80839E74(arg0, arg1);
        }
    } else {
        if (LinkAnimation_OnFrame(temp_a2, 76.0f) != 0) {
            sp4C = (arg0->heldItemActionParam * 4) - 0x58 + &D_8085D80C;
            sp44 = Math_SinS(arg0->actor.shape.rot.y);
            Actor_Spawn(&arg1->actorCtx, arg1, sp4C->unk_0, (sp44 * 5.0f) + arg0->leftHandWorld.pos.x, arg0->leftHandWorld.pos.y, (Math_CosS(arg0->actor.shape.rot.y) * 5.0f) + arg0->leftHandWorld.pos.z, (s16) 0x4000, (s16) (s32) arg0->actor.shape.rot.y, (s16) 0, (s32) sp4C->unk_2);
            func_80123D50(arg1, arg0, ITEM_BOTTLE, PLAYER_AP_BOTTLE);
            return;
        }
        func_8082E224(arg0, D_8085D838);
    }
}

void func_80853A5C(Player* arg0, PlayState* arg1) {
    Actor* sp2C;
    void* sp28;
    SkelAnime* sp20;
    Actor* temp_a1_2;
    SkelAnime* temp_a1;
    s8 temp_v0;
    s8 temp_v0_3;
    u16 temp_a1_3;
    u16 temp_v0_2;

    arg0->stateFlags2 |= 0x20;
    arg0->stateFlags3 |= 0x04000000;
    func_8083249C(&arg0->actor);
    temp_a1 = &arg0->skelAnime;
    sp20 = temp_a1;
    if (LinkAnimation_Update(arg1, temp_a1) != 0) {
        temp_v0 = arg0->exchangeItemId;
        if (temp_v0 == 0) {
            temp_a1_2 = arg0->targetActor;
            sp2C = temp_a1_2;
            func_80838760(arg0, temp_a1_2);
            arg0->unk_B2A = 0;
            temp_v0_2 = temp_a1_2->textId;
            if ((temp_v0_2 != 0) && (temp_v0_2 != 0xFFFF)) {
                arg0->actor.flags |= 0x100;
            }
            func_8085B460(arg1, temp_a1_2, M2C_ERROR(Read from unset register $a2));
        } else {
            sp28 = (*(&D_8085D1A4 + temp_v0) * 6) - 6 + D_8085C3F4;
            if (Player_ActionToBottle(arg0, (enum PlayerActionParam) arg0->heldItemActionParam) < 0) {
                temp_v0_3 = sp28->unk_2;
                if (temp_v0_3 < 0) {
                    arg0->unk_B2A = -temp_v0_3;
                } else {
                    arg0->unk_B2A = temp_v0_3;
                }
            }
            if (arg0->unk_AE8 == 0) {
                temp_a1_3 = arg0->actor.textId;
                if ((temp_a1_3 != 0) && (temp_a1_3 != 0xFFFF)) {
                    Message_StartTextbox(arg1, temp_a1_3, &arg0->actor);
                }
                arg0->unk_AE8 = 1;
            } else if (Message_GetState(&arg1->msgCtx) == 2) {
                func_80838760(arg0);
                arg0->unk_B2A = 0;
                arg0->actor.flags &= ~0x100;
                func_80839E74(arg0, arg1);
                arg0->unk_B5E = 0xA;
            }
        }
    } else if (arg0->unk_AE8 >= 0) {
        if ((Player_ActionToBottle(arg0, (enum PlayerActionParam) arg0->heldItemActionParam) >= 0) && (LinkAnimation_OnFrame(sp20, 36.0f) != 0)) {
            Player_SetModels(arg0, PLAYER_MODELGROUP_BOTTLE);
        } else if (LinkAnimation_OnFrame(sp20, 2.0f) != 0) {
            func_80838830(arg0, ((*(&D_8085D1A4 + arg0->heldItemActionParam) * 6) - 6 + D_8085C3F4)->unk_4);
        }
        func_8082E224(arg0, &D_8085D840);
    }
    if ((arg0->unk_AE7 == 0) && (arg0->unk_730 != NULL)) {
        arg0->currentYaw = func_8083C62C(arg0, 0);
        arg0->actor.shape.rot.y = arg0->currentYaw;
    }
}

void func_80853CC0(Player* arg0, PlayState* arg1) {
    arg0->stateFlags2 |= 0x60;
    if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
        func_8082DB3C(arg1, arg0, &D_0400DE30);
    }
    if (arg1->sceneNum != 0x5F) {
        func_8082F164(arg0, 0x10U);
    }
    if (func_8082DE88(arg0, 0, 0x64) != 0) {
        func_80836988(arg0, arg1);
        arg0->stateFlags2 &= ~0x80;
    }
}

void func_80853D68(Player* arg0, PlayState* arg1) {
    CollisionPoly* sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    s16 sp46;
    s16 sp44;
    Vec3f sp38;
    CollisionPoly* temp_a3;
    LinkAnimationHeader* var_a1;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fa0;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv1;
    f32 var_fv1_2;
    s16 var_v0;

    arg0->stateFlags2 |= 0x60;
    LinkAnimation_Update(arg1, &arg0->skelAnime);
    func_8083FBC4(arg1, (PlayState* ) arg0);
    func_8019F780(&arg0->actor.projectedPos, func_8082E078(arg0, 0xD0U) & 0xFFFF, arg0->actor.speedXZ);
    if ((func_80838A90(arg0, arg1) == 0) && ((arg0->transformation != 1) || (func_8083A114(arg0, arg1) == 0))) {
        temp_a3 = arg0->actor.floorPoly;
        if (temp_a3 == NULL) {
            func_80833AA0(arg0, arg1, &sp46, temp_a3);
            return;
        }
        sp54 = temp_a3;
        func_800B75A0(temp_a3, &sp38, &sp46);
        var_v0 = sp46;
        if (arg0->unk_AE7 != 0) {
            var_v0 = sp46 + 0x8000;
        }
        if (arg0->linearVelocity < 0.0f) {
            sp46 += 0x8000;
        }
        temp_fv0 = (1.0f - sp38.y) * 40.0f;
        if (temp_fv0 < 0.0f) {
            var_fv0 = 0.0f;
        } else {
            if (temp_fv0 > 10.0f) {
                var_fv1 = 10.0f;
            } else {
                var_fv1 = temp_fv0;
            }
            var_fv0 = var_fv1;
        }
        temp_fv1 = var_fv0 * var_fv0 * 0.015f;
        sp50 = var_fv0;
        temp_fa0 = sp38.y * 0.01f;
        sp44 = var_v0;
        sp4C = temp_fv1;
        sp48 = temp_fa0;
        var_fv0_2 = var_fv0;
        var_fv1_2 = temp_fv1;
        var_fa0 = temp_fa0;
        if (SurfaceType_GetSlope(&arg1->colCtx, sp54, (s32) arg0->actor.floorBgId) != 1) {
            var_fv0_2 = 0.0f;
            var_fa0 = sp38.y * 10.0f;
        }
        if (var_fv1_2 < 1.0f) {
            var_fv1_2 = 1.0f;
        }
        sp50 = var_fv0_2;
        if ((Math_AsymStepToF(&arg0->linearVelocity, var_fv0_2, var_fv1_2, var_fa0) != 0) && (var_fv0_2 == 0.0f)) {
            if (arg0->unk_AE7 == 0) {
                var_a1 = (D_8085BE84 + 0x3D8)[arg0->modelAnimType];
            } else {
                var_a1 = (D_8085BE84 + 0x3F0)[arg0->modelAnimType];
            }
            func_80836A98(arg0, var_a1, arg1);
        }
        Math_SmoothStepToS(&arg0->currentYaw, sp46, 0xA, 0xFA0, (s16) 0x320);
        Math_ScaledStepToS(&arg0->actor.shape.rot.y, sp44, 0x7D0);
    }
}

void func_80854010(Player* arg0, PlayState* arg1) {
    s16 temp_v0;
    s16 var_v1;

    temp_v0 = arg0->unk_AE8;
    if (temp_v0 == 0) {
        var_v1 = 0;
    } else {
        arg0->unk_AE8 = temp_v0 - 1;
        var_v1 = arg0->unk_AE8;
    }
    if ((var_v1 == 0) && (func_808387A0(arg1, arg0) != 0)) {
        func_80859CE0(arg1, arg0, 0);
        func_80831494(arg1, arg0, func_8085B08C, 0);
        func_8085B08C(arg0, arg1);
    }
}

void func_808540A0(Player* arg0, PlayState* arg1) {
    func_80831494(arg1, arg0, func_80854010, 0);
    arg0->unk_AE8 = 0x28;
    Actor_Spawn(&arg1->actorCtx, arg1, 0x49, 0.0f, 0.0f, 0.0f, (s16) 0, (s16) 0, (s16) 0, 0x10);
}

void func_80854118(Player* arg0, PlayState* arg1) {
    f32 sp28;
    CsCmdActorAction* temp_a1;

    if (D_80862B18 < 150.0f) {
        if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
            if (arg0->unk_AE8 == 0) {
                if (arg0->actor.bgCheckFlags & 1) {
                    arg0->skelAnime.endFrame = arg0->skelAnime.animLength - 1.0f;
                    func_8082E1BC(arg0);
                    arg0->unk_AE8 = 1;
                }
            } else {
                func_8085B384(arg0, arg1, M2C_ERROR(Read from unset register $a2));
            }
        }
        Math_SmoothStepToF(&arg0->actor.velocity.y, 2.0f, 0.3f, 8.0f, 0.5f);
    }
    if (arg1->csCtx.state != 0) {
        temp_a1 = arg1->csCtx.playerAction;
        if (temp_a1 != NULL) {
            sp28 = arg0->actor.world.pos.y;
            func_8085AB58(arg0, temp_a1);
            arg0->actor.world.pos.y = sp28;
        }
    }
}

void func_8085421C(Player* arg0, PlayState* arg1) {
    SkelAnime* sp20;
    SkelAnime* temp_a2;
    s16 temp_v0;
    s8 temp_v0_2;

    temp_a2 = &arg0->skelAnime;
    if (arg0->skelAnime.animation == NULL) {
        arg0->stateFlags2 |= 0x4000;
    } else {
        sp20 = temp_a2;
        LinkAnimation_Update(arg1, temp_a2);
        if ((&D_0400D698 == arg0->skelAnime.animation) && (LinkAnimation_OnFrame(temp_a2, 60.0f) != 0)) {
            func_8082E094(arg0, 0x850U);
            func_8082DF8C(arg0, 0x6805U);
        }
    }
    temp_v0 = arg0->unk_AE8;
    arg0->unk_AE8 = temp_v0 + 1;
    if ((((temp_v0 < 9) ^ 1) != 0) && (func_8082DA90(arg1) == 0)) {
        temp_v0_2 = arg0->unk_AE7;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 < 0) {
                func_80169FDC(&arg1->state);
            } else {
                func_80169EFC(&arg1->state);
            }
            if (SurfaceType_IsWallDamage(&arg1->colCtx, arg0->actor.floorPoly, (s32) arg0->actor.floorBgId) == 0) {
                gSaveContext.respawnFlag = -5;
            }
            arg1->unk_1887F = 4;
            play_sound(0x5801U);
        } else {
            arg1->unk_1887F = 2;
            gSaveContext.nextTransition = 2;
            gSaveContext.seqIndex = 0xFF;
            gSaveContext.nightSeqIndex = 0xFF;
        }
        arg1->sceneLoadFlag = 0x14;
    }
}

void func_8085437C(Player* arg0, PlayState* arg1) {
    func_808365DC();
}

void func_8085439C(Player* arg0, PlayState* arg1) {
    f32 temp_fv0;

    arg0->actor.gravity = -1.0f;
    LinkAnimation_Update(arg1, &arg0->skelAnime);
    temp_fv0 = arg0->actor.velocity.y;
    if (temp_fv0 < 0.0f) {
        func_80833AA0(arg0, arg1);
        return;
    }
    if (temp_fv0 < 6.0f) {
        Math_StepToF(&arg0->linearVelocity, 3.0f, 0.5f);
    }
}

void func_80854430(Player* arg0, PlayState* arg1) {
    if (arg1->unk_1887C < 0) {
        arg1->unk_1887C = 0;
        func_80839ED0(arg0, arg1);
        return;
    }
    if (arg0->unk_AE7 == 0) {
        if ((arg1->sceneNum != 0x45) && (~(D_80862B44->press.button | ~0x4000) == 0)) {
            arg1->unk_1887C = 0xA;
            func_80847880(arg1, arg0);
            func_80831494(arg1, arg0, func_80854430, 1);
            arg0->unk_AE7 = 1;
            return;
        }
        arg1->unk_1887C = 0;
        func_80847190(arg1, arg0, 0);
        if (arg1->actorCtx.unk5 & 4) {
            arg0->stateFlags1 |= 0x100000;
            func_8083868C(arg1, arg0);
            return;
        }
        arg0->stateFlags1 &= 0xFFEFFFFF;
        if ((arg1->sceneNum == 0x45) && (func_8012364C(arg1, arg0, func_8082FDC4()) == ITEM_PICTO_BOX)) {
            arg1->actorCtx.unk5 |= 4;
        }
    } else {
        if (D_80862B44->press.button & 0x801F) {
            arg1->unk_1887C = -1;
            func_80854614(arg0, arg1);
            func_80831494(arg1, arg0, func_80854430, 0);
            arg0->unk_AE7 = 0;
            return;
        }
        arg1->unk_1887C = 0xA;
        func_80854614(arg0, arg1);
    }
}

void func_80854614(Player* arg0, PlayState* arg1) {
    s8 temp_a0;

    arg0->unk_AA5 = 3;
    func_8083868C(arg1, arg0);
    LinkAnimation_Update(arg1, &arg0->skelAnime);
    func_8083216C(arg0, arg1);
    arg0->unk_AB2.y = func_80847190(arg1, arg0, 1) - arg0->actor.shape.rot.y;
    arg0->unk_AA6 |= 0x80;
    temp_a0 = arg1->unk_1887C;
    if (temp_a0 < 0) {
        arg1->unk_1887C = temp_a0 + 1;
        if (arg1->unk_1887C == 0) {
            func_80839ED0(arg0, arg1);
        }
    }
}

void func_808546D0(Player* arg0, PlayState* arg1) {
    s8 temp_v0;

    temp_v0 = arg0->unk_AE7;
    if (temp_v0 >= 0) {
        if (temp_v0 < 6) {
            arg0->unk_AE7 = temp_v0 + 1;
        } else {
            arg0->unk_B48 = (f32) (temp_v0 >> 1) * 22.0f;
            if (func_8082DE88(arg0, 1, 0x64) != 0) {
                arg0->unk_AE7 = -1;
                EffectSsIcePiece_SpawnBurst(arg1, &arg0->actor.world, arg0->actor.scale.x);
                func_800B8E58(arg0, 0x875U);
            }
            if (arg0->transformation == 2) {
                func_80834104(arg1, arg0);
                arg0->skelAnime.animation = NULL;
                arg0->unk_AE8 = -0x28;
                arg0->unk_AE7 = 1;
                arg0->linearVelocity = 0.0f;
            } else if (!(arg1->gameplayFrames & 3)) {
                func_8085B3E0(arg1, -1);
            }
        }
        arg0->stateFlags2 |= 0x4000;
        return;
    }
    if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
        func_80836988(arg0, arg1);
        func_808339B4(arg0, 0x14);
    }
}

void func_80854800(Player* arg0, PlayState* arg1) {
    s16 var_v1;

    LinkAnimation_Update(arg1, &arg0->skelAnime);
    func_808345A8(arg0);
    if (((s16) arg0->unk_AE8 % 25) == 0) {
        if (func_808339D4(arg1, &arg0->actor, -1) != 0) {
            goto block_3;
        }
    } else {
block_3:
        if (arg0->unk_AE8 == 0) {
            var_v1 = 0;
        } else {
            arg0->unk_AE8 -= 1;
            var_v1 = arg0->unk_AE8;
        }
        if (var_v1 == 0) {
            func_80836988(arg0, arg1);
        }
    }
    arg0->unk_B65 = 0x28;
    func_800B8F98(&arg0->actor, (arg0->ageProperties->unk_92 + 0x600C) & 0xFFFF);
}

void func_808548B8(Player* arg0, PlayState* arg1) {
    struct _struct_D_8085CD30_0x10* sp3C;
    void* sp38;                                     /* compiler-managed */
    u8 sp37;
    SkelAnime* sp28;
    f32 var_ft3;
    f32 var_fv0;
    s32 var_v0;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    u8 temp_t4;
    u8 temp_v1;

    sp3C = &D_8085CD30[arg0->meleeWeaponAnimation];
    if (arg0->skelAnime.curFrame < (arg0->skelAnime.endFrame - 6.0f)) {
        arg0->stateFlags2 |= 0x20;
    }
    if (func_808401F4(arg1, &arg0->actor) == 0) {
        if (arg0->linearVelocity >= 0.0f) {
            if (arg0->transformation == 1) {
                var_fv0 = 5.0f;
            } else {
                var_fv0 = 0.0f;
            }
            temp_t4 = sp3C->unk_D;
            var_ft3 = (f32) temp_t4;
            if ((s32) temp_t4 < 0) {
                var_ft3 += 4294967296.0f;
            }
            func_8083FCF0(arg1, arg0, var_fv0, (f32) sp3C->unk_C, var_ft3);
        }
        temp_v0 = arg0->meleeWeaponAnimation;
        if ((temp_v0 == 0x18) || (temp_v0 == 0x19)) {
            arg0->unk_3D0.unk_00 = 3;
        }
        if (((arg0->stateFlags2 * 2) < 0) && (LinkAnimation_OnFrame(&arg0->skelAnime, 0.0f) != 0)) {
            arg0->stateFlags2 &= 0xBFFFFFFF;
            arg0->linearVelocity = 15.0f;
        }
        sp28 = &arg0->skelAnime;
        if (arg0->linearVelocity > 12.0f) {
            func_8083FBC4(arg1, (PlayState* ) arg0);
        }
        Math_StepToF(&arg0->linearVelocity, 0.0f, 5.0f);
        func_8083A548(arg0);
        if ((LinkAnimation_Update(arg1, sp28) != 0) || ((temp_v0_2 = arg0->meleeWeaponAnimation, ((temp_v0_2 < 0x13) == 0)) && (temp_v0_2 < 0x16) && (arg0->skelAnime.curFrame > 2.0f) && (func_808333CC(arg0) != 0))) {
            D_80862B48 = (s32) arg0->unk_AE8;
            if (func_80848570(arg0, arg1) == 0) {
                if (func_80123420(arg0) != 0) {
                    sp38 = sp3C->unk_8;
                } else {
                    sp38 = sp3C->unk_4;
                }
                func_8082DC38(arg0);
                if (sp38 == NULL) {
                    arg0->skelAnime.moveFlags &= 0xFFF7;
                    func_8085B384(arg0, arg1, M2C_ERROR(Read from unset register $a2));
                } else {
                    sp37 = arg0->skelAnime.moveFlags;
                    if (arg0->transformation == 2) {
                        if (func_8083A580(arg0, arg1) != 0) {
                            sp38 = arg0->unk_284.animation;
                        }
                        arg0->unk_ADC = 0;
                    } else if ((sp38 == &D_0400D728) && (arg0->modelAnimType != 3)) {
                        sp38 = &D_0400D8B0;
                    }
                    arg0->skelAnime.moveFlags = 0;
                    func_80831494(arg1, arg0, func_80849FE0, 1);
                    func_8082EC9C(arg1, arg0, sp38);
                    arg0->currentYaw = arg0->actor.shape.rot.y;
                    arg0->skelAnime.moveFlags = sp37;
                }
                arg0->stateFlags3 |= 8;
            }
        } else {
            temp_v1 = arg0->transformation;
            if (((temp_v1 == 2) && (temp_v0_3 = arg0->meleeWeaponAnimation, (temp_v0_3 != 0x1D)) && (temp_v0_3 != 0x15)) || ((temp_v1 == 1) && (arg0->meleeWeaponAnimation != 0x1A))) {
                var_v0 = 0;
                if (~(D_80862B44->press.button | ~0x4000) == 0) {
                    var_v0 = 1;
                }
                arg0->unk_AE8 |= var_v0;
            }
        }
    }
}

void func_80854C70(Player* arg0, PlayState* arg1) {
    LinkAnimation_Update(arg1, &arg0->skelAnime);
    func_80832F24(arg0);
    if (arg0->skelAnime.curFrame >= 6.0f) {
        func_80836988(arg0, arg1);
    }
}

void func_80854CD0(f32 arg0, u8* arg1, u8* arg2, u8* arg3, u8* arg4, void* arg5, void* arg6, void* arg7, void* arg8, void* arg9, ?* argA, ?* argB, ?* argC) {
    ?* temp_s0;
    ?* temp_s1;
    ?* temp_s3;
    ?* var_s0;
    ?* var_s1;
    ?* var_s3;
    s32 var_v0;
    u8 temp_s2;
    u8 temp_s2_2;
    u8 temp_t3;
    u8 temp_t3_2;
    u8 temp_t7;
    u8 var_t6;
    u8 var_v1;
    u8* var_a0;
    u8* var_a1;
    u8* var_a2;
    u8* var_a3;
    void* temp_t0;
    void* temp_t1;
    void* temp_t2;
    void* temp_t4;
    void* temp_t5;
    void* var_t0;
    void* var_t1;
    void* var_t2;
    void* var_t4;
    void* var_t5;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_s3 = argC;
    var_s1 = argB;
    var_s0 = argA;
    var_t5 = arg9;
    var_t4 = arg8;
    var_t2 = arg7;
    var_t1 = arg6;
    var_t0 = arg5;
    var_a0 = arg4;
    var_v0 = 1;
    var_v1 = *var_a3;
    var_t6 = *var_a2;
    if (1 != 3) {
        do {
            temp_t7 = *var_a0;
            var_v0 += 1;
            var_a1 += 2;
            var_a2 += 1;
            var_a3 += 1;
            var_a0 += 1;
            var_t0 += 2;
            var_t1 += 1;
            var_t2 += 1;
            var_t4 += 1;
            var_t5 += 2;
            var_s0 += 1;
            var_s1 += 1;
            var_s3 += 1;
            var_a1->unk_-2 = (s16) (((s32) ((f32) (var_t6 - var_v1) * arg0) + var_v1) - temp_t7);
            temp_t3 = var_t2->unk_-1;
            var_t0->unk_-2 = (s16) (((s32) ((f32) (var_t1->unk_-1 - temp_t3) * arg0) + temp_t3) - var_t4->unk_-1);
            temp_s2 = var_s1->unk_-1;
            var_t5->unk_-2 = (s16) (((s32) ((f32) (var_s0->unk_-1 - temp_s2) * arg0) + temp_s2) - var_s3->unk_-1);
            var_v1 = *var_a3;
            var_t6 = *var_a2;
        } while (var_v0 != 3);
    }
    temp_t0 = var_t0 + 2;
    temp_t1 = var_t1 + 1;
    temp_t2 = var_t2 + 1;
    temp_t4 = var_t4 + 1;
    temp_t5 = var_t5 + 2;
    temp_s0 = var_s0 + 1;
    temp_s1 = var_s1 + 1;
    temp_s3 = var_s3 + 1;
    (var_a1 + 2)->unk_-2 = (s16) (((s32) ((f32) (var_t6 - var_v1) * arg0) + var_v1) - *var_a0);
    temp_t3_2 = temp_t2->unk_-1;
    temp_t0->unk_-2 = (s16) (((s32) ((f32) (temp_t1->unk_-1 - temp_t3_2) * arg0) + temp_t3_2) - temp_t4->unk_-1);
    temp_s2_2 = temp_s1->unk_-1;
    temp_t5->unk_-2 = (s16) (((s32) ((f32) (temp_s0->unk_-1 - temp_s2_2) * arg0) + temp_s2_2) - temp_s3->unk_-1);
    argC = temp_s3;
    argB = temp_s1;
    argA = temp_s0;
    arg9 = temp_t5;
    arg8 = temp_t4;
    arg7 = temp_t2;
    arg6 = temp_t1;
    arg5 = temp_t0;
    arg4 = var_a0 + 1;
}

void func_80854EFC(void* arg0, f32 arg1, s16* arg2) {
    u8 sp77;
    u8 sp76;
    u8 sp75;
    u8 sp74;
    u8 sp73;
    u8 sp72;
    s16 sp70;
    ?* var_t3;
    ?* var_t4;
    ?* var_v0;
    f32 var_fa0;
    s16 temp_t2;
    s16* var_t0;
    s16* var_v1;

    var_fa0 = arg1;
    sp70 = arg0->unk_170DA;
    var_t3 = &D_8085D844;
    var_v1 = arg2;
    sp72 = arg0->unk_170D7;
    var_t0 = &sp70;
    sp73 = arg0->unk_170D8;
    sp74 = arg0->unk_170D9;
    sp75 = arg0->unk_170C8;
    sp76 = arg0->unk_170C9;
    sp77 = arg0->unk_170CA;
    if (var_fa0 <= 1.0f) {
        var_v0 = arg0 + 0x170CE;
        var_t4 = var_v0;
    } else {
        var_t4 = &D_8085D844;
        var_v1 = arg2 + 8;
        var_t0 = arg2;
        var_t3 = &D_8085D844;
        if (var_fa0 <= 2.0f) {
            var_fa0 -= 1.0f;
            var_v0 = arg0 + 0x170CE;
        } else {
            var_t4 = &D_8085D844;
            var_v1 = &sp70;
            var_t0 = arg2 + 0x10;
            if (var_fa0 <= 3.0f) {
                var_t4 = &D_8085D844;
                var_fa0 -= 2.0f;
                var_v1 = arg2 + 0x10;
                var_t0 = arg2 + 8;
                var_t3 = &D_8085D844;
                var_v0 = arg0 + 0x170CE;
            } else {
                var_v0 = arg0 + 0x170CE;
                var_fa0 -= 3.0f;
                var_t3 = var_v0;
            }
        }
    }
    temp_t2 = *var_t0;
    arg0->unk_170A8 = (s16) (((s32) ((f32) (*var_v1 - temp_t2) * var_fa0) + temp_t2) - arg0->unk_170DA);
    func_80854CD0(var_fa0, arg0 + 0x170A2, (u8* ) (var_v1 + 2), (u8* ) (var_t0 + 2), arg0 + 0x170D7, arg0 + 0x17090, var_v1 + 5, var_t0 + 5, arg0 + 0x170C8, arg0 + 0x17096, var_t3, var_t4, var_v0);
}

void func_808550D0(Player* arg1, f32 arg2, void* arg3, s32 arg4) {
    Vec3f sp3C;
    Vec3f* sp38;
    Vec3f* var_s0;
    struct _struct_D_8085D848_0x54* temp_a2;
    void* var_fa0;

    temp_a2 = &D_8085D848[arg4];
    var_s0 = &temp_a2->unk_18;
    sp38 = var_s0;
    func_80854EFC(arg3, arg2, (bitwise s16* ) arg2, temp_a2);
    var_fa0 = arg3;
    if ((bitwise f32) var_fa0 > 2.0f) {
        var_fa0 = (bitwise void* ) ((bitwise f32) var_fa0 - 2.0f);
        var_s0 = sp38 + 0x28;
    } else if ((bitwise f32) var_fa0 > 1.0f) {
        var_fa0 = (bitwise void* ) ((bitwise f32) var_fa0 - 1.0f);
        var_s0 = sp38 + 0x14;
    }
    arg3 = var_fa0;
    func_80835BC8(arg1, arg1 + 0x24, var_s0, &sp3C);
    Lights_PointNoGlowSetInfo(&arg1->lightInfo, (s16) (s32) (bitwise f32) sp3C, (s16) (s32) sp3C.y, (s16) (s32) sp3C.z, (u8) (s32) var_s0->unk_C, (u8) (s32) var_s0->unk_D, (u8) (s32) var_s0->unk_E, (s16) (s32) ((f32) var_s0->unk_10 * (bitwise f32) arg3));
}

void func_80855218(PlayState* arg0, Player* arg1, ?** arg2) {
    void* temp_v0;

    if ((LinkAnimation_Update(arg0, arg1 + 0x240) != 0) && (&D_0400D0C8 == arg1->skelAnime.animation)) {
        func_8082DB60(arg0, arg1, &D_0400D0D0);
        return;
    }
    temp_v0 = arg1->skelAnime.animation;
    if ((&D_0400D0C8 == temp_v0) || (&D_0400D0D0 == temp_v0)) {
        if (arg1->unk_AE7 >= 0x3A) {
            Math_StepToS(&arg1->unk_AE8, 0xFF, 0x32);
        }
        if (arg1->unk_AE7 >= 0x40) {
            Math_StepToF(&arg1->unk_B08[4], 0.0f, 0.015f);
        } else if (arg1->unk_AE7 >= 0xE) {
            Math_StepToF(&arg1->unk_B08[4], 0.3f, 0.3f);
        }
        if (arg1->unk_AE7 >= 0x42) {
            Math_StepToF(&arg1->unk_B08[5], 0.0f, 0.02f);
        } else if (arg1->unk_AE7 >= 0x10) {
            Math_StepToF(&arg1->unk_B08[5], -0.1f, 0.1f);
        }
        if ((gGameInfo->data[0x220] == 0) && (&D_0400D0C8 == arg1->skelAnime.animation)) {
            func_8082E224(arg1, D_8085D8F0);
        }
    } else {
        if (arg1->unk_AE7 >= 0x14) {
            Math_StepToS(&arg1->unk_AE8, 0xFF, 0x14);
        }
        if (gGameInfo->data[0x220] == 0) {
            func_8082E224(arg1, &D_8085D904);
            if (arg1->unk_AE7 == 0xF) {
                func_800B8E58(arg1, 0x9A4U);
            }
        }
    }
}

void func_808553F4(Player* arg0, PlayState* arg1) {
    ?* sp4C;
    s32 sp48;
    GameInfo* temp_v0;
    GameInfo* temp_v0_2;
    f32 var_ft1;
    s16 temp_v1;
    s16 var_v0;
    s32 temp_t7;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s8 temp_a0;
    s8 temp_a0_2;
    u16 temp_t8;
    u16 temp_v1_2;
    u8 temp_t9;
    u8 temp_v0_3;

    sp4C = &D_8085D910;
    sp48 = 0;
    func_808323C0(&arg0->actor, arg1->playerActorCsIds[5]);
    var_v0 = 1;
    D_80862B44 = arg1->state.input;
    if (arg0->transformation == 4) {
        var_v0 = 0;
    }
    Camera_ChangeMode(arg1->cameraPtrs[arg1->activeCamId], var_v0);
    arg0->stateFlags2 |= 0x40;
    arg0->actor.shape.rot.y = Camera_GetCamDirYaw(arg1->cameraPtrs[arg1->activeCamId]) + 0x8000;
    func_80855218(arg1, arg0, &sp4C);
    if (arg0->unk_AE7 == 0x14) {
        func_80165DCC(0x64);
    }
    temp_v0 = gGameInfo;
    temp_v1 = temp_v0->data[0x220];
    if (temp_v1 != 0) {
        temp_v0->data[0x224] += temp_v1;
        temp_v0_2 = gGameInfo;
        if (temp_v0_2->data[0x224] >= 0x100) {
            temp_v0_2->data[0x224] = 0xFF;
            arg0->actor.update = (void (*)(Actor*, PlayState*)) func_8012301C;
            arg0->actor.draw = NULL;
            arg0->unk_AE7 = 0;
            func_80165DF0();
            temp_t8 = D_8085D908[gSaveContext.save.playerForm];
            temp_t7 = (s32) temp_t8 >> 8;
            gSaveContext.save.weekEventReg[temp_t7] |= temp_t8;
        }
    } else {
        temp_a0 = arg0->unk_AE7;
        if (arg0->transformation == 4) {
            var_v0_2 = 0x53;
        } else {
            var_v0_2 = 0x37;
        }
        arg0->unk_AE7 = temp_a0 + 1;
        if (var_v0_2 >= temp_a0) {
            if (arg0->unk_AE7 >= 5) {
                if ((arg0->transformation != 4) || (temp_v1_2 = D_8085D908[gSaveContext.save.playerForm], var_v0_3 = (temp_v1_2 & 0xFF & gSaveContext.save.weekEventReg[(s32) temp_v1_2 >> 8]) != 0, (var_v0_3 != 0))) {
                    var_v0_3 = (D_80862B44->press.button & 0xC00F) != 0;
                }
                sp48 = var_v0_3;
                if (var_v0_3 != 0) {
                    goto block_17;
                }
            }
        } else {
block_17:
            gGameInfo->data[0x220] = 0x2D;
            gGameInfo->data[0x221] = 0xDC;
            gGameInfo->data[0x222] = 0xDC;
            gGameInfo->data[0x223] = 0xDC;
            gGameInfo->data[0x224] = 0;
            if (sp48 != 0) {
                temp_a0_2 = arg0->unk_A86;
                if (ActorCutscene_GetCurrentIndex() == temp_a0_2) {
                    func_800E0348(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera((s16) temp_a0_2)));
                }
                if (arg0->transformation == 4) {
                    func_801A75E8(0x9AAU);
                    func_801A75E8(0x1858U);
                } else {
                    func_801A75E8(0x9A4U);
                }
            }
            func_800B8E58(arg0, 0x484FU);
        }
    }
    if (arg0->unk_AE7 >= (s32) sp4C->unk_0) {
        temp_v0_3 = sp4C->unk_2;
        if (arg0->unk_AE7 < (s32) temp_v0_3) {
            temp_t9 = sp4C->unk_1;
            var_ft1 = (f32) temp_t9;
            if ((s32) temp_t9 < 0) {
                var_ft1 += 4294967296.0f;
            }
            Math_StepToF(&arg0->unk_B08[6], 1.0f, var_ft1 / 100.0f);
        } else if (arg0->unk_AE7 < (s32) sp4C->unk_3) {
            if (temp_v0_3 == arg0->unk_AE7) {
                func_801000CC(0x2912U);
            }
            Math_StepToF(&arg0->unk_B08[6], 2.0f, 0.5f);
        } else {
            Math_StepToF(&arg0->unk_B08[6], 3.0f, 0.2f);
        }
    }
    if (arg0->unk_AE7 >= 0x10) {
        if (arg0->unk_AE7 < 0x40) {
            Math_StepToF(&arg0->unk_B08[7], 1.0f, 0.2f);
        } else if (arg0->unk_AE7 < 0x37) {
            Math_StepToF(&arg0->unk_B08[7], 2.0f, 1.0f);
        } else {
            Math_StepToF(&arg0->unk_B08[7], 3.0f, 0.55f);
        }
    }
    if (arg0->transformation == 4) {
        var_v0_4 = 0;
    } else {
        var_v0_4 = 1;
    }
    func_808550D0((Player* ) arg1, (bitwise f32) arg0, (bitwise void* ) arg0->unk_B08[6], (bitwise s32) arg0->unk_B08[7], var_v0_4);
}

void func_80855818(Player* arg0, PlayState* arg1) {
    f32 sp40;
    s16 sp3E;
    EnvLightSettings* temp_t4;
    GameInfo* temp_v1;
    GameInfo* temp_v1_2;
    s16 temp_a0;
    s16 var_v1;
    s32 var_v1_2;
    s8 temp_v0;

    var_v1 = 1;
    if (arg0->prevMask == 0) {
        var_v1 = 0;
    }
    Camera_ChangeMode(arg1->cameraPtrs[arg1->activeCamId], var_v1);
    temp_v1 = gGameInfo;
    temp_a0 = temp_v1->data[0x220];
    if (temp_a0 != 0) {
        temp_v1->data[0x224] -= temp_a0;
        temp_v1_2 = gGameInfo;
        if (temp_v1_2->data[0x224] < 0) {
            temp_v1_2->data[0x220] = 0;
            gGameInfo->data[0x224] = 0;
        }
    }
    temp_v0 = arg0->unk_AE7;
    arg0->unk_AE7 = temp_v0 + 1;
    if (temp_v0 < 4) {
        if ((arg0->prevMask == 0) && (arg0->unk_AE7 == 4)) {
            LinkAnimation_Change(arg1, &arg0->skelAnime, func_8082ED20(arg0), 1.0f, 0.0f, 20.0f, (u8) 2, 20.0f);
        }
        goto block_16;
    }
    func_800FF3A0(&sp40, &sp3E, arg1->state.input);
    if (((LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) || ((arg0->unk_AE7 >= 0xB) && (sp40 != 0.0f))) && (gGameInfo->data[0x220] == 0)) {
        arg0->stateFlags1 &= ~2;
        arg0->prevMask = arg0->currentMask;
        arg0->unk_A86 = (s8) arg1->playerActorCsIds[5];
        func_80838760(arg0);
        temp_t4 = &arg1->envCtx.lightSettings;
        temp_t4->unk_0 = (unaligned s32) D_80862B50.unk_0;
        temp_t4->unk_4 = (unaligned s32) D_80862B50.unk_4;
        temp_t4->unk_8 = (unaligned s32) D_80862B50.unk_8;
        temp_t4->unk_C = (unaligned s32) D_80862B50.unk_C;
        temp_t4->unk_10 = (unaligned s32) D_80862B50.unk_10;
        temp_t4->unk_14 = (unaligned s32) D_80862B50.unk_14;
        temp_t4->unk_18 = (unaligned s32) D_80862B50.unk_18;
        func_8085B384(arg0, arg1, M2C_ERROR(Read from unset register $a2));
        return;
    }
    Math_StepToF(&arg0->unk_B08[7], 4.0f, 0.2f);
block_16:
    if (arg0->prevMask == 0) {
        var_v1_2 = 0;
    } else {
        var_v1_2 = 1;
    }
    func_808550D0((Player* ) arg1, (bitwise f32) arg0, NULL, (bitwise s32) arg0->unk_B08[7], var_v1_2);
}

void func_80855A7C(Player* arg0, PlayState* arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk_AE8;
    arg0->unk_AE8 = temp_v0 + 1;
    if (((temp_v0 < 0x5B) ^ 1) != 0) {
        arg1->msgCtx.ocarinaMode = 4;
        func_8085B384(arg0, arg1, arg0);
        return;
    }
    if (arg0->unk_AE8 == 0xA) {
        func_80848640(arg1, arg0, arg0, arg1);
    }
}

void func_80855AF4(Player* arg0, PlayState* arg1) {
    u8 temp_t2;

    arg0->stateFlags2 |= 0x40;
    func_80855218(arg1, arg0, NULL);
    arg0->unk_AE7 += 1;
    if (!(arg0->stateFlags1 & 0x100)) {
        temp_t2 = arg0->currentMask;
        arg0->currentMask = 0x14;
        arg0->prevMask = temp_t2;
        gSaveContext.save.equippedMask = 0x14;
        func_80115DB4(arg1, 0, 6);
        arg0->currentBoots = 2;
        arg0->prevBoots = 2;
        func_80123140(arg1, arg0);
        func_8085B384(arg0, arg1, M2C_ERROR(Read from unset register $a2));
    }
}

void func_80855B9C(Player* arg0, PlayState* arg1) {
    u8 temp_t0;

    arg0->stateFlags2 |= 0x40;
    LinkAnimation_Update(arg1, arg0 + 0x240);
    if (!(arg0->stateFlags1 & 0x100)) {
        temp_t0 = arg0->currentMask;
        arg0->currentMask = 0;
        arg0->prevMask = temp_t0;
        gSaveContext.save.equippedMask = 0;
        arg0->currentBoots = 1;
        arg0->prevBoots = 1;
        func_80123140(arg1, arg0);
        func_8085B384(arg0, arg1, M2C_ERROR(Read from unset register $a2));
    }
}

void func_80855C28(Player* arg0, PlayState* arg1) {
    s16 sp3E;
    LinkAnimationHeader* sp34;
    s16 temp_v0;
    s32 var_a0;

    func_808323C0(&arg0->actor, arg1->playerActorCsIds[4]);
    sp3E = arg0->actor.shape.rot.y - arg0->actor.world.rot.y;
    var_a0 = 0;
    if ((arg0->actor.floorHeight - arg0->actor.world.pos.y) < 60.0f) {
        Math_StepToF(&arg0->unk_B08[7], 200.0f, 150.0f);
        var_a0 = Math_StepToS(&arg0->unk_AE8, 0xFA0, 0x15E);
    }
    arg0->actor.shape.rot.y += arg0->unk_AE8;
    arg0->skelAnime.jointTable->x = 0;
    arg0->skelAnime.jointTable->z = 0;
    arg0->unk_ABC += arg0->unk_B08[7];
    if (arg0->unk_ABC >= 0.0f) {
        arg0->unk_ABC = 0.0f;
        if ((var_a0 != 0) && (sp3E < 0)) {
            temp_v0 = arg0->actor.world.rot.y;
            if ((s16) (arg0->actor.shape.rot.y - temp_v0) >= 0) {
                arg0->actor.shape.rot.y = temp_v0;
                func_80838760(arg0);
                if (((s32) (arg0->actor.params & 0xF00) >> 8) == 8) {
                    sp34 = D_8085D17C[arg0->transformation];
                    func_80836A5C(arg0, arg1);
                    LinkAnimation_Change(arg1, &arg0->skelAnime, sp34, -0.6666667f, (f32) Animation_GetLastFrame(sp34), 0.0f, (u8) 2, -6.0f);
                    return;
                }
                func_80839E74(arg0, arg1);
            }
        }
    } else if (arg0->unk_AE7 == 0) {
        func_800B8E58(arg0, 0x9A8U);
        arg0->unk_AE7 = 1;
    }
}

void func_80855E08(Player* arg0, PlayState* arg1) {
    PosRot* sp28;
    PosRot* temp_a3;
    f32 temp_fv1;
    f32 var_fv0;

    arg0->stateFlags2 |= 0x20;
    if (LinkAnimation_Update(arg1, &arg0->skelAnime) != 0) {
        func_8082DB3C(arg1, arg0, &D_0400D9D0);
    }
    temp_a3 = &arg0->actor.world;
    sp28 = temp_a3;
    Math_Vec3f_Sum(&temp_a3->pos, &arg0->actor.velocity, &temp_a3->pos);
    if (func_80831124(arg1, arg0) != 0) {
        Math_Vec3f_Copy(&arg0->actor.prevPos, &temp_a3->pos);
        func_80843178(arg1, arg0);
        temp_fv1 = arg0->actor.world.pos.y;
        var_fv0 = temp_fv1 - arg0->actor.floorHeight;
        if (var_fv0 > 20.0f) {
            var_fv0 = 20.0f;
        }
        arg0->actor.shape.rot.x = 0;
        arg0->linearVelocity = 1.0f;
        arg0->actor.world.pos.y = temp_fv1 - var_fv0;
        arg0->actor.velocity.y = 0.0f;
        arg0->actor.world.rot.x = arg0->actor.shape.rot.x;
        func_80833AA0((bitwise Player* ) 20.0f, (PlayState* ) arg0, (s16* ) arg1);
        arg0->stateFlags2 &= ~0x400;
        arg0->actor.bgCheckFlags |= 1;
        arg0->stateFlags3 |= 0x10000;
        return;
    }
    if ((&D_0400D9C8 != arg0->skelAnime.animation) || (arg0->skelAnime.curFrame >= 4.0f)) {
        arg0->actor.gravity = 0.0f;
        Math_ScaledStepToS(&arg0->actor.shape.rot.x, arg0->actor.world.rot.x, 0x800);
        func_8082DF48(arg1, arg0, 0x64U, 2U, (u8) 0x64, 0);
    }
}

void func_80855F9C(Player* arg0, f32* arg1) {
    s16 sp24;
    s16 sp22;

    arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x20);
    func_80832F78(arg1, &sp24, (bitwise f32) &sp22, (PlayState* )0x3C9374BC, arg0);
    Math_ScaledStepToS((s16* ) (arg1 + 0xAD4), sp22, 0x258);
}

void func_80856000(PlayState* arg0, Actor* arg1) {
    CollisionPoly* sp3C;
    s32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;

    sp2C = arg1->world.pos.x;
    sp30 = arg1->world.pos.y - 20.0f;
    sp34 = arg1->world.pos.z;
    BgCheck_EntityCheckCeiling(arg0 + 0x830, &sp28, (Vec3f* ) &sp2C, 30.0f, &sp3C, &sp38, arg1);
}

void func_80856074(GameState* arg0, Actor* arg1) {
    if (func_8083F8A8(arg0, arg1, 12.0f, 4, 0.0f, 0xA, 0x32, 1) != 0) {
        EffectSsHahen_SpawnBurst((PlayState* ) arg0, &arg1->world.pos, 3.0f, 0, (s16) 4, (s16) 8, (s16) 2, (s16) -1, (s16) 0xA, NULL);
    }
}

void func_80856110(PlayState* arg0, Player* arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg5, s16 arg6, s16 arg7) {
    f32 sp3C;
    f32 sp38;
    f32 sp34;

    sp34 = arg1->actor.world.pos.x;
    sp38 = arg1->actor.world.pos.y + arg2;
    D_8085D91C = arg3;
    D_8085D928 = arg4;
    sp3C = arg1->actor.world.pos.z;
    func_800B0EB0(arg0, (Vec3f* ) &sp34, &D_8085D918, &D_8085D924, &D_8085D930, &D_8085D934, (s16) (s32) arg5, (s16) (s32) arg6, (s16) (s32) arg7);
}

void func_808561B0(Player* arg0, PlayState* arg1) {
    f32 sp3C;
    s32 sp38;
    s32 sp34;
    f32 sp30;
    DynaPolyActor* temp_v0_2;
    DynaPolyActor* temp_v0_4;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fv0;
    s16 temp_v0_3;
    s16 temp_v0_5;
    s16 temp_v1;
    s32 var_v1;
    s8 temp_v0;
    u32 temp_t2;
    u8 temp_a1;
    u8 temp_a1_2;

    LinkAnimation_Update(arg1, &arg0->skelAnime);
    if (func_80838A90(arg0, arg1) == 0) {
        temp_v0 = arg0->unk_AE7;
        if (temp_v0 == 0) {
            arg0->unk_ABC += arg0->unk_B48;
            if (arg0->unk_ABC < -1000.0f) {
                arg0->unk_ABC = -1000.0f;
                arg0->unk_AE7 = 1;
                arg0->unk_B48 = 0.0f;
            }
            func_80856074(&arg1->state, &arg0->actor);
        } else if (temp_v0 == 1) {
            arg0->unk_B48 += -22.0f;
            if (arg0->unk_B48 < -170.0f) {
                arg0->unk_B48 = -170.0f;
            }
            arg0->unk_ABC += arg0->unk_B48;
            temp_fv0 = arg0->unk_ABC;
            if (temp_fv0 < -3900.0f) {
                arg0->unk_ABC = -3900.0f;
                arg0->unk_AE7 = 2;
                arg0->actor.shape.rot.y = Camera_GetInputDirYaw(arg1->cameraPtrs[arg1->activeCamId]);
                temp_v1 = arg0->actor.shape.rot.y;
                arg0->actor.scale.y = 0.01f;
                arg0->actor.world.rot.y = temp_v1;
                arg0->currentYaw = temp_v1;
            } else {
                temp_fv1 = arg0->unk_B48;
                temp_a1 = arg0->actor.floorBgId;
                arg0->actor.scale.y = 0.01f + (Math_SinS((s16) (s32) ((temp_fv0 + 1000.0f) * -30.0f)) * 0.004f);
                temp_fa0 = 0.01f - (temp_fv1 * -0.000015f);
                arg0->actor.scale.x = temp_fa0;
                arg0->actor.scale.z = temp_fa0;
                arg0->actor.shape.rot.y += (s32) (temp_fv1 * 130.0f);
                if (temp_a1 != 0x32) {
                    temp_v0_2 = DynaPoly_GetActor(&arg1->colCtx, (s32) temp_a1);
                    if (temp_v0_2 != NULL) {
                        Math_Vec3f_StepToXZ(&arg0->actor.world.pos, &temp_v0_2->actor.world.pos, 1.0f);
                    }
                }
            }
            func_80856074(&arg1->state, &arg0->actor);
        } else if (temp_v0 == 2) {
            if (~(D_80862B44->cur.button | 0xFFFF7FFF) != 0) {
                if (func_80856000(arg1, &arg0->actor) != 0) {
                    arg0->unk_AE8 = 0;
                } else {
                    arg0->unk_AE7 = 3;
                    if (arg0->unk_AE8 >= 0xA) {
                        arg0->unk_B48 = 2700.0f;
                    } else {
                        arg0->unk_B48 = 1450.0f;
                    }
                    func_8082E1F0(arg0, 0x8E3U);
                }
            } else {
                temp_v0_3 = arg0->unk_AE8;
                if (temp_v0_3 < 0xF) {
                    arg0->unk_AE8 = temp_v0_3 + 1;
                    if (arg0->unk_AE8 == 0xA) {
                        func_80856110(arg1, arg0, 20.0f, 3.8f, -0.1f, (s16) 0x8C, (s16) 0x17, (s16) 0xF);
                    }
                }
            }
            func_80855F9C((Player* ) arg1, (f32* ) arg0);
        } else {
            temp_fv1_2 = arg0->unk_B48;
            arg0->unk_ABC += temp_fv1_2;
            temp_fv0_2 = arg0->unk_ABC;
            if (temp_fv0_2 >= 0.0f) {
                sp38 = (arg0->unk_AE8 < 0xA) ^ 1;
                temp_a1_2 = arg0->actor.floorBgId;
                var_v1 = -1;
                var_fv0 = temp_fv1_2 * arg0->actor.scale.y;
                if (temp_a1_2 != 0x32) {
                    sp30 = var_fv0;
                    sp3C = temp_fv0_2;
                    temp_v0_4 = DynaPoly_GetActor(&arg1->colCtx, (s32) temp_a1_2);
                    var_v1 = 0;
                    if ((temp_v0_4 != NULL) && (temp_v0_4->actor.id == 0x183) && (temp_v0_4->actor.params & 0x100)) {
                        var_v1 = 1;
                        var_fv0 *= (f32) 0xAE / 100.0f;
                    }
                }
                sp34 = var_v1;
                sp30 = var_fv0;
                sp3C = temp_fv0_2;
                Math_Vec3f_Copy(arg0->unk_AF0, &arg0->actor.world.pos);
                arg0->unk_ABC = 0.0f;
                arg0->actor.world.pos.y += temp_fv0_2 * arg0->actor.scale.y;
                func_80834DB8((bitwise LinkAnimationHeader* ) temp_fv0_2, (bitwise f32) arg0, &D_0400E2D0, (bitwise Player* ) var_fv0, arg1);
                func_80831494(arg1, arg0, func_80856918, 1);
                arg0->boomerangActor = NULL;
                temp_t2 = arg0->stateFlags3 | 0x200;
                arg0->stateFlags3 = temp_t2;
                if (sp38 != 0) {
                    arg0->stateFlags3 = temp_t2 | 0x2000;
                }
                if (var_v1 < 0) {
                    arg0->stateFlags3 |= 0x40000;
                }
                arg0->unk_AE7 = (s8) var_v1;
                arg0->unk_AE8 = 0x270F;
                func_8082F0E4(arg0, 0x20000U, 2, 0x14);
            } else if (temp_fv0_2 < 0.0f) {
                func_80856074((bitwise GameState* ) temp_fv0_2, (Actor* ) arg1, arg0);
            }
        }
        if (arg0->unk_ABC < -1500.0f) {
            temp_v0_5 = arg0->unk_B86;
            arg0->stateFlags3 |= 0x100;
            if (temp_v0_5 < 8) {
                arg0->unk_B86 = temp_v0_5 + 1;
                if (arg0->unk_B86 == 8) {
                    func_8082E1F0(arg0, 0x9A0U);
                }
            }
        }
    }
}

void func_808566C0(PlayState* arg0, Player* arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    s32 sp4C;
    s32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp34;
    void* sp2C;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 var_v0;
    void* temp_v0;

    sp4C = D_8085D938;
    sp48 = D_8085D93C;
    if (Rand_ZeroOne() < 0.5f) {
        var_fv1 = -1.0f;
    } else {
        var_fv1 = 1.0f;
    }
    sp34 = var_fv1;
    D_8085D940.x = (Rand_ZeroFloat(arg4) + arg3) * var_fv1;
    D_8085D94C.x = arg5 * var_fv1;
    if (Rand_ZeroOne() < 0.5f) {
        var_fv1_2 = -1.0f;
    } else {
        var_fv1_2 = 1.0f;
    }
    sp34 = var_fv1_2;
    temp_v0 = arg1 + (arg2 * 0xC) + 0xBEC;
    D_8085D948 = (Rand_ZeroFloat(arg4) + arg3) * var_fv1_2;
    D_8085D954 = arg5 * var_fv1_2;
    sp2C = temp_v0;
    sp3C = temp_v0->unk_0;
    sp40 = Rand_ZeroFloat(15.0f) + temp_v0->unk_4;
    sp44 = temp_v0->unk_8;
    if (Rand_ZeroOne() < 0.5f) {
        var_v0 = 0x7D0;
    } else {
        var_v0 = -0x96;
    }
    EffectSsKirakira_SpawnDispersed(arg0, (Vec3f* ) &sp3C, &D_8085D940, &D_8085D94C, (Color_RGBA8* ) &sp4C, (Color_RGBA8* ) &sp48, (s16) var_v0, arg6);
}

void func_8085687C(Player* arg0) {

}

? func_80856888(f32* arg0, f32 arg1, f32 arg2) {
    f32 temp_fv0;
    f32 var_fa0;

    var_fa0 = arg2;
    if (var_fa0 != 0.0f) {
        temp_fv0 = *arg0;
        if (arg1 < temp_fv0) {
            var_fa0 = -var_fa0;
        }
        *arg0 = temp_fv0 + var_fa0;
        if (((*arg0 - arg1) * var_fa0) >= 0.0f) {
            *arg0 = arg1;
            return 1;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return 0;
    }
    if (arg1 == *arg0) {
        return 1;
    }
    return 0;
}

void func_80856918(Player* arg0, PlayState* arg1) {
    f32 sp78;
    s16 sp76;
    s16 sp6C;                                       /* compiler-managed */
    f32 sp68;
    s16 sp66;
    s32 sp58;
    SkelAnime* sp48;
    s16* sp44;
    PosRot* sp3C;
    Actor* temp_v0;
    Actor* temp_v0_5;
    PosRot* temp_a0_2;
    SkelAnime* temp_a2;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa1;
    f32 temp_ft0_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_ft1;
    s16 temp_a0;
    s16 temp_a0_3;
    s16 temp_v0_3;
    s16 temp_v0_6;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_a1;
    s16 var_a1_2;
    s16 var_v0_2;
    s16 var_v1;
    s16 var_v1_2;
    s16 var_v1_3;
    s16 var_v1_4;
    s32 temp_ft0;
    s32 var_v0;
    u32 temp_t9;
    u32 temp_v0_2;
    u8 temp_v0_4;

    temp_v0 = arg0->boomerangActor;
    if ((temp_v0 != NULL) && (temp_v0->update == NULL)) {
        arg0->boomerangActor = NULL;
    }
    if (func_80838A90(arg0, arg1) == 0) {
        if (arg0->actor.bgCheckFlags & 1) {
            func_80837134(arg1, arg0);
            return;
        }
        temp_fa0 = arg0->actor.velocity.y;
        if ((temp_fa0 > 0.0f) && (arg0->stateFlags3 & 0x200)) {
            arg0->actor.terminalVelocity = -20.0f;
            arg0->actor.gravity = -5.5f;
            func_8082F0E4(arg0, 0x20000U, 2, 0x14);
            func_80856110(arg1, arg0, 0.0f, 0.0f, -1.0f, (s16) 0x1F4, (s16) 0, (s16) 8);
            if (arg0->actor.bgCheckFlags & 0x10) {
                func_80833AA0(arg0, arg1);
            }
        } else {
            temp_v0_2 = arg0->stateFlags3;
            if (!(temp_v0_2 & 0x2000)) {
                func_80833AA0((bitwise Player* ) temp_fa0, (PlayState* ) arg0, (s16* ) arg1);
            } else if (temp_v0_2 & 0x200) {
                if (temp_fa0 < 0.0f) {
                    if (arg0->unk_AE7 < 0) {
                        func_80833AA0((bitwise Player* ) temp_fa0, (PlayState* ) arg0, (s16* ) arg1);
                    } else {
                        LinkAnimation_Update(arg1, &arg0->skelAnime);
                        if (arg0->skelAnime.curFrame > 6.0f) {
                            arg0->actor.velocity.y = 6.0f;
                            temp_t9 = arg0->stateFlags3 & ~0x200;
                            arg0->stateFlags3 = temp_t9;
                            arg0->stateFlags3 = temp_t9 | 0x01000000;
                            func_8082E1F0(arg0, 0x1850U);
                            func_8019FD90(4, 2);
                        }
                    }
                }
                arg0->actor.terminalVelocity = -10.0f;
                arg0->actor.gravity = -0.5f;
                func_8082F09C(arg0);
            } else if (~(D_80862B44->press.button | 0xFFFF7FFF) == 0) {
                func_808355D8((bitwise PlayState* ) temp_fa0, (Player* ) arg1, (LinkAnimationHeader* ) arg0, (u32) &D_0400E2D8);
            } else {
                temp_fa1 = arg0->actor.velocity.x;
                temp_fa0_2 = arg0->actor.velocity.z;
                temp_fv0 = sqrtf((temp_fa1 * temp_fa1) + (temp_fa0_2 * temp_fa0_2));
                arg0->linearVelocity = temp_fv0;
                if (temp_fv0 != 0.0f) {
                    temp_v0_3 = Math_FAtan2F(temp_fa0_2, temp_fa1);
                    temp_a0 = arg0->actor.shape.rot.y - temp_v0_3;
                    var_a1 = temp_v0_3;
                    if (temp_a0 < 0) {
                        var_v1 = -temp_a0;
                    } else {
                        var_v1 = temp_a0;
                    }
                    if (var_v1 >= 0x4001) {
                        arg0->linearVelocity = -arg0->linearVelocity;
                        var_a1 = temp_v0_3 + 0x8000;
                    }
                    arg0->currentYaw = var_a1;
                }
                if (arg0->windSpeed != 0.0f) {
                    Math_SmoothStepToS(&arg0->unk_B8C, arg0->windAngleX, 3, 0x1F40, (s16) 0x190);
                }
                sp44 = &arg0->unk_B8C;
                func_8085687C(arg0);
                temp_v1 = arg0->unk_AE8;
                temp_a0_2 = &arg0->actor.world;
                if (temp_v1 != 0) {
                    arg0->unk_AE8 = temp_v1 - 1;
                }
                sp3C = temp_a0_2;
                temp_fv0_2 = Math_Vec3f_DistXZ(&temp_a0_2->pos, arg0->unk_AF0);
                temp_a2 = &arg0->skelAnime;
                sp48 = temp_a2;
                temp_fv1 = D_8085D958[arg0->unk_AE7] - temp_fv0_2;
                sp78 = temp_fv1;
                LinkAnimation_Update(arg1, temp_a2);
                temp_v1_2 = arg0->unk_AE8;
                if ((temp_v1_2 != 0) && (temp_fv1 > 300.0f)) {
                    sp76 = 0x1770;
                    if (&D_0400E2D0 != arg0->skelAnime.animation) {
                        func_8082E5EC(arg1, arg0, &D_0400E2D8);
                    } else if (LinkAnimation_OnFrame(temp_a2, 8.0f) != 0) {
                        func_80835BC8(arg0, &sp3C->pos, &D_8085D960, &arg0->bodyPartsPos[0xC]);
                        func_80835BC8(arg0, &sp3C->pos, &D_8085D96C, &arg0->bodyPartsPos[0xF]);
                        var_v0 = 0;
                        do {
                            sp58 = var_v0;
                            func_808566C0(arg1, arg0, 0xC, 0.6f, 1.0f, 0.8f, 0x11);
                            func_808566C0(arg1, arg0, 0xF, 0.6f, 1.0f, 0.8f, 0x11);
                            var_v0 += 1;
                        } while (var_v0 != 0xD);
                    }
                } else if ((temp_v1_2 == 0) || (temp_fv1 < 0.0f)) {
                    sp76 = 0;
                    func_808355D8(arg1, arg0, &D_0400E2E8);
                } else {
                    sp76 = 0x1770 - (s32) ((300.0f - temp_fv1) * 10.0f);
                    if (&D_0400E278 != arg0->skelAnime.animation) {
                        func_8082E55C(arg1, arg0, &D_0400E278);
                    } else if (LinkAnimation_OnFrame(temp_a2, 6.0f) != 0) {
                        func_800B8E58(arg0, 0x9A6U);
                    }
                }
                Math_AsymStepToS(&arg0->unk_B88, sp76, 0x190, 0x190);
                temp_a0_3 = arg0->unk_B88;
                arg0->unk_B8A += temp_a0_3;
                if (temp_a0_3 < 0) {
                    var_v0_2 = -temp_a0_3;
                } else {
                    var_v0_2 = temp_a0_3;
                }
                if (var_v0_2 >= 0xFA1) {
                    var_v1_2 = temp_a0_3;
                    if (temp_a0_3 < 0) {
                        var_v1_2 = -temp_a0_3;
                    }
                    arg0->unk_B66 += (u32) ((f32) var_v1_2 * 0.01f);
                }
                temp_v0_4 = arg0->unk_B66;
                if ((s32) temp_v0_4 >= 0xC9) {
                    arg0->unk_B66 = temp_v0_4 - 0xC8;
                    func_808566C0(arg1, arg0, 0xC, 0.0f, 1.0f, 0.0f, 0x20);
                    func_808566C0(arg1, arg0, 0xF, 0.0f, 1.0f, 0.0f, 0x20);
                }
                func_8019FCB8(&arg0->actor.projectedPos, 0x1851, 2.0f * ((f32) arg0->unk_B88 * 0.00016666666f));
                if ((arg0->boomerangActor == NULL) && (~(D_80862B44->press.button | ~0x4000) == 0)) {
                    if (gSaveContext.save.inventory.ammo[gItemSlots[9]] == 0) {
                        play_sound(0x4806U);
                    } else {
                        temp_v0_5 = Actor_Spawn(&arg1->actorCtx, arg1, 0xF, arg0->bodyPartsPos[0].x, arg0->bodyPartsPos[0].y, arg0->bodyPartsPos[0].z, (s16) -1, (s16) 0, (s16) 0, 8);
                        arg0->boomerangActor = temp_v0_5;
                        if (temp_v0_5 != NULL) {
                            temp_v0_5->velocity.x = arg0->actor.velocity.x * 1.5f;
                            arg0->boomerangActor->velocity.z = arg0->actor.velocity.z * 1.5f;
                            Inventory_ChangeAmmo(9, -1);
                            Actor_PlaySfxAtPos(arg0->boomerangActor, 0x9ACU);
                        }
                    }
                }
                if (arg0->actor.velocity.y < 0.0f) {
                    if (sp76 != 0) {
                        arg0->actor.terminalVelocity = -0.38f;
                        var_ft1 = -0.2f;
                    } else {
                        temp_fv0_3 = (f32) arg0->unk_B88;
                        arg0->actor.terminalVelocity = (temp_fv0_3 * 0.0033f) + -20.0f;
                        var_ft1 = ((f32) gGameInfo->data[0x44] / 100.0f) + (temp_fv0_3 * 0.00004f);
                    }
                    arg0->actor.gravity = var_ft1;
                }
                arg0->unk_B68 = (s16) (s32) arg0->actor.world.pos.y;
                func_80832F78((f32* ) arg0, &sp6C, (bitwise f32) &sp66, NULL, (Player* ) arg1);
                if ((bitwise f32) sp6C == 0.0f) {
                    sp68 = 0.1f;
                } else {
                    temp_v0_6 = arg0->currentYaw - sp66;
                    var_v1_3 = temp_v0_6;
                    if (temp_v0_6 < 0) {
                        var_v1_3 = -temp_v0_6;
                    }
                    if (var_v1_3 >= 0x4001) {
                        sp6C = -(bitwise f32) sp6C;
                        sp66 += 0x8000;
                    }
                    sp68 = 0.25f;
                }
                Math_SmoothStepToS(sp44, (s16) (s32) ((bitwise f32) sp6C * 600.0f), 8, 0xFA0, (s16) 0x64);
                Math_ScaledStepToS(&arg0->currentYaw, sp66, 0xFA);
                temp_ft0 = (s32) ((f32) (s16) (sp66 - arg0->currentYaw) * -2.0f);
                if ((s16) temp_ft0 < -0x1F40) {
                    var_a1_2 = -0x1F40;
                } else {
                    var_v1_4 = (s16) temp_ft0;
                    if ((s16) temp_ft0 >= 0x1F41) {
                        var_v1_4 = 0x1F40;
                    }
                    var_a1_2 = var_v1_4;
                }
                Math_SmoothStepToS(&arg0->unk_B8E, var_a1_2, 0x14, 0x320, (s16) 0x14);
                sp6C = fabsf(Math_SinS(arg0->unk_B8C)) * ((bitwise f32) sp6C * ((f32) arg0->unk_B88 * 0.0004f));
                func_80856888(&arg0->linearVelocity, sp6C, sp68);
                temp_fv1_2 = arg0->linearVelocity;
                temp_fa0_3 = arg0->actor.velocity.y;
                temp_fv0_4 = sqrtf((temp_fv1_2 * temp_fv1_2) + (temp_fa0_3 * temp_fa0_3));
                sp6C = temp_fv0_4;
                if (temp_fv0_4 > 8.0f) {
                    temp_ft0_2 = 8.0f / temp_fv0_4;
                    sp6C = temp_ft0_2;
                    arg0->linearVelocity *= temp_ft0_2;
                    arg0->actor.velocity.y *= sp6C;
                }
            }
        }
        func_808378FC((Player* ) arg1, arg0);
    }
}

void func_808573A4(Player* arg0, PlayState* arg1) {
    s16 sp46;
    s16 sp40;
    s16 sp3E;
    f32 temp_fv0;

    arg0->stateFlags2 |= 0x60;
    LinkAnimation_Update(arg1, &arg0->skelAnime);
    func_8082F0E4(arg0, 0x8000U, 1, 0x1E);
    if (func_80838A90(arg0, arg1) == 0) {
        sp46 = arg0->currentYaw;
        func_80832F78((f32* ) arg0, &sp40, (bitwise f32) &sp3E, (PlayState* )0x3C9374BC, (Player* ) arg1);
        sp40 = (bitwise f32) sp40 * (1.0f - (0.9f * ((11100.0f - arg0->unk_B08[2]) / 11100.0f)));
        if (func_8083A4A4(arg0, (f32* ) &sp40, &sp3E, (f32) gGameInfo->data[0x2B] / 100.0f) == 0) {
            func_8083CB58(arg0, (s16) (s32) sp40, (Player* ) sp3E);
        }
        arg0->unk_B08[2] += -800.0f;
        temp_fv0 = arg0->unk_B08[2];
        arg0->actor.shape.rot.y += (s32) temp_fv0 + (arg0->currentYaw - sp46);
        if (Math_StepToF(&arg0->unk_B08[3], 0.0f, temp_fv0) != 0) {
            arg0->actor.shape.rot.y = arg0->currentYaw;
            func_8083B2E4(arg0, arg1);
        } else if (&D_0400E270 == arg0->skelAnime.animation) {
            arg0->stateFlags3 |= 0x100000;
            if (arg0->unk_B08[3] < 0.0f) {
                func_8082E438(arg1, arg0, func_8082ED20(arg0));
            }
        }
        func_808566C0(arg1, arg0, 0, 1.0f, 0.5f, 0.0f, 0x20);
        if (arg0->unk_B08[2] > 9500.0f) {
            func_8083F8A8(&arg1->state, &arg0->actor, 2.0f, 1, 2.5f, 0xA, 0x12, 1);
        }
        func_800AE930(&arg1->colCtx, Effect_GetByIndex(arg0->meleeWeaponEffectIndex[2]), &arg0->actor.world.pos, 2.0f, (s16) (s32) arg0->currentYaw, arg0->actor.floorPoly, (s32) arg0->actor.floorBgId);
        func_800B8F98(&arg0->actor, func_8082E078(arg0, 0xD0U) & 0xFFFF);
    }
}

void func_80857640(Player* arg0, Player* arg1, s32 arg2) {
    func_80834CD0(arg1, (bitwise f32) arg0, (u16) arg1, 0x6800);
    func_800B8E58(arg0, 0x8E1U);
    func_8082DABC(arg0);
    if (arg0->unk_AE8 < arg2) {
        arg0->unk_AE8 = (s16) arg2;
    }
    arg0->unk_AE7 = 1;
    arg0->unk_B48 = 1.0f;
}

void func_808576BC(GameState* arg0, Actor* arg1) {
    s32 sp34;
    f32 sp30;
    s32 var_v0;
    s32 var_v0_2;

    sp30 = Math_CosS(arg1->unk_AD4);
    var_v0 = (s32) (((Math_SinS(arg1->unk_AD4) * arg1->velocity.x) + (arg1->velocity.z * sp30)) * 800.0f) - arg1->unk_AE8;
    if (var_v0 < 0) {
        var_v0 = -var_v0;
    }
    if (var_v0 >= 0x7D1) {
        if (var_v0 >= 0x1771) {
            sp34 = var_v0;
            func_800B8F98(arg1, 0x1ADU);
        }
        if (func_8083F8A8(arg0, arg1, 12.0f, -1 - (var_v0 >> 0xC), (f32) (var_v0 >> 0xA) + 1.0f, (var_v0 >> 7) + 0xA0, 0x14, 1) != 0) {
            var_v0_2 = 0xC1;
            if (arg1->unk_B72 == 0xE) {
                var_v0_2 = 0x1AE;
            }
            func_800B8E58((Player* ) arg1, var_v0_2 & 0xFFFF);
        }
    }
}

void func_808577E0(Player* arg0) {
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fa0;
    f32 var_fa0_2;
    s16 temp_v0;
    s16 var_v1;

    temp_v0 = arg0->unk_AE8;
    var_v1 = temp_v0;
    if (temp_v0 < 0) {
        var_v1 = -temp_v0;
    }
    temp_fa1 = (f32) var_v1 * 0.00004f;
    if (arg0->unk_ABC < temp_fa1) {
        arg0->unk_B48 += 0.08f;
    } else {
        arg0->unk_B48 += -0.07f;
    }
    temp_fv1 = arg0->unk_B48;
    if (temp_fv1 < -0.2f) {
        arg0->unk_B48 = -0.2f;
    } else {
        if (temp_fv1 > 0.14f) {
            var_fa0 = 0.14f;
        } else {
            var_fa0 = temp_fv1;
        }
        arg0->unk_B48 = var_fa0;
    }
    temp_fv1_2 = arg0->unk_B48;
    if (fabsf(temp_fv1_2) < 0.12f) {
        if (Math_StepUntilF(arg0 + 0xABC, temp_fa1, temp_fv1_2) != 0) {
            arg0->unk_B48 = 0.0f;
        }
    } else {
        var_fa0_2 = -0.7f;
        arg0->unk_ABC += temp_fv1_2;
        temp_fv0 = arg0->unk_ABC;
        if (temp_fv0 < -0.7f) {

        } else if (temp_fv0 > 0.3f) {
            var_fa0_2 = 0.3f;
        } else {
            var_fa0_2 = temp_fv0;
        }
        arg0->unk_ABC = var_fa0_2;
    }
}

s32 func_80857950(PlayState* arg0, Player* arg1) {
    s32 var_v0;

    if (((arg1->unk_B88 == 0) && (~(D_80862B44->cur.button | 0xFFFF7FFF) != 0)) || ((var_v0 = 0, (arg1->unk_AE7 == 3)) && (arg1->actor.velocity.y < 0.0f))) {
        func_80831494(arg0, arg1, func_80849FE0, 1);
        Math_Vec3f_Copy(&arg1->actor.world.pos, &arg1->actor.prevPos);
        LinkAnimation_Change(arg0, &arg1->skelAnime, &D_0400E208, -0.6666667f, 7.0f, 0.0f, (u8) 2, 0.0f);
        func_800B8E58(arg1, 0x8E7U);
        var_v0 = 1;
    }
    return var_v0;
}

s32 func_80857A44(PlayState* arg0, Player* arg1) {
    f32 temp_fv0;

    if (LinkAnimation_Update(arg0, arg1 + 0x240) != 0) {
        func_8082E794(arg1);
        temp_fv0 = arg1->linearVelocity;
        arg1->actor.shape.shadowDraw = ActorShadow_DrawCircle;
        arg1->actor.bgCheckFlags |= 0x800;
        arg1->unk_AE7 = 4;
        arg1->actor.shape.shadowScale = 30.0f;
        arg1->unk_B08[0] = temp_fv0;
        arg1->unk_B08[1] = 0.0f;
        arg1->actor.home.rot.y = arg1->currentYaw;
        arg1->unk_AE8 = (s16) (s32) (temp_fv0 * 500.0f);
        return 1;
    }
    return 0;
}

void func_80857AEC(PlayState* arg0, Player* arg1) {
    if (arg1->actor.bgCheckFlags & 2) {
        arg1->unk_B08[1] += arg1->unk_B08[0] * 0.05f;
        if (arg1->unk_B88 == 0) {
            if (arg1->unk_AE7 == 1) {
                arg1->unk_AE7 = 2;
                func_8083FE90(arg0, arg1, 0x8E8U);
                arg0->actorCtx.unk2 = 4;
                EffectSsBlast_SpawnWhiteShockwave(arg0, &arg1->actor.world.pos, &gZeroVec3f, &gZeroVec3f);
                arg1->unk_AE8 = 0;
                arg1->unk_B08[0] = 0.0f;
                Actor_Spawn(&arg0->actorCtx, arg0, 1, arg1->actor.world.pos.x, arg1->actor.world.pos.y, arg1->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, 0);
            } else {
                arg1->unk_AE7 = 4;
            }
        }
        func_8082E1BC(arg1);
    }
}

void func_80857BE8(Player* arg0, PlayState* arg1) {
    f32 spE4;
    s16 spE2;
    s32 spDC;
    s32 spD8;
    f32 spCC;
    s16 spCA;
    s16 spC8;
    s32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    Vec3f sp94;
    s16 sp92;
    s16 sp90;
    s16 sp8E;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    s16 sp7C;
    Vec3f sp70;
    f32 sp6C;
    f32 sp54;
    f32 sp38;                                       /* compiler-managed */
    f32 sp34;
    ? var_fv1_5;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa0_4;
    f32 temp_fa0_5;
    f32 temp_fa0_6;
    f32 temp_fa1;
    f32 temp_fa1_2;
    f32 temp_fa1_3;
    f32 temp_ft1;
    f32 temp_ft1_3;
    f32 temp_ft2;
    f32 temp_ft3;
    f32 temp_ft4;
    f32 temp_ft4_2;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv1;
    f32 var_fa0;
    f32 var_fa1;
    f32 var_fa1_2;
    f32 var_ft2;
    f32 var_fv0;
    f32 var_fv1;
    f32 var_fv1_2;
    f32 var_fv1_3;
    f32 var_fv1_4;
    f32 var_fv1_6;
    f32 var_fv1_7;
    f32 var_fv1_8;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1_2;
    s16 var_a0_2;
    s16 var_a2;
    s16 var_a2_2;
    s16 var_a3;
    s16 var_v1_2;
    s16 var_v1_4;
    s16 var_v1_5;
    s16 var_v1_6;
    s16 var_v1_7;
    s16 var_v1_8;
    s32 temp_ft1_2;
    s32 temp_ft3_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v1;
    s32 var_v1_3;
    s32 var_v1_9;
    u16 temp_v0_7;

    if ((func_80833058(arg1, arg0, D_8085D050, NULL) == 0) && ((arg0->unk_AE7 != 0) || (func_80857A44(arg1, arg0) != 0)) && (arg0->stateFlags3 |= 0x1000, func_808577E0(arg0), (func_80857950(arg1, arg0) == 0))) {
        spE4 = 0.0f;
        spE2 = arg0->currentYaw;
        if (arg0->doorType == 4) {
            var_fv1 = 0.0f;
        } else {
            var_fv1 = 12.0f;
        }
        if (func_80840A30(arg1, arg0, arg0->unk_B08, var_fv1) != 0) {
            if (arg0->unk_748 == func_80857BE8) {
                arg0->linearVelocity *= 0.1f;
                func_80834CD0(arg0, 10.0f, 0U);
                if (arg0->unk_B88 != 0) {
                    arg0->unk_B88 = 0;
                    arg0->unk_AE7 = 3;
                }
                goto block_18;
            }
        } else {
            if (arg0->actor.bgCheckFlags & 8) {
                temp_fv0 = arg0->unk_B08[0];
                if (temp_fv0 >= 12.0f) {
                    var_v1 = -1;
                    temp_v0 = arg0->currentYaw - (arg0->actor.wallYaw + 0x8000);
                    var_a2 = temp_v0;
                    if (temp_v0 < 0) {
                        var_a2 = -temp_v0;
                    }
                    arg0->unk_B08[1] += temp_fv0 * 0.05f;
                    if (temp_v0 >= 0) {
                        var_v1 = 1;
                    }
                    arg0->unk_B8C = 4;
                    arg0->currentYaw += 0x8000 - (var_v1 * ((var_a2 + 0x100) & ~0x1FF) * 2);
                    temp_v0_2 = arg0->currentYaw;
                    arg0->actor.home.rot.y = temp_v0_2;
                    arg0->actor.shape.rot.y = temp_v0_2;
                    func_800B8E58(arg0, 0x185EU);
                }
            }
block_18:
            temp_v0_3 = arg0->unk_B8E;
            arg0->stateFlags2 |= 0x60;
            if (temp_v0_3 != 0) {
                arg0->unk_B8E = temp_v0_3 - 1;
            } else {
                func_80832F78((f32* ) arg0, (s16* ) &spE4, (bitwise f32) &spE2, NULL, (Player* ) arg1);
                spE4 *= 2.6f;
            }
            temp_v0_4 = arg0->unk_B8C;
            if (temp_v0_4 != 0) {
                arg0->unk_B8C = temp_v0_4 - 1;
                spE2 = arg0->currentYaw;
            }
            if (arg0->unk_B88 != 0) {
                spE4 = 18.0f;
                Math_StepToC(&arg0->unk_AE7, 4, 1);
                temp_v1 = arg0->stateFlags3 & 0x80000;
                if ((temp_v1 != 0) && ((~(D_80862B44->cur.button | 0xFFFF7FFF) != 0) || (gSaveContext.save.playerData.magic == 0) || ((arg0->unk_AE7 == 4) && (arg0->unk_B08[0] < 12.0f)))) {
                    if (Math_StepToS(&arg0->unk_B88, 0, 1) != 0) {
                        arg0->stateFlags3 &= 0xFFF7FFFF;
                        func_80115D5C(&arg1->state);
                        func_800B8E58(arg0, 0x9A2U);
                    }
                    arg0->unk_AE7 = 4;
                } else if (arg0->unk_B88 < 7) {
                    if (temp_v1 == 0) {
                        arg0->unk_3D0.unk_00 = 2;
                    }
                    arg0->unk_B88 += 1;
                }
            }
            spDC = (s32) (spE4 * 900.0f);
            if (arg0->unk_B8A != 0) {
                var_fv1_2 = 1.0f;
            } else {
                var_fv1_2 = 0.0f;
            }
            Math_AsymStepToF(&arg0->unk_B08[2], var_fv1_2, 0.8f, 0.05f);
            if (arg0->actor.bgCheckFlags & 1) {
                func_80857AEC(arg1, arg0);
                if (arg0->unk_AE7 == 2) {
                    temp_v0_5 = arg0->unk_B8A;
                    if (temp_v0_5 == 0) {
                        arg0->unk_AE7 = 4;
                    } else {
                        arg0->unk_B8A = temp_v0_5 - 1;
                        arg0->unk_ABC = 0.0f;
                        arg0->unk_B48 = 0.14f;
                    }
                } else if ((arg0->unk_B88 == 0) && (~(D_80862B44->press.button | ~0x4000) == 0) && (Inventory_GetBtnBItem(arg1) < 0xFD)) {
                    func_80857640(arg0, (Player* )0x41600000, 0x1F40);
                } else {
                    temp_v0_6 = arg0->currentYaw;
                    sp90 = temp_v0_6;
                    temp_a0 = temp_v0_6 - arg0->actor.home.rot.y;
                    sp8E = temp_a0;
                    temp_fa0 = Math_CosS(temp_a0);
                    if (arg0->unk_B88 == 0) {
                        arg0->unk_B08[1] = 0.0f;
                        if (arg0->unk_AE7 >= 0x36) {
                            sp88 = temp_fa0;
                            func_80115DB4(arg1, 2, 5);
                            arg0->unk_B88 = 1;
                            arg0->stateFlags3 |= 0x80000;
                            arg0->unk_B08[0] = 18.0f;
                            func_8082E1F0(arg0, 0x9A3U);
                        }
                    } else {
                        temp_fv0_2 = arg0->unk_B08[1];
                        if (temp_fv0_2 < 0.0f) {
                            arg0->unk_B08[1] = 0.0f;
                        } else {
                            if (temp_fv0_2 > 0.9f) {
                                var_fv1_3 = 0.9f;
                            } else {
                                var_fv1_3 = temp_fv0_2;
                            }
                            arg0->unk_B08[1] = var_fv1_3;
                        }
                    }
                    var_fv1_4 = (1.0f - arg0->unk_B08[1]) * arg0->unk_B08[0] * temp_fa0;
                    if (!(var_fv1_4 < 0.0f)) {
                        if (spE4 == 0.0f) {
                            var_v1_2 = sp8E;
                            if (sp8E < 0) {
                                var_v1_2 = -sp8E;
                            }
                            if (var_v1_2 >= 0xFA1) {
                                goto block_62;
                            }
                        }
                    } else {
block_62:
                        var_fv1_4 = 0.0f;
                    }
                    temp_ft1 = fabsf(temp_fa0) * 20.0f;
                    spBC = var_fv1_4;
                    Math_StepToF(&arg0->unk_B08[1], 0.0f, temp_ft1);
                    var_a0 = (s32) (spBC * 500.0f);
                    if (var_a0 < 0) {
                        var_a0 = 0;
                    }
                    var_v1_3 = (s32) (spE4 * 400.0f) - var_a0;
                    if (var_v1_3 < 0) {
                        var_v1_3 = 0;
                    }
                    if (spDC < var_a0) {
                        spDC = var_a0;
                    }
                    spC0 = var_v1_3;
                    spAC = Math_SinS(arg0->actor.home.rot.y) * spBC;
                    spA8 = Math_CosS(arg0->actor.home.rot.y) * spBC;
                    spB4 = Math_SinS(arg0->currentYaw) * arg0->unk_B08[0];
                    temp_fa0_2 = Math_CosS(arg0->currentYaw) * arg0->unk_B08[0];
                    temp_fa1 = spB4 - spAC;
                    spA4 = temp_fa1;
                    temp_ft4 = temp_fa0_2 - spA8;
                    spA0 = temp_ft4;
                    arg0->linearVelocity = spBC;
                    arg0->currentYaw = arg0->actor.home.rot.y;
                    spCC = spE4;
                    spCA = spE2;
                    if (arg0->unk_AE7 >= 5) {
                        var_fv1_5 = 0;
                    } else {
                        var_fv1_5 = 0x3F800000;
                    }
                    sp38 = temp_fa1;
                    sp34 = temp_ft4;
                    if (func_8083A4A4((bitwise Player* ) temp_fa0_2, (bitwise f32* ) temp_fa1, &arg0->actor.id, (bitwise f32) &spCC, &spCA, var_fv1_5) != 0) {
                        if (arg0->unk_B88 == 0) {
                            arg0->unk_AE7 = 4;
                        }
                        if (arg0->unk_AE7 == 4) {
                            spDC = -0xFA0;
                        }
                    } else {
                        temp_v0_7 = arg0->unk_B72;
                        if (((temp_v0_7 == 0xE) || (temp_v0_7 == 0xF) || (temp_v0_7 == 1) || (D_80862B08 == 5)) && (spC0 >= 0x7D0)) {
                            var_fv1_6 = 0.08f;
                        } else {
                            var_fv1_6 = (f32) arg0->unk_AE8 * 0.0003f;
                        }
                        sp84 = var_fv1_6;
                        var_fv1_7 = var_fv1_6;
                        var_fa0 = (Math_SinS(arg0->unk_B6C) * 8.0f) + 0.6f;
                        if (arg0->unk_B88 == 0) {
                            if ((gSaveContext.unk_3F28 == 0) && (gSaveContext.save.playerData.magic >= 2) && (arg0->unk_AE8 >= 0x36B0)) {
                                arg0->unk_AE7 += 1;
                                sp80 = var_fa0;
                                sp84 = var_fv1_7;
                                func_800B8F98(&arg0->actor, 0xEBU);
                            } else {
                                arg0->unk_AE7 = 4;
                            }
                        }
                        if (spE4 != spCC) {
                            arg0->currentYaw = spE2;
                        }
                        if (var_fv1_7 < 0.0f) {
                            var_fv1_7 = 0.0f;
                        }
                        if (var_fa0 < 0.0f) {
                            var_fa0 = 0.0f;
                        }
                        Math_AsymStepToF(&arg0->linearVelocity, spE4, var_fv1_7, var_fa0);
                        temp_v1_2 = (s16) (s32) (fabsf(arg0->actor.speedXZ) * 20.0f) + 0x12C;
                        var_a2_2 = temp_v1_2;
                        if (temp_v1_2 < 0x64) {
                            var_a2_2 = 0x64;
                        }
                        temp_ft1_2 = (s32) ((f32) (s16) (spE2 - arg0->currentYaw) * -0.5f);
                        arg0->unk_B08[1] += (f32) ((s16) temp_ft1_2 * (s16) temp_ft1_2) * 8e-9.0f;
                        spC8 = var_a2_2;
                        sp7C = (s16) temp_ft1_2;
                        Math_ScaledStepToS(&arg0->currentYaw, spE2, var_a2_2);
                        sp6C = (bitwise f32) func_80835D2C(arg1, arg0, D_8085D978, &sp70);
                        var_fa1 = (bitwise f32) func_80835D2C(arg1, arg0, D_8085D984, &sp70) - sp6C;
                        if (fabsf(var_fa1) > 100.0f) {
                            var_fa1 = 0.0f;
                        }
                        temp_v0_8 = Math_FAtan2F(60.0f, var_fa1);
                        var_a3 = temp_v0_8;
                        if (temp_v0_8 < 0) {
                            var_v1_4 = -temp_v0_8;
                        } else {
                            var_v1_4 = temp_v0_8;
                        }
                        if (var_v1_4 >= 0x2AAB) {
                            var_a3 = 0;
                        }
                        Math_ScaledStepToS(&arg0->actor.shape.rot.z, (s16) (var_a3 + sp7C), spC8);
                    }
                    spBC = arg0->linearVelocity;
                    arg0->actor.home.rot.y = arg0->currentYaw;
                    arg0->currentYaw = sp90;
                    func_800B75A0(arg0->actor.floorPoly, &sp94, &sp92);
                    var_fa1_2 = sqrtf((sp38 * sp38) + (sp34 * sp34));
                    if (arg0->unk_B88 != 0) {
                        var_a0_2 = sp8E;
                        if (sp8E < 0) {
                            var_a0_2 = -sp8E;
                        }
                        temp_v0_9 = arg0->unk_B6C;
                        var_v1_5 = temp_v0_9;
                        if (temp_v0_9 < 0) {
                            var_v1_5 = -temp_v0_9;
                        }
                        if ((var_v1_5 + var_a0_2) >= 0x3A99) {
                            arg0->unk_B88 = 0;
                            arg0->unk_AE7 = 4;
                            arg0->unk_B8E = 0x14;
                            arg0->unk_AE8 = 0;
                            arg0->stateFlags3 &= 0xFFF7FFFF;
                            spB8 = var_fa1_2;
                            func_80115D5C(&arg1->state);
                        }
                    } else {
                        temp_ft4_2 = (0.6f * (bitwise f32) sp94) + sp38;
                        temp_ft5 = (0.6f * sp94.z) + sp34;
                        temp_fv0_3 = sqrtf((temp_ft4_2 * temp_ft4_2) + (temp_ft5 * temp_ft5));
                        if ((temp_fv0_3 < var_fa1_2) || (temp_fv0_3 < 6.0f)) {
                            spA4 = temp_ft4_2;
                            spA0 = temp_ft5;
                            var_fa1_2 = temp_fv0_3;
                        }
                    }
                    if (var_fa1_2 != 0.0f) {
                        var_fv0 = var_fa1_2 - 0.3f;
                        if (var_fa1_2 < 0.3f) {
                            var_fv0 = 0.0f;
                        }
                        temp_fa1_2 = var_fv0 / var_fa1_2;
                        temp_ft2 = spA4 * temp_fa1_2;
                        temp_ft3 = spA0 * temp_fa1_2;
                        spA4 = temp_ft2;
                        spA0 = temp_ft3;
                        if (var_fv0 != 0.0f) {
                            sp54 = var_fv0;
                            arg0->unk_B28 = Math_FAtan2F(temp_ft3, temp_ft2);
                        }
                        if (arg0->unk_AE8 == 0) {
                            temp_v0_10 = arg0->unk_B86;
                            temp_ft3_2 = (s32) (var_fv0 * 800.0f);
                            arg0->unk_B86 = temp_v0_10 + temp_ft3_2;
                            if ((arg0->actor.bgCheckFlags & 1) && (temp_ft3_2 != 0) && (((temp_v0_10 + temp_ft3_2) * temp_v0_10) <= 0)) {
                                sp54 = var_fv0;
                                func_8019F780(&arg0->actor.projectedPos, func_8082E078(arg0, 0x990U) & 0xFFFF, var_fv0);
                            }
                        }
                    }
                    temp_ft1_3 = Math_SinS(arg0->actor.home.rot.y) * spBC;
                    spAC = temp_ft1_3;
                    temp_fa1_3 = temp_ft1_3 + spA4;
                    temp_fa0_3 = (Math_CosS(arg0->actor.home.rot.y) * spBC) + spA0;
                    temp_fv0_4 = sqrtf((temp_fa1_3 * temp_fa1_3) + (temp_fa0_3 * temp_fa0_3));
                    arg0->unk_B08[0] = temp_fv0_4;
                    if (temp_fv0_4 > 18.0f) {
                        arg0->unk_B08[0] = 18.0f;
                    } else {
                        arg0->unk_B08[0] = arg0->unk_B08[0];
                    }
                    arg0->currentYaw = Math_FAtan2F(temp_fa0_3, temp_fa1_3);
                }
                func_808576BC(&arg1->state, &arg0->actor);
                temp_a0_2 = arg0->unk_AE8;
                var_v1_6 = temp_a0_2;
                if (temp_a0_2 < 0) {
                    var_v1_6 = -temp_a0_2;
                }
                if (var_v1_6 >= 0xFA1) {
                    arg0->stateFlags2 |= 8;
                }
                if (arg0->actor.bgCheckFlags & 1) {
                    arg0->linearVelocity = Math_CosS(arg0->unk_B6C) * arg0->unk_B08[0];
                    arg0->actor.velocity.y = Math_SinS(arg0->unk_B6C) * arg0->unk_B08[0];
                }
                if ((arg0->unk_B88 != 0) || (func_800C9C24(&arg1->colCtx, arg0->actor.floorPoly, (s32) arg0->actor.floorBgId, 1) != 0)) {
                    sp38 = &arg1->colCtx;
                    func_800AE930(sp38, Effect_GetByIndex(arg0->meleeWeaponEffectIndex[2]), &arg0->actor.world.pos, 15.0f, (s16) (s32) arg0->actor.shape.rot.y, arg0->actor.floorPoly, (s32) arg0->actor.floorBgId);
                } else {
                    func_800AEF44(Effect_GetByIndex(arg0->meleeWeaponEffectIndex[2]));
                }
            } else {
                Math_ScaledStepToS(&arg0->actor.shape.rot.z, 0, 0x190);
                arg0->unk_B86 = 0;
                if (arg0->unk_B88 != 0) {
                    arg0->actor.gravity = -1.0f;
                    Math_ScaledStepToS(&arg0->actor.home.rot.y, spE2, 0x190);
                    temp_fv1 = arg0->linearVelocity;
                    temp_fa0_4 = arg0->actor.velocity.y;
                    temp_fv0_5 = sqrtf((temp_fv1 * temp_fv1) + (temp_fa0_4 * temp_fa0_4));
                    if (temp_fv1 >= 0.0f) {
                        var_fv1_8 = 1.0f;
                    } else {
                        var_fv1_8 = -1.0f;
                    }
                    temp_fa0_5 = var_fv1_8 * temp_fv0_5;
                    arg0->unk_B08[0] = temp_fa0_5;
                    if (temp_fa0_5 > 18.0f) {
                        arg0->unk_B08[0] = 18.0f;
                    } else {
                        var_ft2 = arg0->unk_B08[0];
                        goto block_155;
                    }
                } else {
                    temp_fa0_6 = arg0->actor.velocity.y;
                    arg0->unk_B48 += temp_fa0_6 * 0.005f;
                    if (arg0->unk_AE7 == 1) {
                        if (temp_fa0_6 > 0.0f) {
                            temp_fv0_6 = arg0->actor.gravity;
                            if ((temp_fa0_6 + temp_fv0_6) < 0.0f) {
                                arg0->actor.velocity.y = -temp_fv0_6;
                            }
                        } else {
                            arg0->unk_B8A = 0xA;
                            if (temp_fa0_6 > -1.0f) {
                                arg0->actor.gravity = -0.2f;
                            } else {
                                arg0->unk_3D0.unk_00 = 1;
                                arg0->actor.gravity = -10.0f;
                            }
                        }
                    }
                    var_ft2 = arg0->linearVelocity;
block_155:
                    arg0->unk_B08[0] = var_ft2;
                }
                func_800AEF44(Effect_GetByIndex(arg0->meleeWeaponEffectIndex[2]));
            }
            Math_ScaledStepToS(&arg0->actor.shape.rot.y, arg0->actor.home.rot.y, 0x7D0);
            if (spDC >= 0) {
                var_v1_7 = 0x7D0;
            } else {
                var_v1_7 = 0x3E8;
            }
            Math_AsymStepToS(&arg0->unk_AE8, unkspDE, var_v1_7, 0x4B0);
            temp_a0_3 = arg0->unk_AE8;
            if (temp_a0_3 != 0) {
                temp_a3 = arg0->actor.shape.rot.x;
                var_v1_8 = temp_a0_3;
                arg0->actor.shape.rot.x = temp_a3 + temp_a0_3;
                if (temp_a0_3 < 0) {
                    var_v1_8 = -temp_a0_3;
                }
                spD8 = (s32) temp_a3;
                Math_ScaledStepToS(&arg0->unk_B86, 0, var_v1_8);
                if ((arg0->actor.bgCheckFlags & 1) && (((arg0->unk_AE8 + temp_a3) * temp_a3) <= 0)) {
                    var_v1_9 = 0x990;
                    if (arg0->unk_B88 != 0) {
                        var_v1_9 = 0x980;
                    }
                    sp38 = &arg0->actor.projectedPos;
                    func_8019F780(sp38, func_8082E078(arg0, var_v1_9 & 0xFFFF) & 0xFFFF, arg0->unk_B08[0]);
                }
            }
            if (arg0->unk_AE7 == 2) {
                sp38 = &arg0->actor.world;
                func_8082F0E4(arg0, 0x400U, 4, 0x3C);
                func_800B648C(arg1, 0, 2, 100.0f, &sp38->pos);
                return;
            }
            if (arg0->unk_B88 != 0) {
                func_8082F0E4(arg0, 0x4000U, 1, 0x19);
                return;
            }
            func_8082F0E4(arg0, 0x04000000U, 1, 0x19);
        }
    }
}

void func_80858C84(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082E784(arg1);
    func_8082E438(arg0, arg1, arg2);
    func_8082DABC(arg1);
}

void func_80858CC8(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082E784(arg1);
    LinkAnimation_Change(arg0, &arg1->skelAnime, arg2, 0.6666667f, 0.0f, (f32) Animation_GetLastFrame(arg2), (u8) 2, -8.0f);
    func_8082DABC(arg1);
}

void func_80858D48(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082E784(arg1);
    LinkAnimation_Change(arg0, &arg1->skelAnime, arg2, 0.6666667f, 0.0f, 0.0f, (u8) 0, -8.0f);
    func_8082DABC(arg1);
}

void func_80858DB4(? (*arg0)(), Player* arg1, LinkAnimationHeader* arg2) {
    func_8082DABC(arg1);
}

void func_80858DDC(void) {
    func_80858C84();
}

void func_80858DFC(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082E784(arg1);
    func_8082E5A8(arg0, arg1, arg2);
    func_8082DABC(arg1);
}

void func_80858E40(void) {
    func_80858CC8();
}

void func_80858E60(void) {
    func_80858D48();
}

void func_80858E80(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082EA60(arg0, arg1, arg2);
}

void func_80858EA0(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082EA10(arg0, arg1, arg2, 0x9C);
}

void func_80858EC0(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082DBC0(arg0, arg1, arg2);
    func_8082E920(arg0, arg1, 0x9C);
}

void func_80858EFC(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082EB18(arg0, arg1, arg2);
}

void func_80858F1C(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082EAC8(arg0, arg1, arg2, 0x9C);
}

void func_80858F3C(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082DB18(arg0, arg1, arg2);
}

void func_80858F5C(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082DB3C(arg0, arg1, arg2);
}

void func_80858F7C(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082DB90(arg0, arg1, arg2);
}

void func_80858F9C(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    func_8082DB60(arg0, arg1, arg2);
}

void func_80858FBC(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    LinkAnimation_Update(arg0, arg1 + 0x240);
}

void func_80858FE8(Player* arg0) {
    if (&D_0400E120 == arg0->skelAnime.animation) {
        func_8082E094(arg0, 0xD0U);
        func_800B8E58(arg0, 0x6042U);
    }
}

void func_80859028(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    void* temp_v0;

    if (LinkAnimation_Update(arg0, arg1 + 0x240) != 0) {
        func_80858D48(arg0, arg1, arg2, arg1);
        arg1->unk_AE8 = 1;
    }
    temp_v0 = arg1->skelAnime.animation;
    if (&D_0400E150 == temp_v0) {
        func_8082E224(arg1, &D_8085DA08);
        return;
    }
    if (&D_0400E118 == temp_v0) {
        func_8082E224(arg1, D_8085DA14);
        return;
    }
    if (&D_0400E430 == temp_v0) {
        func_8082E224(arg1, D_8085DA38);
        return;
    }
    if (&D_0400D030 == temp_v0) {
        func_8082E224(arg1, &D_8085DA7C);
        return;
    }
    if (&D_0400CF48 == temp_v0) {
        func_8082E224(arg1, &D_8085DA84);
        return;
    }
    if (&D_0400D108 == temp_v0) {
        func_8082E224(arg1, &D_8085DA90);
        return;
    }
    func_80858FE8(arg1);
}

void func_80859168(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    if (LinkAnimation_Update(arg0, arg1 + 0x240) != 0) {
        func_8082E794(arg1);
        func_8082DB60(arg0, arg1, arg2);
    }
}

void func_808591BC(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    if (LinkAnimation_Update(arg0, arg1 + 0x240) != 0) {
        func_8082EB18(arg0, arg1, arg2);
        arg1->unk_AE8 = 1;
    }
}

void func_80859210(PlayState* arg0, Player* arg1, struct_8082E224_arg1* arg2) {
    LinkAnimation_Update(arg0, arg1 + 0x240);
    func_8082E224(arg1, arg2);
}

void func_80859248(Player* arg0) {
    Actor* var_v0;

    var_v0 = arg0->unk_398;
    if ((var_v0 == NULL) || (var_v0->update == NULL)) {
        arg0->unk_398 = NULL;
        var_v0 = NULL;
    }
    arg0->unk_730 = var_v0;
    if (var_v0 != NULL) {
        arg0->actor.shape.rot.y = func_8083C62C(NULL);
    }
}

void func_8085929C(PlayState* arg0, Player* arg1, ? arg2) {
    u32 temp_t7;

    temp_t7 = arg1->stateFlags1 | 0x08000000;
    arg1->stateFlags1 = temp_t7;
    arg1->stateFlags2 |= 0x400;
    arg1->stateFlags1 = temp_t7 & 0xFFF3FFFF;
    func_8082DB3C(arg0, arg1, &D_0400DFD0);
    arg1->linearVelocity = 0.0f;
}

void func_80859300(PlayState* arg0, PlayState* arg1, ? arg2) {
    arg1->state.heap.size = 0;
    if (arg1->unk_AE7 == 0) {
        if ((arg1->unk_14B == 3) || (func_8083B3B4(arg1, NULL) != 0)) {
            arg1->unk_AE7 = 1;
            return;
        }
        func_808477D0(arg0, (Player* ) arg1, NULL, fabsf(arg1->unk_68));
        Math_ScaledStepToS(arg1 + 0xAAA, -0x2710, 0x320);
        func_8084748C((f32* ) arg1, (f32* ) &arg1->state.input[3].press, 4.0f, arg1->unk_AD4);
        return;
    }
    if (LinkAnimation_Update(arg0, arg1 + 0x240) != 0) {
        if (arg1->unk_AE7 == 1) {
            func_8082E634(arg0, (Player* ) arg1, &D_0400E000);
        } else {
            func_8082DB3C(arg0, (Player* ) arg1, &D_0400E000);
        }
    }
    func_808475B4((Player* ) arg1);
    func_8084748C((f32* ) arg1, (f32* ) &arg1->colCtx.dyna.bgActors[5].boundingSphere.center.z, 0.0f, arg1->unk_BE);
}

void func_80859414(PlayState* arg0, Player* arg1, ? arg2) {
    Actor* temp_v0;

    func_80859248(arg1);
    if (func_801242B4(arg1) != 0) {
        func_80859300(arg0, (PlayState* ) arg1, 0);
        return;
    }
    LinkAnimation_Update(arg0, &arg1->skelAnime);
    if ((func_801240DC(arg1) != 0) || (arg1->stateFlags1 & 0x800)) {
        func_8083216C(arg1, arg0);
        return;
    }
    temp_v0 = arg1->interactRangeActor;
    if ((temp_v0 != NULL) && (temp_v0->textId == 0xFFFF)) {
        func_8083D23C(arg1, arg0);
    }
}

void func_808594D0(PlayState* arg0, Player* arg1, ? arg2) {
    LinkAnimationHeader* sp34;
    LinkAnimationHeader* temp_a2;
    u8 temp_v0;

    if ((arg1->stateFlags1 * 0x10) < 0) {
        func_8085929C(arg0, arg1, 0, arg0);
        return;
    }
    temp_v0 = arg1->unk_396;
    temp_a2 = (D_8085BE84 + 0x408)[arg1->modelAnimType];
    if ((temp_v0 == 6) || (temp_v0 == 0x2E)) {
        func_8082DB18(arg0, arg1, temp_a2);
    } else {
        sp34 = temp_a2;
        func_8082E784(arg1);
        LinkAnimation_Change(arg0, &arg1->skelAnime, temp_a2, 0.6666667f, 0.0f, (f32) Animation_GetLastFrame(sp34), (u8) 0, -4.0f);
    }
    func_8082DABC(arg1);
}

void func_808595B8(PlayState* arg0, Player* arg1, ? arg2) {
    if (func_80847880(arg0, arg1) == 0) {
        if ((arg1->csMode == 0x14) && (arg0->csCtx.state == 0)) {
            func_800B7298(arg0, NULL, 6U);
            return;
        }
        if ((arg1->stateFlags1 * 0x10) < 0) {
            func_80859300(arg0, (PlayState* ) arg1, 0);
            arg1->actor.velocity.y = 0.0f;
            return;
        }
        LinkAnimation_Update(arg0, &arg1->skelAnime);
        if ((func_801240DC(arg1) != 0) || (arg1->stateFlags1 & 0x800)) {
            func_8083216C(arg1, arg0);
        }
    }
}

void func_8085968C(PlayState* arg0, Player* arg1, ? arg2) {
    LinkAnimationHeader* var_a2;

    if (arg1->actor.id == 0x159) {
        func_80838830(arg1, 0x26B, (u8* ) arg1);
        arg1->stateFlags1 |= 0x400;
    }
    if (arg1->transformation == 3) {
        var_a2 = &D_0400E2B8;
    } else {
        var_a2 = &D_0400D5A8;
    }
    func_8082DB90(arg0, arg1, var_a2);
}

void func_80859708(PlayState* arg0, void* arg1, ? arg2) {
    SkelAnime* sp1C;
    SkelAnime* temp_a2;

    temp_a2 = arg1 + 0x240;
    sp1C = temp_a2;
    LinkAnimation_Update(arg0, temp_a2);
    if ((arg1->unk_0 == 0x159) && (Animation_OnFrame(temp_a2, 20.0f) != 0)) {
        arg1->unk_B2A = 0x3A;
        func_80151BB4(arg0, 0x1BU);
        func_801A3098(0x37U);
    }
}

void func_8085978C(void* arg0, void* arg1, ? arg2) {
    f32 temp_fv0;
    s16 temp_v0;

    arg1->unk_A6C = (s32) (arg1->unk_A6C & 0xFDFFFFFF);
    temp_v0 = Math_Vec3f_Yaw(arg1 + 0x24, arg1 + 0x3A0);
    temp_fv0 = arg1->unk_AD0;
    arg1->unk_32 = temp_v0;
    arg1->unk_BE = temp_v0;
    arg1->unk_AD4 = temp_v0;
    if (temp_fv0 <= 0.0f) {
        arg1->unk_AD0 = 0.1f;
    } else if (temp_fv0 > 2.5f) {
        arg1->unk_AD0 = 2.5f;
    }
    if ((arg1->unk_14B != 4) && (arg0->unk_186E3 == 5)) {
        gGameInfo->data[0x220] = 0x2D;
        gGameInfo->data[0x221] = 0xFF;
        gGameInfo->data[0x222] = 0xFF;
        gGameInfo->data[0x223] = 0xFF;
        gGameInfo->data[0x224] = 0;
        play_sound(0x4834U);
    }
}

void func_80859890(void* arg1, ? arg2) {
    f32 sp24;
    GameInfo* temp_v0;
    GameInfo* temp_v0_2;
    GameInfo* temp_v0_3;
    s16 temp_v1;

    temp_v0 = gGameInfo;
    temp_v1 = temp_v0->data[0x220];
    if (temp_v1 > 0) {
        temp_v0->data[0x224] += temp_v1;
        temp_v0_2 = gGameInfo;
        if (temp_v0_2->data[0x224] >= 0x100) {
            temp_v0_2->data[0x220] = -0x40;
            gGameInfo->data[0x224] = 0xFF;
            gSaveContext.save.playerForm = 4;
            arg1->unk_138 = func_8012301C;
            arg1->unk_13C = 0;
            arg1->unk_AE7 = 0;
        }
    } else if (temp_v1 < 0) {
        temp_v0->data[0x224] += temp_v1;
        temp_v0_3 = gGameInfo;
        if (temp_v0_3->data[0x224] < 0) {
            temp_v0_3->data[0x220] = 0;
            gGameInfo->data[0x224] = 0;
        }
    } else {
        sp24 = 2.5f;
        func_808411D4((PlayState* ) &sp24, (PlayState* )0xA);
        arg1->unk_AE8 = (s16) (arg1->unk_AE8 + 1);
        if (arg1->unk_AE8 >= 0x15) {
            arg1->unk_394 = 0xA;
        }
    }
}

void func_80859990(s32 arg0, void* arg1, ? arg2) {
    arg1->unk_AD0 = 2.5f;
    func_80835BF8(arg1 + 0x24, arg1->unk_BE, 180.0f, arg1 + 0x3A0);
}

void func_808599DC(? arg2) {
    f32 sp1C;

    sp1C = 2.5f;
    func_808411D4((PlayState* ) &sp1C, (PlayState* )0xA);
}

void func_80859A10(PlayState* arg0, Player* arg1, ? arg2) {
    func_8083B23C(arg1, arg0, arg1);
}

void func_80859A44(PlayState* arg0, Player* arg1, ? arg2) {
    func_80859248(arg1);
    if (arg1->unk_AE8 != 0) {
        if (LinkAnimation_Update(arg0, &arg1->skelAnime) != 0) {
            func_8082DB3C(arg0, arg1, func_8082EF54(arg1));
            arg1->unk_AE8 = 0;
        }
        func_8082FC60(arg1);
        return;
    }
    func_8083E958(arg0, arg1);
}

void func_80859AD0(void) {
    func_80840F90(NULL, NULL, NULL);
}

void func_80859AF8(void* arg1) {
    arg1->unk_C2 = 0xF;
    func_80840F90(NULL, NULL, NULL);
}

void func_80859B28(void) {
    func_80840F90(NULL, NULL, (void* )1);
}

void func_80859B54(PlayState* arg1, ? arg2) {
    func_80858CC8(arg1, &D_0400DDB0, (LinkAnimationHeader* ) arg1);
    arg1->unk_14A = 0x14;
    Player_SetModels((Player* ) arg1, Player_ActionToModelGroup((Player* ) arg1, (enum PlayerActionParam) arg1->unk_14A));
}

void func_80859BA8(PlayState* arg0, Player* arg1, void* arg2) {
    f32 sp4;
    f32 temp_fa0;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv1;
    u16 temp_v0;

    temp_fv0 = (f32) arg2->unk_C;
    temp_v0 = arg2->unk_2;
    temp_fv1 = (f32) arg2->unk_10;
    temp_fa0 = (f32) arg2->unk_14;
    temp_ft1 = (f32) (arg0->csCtx.frames - temp_v0) / (f32) (arg2->unk_4 - temp_v0);
    sp4 = temp_ft1;
    arg1->actor.world.pos.x = (((f32) arg2->unk_18 - temp_fv0) * temp_ft1) + temp_fv0;
    arg1->actor.world.pos.y = (((f32) arg2->unk_1C - temp_fv1) * sp4) + temp_fv1;
    arg1->actor.world.pos.z = (((f32) arg2->unk_20 - temp_fa0) * sp4) + temp_fa0;
}

void func_80859C60(PlayState* arg0, Player* arg1, s32 arg2) {
    if (arg2 != 0) {
        func_80859BA8(arg0, arg1);
    }
    LinkAnimation_Update(arg0, &arg1->skelAnime);
}

void func_80859CA0(PlayState* arg0, Player* arg1, s32 arg2) {
    func_8082E514(arg0, arg1, (D_8085BE84 + 0x408)[arg1->modelAnimType]);
    func_8082DABC(arg1);
}

void func_80859CE0(PlayState* arg0, Player* arg1, ? arg2) {
    arg1->actor.draw = Player_Draw;
}

void func_80859CFC(PlayState* arg0, Player* arg1, ? arg2) {
    func_80841358(arg0, arg1, 0);
    func_8082DB90(arg0, arg1, &D_0400D660);
}

void func_80859D44(PlayState* arg0, s32 arg1, ? arg2) {
    LinkAnimation_Update(arg0, arg1 + 0x240);
}

void func_80859D70(PlayState* arg0, Player* arg1, ? arg2) {
    Vec3f sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    struct _struct_D_8085E368_0xC* temp_s0;

    func_808591BC(arg0, arg1, D_8085E354[arg1->transformation]);
    if (arg1->rightHandType != 0xFF) {
        arg1->rightHandType = 0xFF;
        return;
    }
    temp_s0 = &D_8085E368[arg1->transformation];
    sp34 = randPlusMinusPoint5Scaled((f32) temp_s0->unk_6) + (f32) temp_s0->unk_0;
    sp38 = randPlusMinusPoint5Scaled((f32) temp_s0->unk_8) + (f32) temp_s0->unk_2;
    sp3C = randPlusMinusPoint5Scaled((f32) temp_s0->unk_A) + (f32) temp_s0->unk_4;
    SkinMatrix_Vec3fMtxFMultXYZ(&arg1->shieldMf, (Vec3f* ) &sp34, &sp40);
    EffectSsKirakira_SpawnDispersed(arg0, &sp40, &gZeroVec3f, &gZeroVec3f, &D_8085E3A4, &D_8085E3A8, (s16) 0x258, -0xA);
}

void func_80859EBC(PlayState* arg0, Player* arg1, s32 arg2) {
    if (LinkAnimation_Update(arg0, arg1 + 0x240) != 0) {
        func_8085AACC(arg0, arg1, arg2, (PlayState* ) arg1);
        return;
    }
    if (arg1->unk_AE8 == 0) {
        Item_Give(arg0, 0x4EU);
        func_80841358(arg0, arg1, 0);
        return;
    }
    func_808484CC(arg1, (struct_8082E224_arg1* ) 0x4EU);
}

void func_80859F4C(PlayState* arg0, Player* arg1, ? arg2) {
    if (LinkAnimation_Update(arg0, arg1 + 0x240) != 0) {
        func_8083FCF0(arg0, arg1, 0.0f, 99.0f, arg1->skelAnime.endFrame - 8.0f);
    }
    if (arg1->itemActionParam != 5) {
        func_80841358(arg0, arg1, 1);
    }
}

void func_80859FCC(s32 arg0, void* arg1, ? arg2) {
    if (arg1->unk_14B != 3) {
        gSaveContext.save.playerForm = 3;
    }
}

void func_80859FF4(PlayState* arg0, void* arg1, ? arg2) {
    LinkAnimation_Update(arg0, arg1 + 0x240);
    if (arg1->unk_14B != gSaveContext.save.playerForm) {
        arg1->unk_138 = func_8012301C;
        arg1->unk_13C = 0;
    }
}

void func_8085A04C(PlayState* arg0, void* arg1, void* arg2) {
    f32 sp1C;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv1;
    u16 temp_v0;

    temp_fv1 = (f32) arg2->unk_18;
    temp_fa1 = (f32) arg2->unk_20;
    temp_fa0 = (f32) arg2->unk_1C;
    sp1C = (f32) arg2->unk_14 - temp_fa1;
    temp_v0 = arg2->unk_4;
    temp_fv0 = (f32) (temp_v0 - arg0->csCtx.frames) / (f32) (temp_v0 - arg2->unk_2);
    arg1->unk_24 = (f32) ((((f32) arg2->unk_C - temp_fv1) * temp_fv0) + temp_fv1);
    arg1->unk_28 = (f32) ((((f32) arg2->unk_10 - temp_fa0) * temp_fv0) + temp_fa0);
    arg1->unk_2C = (f32) ((sp1C * temp_fv0) + temp_fa1);
    LinkAnimation_Update(arg0, arg1 + 0x240);
}

void func_8085A120(s32 arg0, void* arg1, ? arg2) {
    if (arg1->unk_14B != 0) {
        gSaveContext.save.playerForm = 0;
    }
}

void func_8085A144(PlayState* arg0, void* arg1, ? arg2) {
    LinkAnimation_Update(arg0, arg1 + 0x240);
    if (arg1->unk_14B != gSaveContext.save.playerForm) {
        arg1->unk_138 = func_8012301C;
        arg1->unk_13C = 0;
    }
}

void func_8085A19C(PlayState* arg0, Player* arg1, ? arg2) {
    func_8082DB18(arg0, arg1, &D_0400D2D0);
    arg1->unk_AAA = -0x8000;
}

void func_8085A1D4(PlayState* arg0, void* arg1, ? arg2) {
    LinkAnimation_Update(arg0, arg1 + 0x240);
    arg1->unk_74 = 0.0f;
    Math_StepToF(arg1 + 0x68, -arg1->unk_78, -((f32) gGameInfo->data[0x44] / 100.0f));
}

void func_8085A24C(PlayState* arg0, Player* arg1, ? arg2) {
    func_8082DB90(arg0, arg1, D_8085D17C[arg1->transformation]);
    arg1->heldItemActionParam = 0x14;
    Player_SetModels(arg1, Player_ActionToModelGroup(arg1, (enum PlayerActionParam) arg1->heldItemActionParam));
}

void func_8085A2AC(PlayState* arg0, Player* arg1, ? arg2) {
    if ((LinkAnimation_Update(arg0, arg1 + 0x240) != 0) && (arg1->skelAnime.animation == D_8085D17C[arg1->transformation])) {
        func_808525C4(arg0, arg1, arg1);
        return;
    }
    if (arg1->unk_AE8 != 0) {
        func_8085255C(arg0, arg1, arg1);
    }
}

void func_8085A330(PlayState* arg0, Player* arg1, ? arg2) {
    func_8082DBC0(arg0, arg1, D_8085D17C[arg1->transformation]);
}

void func_8085A364(PlayState* arg0, Player* arg1) {
    void* temp_v0;

    func_80859BA8(arg0, arg1);
    if (LinkAnimation_Update(arg0, &arg1->skelAnime) != 0) {
        func_8082EB18(arg0, arg1, &D_0400D100);
    }
    temp_v0 = arg1->skelAnime.animation;
    if (&D_0400D0B8 == temp_v0) {
        func_8082E224(arg1, D_8085DA48);
        return;
    }
    if (&D_0400D028 == temp_v0) {
        func_800B8F98(&arg1->actor, 0x1C0U);
        return;
    }
    func_80858FE8(arg1);
}

void func_8085A40C(PlayState* arg0, Player* arg1, s32 arg2) {
    void* temp_v0;

    if (LinkAnimation_Update(arg0, arg1 + 0x240) != 0) {
        func_80859CA0(arg0, arg1, arg2, arg1);
        return;
    }
    temp_v0 = arg1->skelAnime.animation;
    if (&D_0400CF58 == temp_v0) {
        func_8082E224(arg1, &D_8085DA88);
        return;
    }
    if (&D_0400D090 == temp_v0) {
        func_8082E224(arg1, &D_8085DA8C);
    }
}

void func_8085A4A4(PlayState* arg0, Player* arg1, ? arg2) {
    if ((LinkAnimation_Update(arg0, arg1 + 0x240) != 0) && (arg1->unk_AE8 == 0) && (arg1->actor.bgCheckFlags & 1)) {
        func_8082DB18(arg0, arg1, &D_0400DAD8);
        arg1->unk_AE8 = 1;
    }
    if (arg1->unk_AE8 != 0) {
        func_80832F24(arg1);
    }
}

void func_8085A530(PlayState* arg0, s32 arg1, ? arg2) {
    f32 sp28;
    f32 var_fv0;

    if (arg0->sceneNum == 0x70) {
        var_fv0 = (f32) gGameInfo->data[0x398];
    } else {
        var_fv0 = 0.0f;
    }
    sp28 = var_fv0;
    LinkAnimation_Change(arg0, arg1 + 0x240, &D_0400DCA8, 1.0f, var_fv0, (f32) Animation_GetLastFrame(&D_0400DCA8), (u8) 2, -8.0f);
}

void func_8085A5DC(PlayState* arg0, void* arg1, ? arg2) {
    SkelAnime* sp28;
    SkelAnime* temp_a1;
    s16 temp_v0;

    temp_a1 = arg1 + 0x240;
    sp28 = temp_a1;
    if (LinkAnimation_Update(arg0, temp_a1) != 0) {
        temp_v0 = arg1->unk_AE8;
        arg1->unk_AE8 = (s16) (temp_v0 + 1);
        if (((temp_v0 < 0x15) ^ 1) != 0) {
            LinkAnimation_Change(arg0, temp_a1, &D_0400E410, 1.0f, 0.0f, 0.0f, (u8) 0, -16.0f);
        }
    }
}

void func_8085A66C(PlayState* arg0, Player* arg1, ? arg2) {
    if (func_801242B4(arg1) != 0) {
        func_8085929C(arg0, arg1, 0);
        return;
    }
    func_80858E40(arg0, arg1, &D_0400D638);
}

void func_8085A6C0(PlayState* arg0, Player* arg1, LinkAnimationHeader* arg2) {
    if (func_801242B4(arg1) != 0) {
        func_80859300(arg0, (PlayState* ) arg1, 0);
        return;
    }
    func_80858FBC(arg0, arg1, arg2);
}

void func_8085A710(PlayState* arg0, Player* arg1) {
    func_80858FBC(arg0, arg1);
    if (func_8083D23C(arg1, arg0) != 0) {
        arg0->csCtx.state = 3;
        ActorCutscene_Stop(ActorCutscene_GetCurrentIndex());
    }
}

void func_8085A768(PlayState* arg0, Player* arg1, ? arg2) {
    func_80838830(arg1, 0x215);
    func_80858E40(arg0, arg1, &D_0400DCA8);
    arg1->stateFlags2 &= 0xFEFFFFFF;
}

void func_8085A7C0(PlayState* arg0, Actor* arg1, ? arg2) {
    SkelAnime* sp2C;                                /* compiler-managed */
    MessageContext* temp_a0;
    SkelAnime* temp_a2;
    s16 temp_v0;

    temp_a2 = arg1 + 0x240;
    sp2C = temp_a2;
    if (LinkAnimation_Update(arg0, temp_a2) != 0) {
        temp_v0 = arg1->unk_AE8;
        temp_a0 = &arg0->msgCtx;
        if (temp_v0 == 0) {
            sp2C = temp_a0;
            if ((Message_GetState(temp_a0) == 2) || (Message_GetState(temp_a0) == 0)) {
                arg1->unk_B2A = 0;
                arg1->unk_AE8 = -1;
                return;
            }
            arg1->unk_B2A = 0x6F;
            return;
        }
        if (temp_v0 < 0) {
            if (Actor_HasParent(arg1, arg0) != 0) {
                arg1->parent = NULL;
                arg1->unk_AE8 = 1;
                return;
            }
            Actor_PickUp(arg1, arg0, 0xAB, 9999.9f, 9999.9f);
        }
    } else if (LinkAnimation_OnFrame(temp_a2, 4.0f) != 0) {
        gSaveContext.save.weekEventReg[0x32] |= 0x80;
    }
}

void func_8085A8C4(void* arg0, void* arg1, ? arg2) {
    if ((arg1->unk_14B != 4) && (arg0->unk_186E3 == 5)) {
        gGameInfo->data[0x220] = 0x2D;
        gGameInfo->data[0x221] = 0xFF;
        gGameInfo->data[0x222] = 0xFF;
        gGameInfo->data[0x223] = 0xFF;
        gGameInfo->data[0x224] = 0;
        play_sound(0x4834U);
    }
}

void func_8085A940(PlayState* arg0, void* arg1, ? arg2) {
    GameInfo* temp_v0;
    GameInfo* temp_v0_2;
    GameInfo* temp_v0_3;
    s16 temp_v1;

    temp_v0 = gGameInfo;
    temp_v1 = temp_v0->data[0x220];
    if (temp_v1 > 0) {
        temp_v0->data[0x224] += temp_v1;
        temp_v0_2 = gGameInfo;
        if (temp_v0_2->data[0x224] >= 0x100) {
            temp_v0_2->data[0x220] = -0x40;
            gGameInfo->data[0x224] = 0xFF;
            gSaveContext.save.playerForm = 4;
            arg1->unk_138 = func_8012301C;
            arg1->unk_13C = 0;
            arg1->unk_AE7 = 0;
        }
    } else if (temp_v1 < 0) {
        temp_v0->data[0x224] += temp_v1;
        temp_v0_3 = gGameInfo;
        if (temp_v0_3->data[0x224] < 0) {
            temp_v0_3->data[0x220] = 0;
            gGameInfo->data[0x224] = 0;
        }
    } else {
        LinkAnimation_Update(arg0, arg1 + 0x240);
    }
}

void func_8085AA10(PlayState* arg0, s32 arg1, ? arg2) {
    if ((LinkAnimation_Update(arg0, arg1 + 0x240) != 0) && (ActorCutscene_GetCurrentIndex() == 0x7D)) {
        ActorCutscene_Stop(0x7D);
    }
}

void func_8085AA60(? arg2) {
    func_80848640();
}

void func_8085AA84(PlayState* arg0, void* arg1, ? arg2) {
    if (LinkAnimation_Update(arg0, arg1 + 0x240) != 0) {
        arg1->unk_A70 = (s32) (arg1->unk_A70 | 0x01000000);
    }
}

void func_8085AACC(PlayState* arg0, Player* arg1, s32 arg2) {
    if (func_801242B4(arg1) != 0) {
        func_808353DC(arg0, arg1);
        func_8082DC64(arg0, arg1);
    } else {
        func_80839ED0(arg1, arg0);
        if (func_808391D8(arg1, arg0) == 0) {
            func_8083D23C(arg1, arg0);
        }
    }
    arg1->csMode = 0;
    arg1->unk_AA5 = 0;
}

void func_8085AB58(Player* arg0, CsCmdActorAction* arg1) {
    s16 temp_v0;

    arg0->actor.world.pos.x = (f32) arg1->startPos.x;
    arg0->actor.world.pos.y = (f32) arg1->startPos.y;
    arg0->actor.world.pos.z = (f32) arg1->startPos.z;
    temp_v0 = arg1->rot.y;
    arg0->actor.shape.rot.y = temp_v0;
    arg0->currentYaw = temp_v0;
}

void func_8085ABA8(Player* arg0, CsCmdActorAction* arg1) {
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv1;
    s16 temp_v0;
    s16 var_v1;

    temp_fv1 = (f32) (arg1->startPos.x - (s32) arg0->actor.world.pos.x);
    temp_fa0 = (f32) (arg1->startPos.y - (s32) arg0->actor.world.pos.y);
    temp_v0 = arg1->rot.y - arg0->actor.shape.rot.y;
    temp_fa1 = (f32) (arg1->startPos.z - (s32) arg0->actor.world.pos.z);
    temp_fv0 = sqrtf((temp_fv1 * temp_fv1) + (temp_fa0 * temp_fa0) + (temp_fa1 * temp_fa1));
    if (arg0->linearVelocity == 0.0f) {
        if (!(temp_fv0 > 50.0f)) {
            var_v1 = temp_v0;
            if (temp_v0 < 0) {
                var_v1 = -temp_v0;
            }
            if (var_v1 >= 0x4001) {
                goto block_5;
            }
        } else {
block_5:
            func_8085AB58((bitwise Player* ) temp_fa0, (bitwise CsCmdActorAction* ) temp_fa1);
        }
    }
    arg0->skelAnime.moveFlags = 0;
    func_8082E784(arg0);
}

void func_8085AC9C(PlayState* arg1, Player* arg3) {
    s8 temp_v0;
    void* temp_v0_2;

    temp_v0 = arg3->unk_0;
    if (temp_v0 > 0) {
        D_8085D990[temp_v0](arg3->actor.flags);
    } else if (temp_v0 < 0) {
        arg3->actor.flags();
    }
    if ((D_80862B6C & 4) && !(arg1->unk_275 & 4)) {
        temp_v0_2 = arg1->unk_264;
        temp_v0_2->unk_2 = (s16) (s32) ((f32) temp_v0_2->unk_2 / arg1->unk_A68->unk_8);
        D_80862B6C = 0;
    }
}

void func_8085AD5C(PlayState* arg0, Player* arg1, s32 arg2) {
    if ((arg2 != 1) && (arg2 != 7) && (arg2 != 0x14) && (arg2 != 6)) {
        func_8082DCA0(arg0, arg1);
    }
}

void func_8085ADA0(PlayState* arg0, Player* arg1, ? arg2) {
    CsCmdActorAction* sp3C;
    s32 sp30;
    s32 sp2C;
    s32 var_a0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 var_v0;
    s8 var_v1_2;
    s8 var_v1_3;
    u16 temp_a0;
    u16 temp_t3;
    u16 temp_v0_4;
    u8 temp_v0;
    u8 var_v1;

    if (arg1->actor.id == 0x159) {
        sp3C = arg0->csCtx.actorActions[Cutscene_GetActorActionIndex(arg0, 0x1FAU)];
    } else {
        sp3C = arg0->csCtx.playerAction;
    }
    var_a0 = 0;
    temp_v0 = arg0->csCtx.state;
    if ((temp_v0 == 0) || (temp_v0 == 3) || (temp_v0 == 4)) {
        temp_v0_2 = *(&D_8085D384 + arg1->unk_396);
        if ((temp_v0_2 == 0x44) && (arg0->sceneNum == 0x19)) {
            arg1->unk_AA5 = 5;
            if (func_80838A90(arg1, arg0) != 0) {
                arg1->csMode = 0;
            }
        } else {
            var_a0 = 1;
            if (temp_v0_2 != 0x10) {
                arg1->csMode = 6;
                func_800B7298(arg0, NULL, 6U);
                arg1->unk_396 = 0;
                func_8082DABC(arg1);
                return;
            }
            goto block_12;
        }
    } else {
block_12:
        if ((var_a0 == 0) && (sp3C == NULL)) {
            arg1->actor.flags &= ~0x40;
            return;
        }
        var_v1 = arg1->unk_396;
        if (var_a0 == 0) {
            temp_a0 = sp3C->action;
            if (temp_a0 != var_v1) {
                var_v0 = *(&D_8085D384 + temp_a0);
                if ((var_v0 >= 0) && (D_801F4DE0 == 0)) {
                    if ((var_v0 == 2) || (var_v0 == 3)) {
                        sp30 = (s32) var_v0;
                        func_8085ABA8(arg1, sp3C);
                    } else {
                        sp30 = (s32) var_v0;
                        func_8085AB58(arg1, sp3C);
                    }
                    var_v0 = (s8) sp30;
                }
                if (var_v0 == 0x6C) {
                    arg1->stateFlags3 |= 0x20000000;
                } else if (var_v0 == 0x6E) {
                    arg1->stateFlags3 &= 0xDFFFFFFF;
                }
                sp30 = (s32) var_v0;
                D_80862B6C = (s32) arg1->skelAnime.moveFlags;
                func_8082E794(arg1);
                if (var_v0 < 0) {
                    sp2C = (s32) -var_v0;
                } else {
                    sp2C = (s32) var_v0;
                }
                sp30 = (s32) var_v0;
                func_8085AD5C(arg0, arg1, sp2C);
                if (var_v0 < 0) {
                    var_v1_2 = -var_v0;
                } else {
                    var_v1_2 = var_v0;
                }
                func_8085AC9C(arg0, arg1, sp3C, &D_8085DA94[var_v1_2]);
                arg1->unk_AE8 = 0;
                arg1->unk_AE7 = 0;
                temp_t3 = sp3C->action;
                arg1->unk_396 = (u8) temp_t3;
                var_v1 = temp_t3 & 0xFF;
            }
        }
        temp_v0_3 = *(&D_8085D384 + var_v1);
        if (temp_v0_3 < 0) {
            var_v1_3 = -temp_v0_3;
        } else {
            var_v1_3 = temp_v0_3;
        }
        func_8085AC9C(arg0, arg1, sp3C, (struct _struct_D_8085DA94_0x8* ) &D_8085DEF4[var_v1_3]);
        temp_v0_4 = (u16) sp3C->rot.x;
        if (temp_v0_4 != 0) {
            Math_SmoothStepToS(&arg1->actor.focus.rot.x, (s16) temp_v0_4, 4, 0x2710, (s16) 0);
            func_80832754(arg1, 0);
        }
    }
}

void func_8085B08C(Player* arg0, PlayState* arg1) {
    u8 temp_a2;

    if (arg0->unk_395 != arg0->csMode) {
        D_80862B6C = (s32) arg0->skelAnime.moveFlags;
        func_8082E794(arg0);
        temp_a2 = arg0->csMode;
        arg0->unk_395 = temp_a2;
        func_8085AD5C(arg1, arg0, (s32) temp_a2);
        func_8085AC9C(arg1, arg0, NULL, &D_8085DA94[arg0->csMode]);
    }
    func_8085AC9C(arg1, arg0, NULL, (struct _struct_D_8085DA94_0x8* ) &D_8085DEF4[arg0->csMode]);
}

s32 func_8085B134(PlayState* play) {
    Actor* sp1C;
    Actor* temp_a1;

    temp_a1 = play->actorCtx.actorLists[2].first;
    sp1C = temp_a1;
    func_8082DE50(play, (Player* ) temp_a1);
    func_80831990(play, (Player* ) temp_a1, ITEM_FISHING_POLE);
    return 1;
}

void func_8085B170(PlayState* play, Player* player) {
    func_8082DE50(play, player);
    func_80831494(play, player, func_80853CC0, 0);
    func_8082DB18(play, player, &D_0400DE28);
    player->stateFlags2 |= 0x80;
    func_8082DAD4(player);
    func_8082DF8C(player, 0x680DU);
}

s32 func_8085B1F0(PlayState* play, Player* player) {
    if ((Player_InBlockingCsMode(play, player) == 0) && (player->invincibilityTimer >= 0) && (func_801240DC(player) == 0) && !(player->stateFlags1 & 0xB06080) && !(player->stateFlags2 & 0x80) && !(player->stateFlags3 & 0x80)) {
        func_8085B170(play, player);
        return 1;
    }
    return 0;
}

s32 func_8085B28C(PlayState* play, Player* player, s32 mode) {
    Actor* var_s0;
    s16 temp_v0;

    var_s0 = play->actorCtx.actorLists[2].first;
    if (player != NULL) {
        if (mode == 0) {
            return (s32) player->unk_748 == (s32) func_8084E034;
        }
        temp_v0 = player->actor.id;
        if ((temp_v0 == 0x159) && (mode < 0)) {
            func_8083B0E4((PlayState* ) player, (Player* ) player->actor.home.rot.y);
            goto block_11;
        }
        if (temp_v0 == 0x159) {
            var_s0 = &player->actor;
        }
        goto block_8;
    }
block_8:
    if ((var_s0->id == 0x159) || (Player_InBlockingCsMode(play, (Player* ) var_s0) == 0)) {
        func_8082DE50(play, (Player* ) var_s0);
        func_80831494(play, (Player* ) var_s0, func_8085B08C, 0);
        var_s0->unk_398 = player;
        var_s0->unk_394 = (s8) mode;
        func_8082DAD4((Player* ) var_s0);
        return 1;
    }
block_11:
    return 0;
}

void func_8085B384(Player* player, PlayState* play, Player* arg2) {
    func_80831494(play, player, func_80849FE0, 1);
    func_8082E438(play, player, func_8082ED20(player));
    player->currentYaw = player->actor.shape.rot.y;
}

s32 func_8085B3E0(PlayState* play, s32 damage) {
    Actor* sp1C;
    Actor* temp_a3;

    temp_a3 = play->actorCtx.actorLists[2].first;
    if ((temp_a3->unk_A70 & 0x80) || (sp1C = temp_a3, (Player_InBlockingCsMode(play, (Player* ) temp_a3) == 0))) {
        sp1C = temp_a3;
        if (func_808339D4(play, temp_a3, (s8) damage, temp_a3) == 0) {
            temp_a3->unk_A70 = (s32) (temp_a3->unk_A70 & ~0x80);
            return 1;
        }
    }
    return 0;
}

void func_8085B460(PlayState* play, Actor* actor, Player* player) {
    s32 sp24;
    Actor* temp_s0;
    Actor* temp_v1;
    LinkAnimationHeader* var_a2;
    u32 temp_v0;
    void* temp_v0_2;

    temp_s0 = play->actorCtx.actorLists[2].first;
    func_808323C0(temp_s0, 0x7C, actor);
    if ((temp_s0->unk_A88 != NULL) || (actor == temp_s0->unk_A80) || ((actor->flags & 0x40001) == 0x40001)) {
        actor->flags |= 0x100;
    }
    temp_s0->unk_A88 = actor;
    temp_s0->unk_A87 = 0;
    temp_s0->unk_730 = actor;
    if (actor->textId == 0xFFFF) {
        func_800B7298(play, actor, 1U);
        actor->flags |= 0x100;
        func_8082DE14(play, (Player* ) temp_s0);
    } else {
        temp_v0 = temp_s0->flags;
        if (temp_v0 & 0x100) {
            temp_s0->textId = 0;
        } else {
            temp_s0->flags = temp_v0 | 0x100;
            temp_s0->textId = actor->textId;
        }
        if (temp_s0->unk_A6C & 0x800000) {
            sp24 = (s32) temp_s0->unk_AE8;
            func_8082DE14(play, (Player* ) temp_s0);
            func_80837B60(play, (Player* ) temp_s0);
            temp_s0->unk_AE8 = (s16) sp24;
        } else {
            if (func_801242B4((Player* ) temp_s0) != 0) {
                func_80832558(play, temp_s0, func_80837B60, actor);
                func_8082E634(play, (Player* ) temp_s0, &D_0400E000);
            } else if ((actor->category != 4) || (temp_s0->unk_147 == 2)) {
                func_80837B60(play, (Player* ) temp_s0);
                if (func_80123420((Player* ) temp_s0) == 0) {
                    if ((actor != temp_s0->unk_A80) && (actor->xzDistToPlayer < (f32) (actor->colChkInfo.cylRadius + 0x28))) {
                        func_8082DB90(play, (Player* ) temp_s0, &D_0400DB10);
                    } else {
                        func_8082DB3C(play, (Player* ) temp_s0, func_8082ED20((Player* ) temp_s0));
                    }
                }
            } else {
                func_80832558(play, temp_s0, func_80837B60, actor);
                var_a2 = &D_0400DEA0;
                if (actor->xzDistToPlayer < (f32) (actor->colChkInfo.cylRadius + 0x28)) {
                    var_a2 = &D_0400DB10;
                }
                func_8082DB90(play, (Player* ) temp_s0, var_a2);
            }
            if (&D_0400DB10 == temp_s0->unk_248) {
                func_8082E920(play, (Player* ) temp_s0, 0x19);
            }
            func_8082DAD4((Player* ) temp_s0);
        }
        temp_s0->unk_A6C = (s32) (temp_s0->unk_A6C | 0x20000040);
    }
    temp_v1 = temp_s0->unk_A88;
    temp_v0_2 = temp_s0->unk_A80;
    if ((temp_v1 == temp_v0_2) && ((temp_v1->textId & 0xFF00) != 0x200)) {
        temp_v0_2->unk_4 = (s32) (temp_v0_2->unk_4 | 0x100);
    }
}

void func_8085B74C(PlayState* play) {
    Actor* sp1C;
    Actor* temp_a1;
    f32 temp_fv1;
    f32 var_fv0;
    s16 var_v0;

    temp_a1 = play->actorCtx.actorLists[2].first;
    var_fv0 = temp_a1->unk_AD0;
    if (var_fv0 < 0.0f) {
        var_fv0 = -var_fv0;
        temp_a1->world.rot.y += 0x8000;
    }
    temp_fv1 = (f32) gGameInfo->data[0x2D] / 100.0f;
    if (temp_fv1 < var_fv0) {
        gSaveContext.entranceSpeed = temp_fv1;
    } else {
        gSaveContext.entranceSpeed = var_fv0;
    }
    if (D_80862B10 != 0) {
        var_v0 = D_80862B16;
    } else {
        var_v0 = temp_a1->world.rot.y;
    }
    sp1C = temp_a1;
    func_80835324((PlayState* ) temp_a1, (Player* )0x43C80000, (bitwise f32) var_v0);
    temp_a1->unk_A6C = (s32) (temp_a1->unk_A6C | 0x20000001);
}

void func_8085B820(PlayState* play, s16 arg1, Actor* actor) {
    Actor* temp_a0;

    temp_a0 = play->actorCtx.actorLists[2].first;
    temp_a0->focus.rot.y = arg1;
    func_80836D8C((Player* ) temp_a0, arg1, play);
}

enum PlayerActionParam func_8085B854(PlayState* play, Player* player, s32 itemId, s32 arg3) {
    enum PlayerActionParam sp24;
    enum PlayerActionParam temp_v0;
    enum PlayerActionParam var_v1;

    temp_v0 = func_8082F524(player, itemId);
    var_v1 = temp_v0;
    if ((temp_v0 >= 0x3A) && (temp_v0 < 0x52) && (temp_v0 == (player->currentMask + 0x39))) {
        var_v1 = PLAYER_AP_NONE;
    }
    if ((var_v1 <= 0) || (var_v1 >= 0x53)) {
        return -1;
    }
    player->heldItemActionParam = 0;
    player->unk_748 = NULL;
    sp24 = var_v1;
    func_80831760(play, player, func_80853A5C, 0);
    player->unk_A86 = 0x7C;
    player->heldItemActionParam = (s8) var_v1;
    func_8082DB18(play, player, &D_0400DCA8);
    player->stateFlags1 |= 0x20000040;
    player->unk_B2A = 0;
    player->exchangeItemId = (s8) sp24;
    return sp24;
}

s32 func_8085B930(PlayState* play, void* talkAnim, s32 arg2) {
    Actor* sp34;
    LinkAnimationHeader* sp2C;
    Actor* temp_t7;
    void* var_a2;

    temp_t7 = play->actorCtx.actorLists[2].first;
    sp34 = temp_t7;
    if (!(temp_t7->flags & 0x100)) {
        return 0;
    }
    var_a2 = talkAnim;
    if (talkAnim == NULL) {
        var_a2 = func_8082ED20((Player* ) sp34);
    }
    sp2C = (LinkAnimationHeader* ) var_a2;
    LinkAnimation_Change(play, sp34 + 0x240, (LinkAnimationHeader* ) var_a2, 0.6666667f, 0.0f, (f32) Animation_GetLastFrame(talkAnim), (u8) arg2, -6.0f);
    return 1;
}
