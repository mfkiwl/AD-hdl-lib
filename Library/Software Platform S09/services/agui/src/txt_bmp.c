/* bitmap */
const char txt_bmp[] =
{
	0x42,	0x4D,	0x36,	0x03,	0x00,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x36,	0x00,	0x00,	0x00,	0x28,	0x00,
	0x00,	0x00,	0x10,	0x00,	0x00,	0x00,	0x10,	0x00,
	0x00,	0x00,	0x01,	0x00,	0x18,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x03,	0x00,	0x00,	0x13,	0x0B,
	0x00,	0x00,	0x13,	0x0B,	0x00,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x7E,	0xF8,
	0x4F,	0x83,	0xF8,	0x55,	0x87,	0xF9,	0x5A,	0x8B,
	0xF8,	0x61,	0x90,	0xF9,	0x66,	0x94,	0xF9,	0x6D,
	0x99,	0xF9,	0x72,	0x9D,	0xFA,	0x78,	0xA2,	0xFA,
	0x7F,	0xA6,	0xFB,	0x84,	0xAA,	0xFB,	0x8A,	0xAF,
	0xFB,	0x90,	0xB3,	0xFB,	0x96,	0xB7,	0xFB,	0x9D,
	0xBC,	0xFB,	0xA2,	0xC0,	0xFB,	0xA9,	0x83,	0xF8,
	0x55,	0x87,	0xF8,	0x5B,	0x8C,	0xF9,	0x61,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0xBC,	0xFB,	0xA3,
	0xC0,	0xFC,	0xA8,	0xC4,	0xFC,	0xAE,	0x87,	0xF8,
	0x5A,	0x8B,	0xF9,	0x60,	0x90,	0xF9,	0x67,	0x00,
	0x00,	0x00,	0x98,	0xFA,	0x72,	0x9D,	0xFA,	0x78,
	0xA2,	0xFA,	0x7E,	0xA6,	0xFA,	0x84,	0xAA,	0xFA,
	0x8A,	0xAF,	0xFB,	0x91,	0xB2,	0xFB,	0x96,	0xB7,
	0xFB,	0x9C,	0x00,	0x00,	0x00,	0xC0,	0xFB,	0xA8,
	0xC4,	0xFC,	0xAE,	0xC8,	0xFC,	0xB4,	0x8B,	0xF9,
	0x60,	0x90,	0xF9,	0x66,	0x94,	0xF9,	0x6C,	0x00,
	0x00,	0x00,	0x9D,	0xFA,	0x78,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0xBB,
	0xFB,	0xA2,	0x00,	0x00,	0x00,	0xC4,	0xFC,	0xAE,
	0xC8,	0xFC,	0xB4,	0xCD,	0xFC,	0xBA,	0x90,	0xF8,
	0x67,	0x94,	0xFA,	0x6C,	0x98,	0xF9,	0x72,	0x00,
	0x00,	0x00,	0xA2,	0xFA,	0x7E,	0xA6,	0xFA,	0x84,
	0xAA,	0xFA,	0x8A,	0xAE,	0xFA,	0x8F,	0xB2,	0xFB,
	0x96,	0xB7,	0xFB,	0x9C,	0xBB,	0xFB,	0xA2,	0xBF,
	0xFC,	0xA8,	0x00,	0x00,	0x00,	0xC8,	0xFC,	0xB4,
	0xCC,	0xFD,	0xBA,	0xD1,	0xFC,	0xC0,	0x94,	0xF9,
	0x6C,	0x98,	0xF9,	0x72,	0x9D,	0xFA,	0x78,	0x00,
	0x00,	0x00,	0xA5,	0xFA,	0x84,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0xC4,
	0xFC,	0xAD,	0x00,	0x00,	0x00,	0xCC,	0xFC,	0xBA,
	0xD1,	0xFC,	0xBF,	0xD5,	0xFD,	0xC6,	0x99,	0xFA,
	0x72,	0x9D,	0xFA,	0x78,	0xA1,	0xFA,	0x7E,	0x00,
	0x00,	0x00,	0xAA,	0xFB,	0x8A,	0xAE,	0xFB,	0x90,
	0xB3,	0xFB,	0x96,	0xB7,	0xFB,	0x9B,	0xBB,	0xFB,
	0xA2,	0xBF,	0xFC,	0xA7,	0xC4,	0xFB,	0xAE,	0xC9,
	0xFC,	0xB4,	0x00,	0x00,	0x00,	0xD0,	0xFC,	0xBF,
	0xD5,	0xFD,	0xC5,	0xD9,	0xFD,	0xCB,	0x9C,	0xF9,
	0x78,	0xA1,	0xFA,	0x7E,	0xA5,	0xFA,	0x83,	0x00,
	0x00,	0x00,	0xAE,	0xFB,	0x8F,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0xCC,
	0xFD,	0xB9,	0x00,	0x00,	0x00,	0xD5,	0xFC,	0xC6,
	0xDA,	0xFD,	0xCC,	0xDE,	0xFD,	0xD2,	0xA1,	0xFA,
	0x7D,	0xA5,	0xFA,	0x84,	0xAA,	0xFB,	0x89,	0x00,
	0x00,	0x00,	0xB2,	0xFB,	0x96,	0xB6,	0xFB,	0x9B,
	0xBB,	0xFB,	0xA2,	0xBF,	0xFB,	0xA8,	0xC3,	0xFB,
	0xAD,	0xC8,	0xFC,	0xB4,	0xCD,	0xFC,	0xB9,	0xD1,
	0xFD,	0xBF,	0x00,	0x00,	0x00,	0xD9,	0xFD,	0xCB,
	0xDE,	0xFD,	0xD1,	0xE2,	0xFE,	0xD7,	0xA5,	0xFA,
	0x84,	0xAA,	0xFA,	0x8A,	0xAE,	0xFB,	0x90,	0x00,
	0x00,	0x00,	0xB7,	0xFB,	0x9C,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0xD5,
	0xFD,	0xC5,	0x00,	0x00,	0x00,	0xDD,	0xFD,	0xD1,
	0xE2,	0xFE,	0xD7,	0xE6,	0xFE,	0xDD,	0xA9,	0xFA,
	0x89,	0xAE,	0xFA,	0x8F,	0xB2,	0xFA,	0x95,	0x00,
	0x00,	0x00,	0xBB,	0xFB,	0xA1,	0xBF,	0xFB,	0xA8,
	0xC4,	0xFB,	0xAD,	0xC8,	0xFC,	0xB3,	0xCC,	0xFC,
	0xB9,	0xD1,	0xFD,	0xBF,	0xD5,	0xFC,	0xC5,	0xD9,
	0xFD,	0xCB,	0x00,	0x00,	0x00,	0xE2,	0xFD,	0xD7,
	0xE7,	0xFE,	0xDD,	0xEB,	0xFE,	0xE3,	0xAE,	0xFB,
	0x8F,	0xB2,	0xFB,	0x95,	0xB7,	0xFB,	0x9B,	0x00,
	0x00,	0x00,	0xBF,	0xFC,	0xA7,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0xD1,	0xFC,
	0xC0,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0xE7,	0xFE,	0xDD,
	0xEA,	0xFE,	0xE3,	0xEF,	0xFE,	0xE9,	0xB2,	0xFB,
	0x95,	0xB6,	0xFB,	0x9B,	0xBB,	0xFB,	0xA1,	0x00,
	0x00,	0x00,	0xC3,	0xFC,	0xAD,	0xC8,	0xFC,	0xB3,
	0xCC,	0xFC,	0xB9,	0xD0,	0xFD,	0xBF,	0xD4,	0xFD,
	0xC5,	0x00,	0x00,	0x00,	0xDE,	0xFD,	0xD1,	0x00,
	0x00,	0x00,	0xE6,	0xFD,	0xDD,	0xEA,	0xFE,	0xE3,
	0xEF,	0xFE,	0xE8,	0xF3,	0xFF,	0xEF,	0xB6,	0xFB,
	0x9B,	0xBB,	0xFB,	0xA1,	0xBF,	0xFB,	0xA7,	0x00,
	0x00,	0x00,	0xC8,	0xFC,	0xB3,	0xCC,	0xFC,	0xB9,
	0xD0,	0xFC,	0xBF,	0xD5,	0xFD,	0xC5,	0xD9,	0xFD,
	0xCB,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0xE6,
	0xFE,	0xDD,	0xEB,	0xFE,	0xE3,	0xEF,	0xFE,	0xE9,
	0xF3,	0xFF,	0xEF,	0xF8,	0xFE,	0xF5,	0xBB,	0xFB,
	0xA1,	0xBF,	0xFB,	0xA7,	0xC3,	0xFC,	0xAD,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
	0x00,	0x00,	0x00,	0x00,	0xE6,	0xFD,	0xDC,	0xEA,
	0xFE,	0xE2,	0xEF,	0xFE,	0xE9,	0xF3,	0xFF,	0xEF,
	0xF7,	0xFF,	0xF4,	0xFB,	0xFF,	0xFB,	0xBE,	0xFC,
	0xA7,	0xC4,	0xFC,	0xAD,	0xC7,	0xFC,	0xB3,	0xCB,
	0xFD,	0xB9,	0xD0,	0xFC,	0xBE,	0xD5,	0xFC,	0xC5,
	0xD9,	0xFD,	0xCB,	0xDE,	0xFD,	0xD1,	0xE1,	0xFE,
	0xD7,	0xE6,	0xFD,	0xDD,	0xEA,	0xFE,	0xE3,	0xEE,
	0xFE,	0xE8,	0xF3,	0xFE,	0xEE,	0xF8,	0xFF,	0xF4,
	0xFB,	0xFF,	0xFA,	0xFF,	0xFF,	0xFF
};
