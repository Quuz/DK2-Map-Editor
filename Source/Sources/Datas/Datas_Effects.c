
#include "..\Includes\Editor.h"
#include "..\Includes\Texts.h"

/*** Tables *************************************************************/

ELEMENT			PathAreas[]={	{0x00000001,0x00,1501,0,0,0,0,NULL,NULL},
					{0x00000000,0x00,0000,0,0,0,0,NULL,NULL}};

ELEMENT			Effects[]={	{0x00000000,0x00,0000,0,0,0,0,szEffect000,NULL},
					{0x00000001,0x00,0000,0,0,0,0,szEffect001,NULL},
					{0x00000002,0x00,0000,0,0,0,0,szEffect002,NULL},
					{0x00000003,0x00,0000,0,0,0,0,szEffect003,NULL},
					{0x00000004,0x00,0000,0,0,0,0,szEffect004,NULL},
					{0x00000005,0x00,0000,0,0,0,0,szEffect005,NULL},
					{0x00000006,0x00,0000,0,0,0,0,szEffect006,NULL},
					{0x00000007,0x00,0000,0,0,0,0,szEffect007,NULL},
					{0x00000008,0x00,0000,0,0,0,0,szEffect008,NULL},
					{0x00000009,0x00,0000,0,0,0,0,szEffect009,NULL},
					{0x0000000A,0x00,0000,0,0,0,0,szEffect00A,NULL},
					{0x0000000B,0x00,0000,0,0,0,0,szEffect00B,NULL},
					{0x0000000C,0x00,0000,0,0,0,0,szEffect00C,NULL},
					{0x0000000D,0x00,0000,0,0,0,0,szEffect00D,NULL},
					{0x0000000E,0x00,0000,0,0,0,0,szEffect00E,NULL},
					{0x0000000F,0x00,0000,0,0,0,0,szEffect00F,NULL},
					{0x00000010,0x00,0000,0,0,0,0,szEffect010,NULL},
					{0x00000011,0x00,0000,0,0,0,0,szEffect011,NULL},
					{0x00000012,0x00,0000,0,0,0,0,szEffect012,NULL},
					{0x00000013,0x00,0000,0,0,0,0,szEffect013,NULL},
					{0x00000014,0x00,0000,0,0,0,0,szEffect014,NULL},
					{0x00000015,0x00,0000,0,0,0,0,szEffect015,NULL},
					{0x00000016,0x00,0000,0,0,0,0,szEffect016,NULL},
					{0x00000017,0x00,0000,0,0,0,0,szEffect017,NULL},
					{0x00000018,0x00,0000,0,0,0,0,szEffect018,NULL},
					{0x00000019,0x00,0000,0,0,0,0,szEffect019,NULL},
					{0x0000001A,0x00,0000,0,0,0,0,szEffect01A,NULL},
					{0x0000001B,0x00,0000,0,0,0,0,szEffect01B,NULL},
					{0x0000001C,0x00,0000,0,0,0,0,szEffect01C,NULL},
					{0x0000001D,0x00,0000,0,0,0,0,szEffect01D,NULL},
					{0x0000001E,0x00,0000,0,0,0,0,szEffect01E,NULL},
					{0x0000001F,0x00,0000,0,0,0,0,szEffect01F,NULL},
					{0x00000020,0x00,0000,0,0,0,0,szEffect020,NULL},
					{0x00000021,0x00,0000,0,0,0,0,szEffect021,NULL},
					{0x00000022,0x00,0000,0,0,0,0,szEffect022,NULL},
					{0x00000023,0x00,0000,0,0,0,0,szEffect023,NULL},
					{0x00000024,0x00,0000,0,0,0,0,szEffect024,NULL},
					{0x00000025,0x00,0000,0,0,0,0,szEffect025,NULL},
					{0x00000026,0x00,0000,0,0,0,0,szEffect026,NULL},
					{0x00000027,0x00,0000,0,0,0,0,szEffect027,NULL},
					{0x00000028,0x00,0000,0,0,0,0,szEffect028,NULL},
					{0x00000029,0x00,0000,0,0,0,0,szEffect029,NULL},
					{0x0000002A,0x00,0000,0,0,0,0,szEffect02A,NULL},
					{0x0000002B,0x00,0000,0,0,0,0,szEffect02B,NULL},
					{0x0000002C,0x00,0000,0,0,0,0,szEffect02C,NULL},
					{0x0000002D,0x00,0000,0,0,0,0,szEffect02D,NULL},
					{0x0000002E,0x00,0000,0,0,0,0,szEffect02E,NULL},
					{0x0000002F,0x00,0000,0,0,0,0,szEffect02F,NULL},
					{0x00000030,0x00,0000,0,0,0,0,szEffect030,NULL},
					{0x00000031,0x00,0000,0,0,0,0,szEffect031,NULL},
					{0x00000032,0x00,0000,0,0,0,0,szEffect032,NULL},
					{0x00000033,0x00,0000,0,0,0,0,szEffect033,NULL},
					{0x00000034,0x00,0000,0,0,0,0,szEffect034,NULL},
					{0x00000035,0x00,0000,0,0,0,0,szEffect035,NULL},
					{0x00000036,0x00,0000,0,0,0,0,szEffect036,NULL},
					{0x00000037,0x00,0000,0,0,0,0,szEffect037,NULL},
					{0x00000038,0x00,0000,0,0,0,0,szEffect038,NULL},
					{0x00000039,0x00,0000,0,0,0,0,szEffect039,NULL},
					{0x0000003A,0x00,0000,0,0,0,0,szEffect03A,NULL},
					{0x0000003B,0x00,0000,0,0,0,0,szEffect03B,NULL},
					{0x0000003C,0x00,0000,0,0,0,0,szEffect03C,NULL},
					{0x0000003D,0x00,0000,0,0,0,0,szEffect03D,NULL},
					{0x0000003E,0x00,0000,0,0,0,0,szEffect03E,NULL},
					{0x0000003F,0x00,0000,0,0,0,0,szEffect03F,NULL},
					{0x00000040,0x00,0000,0,0,0,0,szEffect040,NULL},
					{0x00000041,0x00,0000,0,0,0,0,szEffect041,NULL},
					{0x00000042,0x00,0000,0,0,0,0,szEffect042,NULL},
					{0x00000043,0x00,0000,0,0,0,0,szEffect043,NULL},
					{0x00000044,0x00,0000,0,0,0,0,szEffect044,NULL},
					{0x00000045,0x00,0000,0,0,0,0,szEffect045,NULL},
					{0x00000046,0x00,0000,0,0,0,0,szEffect046,NULL},
					{0x00000047,0x00,0000,0,0,0,0,szEffect047,NULL},
					{0x00000048,0x00,0000,0,0,0,0,szEffect048,NULL},
					{0x00000049,0x00,0000,0,0,0,0,szEffect049,NULL},
					{0x0000004A,0x00,0000,0,0,0,0,szEffect04A,NULL},
					{0x0000004B,0x00,0000,0,0,0,0,szEffect04B,NULL},
					{0x0000004C,0x00,0000,0,0,0,0,szEffect04C,NULL},
					{0x0000004D,0x00,0000,0,0,0,0,szEffect04D,NULL},
					{0x0000004E,0x00,0000,0,0,0,0,szEffect04E,NULL},
					{0x0000004F,0x00,0000,0,0,0,0,szEffect04F,NULL},
					{0x00000050,0x00,0000,0,0,0,0,szEffect050,NULL},
					{0x00000051,0x00,0000,0,0,0,0,szEffect051,NULL},
					{0x00000052,0x00,0000,0,0,0,0,szEffect052,NULL},
					{0x00000053,0x00,0000,0,0,0,0,szEffect053,NULL},
					{0x00000054,0x00,0000,0,0,0,0,szEffect054,NULL},
					{0x00000055,0x00,0000,0,0,0,0,szEffect055,NULL},
					{0x00000056,0x00,0000,0,0,0,0,szEffect056,NULL},
					{0x00000057,0x00,0000,0,0,0,0,szEffect057,NULL},
					{0x00000058,0x00,0000,0,0,0,0,szEffect058,NULL},
					{0x00000059,0x00,0000,0,0,0,0,szEffect059,NULL},
					{0x0000005A,0x00,0000,0,0,0,0,szEffect05A,NULL},
					{0x0000005B,0x00,0000,0,0,0,0,szEffect05B,NULL},
					{0x0000005C,0x00,0000,0,0,0,0,szEffect05C,NULL},
					{0x0000005D,0x00,0000,0,0,0,0,szEffect05D,NULL},
					{0x0000005E,0x00,0000,0,0,0,0,szEffect05E,NULL},
					{0x0000005F,0x00,0000,0,0,0,0,szEffect05F,NULL},
					{0x00000060,0x00,0000,0,0,0,0,szEffect060,NULL},
					{0x00000061,0x00,0000,0,0,0,0,szEffect061,NULL},
					{0x00000062,0x00,0000,0,0,0,0,szEffect062,NULL},
					{0x00000063,0x00,0000,0,0,0,0,szEffect063,NULL},
					{0x00000064,0x00,0000,0,0,0,0,szEffect064,NULL},
					{0x00000065,0x00,0000,0,0,0,0,szEffect065,NULL},
					{0x00000066,0x00,0000,0,0,0,0,szEffect066,NULL},
					{0x00000067,0x00,0000,0,0,0,0,szEffect067,NULL},
					{0x00000068,0x00,0000,0,0,0,0,szEffect068,NULL},
					{0x00000069,0x00,0000,0,0,0,0,szEffect069,NULL},
					{0x0000006A,0x00,0000,0,0,0,0,szEffect06A,NULL},
					{0x0000006B,0x00,0000,0,0,0,0,szEffect06B,NULL},
					{0x0000006C,0x00,0000,0,0,0,0,szEffect06C,NULL},
					{0x0000006D,0x00,0000,0,0,0,0,szEffect06D,NULL},
					{0x0000006E,0x00,0000,0,0,0,0,szEffect06E,NULL},
					{0x0000006F,0x00,0000,0,0,0,0,szEffect06F,NULL},
					{0x00000070,0x00,0000,0,0,0,0,szEffect070,NULL},
					{0x00000071,0x00,0000,0,0,0,0,szEffect071,NULL},
					{0x00000072,0x00,0000,0,0,0,0,szEffect072,NULL},
					{0x00000073,0x00,0000,0,0,0,0,szEffect073,NULL},
					{0x00000074,0x00,0000,0,0,0,0,szEffect074,NULL},
					{0x00000075,0x00,0000,0,0,0,0,szEffect075,NULL},
					{0x00000076,0x00,0000,0,0,0,0,szEffect076,NULL},
					{0x00000077,0x00,0000,0,0,0,0,szEffect077,NULL},
					{0x00000078,0x00,0000,0,0,0,0,szEffect078,NULL},
					{0x00000079,0x00,0000,0,0,0,0,szEffect079,NULL},
					{0x0000007A,0x00,0000,0,0,0,0,szEffect07A,NULL},
					{0x0000007B,0x00,0000,0,0,0,0,szEffect07B,NULL},
					{0x0000007C,0x00,0000,0,0,0,0,szEffect07C,NULL},
					{0x0000007D,0x00,0000,0,0,0,0,szEffect07D,NULL},
					{0x0000007E,0x00,0000,0,0,0,0,szEffect07E,NULL},
					{0x0000007F,0x00,0000,0,0,0,0,szEffect07F,NULL},
					{0x00000080,0x00,0000,0,0,0,0,szEffect080,NULL},
					{0x00000081,0x00,0000,0,0,0,0,szEffect081,NULL},
					{0x00000082,0x00,0000,0,0,0,0,szEffect082,NULL},
					{0x00000083,0x00,0000,0,0,0,0,szEffect083,NULL},
					{0x00000084,0x00,0000,0,0,0,0,szEffect084,NULL},
					{0x00000085,0x00,0000,0,0,0,0,szEffect085,NULL},
					{0x00000086,0x00,0000,0,0,0,0,szEffect086,NULL},
					{0x00000087,0x00,0000,0,0,0,0,szEffect087,NULL},
					{0x00000088,0x00,0000,0,0,0,0,szEffect088,NULL},
					{0x00000089,0x00,0000,0,0,0,0,szEffect089,NULL},
					{0x0000008A,0x00,0000,0,0,0,0,szEffect08A,NULL},
					{0x0000008B,0x00,0000,0,0,0,0,szEffect08B,NULL},
					{0x0000008C,0x00,0000,0,0,0,0,szEffect08C,NULL},
					{0x0000008D,0x00,0000,0,0,0,0,szEffect08D,NULL},
					{0x0000008E,0x00,0000,0,0,0,0,szEffect08E,NULL},
					{0x0000008F,0x00,0000,0,0,0,0,szEffect08F,NULL},
					{0x00000090,0x00,0000,0,0,0,0,szEffect090,NULL},
					{0x00000091,0x00,0000,0,0,0,0,szEffect091,NULL},
					{0x00000092,0x00,0000,0,0,0,0,szEffect092,NULL},
					{0x00000093,0x00,0000,0,0,0,0,szEffect093,NULL},
					{0x00000094,0x00,0000,0,0,0,0,szEffect094,NULL},
					{0x00000095,0x00,0000,0,0,0,0,szEffect095,NULL},
					{0x00000096,0x00,0000,0,0,0,0,szEffect096,NULL},
					{0x00000097,0x00,0000,0,0,0,0,szEffect097,NULL},
					{0x00000098,0x00,0000,0,0,0,0,szEffect098,NULL},
					{0x00000099,0x00,0000,0,0,0,0,szEffect099,NULL},
					{0x0000009A,0x00,0000,0,0,0,0,szEffect09A,NULL},
					{0x0000009B,0x00,0000,0,0,0,0,szEffect09B,NULL},
					{0x0000009C,0x00,0000,0,0,0,0,szEffect09C,NULL},
					{0x0000009D,0x00,0000,0,0,0,0,szEffect09D,NULL},
					{0x0000009E,0x00,0000,0,0,0,0,szEffect09E,NULL},
					{0x0000009F,0x00,0000,0,0,0,0,szEffect09F,NULL},
					{0x000000A0,0x00,0000,0,0,0,0,szEffect0A0,NULL},
					{0x000000A1,0x00,0000,0,0,0,0,szEffect0A1,NULL},
					{0x000000A2,0x00,0000,0,0,0,0,szEffect0A2,NULL},
					{0x000000A3,0x00,0000,0,0,0,0,szEffect0A3,NULL},
					{0x000000A4,0x00,0000,0,0,0,0,szEffect0A4,NULL},
					{0x000000A5,0x00,0000,0,0,0,0,szEffect0A5,NULL},
					{0x000000A6,0x00,0000,0,0,0,0,szEffect0A6,NULL},
					{0x000000A7,0x00,0000,0,0,0,0,szEffect0A7,NULL},
					{0x000000A8,0x00,0000,0,0,0,0,szEffect0A8,NULL},
					{0x000000A9,0x00,0000,0,0,0,0,szEffect0A9,NULL},
					{0x000000AA,0x00,0000,0,0,0,0,szEffect0AA,NULL},
					{0x000000AB,0x00,0000,0,0,0,0,szEffect0AB,NULL},
					{0x000000AC,0x00,0000,0,0,0,0,szEffect0AC,NULL},
					{0x000000AD,0x00,0000,0,0,0,0,szEffect0AD,NULL},
					{0x000000AE,0x00,0000,0,0,0,0,szEffect0AE,NULL},
					{0x000000AF,0x00,0000,0,0,0,0,szEffect0AF,NULL},
					{0x000000B0,0x00,0000,0,0,0,0,szEffect0B0,NULL},
					{0x000000B1,0x00,0000,0,0,0,0,szEffect0B1,NULL},
					{0x000000B2,0x00,0000,0,0,0,0,szEffect0B2,NULL},
					{0x000000B3,0x00,0000,0,0,0,0,szEffect0B3,NULL},
					{0x000000B4,0x00,0000,0,0,0,0,szEffect0B4,NULL},
					{0x000000B5,0x00,0000,0,0,0,0,szEffect0B5,NULL},
					{0x000000B6,0x00,0000,0,0,0,0,szEffect0B6,NULL},
					{0x000000B7,0x00,0000,0,0,0,0,szEffect0B7,NULL},
					{0x000000B8,0x00,0000,0,0,0,0,szEffect0B8,NULL},
					{0x000000B9,0x00,0000,0,0,0,0,szEffect0B9,NULL},
					{0x000000BA,0x00,0000,0,0,0,0,szEffect0BA,NULL},
					{0x000000BB,0x00,0000,0,0,0,0,szEffect0BB,NULL},
					{0x000000BC,0x00,0000,0,0,0,0,szEffect0BC,NULL},
					{0x000000BD,0x00,0000,0,0,0,0,szEffect0BD,NULL},
					{0x000000BE,0x00,0000,0,0,0,0,szEffect0BE,NULL},
					{0x000000BF,0x00,0000,0,0,0,0,szEffect0BF,NULL},
					{0x000000C0,0x00,0000,0,0,0,0,szEffect0C0,NULL},
					{0x000000C1,0x00,0000,0,0,0,0,szEffect0C1,NULL},
					{0x000000C2,0x00,0000,0,0,0,0,szEffect0C2,NULL},
					{0x000000C3,0x00,0000,0,0,0,0,szEffect0C3,NULL},
					{0x000000C4,0x00,0000,0,0,0,0,szEffect0C4,NULL},
					{0x000000C5,0x00,0000,0,0,0,0,szEffect0C5,NULL},
					{0x000000C6,0x00,0000,0,0,0,0,szEffect0C6,NULL},
					{0x000000C7,0x00,0000,0,0,0,0,szEffect0C7,NULL},
					{0x000000C8,0x00,0000,0,0,0,0,szEffect0C8,NULL},
					{0x000000C9,0x00,0000,0,0,0,0,szEffect0C9,NULL},
					{0x000000CA,0x00,0000,0,0,0,0,szEffect0CA,NULL},
					{0x000000CB,0x00,0000,0,0,0,0,szEffect0CB,NULL},
					{0x000000CC,0x00,0000,0,0,0,0,szEffect0CC,NULL},
					{0x000000CD,0x00,0000,0,0,0,0,szEffect0CD,NULL},
					{0x000000CE,0x00,0000,0,0,0,0,szEffect0CE,NULL},
					{0x000000CF,0x00,0000,0,0,0,0,szEffect0CF,NULL},
					{0x000000D0,0x00,0000,0,0,0,0,szEffect0D0,NULL},
					{0x000000D1,0x00,0000,0,0,0,0,szEffect0D1,NULL},
					{0x000000D2,0x00,0000,0,0,0,0,szEffect0D2,NULL},
					{0x000000D3,0x00,0000,0,0,0,0,szEffect0D3,NULL},
					{0x000000D4,0x00,0000,0,0,0,0,szEffect0D4,NULL},
					{0x000000D5,0x00,0000,0,0,0,0,szEffect0D5,NULL},
					{0x000000D6,0x00,0000,0,0,0,0,szEffect0D6,NULL},
					{0x000000D7,0x00,0000,0,0,0,0,szEffect0D7,NULL},
					{0x000000D8,0x00,0000,0,0,0,0,szEffect0D8,NULL},
					{0x000000D9,0x00,0000,0,0,0,0,szEffect0D9,NULL},
					{0x000000DA,0x00,0000,0,0,0,0,szEffect0DA,NULL},
					{0x000000DB,0x00,0000,0,0,0,0,szEffect0DB,NULL},
					{0x000000DC,0x00,0000,0,0,0,0,szEffect0DC,NULL},
					{0x000000DD,0x00,0000,0,0,0,0,szEffect0DD,NULL},
					{0x000000DE,0x00,0000,0,0,0,0,szEffect0DE,NULL},
					{0x000000DF,0x00,0000,0,0,0,0,szEffect0DF,NULL},
					{0x000000E0,0x00,0000,0,0,0,0,szEffect0E0,NULL},
					{0x000000E1,0x00,0000,0,0,0,0,szEffect0E1,NULL},
					{0x000000E2,0x00,0000,0,0,0,0,szEffect0E2,NULL},
					{0x000000E3,0x00,0000,0,0,0,0,szEffect0E3,NULL},
					{0x000000E4,0x00,0000,0,0,0,0,szEffect0E4,NULL},
					{0x000000E5,0x00,0000,0,0,0,0,szEffect0E5,NULL},
					{0x000000E6,0x00,0000,0,0,0,0,szEffect0E6,NULL},
					{0x000000E7,0x00,0000,0,0,0,0,szEffect0E7,NULL},
					{0x000000E8,0x00,0000,0,0,0,0,szEffect0E8,NULL},
					{0x000000E9,0x00,0000,0,0,0,0,szEffect0E9,NULL},
					{0x000000EA,0x00,0000,0,0,0,0,szEffect0EA,NULL},
					{0x000000EB,0x00,0000,0,0,0,0,szEffect0EB,NULL},
					{0x000000EC,0x00,0000,0,0,0,0,szEffect0EC,NULL},
					{0x000000ED,0x00,0000,0,0,0,0,szEffect0ED,NULL},
					{0x000000EE,0x00,0000,0,0,0,0,szEffect0EE,NULL},
					{0x000000EF,0x00,0000,0,0,0,0,szEffect0EF,NULL},
					{0x000000F0,0x00,0000,0,0,0,0,szEffect0F0,NULL},
					{0x000000F1,0x00,0000,0,0,0,0,szEffect0F1,NULL},
					{0x000000F2,0x00,0000,0,0,0,0,szEffect0F2,NULL},
					{0x000000F3,0x00,0000,0,0,0,0,szEffect0F3,NULL},
					{0x000000F4,0x00,0000,0,0,0,0,szEffect0F4,NULL},
					{0x000000F5,0x00,0000,0,0,0,0,szEffect0F5,NULL},
					{0x000000F6,0x00,0000,0,0,0,0,szEffect0F6,NULL},
					{0x000000F7,0x00,0000,0,0,0,0,szEffect0F7,NULL},
					{0x000000F8,0x00,0000,0,0,0,0,szEffect0F8,NULL},
					{0x000000F9,0x00,0000,0,0,0,0,szEffect0F9,NULL},
					{0x000000FA,0x00,0000,0,0,0,0,szEffect0FA,NULL},
					{0x000000FB,0x00,0000,0,0,0,0,szEffect0FB,NULL},
					{0x000000FC,0x00,0000,0,0,0,0,szEffect0FC,NULL},
					{0x000000FD,0x00,0000,0,0,0,0,szEffect0FD,NULL},
					{0x000000FE,0x00,0000,0,0,0,0,szEffect0FE,NULL},
					{0x000000FF,0x00,0000,0,0,0,0,szEffect0FF,NULL},
					{0x00000100,0x00,0000,0,0,0,0,szEffect100,NULL},
					{0x00000101,0x00,0000,0,0,0,0,szEffect101,NULL},
					{0x00000102,0x00,0000,0,0,0,0,szEffect102,NULL},
					{0x00000103,0x00,0000,0,0,0,0,szEffect103,NULL},
					{0x00000104,0x00,0000,0,0,0,0,szEffect104,NULL},
					{0x00000105,0x00,0000,0,0,0,0,szEffect105,NULL},
					{0x00000106,0x00,0000,0,0,0,0,szEffect106,NULL},
					{0x00000107,0x00,0000,0,0,0,0,szEffect107,NULL},
					{0x00000108,0x00,0000,0,0,0,0,szEffect108,NULL},
					{0x00000109,0x00,0000,0,0,0,0,szEffect109,NULL},
					{0x0000010A,0x00,0000,0,0,0,0,szEffect10A,NULL},
					{0x0000010B,0x00,0000,0,0,0,0,szEffect10B,NULL},
					{0x0000010C,0x00,0000,0,0,0,0,szEffect10C,NULL},
					{0x0000010D,0x00,0000,0,0,0,0,szEffect10D,NULL},
					{0x0000010E,0x00,0000,0,0,0,0,szEffect10E,NULL},
					{0x0000010F,0x00,0000,0,0,0,0,szEffect10F,NULL},
					{0x00000110,0x00,0000,0,0,0,0,szEffect110,NULL},
					{0x00000111,0x00,0000,0,0,0,0,szEffect111,NULL},
					{0x00000112,0x00,0000,0,0,0,0,szEffect112,NULL},
					{0x00000113,0x00,0000,0,0,0,0,szEffect113,NULL},
					{0x00000114,0x00,0000,0,0,0,0,szEffect114,NULL},
					{0x00000115,0x00,0000,0,0,0,0,szEffect115,NULL},
					{0x00000116,0x00,0000,0,0,0,0,szEffect116,NULL},
					{0x00000117,0x00,0000,0,0,0,0,szEffect117,NULL},
					{0x00000118,0x00,0000,0,0,0,0,szEffect118,NULL},
					{0x00000119,0x00,0000,0,0,0,0,szEffect119,NULL},
					{0x0000011A,0x00,0000,0,0,0,0,szEffect11A,NULL},
					{0x0000011B,0x00,0000,0,0,0,0,szEffect11B,NULL},
					{0x0000011C,0x00,0000,0,0,0,0,szEffect11C,NULL},
					{0x0000011D,0x00,0000,0,0,0,0,szEffect11D,NULL},
					{0x0000011E,0x00,0000,0,0,0,0,szEffect11E,NULL},
					{0x0000011F,0x00,0000,0,0,0,0,szEffect11F,NULL},
					{0x00000120,0x00,0000,0,0,0,0,szEffect120,NULL},
					{0x00000121,0x00,0000,0,0,0,0,szEffect121,NULL},
					{0x00000122,0x00,0000,0,0,0,0,szEffect122,NULL},
					{0x00000123,0x00,0000,0,0,0,0,szEffect123,NULL},
					{0x00000124,0x00,0000,0,0,0,0,szEffect124,NULL},
					{0x00000125,0x00,0000,0,0,0,0,szEffect125,NULL},
					{0x00000126,0x00,0000,0,0,0,0,szEffect126,NULL},
					{0x00000127,0x00,0000,0,0,0,0,szEffect127,NULL},
					{0x00000128,0x00,0000,0,0,0,0,szEffect128,NULL},
					{0x00000129,0x00,0000,0,0,0,0,szEffect129,NULL},
					{0x0000012A,0x00,0000,0,0,0,0,szEffect12A,NULL},
					{0x0000012B,0x00,0000,0,0,0,0,szEffect12B,NULL},
					{0x0000012C,0x00,0000,0,0,0,0,szEffect12C,NULL},
					{0x0000012D,0x00,0000,0,0,0,0,szEffect12D,NULL},
					{0x0000012E,0x00,0000,0,0,0,0,szEffect12E,NULL},
					{0x0000012F,0x00,0000,0,0,0,0,szEffect12F,NULL},
					{0x00000130,0x00,0000,0,0,0,0,szEffect130,NULL},
					{0x00000131,0x00,0000,0,0,0,0,szEffect131,NULL},
					{0x00000132,0x00,0000,0,0,0,0,szEffect132,NULL},
					{0x00000133,0x00,0000,0,0,0,0,szEffect133,NULL},
					{0x00000134,0x00,0000,0,0,0,0,szEffect134,NULL},
					{0x00000135,0x00,0000,0,0,0,0,szEffect135,NULL},
					{0x00000136,0x00,0000,0,0,0,0,szEffect136,NULL},
					{0x00000137,0x00,0000,0,0,0,0,szEffect137,NULL},
					{0x00000138,0x00,0000,0,0,0,0,szEffect138,NULL},
					{0x00000139,0x00,0000,0,0,0,0,szEffect139,NULL},
					{0x0000013A,0x00,0000,0,0,0,0,szEffect13A,NULL},
					{0x0000013B,0x00,0000,0,0,0,0,szEffect13B,NULL},
					{0x0000013C,0x00,0000,0,0,0,0,szEffect13C,NULL},
					{0x0000013D,0x00,0000,0,0,0,0,szEffect13D,NULL},
					{0x0000013E,0x00,0000,0,0,0,0,szEffect13E,NULL},
					{0x0000013F,0x00,0000,0,0,0,0,szEffect13F,NULL},
					{0x00000140,0x00,0000,0,0,0,0,szEffect140,NULL},
					{0x00000141,0x00,0000,0,0,0,0,szEffect141,NULL},
					{0x00000142,0x00,0000,0,0,0,0,szEffect142,NULL},
					{0x00000143,0x00,0000,0,0,0,0,szEffect143,NULL},
					{0x00000144,0x00,0000,0,0,0,0,szEffect144,NULL},
					{0x00000145,0x00,0000,0,0,0,0,szEffect145,NULL},
					{0x00000146,0x00,0000,0,0,0,0,szEffect146,NULL},
					{0x00000147,0x00,0000,0,0,0,0,szEffect147,NULL},
					{0x00000148,0x00,0000,0,0,0,0,szEffect148,NULL},
					{0x00000149,0x00,0000,0,0,0,0,szEffect149,NULL},
					{0x0000014A,0x00,0000,0,0,0,0,szEffect14A,NULL},
					{0x0000014B,0x00,0000,0,0,0,0,szEffect14B,NULL},
					{0x0000014C,0x00,0000,0,0,0,0,szEffect14C,NULL},
					{0x0000014D,0x00,0000,0,0,0,0,szEffect14D,NULL},
					{0x0000014E,0x00,0000,0,0,0,0,szEffect14E,NULL},
					{0x0000014F,0x00,0000,0,0,0,0,szEffect14F,NULL},
					{0x00000150,0x00,0000,0,0,0,0,szEffect150,NULL},
					{0x00000151,0x00,0000,0,0,0,0,szEffect151,NULL},
					{0x00000152,0x00,0000,0,0,0,0,szEffect152,NULL},
					{0x00000153,0x00,0000,0,0,0,0,szEffect153,NULL},
					{0x00000154,0x00,0000,0,0,0,0,szEffect154,NULL},
					{0x00000155,0x00,0000,0,0,0,0,szEffect155,NULL},
					{0x00000156,0x00,0000,0,0,0,0,szEffect156,NULL},
					{0x00000157,0x00,0000,0,0,0,0,szEffect157,NULL},
					{0x00000158,0x00,0000,0,0,0,0,szEffect158,NULL},
					{0x00000159,0x00,0000,0,0,0,0,szEffect159,NULL},
					{0x0000015A,0x00,0000,0,0,0,0,szEffect15A,NULL},
					{0x0000015B,0x00,0000,0,0,0,0,szEffect15B,NULL},
					{0x0000015C,0x00,0000,0,0,0,0,szEffect15C,NULL},
					{0x0000015D,0x00,0000,0,0,0,0,szEffect15D,NULL},
					{0x0000015E,0x00,0000,0,0,0,0,szEffect15E,NULL},
					{0x0000015F,0x00,0000,0,0,0,0,szEffect15F,NULL},
					{0x00000160,0x00,0000,0,0,0,0,szEffect160,NULL},
					{0x00000161,0x00,0000,0,0,0,0,szEffect161,NULL},
					{0x00000162,0x00,0000,0,0,0,0,szEffect162,NULL},
					{0x00000163,0x00,0000,0,0,0,0,szEffect163,NULL},
					{0x00000164,0x00,0000,0,0,0,0,szEffect164,NULL},
					{0x00000165,0x00,0000,0,0,0,0,szEffect165,NULL},
					{0x00000166,0x00,0000,0,0,0,0,szEffect166,NULL},
					{0x00000167,0x00,0000,0,0,0,0,szEffect167,NULL},
					{0x00000168,0x00,0000,0,0,0,0,szEffect168,NULL},
					{0x00000169,0x00,0000,0,0,0,0,szEffect169,NULL},
					{0x0000016A,0x00,0000,0,0,0,0,szEffect16A,NULL},
					{0x0000016B,0x00,0000,0,0,0,0,szEffect16B,NULL},
					{0x0000016C,0x00,0000,0,0,0,0,szEffect16C,NULL},
					{0x0000016D,0x00,0000,0,0,0,0,szEffect16D,NULL},
					{0x0000016E,0x00,0000,0,0,0,0,szEffect16E,NULL},
					{0x0000016F,0x00,0000,0,0,0,0,szEffect16F,NULL},
					{0x00000170,0x00,0000,0,0,0,0,szEffect170,NULL},
					{0x00000171,0x00,0000,0,0,0,0,szEffect171,NULL},
					{0x00000172,0x00,0000,0,0,0,0,szEffect172,NULL},
					{0xFFFFFFFF,0x00,0000,0,0,0,0,NULL,	 NULL}};

