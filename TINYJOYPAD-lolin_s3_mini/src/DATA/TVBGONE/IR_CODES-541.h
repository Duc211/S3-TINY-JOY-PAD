#include "config.h"

const uint16_t code_na000Times[] = {
  60, 60,
  60, 2700,
  120, 60,
  240, 60,
};
const uint8_t code_na000Codes[] = {
  0xE2,
  0x20,
  0x80,
  0x78,
  0x88,
  0x20,
  0x10,
};
const struct IrCode code_na000Code = {
  freq_to_timerval(38400),
  26,             // # of pairs
  2,              // # of bits per index
  code_na000Times,
  code_na000Codes
};

const uint16_t code_na001Times[] = {
  50, 100,
  50, 200,
  50, 800,
  400, 400,
};
const uint8_t code_na001Codes[] = {
  0xD5,
  0x41,
  0x11,
  0x00,
  0x14,
  0x44,
  0x6D,
  0x54,
  0x11,
  0x10,
  0x01,
  0x44,
  0x45,
};
const struct IrCode code_na001Code = {
  freq_to_timerval(57143),
  52,		// # of pairs
  2,		// # of bits per index
  code_na001Times,
  code_na001Codes
};
const uint16_t code_na002Times[] = {
  42, 46,
  42, 133,
  42, 7519,
  347, 176,
  347, 177,
};
const uint8_t code_na002Codes[] = {
  0x60,
  0x80,
  0x00,
  0x00,
  0x00,
  0x08,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x00,
  0x04,
  0x12,
  0x48,
  0x04,
  0x12,
  0x48,
  0x2A,
  0x02,
  0x00,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x00,
  0x00,
  0x80,
  0x00,
  0x00,
  0x10,
  0x49,
  0x20,
  0x10,
  0x49,
  0x20,
  0x80,
};
const struct IrCode code_na002Code = {
  freq_to_timerval(37037),
  100,		// # of pairs
  3,		// # of bits per index
  code_na002Times,
  code_na002Codes
};
const uint16_t code_na003Times[] = {
  26, 185,
  27, 80,
  27, 185,
  27, 4549,
};
const uint8_t code_na003Codes[] = {
  0x15,
  0x5A,
  0x65,
  0x67,
  0x95,
  0x65,
  0x9A,
  0x9B,
  0x95,
  0x5A,
  0x65,
  0x67,
  0x95,
  0x65,
  0x9A,
  0x99,
};
const struct IrCode code_na003Code = {
  freq_to_timerval(38610),
  64,		// # of pairs
  2,		// # of bits per index
  code_na003Times,
  code_na003Codes
};
const uint16_t code_na004Times[] = {
  55, 57,
  55, 170,
  55, 3949,
  55, 9623,
  56, 0,
  898, 453,
  900, 226,
};
const uint8_t code_na004Codes[] = {
  0xA0,
  0x00,
  0x01,
  0x04,
  0x92,
  0x48,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na004Code = {
  freq_to_timerval(38610),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na004Codes
};
const uint16_t code_na005Times[] = {
  88, 90,
  88, 91,
  88, 181,
  88, 8976,
  177, 91,
};
const uint8_t code_na005Codes[] = {
  0x10,
  0x92,
  0x49,
  0x46,
  0x33,
  0x09,
  0x24,
  0x94,
  0x60,
};
const struct IrCode code_na005Code = {
  freq_to_timerval(35714),
  24,		// # of pairs
  3,		// # of bits per index
  code_na005Times,
  code_na005Codes
};
const uint16_t code_na006Times[] = {
  50, 62,
  50, 172,
  50, 4541,
  448, 466,
  450, 465,
};
const uint8_t code_na006Codes[] = {
  0x64,
  0x90,
  0x00,
  0x04,
  0x90,
  0x00,
  0x00,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0x12,
  0x40,
  0x00,
  0x12,
  0x40,
  0x00,
  0x02,
  0x00,
  0x00,
  0x10,
  0x49,
  0x24,
  0x90,
};
const struct IrCode code_na006Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na006Times,
  code_na006Codes
};
const uint16_t code_na007Times[] = {
  49, 49,
  49, 50,
  49, 410,
  49, 510,
  49, 12107,
};
const uint8_t code_na007Codes[] = {
  0x09,
  0x94,
  0x53,
  0x29,
  0x94,
  0xD9,
  0x85,
  0x32,
  0x8A,
  0x65,
  0x32,
  0x9B,
  0x20,
};
const struct IrCode code_na007Code = {
  freq_to_timerval(39216),
  34,		// # of pairs
  3,		// # of bits per index
  code_na007Times,
  code_na007Codes
};
const uint16_t code_na008Times[] = {
  56, 58,
  56, 170,
  56, 4011,
  898, 450,
  900, 449,
};
const uint8_t code_na008Codes[] = {
  0x64,
  0x00,
  0x49,
  0x00,
  0x92,
  0x00,
  0x20,
  0x82,
  0x01,
  0x04,
  0x10,
  0x48,
  0x2A,
  0x10,
  0x01,
  0x24,
  0x02,
  0x48,
  0x00,
  0x82,
  0x08,
  0x04,
  0x10,
  0x41,
  0x20,
  0x90,
};
const struct IrCode code_na008Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na008Times,
  code_na008Codes
};
const uint16_t code_na009Times[] = {
  53, 56,
  53, 171,
  53, 3950,
  53, 9599,
  898, 451,
  900, 226,
};
const uint8_t code_na009Codes[] = {
  0x84,
  0x90,
  0x00,
  0x20,
  0x80,
  0x08,
  0x00,
  0x00,
  0x09,
  0x24,
  0x92,
  0x40,
  0x0A,
  0xBA,
  0x40,
};
const struct IrCode code_na009Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na009Codes
};
const uint16_t code_na010Times[] = {
  51, 55,
  51, 158,
  51, 2286,
  841, 419,
};
const uint8_t code_na010Codes[] = {
  0xD4,
  0x00,
  0x15,
  0x10,
  0x25,
  0x00,
  0x05,
  0x44,
  0x09,
  0x40,
  0x01,
  0x51,
  0x01,
};
const struct IrCode code_na010Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  2,		// # of bits per index
  code_na010Times,
  code_na010Codes
};
const uint16_t code_na011Times[] = {
  55, 55,
  55, 172,
  55, 4039,
  55, 9348,
  56, 0,
  884, 442,
  885, 225,
};
const uint8_t code_na011Codes[] = {
  0xA0,
  0x00,
  0x41,
  0x04,
  0x92,
  0x08,
  0x24,
  0x90,
  0x40,
  0x00,
  0x02,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na011Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na011Times,
  code_na011Codes
};
const uint16_t code_na012Times[] = {
  81, 87,
  81, 254,
  81, 3280,
  331, 336,
  331, 337,
};
const uint8_t code_na012Codes[] = {
  0x64,
  0x12,
  0x08,
  0x24,
  0x00,
  0x08,
  0x20,
  0x10,
  0x09,
  0x2A,
  0x10,
  0x48,
  0x20,
  0x90,
  0x00,
  0x20,
  0x80,
  0x40,
  0x24,
  0x90,
};
const struct IrCode code_na012Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  3,		// # of bits per index
  code_na012Times,
  code_na012Codes
};
const uint16_t code_na013Times[] = {
  53, 55,
  53, 167,
  53, 2304,
  53, 9369,
  893, 448,
  895, 447,
};
const uint8_t code_na013Codes[] = {
  0x80,
  0x12,
  0x40,
  0x04,
  0x00,
  0x09,
  0x00,
  0x12,
  0x41,
  0x24,
  0x82,
  0x01,
  0x00,
  0x10,
  0x48,
  0x24,
  0xAA,
  0xE8,
};
const struct IrCode code_na013Code = {
  freq_to_timerval(38462),
  48,		// # of pairs
  3,		// # of bits per index
  code_na013Times,
  code_na013Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na014Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na014Codes[] = {
  0xA0,
  0x00,
  0x09,
  0x04,
  0x92,
  0x40,
  0x24,
  0x80,
  0x00,
  0x00,
  0x12,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na014Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na014Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na015Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na015Codes[] = {
  0xA0,
  0x80,
  0x01,
  0x04,
  0x12,
  0x48,
  0x24,
  0x00,
  0x00,
  0x00,
  0x92,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na015Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na015Codes
};
const uint16_t code_na016Times[] = {
  28, 90,
  28, 211,
  28, 2507,
};
const uint8_t code_na016Codes[] = {
  0x54,
  0x04,
  0x10,
  0x00,
  0x95,
  0x01,
  0x04,
  0x00,
  0x10,
};
const struct IrCode code_na016Code = {
  freq_to_timerval(34483),
  34,		// # of pairs
  2,		// # of bits per index
  code_na016Times,
  code_na016Codes
};
const uint16_t code_na017Times[] = {
  56, 57,
  56, 175,
  56, 4150,
  56, 9499,
  898, 227,
  898, 449,
};
const uint8_t code_na017Codes[] = {
  0xA0,
  0x02,
  0x48,
  0x04,
  0x90,
  0x01,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na017Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na017Codes
};
const uint16_t code_na018Times[] = {
  51, 55,
  51, 161,
  51, 2566,
  849, 429,
  849, 430,
};
const uint8_t code_na018Codes[] = {
  0x60,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x00,
  0x12,
  0x40,
  0x04,
  0x80,
  0x09,
  0x2A,
  0x02,
  0x08,
  0x20,
  0x90,
  0x41,
  0x04,
  0x00,
  0x49,
  0x00,
  0x12,
  0x00,
  0x24,
  0xA8,
  0x08,
  0x20,
  0x82,
  0x41,
  0x04,
  0x10,
  0x01,
  0x24,
  0x00,
  0x48,
  0x00,
  0x92,
  0xA0,
  0x20,
  0x82,
  0x09,
  0x04,
  0x10,
  0x40,
  0x04,
  0x90,
  0x01,
  0x20,
  0x02,
  0x48,
};
const struct IrCode code_na018Code = {
  freq_to_timerval(38462),
  136,		// # of pairs
  3,		// # of bits per index
  code_na018Times,
  code_na018Codes
};
const uint16_t code_na019Times[] = {
  40, 42,
  40, 124,
  40, 4601,
  325, 163,
  326, 163,
};
const uint8_t code_na019Codes[] = {
  0x60,
  0x10,
  0x40,
  0x04,
  0x80,
  0x09,
  0x00,
  0x00,
  0x00,
  0x00,
  0x10,
  0x00,
  0x20,
  0x10,
  0x00,
  0x20,
  0x80,
  0x00,
  0x0A,
  0x00,
  0x41,
  0x00,
  0x12,
  0x00,
  0x24,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x00,
  0x80,
  0x40,
  0x00,
  0x82,
  0x00,
  0x00,
  0x00,
};
const struct IrCode code_na019Code = {
  freq_to_timerval(38462),
  100,		// # of pairs
  3,		// # of bits per index
  code_na019Times,
  code_na019Codes
};
const uint16_t code_na020Times[] = {
  60, 55,
  60, 163,
  60, 4099,
  60, 9698,
  61, 0,
  898, 461,
  900, 230,
};
const uint8_t code_na020Codes[] = {
  0xA0,
  0x10,
  0x00,
  0x04,
  0x82,
  0x49,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na020Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na020Times,
  code_na020Codes
};
const uint16_t code_na021Times[] = {
  48, 52,
  48, 160,
  48, 400,
  48, 2335,
  799, 400,
};
const uint8_t code_na021Codes[] = {
  0x80,
  0x10,
  0x40,
  0x08,
  0x82,
  0x08,
  0x01,
  0xC0,
  0x08,
  0x20,
  0x04,
  0x41,
  0x04,
  0x00,
  0x00,
};
const struct IrCode code_na021Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na021Times,
  code_na021Codes
};
const uint16_t code_na022Times[] = {
  53, 60,
  53, 175,
  53, 4463,
  53, 9453,
  892, 450,
  895, 225,
};
const uint8_t code_na022Codes[] = {
  0x80,
  0x02,
  0x40,
  0x00,
  0x02,
  0x40,
  0x00,
  0x00,
  0x01,
  0x24,
  0x92,
  0x48,
  0x0A,
  0xBA,
  0x00,
};
const struct IrCode code_na022Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na022Times,
  code_na022Codes
};
const uint16_t code_na023Times[] = {
  48, 52,
  48, 409,
  48, 504,
  48, 10461,
};
const uint8_t code_na023Codes[] = {
  0xA1,
  0x18,
  0x61,
  0xA1,
  0x18,
  0x7A,
  0x11,
  0x86,
  0x1A,
  0x11,
  0x86,
};
const struct IrCode code_na023Code = {
  freq_to_timerval(40000),
  44,		// # of pairs
  2,		// # of bits per index
  code_na023Times,
  code_na023Codes
};
const uint16_t code_na024Times[] = {
  58, 60,
  58, 2569,
  118, 60,
  237, 60,
  238, 60,
};
const uint8_t code_na024Codes[] = {
  0x69,
  0x24,
  0x10,
  0x40,
  0x03,
  0x12,
  0x48,
  0x20,
  0x80,
  0x00,
};
const struct IrCode code_na024Code = {
  freq_to_timerval(38462),
  26,		// # of pairs
  3,		// # of bits per index
  code_na024Times,
  code_na024Codes
};
const uint16_t code_na025Times[] = {
  84, 90,
  84, 264,
  84, 3470,
  346, 350,
  347, 350,
};
const uint8_t code_na025Codes[] = {
  0x64,
  0x92,
  0x49,
  0x00,
  0x00,
  0x00,
  0x00,
  0x02,
  0x49,
  0x2A,
  0x12,
  0x49,
  0x24,
  0x00,
  0x00,
  0x00,
  0x00,
  0x09,
  0x24,
  0x90,
};
const struct IrCode code_na025Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  3,		// # of bits per index
  code_na025Times,
  code_na025Codes
};
const uint16_t code_na026Times[] = {
  49, 49,
  49, 50,
  49, 410,
  49, 510,
  49, 12582,
};
const uint8_t code_na026Codes[] = {
  0x09,
  0x94,
  0x53,
  0x65,
  0x32,
  0x99,
  0x85,
  0x32,
  0x8A,
  0x6C,
  0xA6,
  0x53,
  0x20,
};
const struct IrCode code_na026Code = {
  freq_to_timerval(39216),
  34,		// # of pairs
  3,		// # of bits per index
  code_na026Times,
  code_na026Codes
};

/* Duplicate timing table, same as na001 !
 const uint16_t code_na027Times[] = {
 	50, 100,
 	50, 200,
 	50, 800,
 	400, 400,
 };
 */
const uint8_t code_na027Codes[] = {
  0xC5,
  0x41,
  0x11,
  0x10,
  0x14,
  0x44,
  0x6C,
  0x54,
  0x11,
  0x11,
  0x01,
  0x44,
  0x44,
};
const struct IrCode code_na027Code = {
  freq_to_timerval(57143),
  52,		// # of pairs
  2,		// # of bits per index
  code_na001Times,
  code_na027Codes
};
const uint16_t code_na028Times[] = {
  118, 121,
  118, 271,
  118, 4750,
  258, 271,
};
const uint8_t code_na028Codes[] = {
  0xC4,
  0x45,
  0x14,
  0x04,
  0x6C,
  0x44,
  0x51,
  0x40,
  0x44,
};
const struct IrCode code_na028Code = {
  freq_to_timerval(38610),
  36,		// # of pairs
  2,		// # of bits per index
  code_na028Times,
  code_na028Codes
};
const uint16_t code_na029Times[] = {
  88, 90,
  88, 91,
  88, 181,
  177, 91,
  177, 8976,
};
const uint8_t code_na029Codes[] = {
  0x0C,
  0x92,
  0x53,
  0x46,
  0x16,
  0x49,
  0x29,
  0xA2,
  0xC0,
};
const struct IrCode code_na029Code = {
  freq_to_timerval(35842),
  22,		// # of pairs
  3,		// # of bits per index
  code_na029Times,
  code_na029Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na030Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na030Codes[] = {
  0x80,
  0x00,
  0x41,
  0x04,
  0x12,
  0x08,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na030Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na030Codes
};
const uint16_t code_na031Times[] = {
  88, 89,
  88, 90,
  88, 179,
  88, 8977,
  177, 90,
};
const uint8_t code_na031Codes[] = {
  0x06,
  0x12,
  0x49,
  0x46,
  0x32,
  0x61,
  0x24,
  0x94,
  0x60,
};
const struct IrCode code_na031Code = {
  freq_to_timerval(35842),
  24,		// # of pairs
  3,		// # of bits per index
  code_na031Times,
  code_na031Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na032Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na032Codes[] = {
  0x80,
  0x00,
  0x41,
  0x04,
  0x12,
  0x08,
  0x20,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na032Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na032Codes
};
const uint16_t code_na033Times[] = {
  40, 43,
  40, 122,
  40, 5297,
  334, 156,
  336, 155,
};
const uint8_t code_na033Codes[] = {
  0x60,
  0x10,
  0x40,
  0x04,
  0x80,
  0x09,
  0x00,
  0x00,
  0x00,
  0x00,
  0x10,
  0x00,
  0x20,
  0x82,
  0x00,
  0x20,
  0x00,
  0x00,
  0x0A,
  0x00,
  0x41,
  0x00,
  0x12,
  0x00,
  0x24,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x00,
  0x82,
  0x08,
  0x00,
  0x80,
  0x00,
  0x00,
  0x00,
};
const struct IrCode code_na033Code = {
  freq_to_timerval(38462),
  100,		// # of pairs
  3,		// # of bits per index
  code_na033Times,
  code_na033Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na034Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na034Codes[] = {
  0xA0,
  0x00,
  0x41,
  0x04,
  0x92,
  0x08,
  0x24,
  0x92,
  0x48,
  0x00,
  0x00,
  0x01,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na034Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na034Codes
};
const uint16_t code_na035Times[] = {
  96, 93,
  97, 93,
  97, 287,
  97, 3431,
};
const uint8_t code_na035Codes[] = {
  0x16,
  0x66,
  0x5D,
  0x59,
  0x99,
  0x50,
};
const struct IrCode code_na035Code = {
  freq_to_timerval(41667),
  22,		// # of pairs
  2,		// # of bits per index
  code_na035Times,
  code_na035Codes
};
const uint16_t code_na036Times[] = {
  82, 581,
  84, 250,
  84, 580,
  85, 0,
};
const uint8_t code_na036Codes[] = {
  0x15,
  0x9A,
  0x9C,
};
const struct IrCode code_na036Code = {
  freq_to_timerval(37037),
  11,		// # of pairs
  2,		// # of bits per index
  code_na036Times,
  code_na036Codes
};
const uint16_t code_na037Times[] = {
  39, 263,
  164, 163,
  514, 164,
};
const uint8_t code_na037Codes[] = {
  0x80,
  0x45,
  0x00,
};
const struct IrCode code_na037Code = {
  freq_to_timerval(41667),
  11,		// # of pairs
  2,		// # of bits per index
  code_na037Times,
  code_na037Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na038Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na038Codes[] = {
  0xA4,
  0x10,
  0x40,
  0x00,
  0x82,
  0x09,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na038Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na038Codes
};
const uint16_t code_na039Times[] = {
  113, 101,
  688, 2707,
};
const uint8_t code_na039Codes[] = {
  0x11,
};
const struct IrCode code_na039Code = {
  freq_to_timerval(40000),
  4,		// # of pairs
  2,		// # of bits per index
  code_na039Times,
  code_na039Codes
};
const uint16_t code_na040Times[] = {
  113, 101,
  113, 201,
  113, 2707,
};
const uint8_t code_na040Codes[] = {
  0x06,
  0x04,
};
const struct IrCode code_na040Code = {
  freq_to_timerval(40000),
  8,		// # of pairs
  2,		// # of bits per index
  code_na040Times,
  code_na040Codes
};
const uint16_t code_na041Times[] = {
  58, 62,
  58, 2746,
  117, 62,
  242, 62,
};
const uint8_t code_na041Codes[] = {
  0xE2,
  0x20,
  0x80,
  0x78,
  0x88,
  0x20,
  0x00,
};
const struct IrCode code_na041Code = {
  freq_to_timerval(76923),
  26,		// # of pairs
  2,		// # of bits per index
  code_na041Times,
  code_na041Codes
};
const uint16_t code_na042Times[] = {
  54, 65,
  54, 170,
  54, 4099,
  54, 8668,
  899, 226,
  899, 421,
};
const uint8_t code_na042Codes[] = {
  0xA4,
  0x80,
  0x00,
  0x20,
  0x82,
  0x49,
  0x00,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na042Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na042Times,
  code_na042Codes
};
const uint16_t code_na043Times[] = {
  43, 120,
  43, 121,
  43, 3491,
  131, 45,
};
const uint8_t code_na043Codes[] = {
  0x15,
  0x75,
  0x56,
  0x55,
  0x75,
  0x54,
};
const struct IrCode code_na043Code = {
  freq_to_timerval(40000),
  24,		// # of pairs
  2,		// # of bits per index
  code_na043Times,
  code_na043Codes
};
const uint16_t code_na044Times[] = {
  51, 51,
  51, 160,
  51, 4096,
  51, 9513,
  431, 436,
  883, 219,
};
const uint8_t code_na044Codes[] = {
  0x84,
  0x90,
  0x00,
  0x00,
  0x02,
  0x49,
  0x20,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_na044Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na044Times,
  code_na044Codes
};
const uint16_t code_na045Times[] = {
  58, 53,
  58, 167,
  58, 4494,
  58, 9679,
  455, 449,
  456, 449,
};
const uint8_t code_na045Codes[] = {
  0x80,
  0x90,
  0x00,
  0x00,
  0x90,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_na045Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na045Times,
  code_na045Codes
};
const uint16_t code_na046Times[] = {
  51, 277,
  52, 53,
  52, 105,
  52, 277,
  52, 2527,
  52, 12809,
  103, 54,
};
const uint8_t code_na046Codes[] = {
  0x0B,
  0x12,
  0x63,
  0x44,
  0x92,
  0x6B,
  0x44,
  0x92,
  0x50,
};
const struct IrCode code_na046Code = {
  freq_to_timerval(29412),
  23,		// # of pairs
  3,		// # of bits per index
  code_na046Times,
  code_na046Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na047Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na047Codes[] = {
  0xA0,
  0x00,
  0x40,
  0x04,
  0x92,
  0x09,
  0x24,
  0x92,
  0x09,
  0x20,
  0x00,
  0x40,
  0x0A,
  0x38,
  0x00,
};
const struct IrCode code_na047Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na047Codes
};

/* Duplicate timing table, same as na044 !
 const uint16_t code_na048Times[] = {
 	51, 51,
 	51, 160,
 	51, 4096,
 	51, 9513,
 	431, 436,
 	883, 219,
 };
 */
const uint8_t code_na048Codes[] = {
  0x80,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x24,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na048Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na044Times,
  code_na048Codes
};
const uint16_t code_na049Times[] = {
  274, 854,
  274, 1986,
};
const uint8_t code_na049Codes[] = {
  0x14,
  0x11,
  0x40,
};
const struct IrCode code_na049Code = {
  freq_to_timerval(45455),
  11,		// # of pairs
  2,		// # of bits per index
  code_na049Times,
  code_na049Codes
};
const uint16_t code_na050Times[] = {
  80, 88,
  80, 254,
  80, 3750,
  359, 331,
};
const uint8_t code_na050Codes[] = {
  0xC0,
  0x00,
  0x01,
  0x55,
  0x55,
  0x52,
  0xC0,
  0x00,
  0x01,
  0x55,
  0x55,
  0x50,
};
const struct IrCode code_na050Code = {
  freq_to_timerval(55556),
  48,		// # of pairs
  2,		// # of bits per index
  code_na050Times,
  code_na050Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na051Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na051Codes[] = {
  0xA0,
  0x10,
  0x01,
  0x24,
  0x82,
  0x48,
  0x00,
  0x02,
  0x40,
  0x04,
  0x90,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na051Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na051Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na052Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na052Codes[] = {
  0xA4,
  0x90,
  0x48,
  0x00,
  0x02,
  0x01,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na052Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na052Codes
};
const uint16_t code_na053Times[] = {
  51, 232,
  51, 512,
  51, 792,
  51, 2883,
};
const uint8_t code_na053Codes[] = {
  0x22,
  0x21,
  0x40,
  0x1C,
  0x88,
  0x85,
  0x00,
  0x40,
};
const struct IrCode code_na053Code = {
  freq_to_timerval(55556),
  30,		// # of pairs
  2,		// # of bits per index
  code_na053Times,
  code_na053Codes
};

/* Duplicate timing table, same as na053 !
 const uint16_t code_na054Times[] = {
 	51, 232,
 	51, 512,
 	51, 792,
 	51, 2883,
 };
 */
const uint8_t code_na054Codes[] = {
  0x22,
  0x20,
  0x15,
  0x72,
  0x22,
  0x01,
  0x54,
};
const struct IrCode code_na054Code = {
  freq_to_timerval(55556),
  28,		// # of pairs
  2,		// # of bits per index
  code_na053Times,
  code_na054Codes
};
const uint16_t code_na055Times[] = {
  3, 10,
  3, 20,
  3, 30,
  3, 12778,
};
const uint8_t code_na055Codes[] = {
  0x81,
  0x51,
  0x14,
  0xB8,
  0x15,
  0x11,
  0x44,
};
const struct IrCode code_na055Code = {
  0,              // Non-pulsed code
  27,		// # of pairs
  2,		// # of bits per index
  code_na055Times,
  code_na055Codes
};
const uint16_t code_na056Times[] = {
  55, 193,
  57, 192,
  57, 384,
  58, 0,
};
const uint8_t code_na056Codes[] = {
  0x2A,
  0x57,
};
const struct IrCode code_na056Code = {
  freq_to_timerval(37175),
  8,		// # of pairs
  2,		// # of bits per index
  code_na056Times,
  code_na056Codes
};
const uint16_t code_na057Times[] = {
  45, 148,
  46, 148,
  46, 351,
  46, 2781,
};
const uint8_t code_na057Codes[] = {
  0x2A,
  0x5D,
  0xA9,
  0x60,
};
const struct IrCode code_na057Code = {
  freq_to_timerval(40000),
  14,		// # of pairs
  2,		// # of bits per index
  code_na057Times,
  code_na057Codes
};
const uint16_t code_na058Times[] = {
  22, 101,
  22, 219,
  23, 101,
  23, 219,
  31, 218,
};
const uint8_t code_na058Codes[] = {
  0x8D,
  0xA4,
  0x08,
  0x04,
  0x04,
  0x92,
  0x4C,
};
const struct IrCode code_na058Code = {
  freq_to_timerval(33333),
  18,		// # of pairs
  3,		// # of bits per index
  code_na058Times,
  code_na058Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na059Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na059Codes[] = {
  0xA4,
  0x12,
  0x09,
  0x00,
  0x80,
  0x40,
  0x20,
  0x10,
  0x40,
  0x04,
  0x82,
  0x09,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na059Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na059Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na060Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na060Codes[] = {
  0xA0,
  0x00,
  0x08,
  0x04,
  0x92,
  0x41,
  0x24,
  0x00,
  0x40,
  0x00,
  0x92,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na060Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na060Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na061Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na061Codes[] = {
  0xA0,
  0x00,
  0x08,
  0x24,
  0x92,
  0x41,
  0x04,
  0x82,
  0x00,
  0x00,
  0x10,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na061Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na061Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na062Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na062Codes[] = {
  0xA0,
  0x02,
  0x08,
  0x04,
  0x90,
  0x41,
  0x24,
  0x82,
  0x00,
  0x00,
  0x10,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na062Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na062Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na063Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na063Codes[] = {
  0xA4,
  0x92,
  0x49,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x48,
  0x00,
  0x00,
  0x01,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na063Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na063Codes
};

/* Duplicate timing table, same as na001 !
 const uint16_t code_na064Times[] = {
 	50, 100,
 	50, 200,
 	50, 800,
 	400, 400,
 };
 */
const uint8_t code_na064Codes[] = {
  0xC0,
  0x01,
  0x51,
  0x55,
  0x54,
  0x04,
  0x2C,
  0x00,
  0x15,
  0x15,
  0x55,
  0x40,
  0x40,
};
const struct IrCode code_na064Code = {
  freq_to_timerval(57143),
  52,		// # of pairs
  2,		// # of bits per index
  code_na001Times,
  code_na064Codes
};
const uint16_t code_na065Times[] = {
  48, 98,
  48, 197,
  98, 846,
  395, 392,
  1953, 392,
};
const uint8_t code_na065Codes[] = {
  0x84,
  0x92,
  0x01,
  0x24,
  0x12,
  0x00,
  0x04,
  0x80,
  0x08,
  0x09,
  0x92,
  0x48,
  0x04,
  0x90,
  0x48,
  0x00,
  0x12,
  0x00,
  0x20,
  0x26,
  0x49,
  0x20,
  0x12,
  0x41,
  0x20,
  0x00,
  0x48,
  0x00,
  0x80,
  0x80,
};
const struct IrCode code_na065Code = {
  freq_to_timerval(59172),
  78,		// # of pairs
  3,		// # of bits per index
  code_na065Times,
  code_na065Codes
};
const uint16_t code_na066Times[] = {
  38, 276,
  165, 154,
  415, 155,
  742, 154,
};
const uint8_t code_na066Codes[] = {
  0xC0,
  0x45,
  0x02,
  0x01,
  0x14,
  0x08,
  0x04,
  0x50,
  0x00,
};
const struct IrCode code_na066Code = {
  freq_to_timerval(38462),
  33,		// # of pairs
  2,		// # of bits per index
  code_na066Times,
  code_na066Codes
};

/* Duplicate timing table, same as na044 !
 const uint16_t code_na067Times[] = {
 	51, 51,
 	51, 160,
 	51, 4096,
 	51, 9513,
 	431, 436,
 	883, 219,
 };
 */
const uint8_t code_na067Codes[] = {
  0x80,
  0x02,
  0x49,
  0x24,
  0x90,
  0x00,
  0x00,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na067Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na044Times,
  code_na067Codes
};
const uint16_t code_na068Times[] = {
  43, 121,
  43, 9437,
  130, 45,
  131, 45,
};
const uint8_t code_na068Codes[] = {
  0x8C,
  0x30,
  0x0D,
  0xCC,
  0x30,
  0x0C,
};
const struct IrCode code_na068Code = {
  freq_to_timerval(40000),
  24,		// # of pairs
  2,		// # of bits per index
  code_na068Times,
  code_na068Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na069Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na069Codes[] = {
  0xA0,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x24,
  0x82,
  0x00,
  0x00,
  0x10,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na069Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na069Codes
};
const uint16_t code_na070Times[] = {
  27, 76,
  27, 182,
  27, 183,
  27, 3199,
};
const uint8_t code_na070Codes[] = {
  0x40,
  0x02,
  0x08,
  0xA2,
  0xE0,
  0x00,
  0x82,
  0x28,
  0x40,
};
const struct IrCode code_na070Code = {
  freq_to_timerval(38462),
  33,		// # of pairs
  2,		// # of bits per index
  code_na070Times,
  code_na070Codes
};
const uint16_t code_na071Times[] = {
  37, 181,
  37, 272,
};
const uint8_t code_na071Codes[] = {
  0x11,
  0x40,
};
const struct IrCode code_na071Code = {
  freq_to_timerval(55556),
  8,		// # of pairs
  2,		// # of bits per index
  code_na071Times,
  code_na071Codes
};

/* Duplicate timing table, same as na042 !
 const uint16_t code_na072Times[] = {
 	54, 65,
 	54, 170,
 	54, 4099,
 	54, 8668,
 	899, 226,
 	899, 421,
 };
 */
const uint8_t code_na072Codes[] = {
  0xA0,
  0x90,
  0x00,
  0x00,
  0x90,
  0x00,
  0x00,
  0x10,
  0x40,
  0x04,
  0x82,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na072Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na042Times,
  code_na072Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na073Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na073Codes[] = {
  0xA0,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x00,
  0x00,
  0x00,
  0x24,
  0x92,
  0x49,
  0x0A,
  0x38,
  0x00,
};
const struct IrCode code_na073Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na073Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na074Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na074Codes[] = {
  0xA4,
  0x00,
  0x41,
  0x00,
  0x92,
  0x08,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na074Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na074Codes
};
const uint16_t code_na075Times[] = {
  51, 98,
  51, 194,
  102, 931,
  390, 390,
  390, 391,
};
const uint8_t code_na075Codes[] = {
  0x60,
  0x00,
  0x01,
  0x04,
  0x10,
  0x49,
  0x24,
  0x82,
  0x08,
  0x2A,
  0x00,
  0x00,
  0x04,
  0x10,
  0x41,
  0x24,
  0x92,
  0x08,
  0x20,
  0xA0,
};
const struct IrCode code_na075Code = {
  freq_to_timerval(41667),
  52,		// # of pairs
  3,		// # of bits per index
  code_na075Times,
  code_na075Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na076Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na076Codes[] = {
  0xA0,
  0x92,
  0x09,
  0x04,
  0x00,
  0x40,
  0x20,
  0x10,
  0x40,
  0x04,
  0x82,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na076Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na076Codes
};

/* Duplicate timing table, same as na031 !
 const uint16_t code_na077Times[] = {
 	88, 89,
 	88, 90,
 	88, 179,
 	88, 8977,
 	177, 90,
 };
 */
const uint8_t code_na077Codes[] = {
  0x10,
  0xA2,
  0x62,
  0x31,
  0x98,
  0x51,
  0x31,
  0x18,
  0x00,
};
const struct IrCode code_na077Code = {
  freq_to_timerval(35714),
  22,		// # of pairs
  3,		// # of bits per index
  code_na031Times,
  code_na077Codes
};
const uint16_t code_na078Times[] = {
  40, 275,
  160, 154,
  480, 155,
};
const uint8_t code_na078Codes[] = {
  0x80,
  0x45,
  0x04,
  0x01,
  0x14,
  0x10,
  0x04,
  0x50,
  0x40,
};
const struct IrCode code_na078Code = {
  freq_to_timerval(38462),
  34,		// # of pairs
  2,		// # of bits per index
  code_na078Times,
  code_na078Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na079Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na079Codes[] = {
  0xA0,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x04,
  0x90,
  0x08,
  0x20,
  0x02,
  0x41,
  0x0A,
  0x38,
  0x00,
};
const struct IrCode code_na079Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na079Codes
};

/* Duplicate timing table, same as na055 !
 const uint16_t code_na080Times[] = {
 	3, 10,
 	3, 20,
 	3, 30,
 	3, 12778,
 };
 */
const uint8_t code_na080Codes[] = {
  0x81,
  0x50,
  0x40,
  0xB8,
  0x15,
  0x04,
  0x08,
};
const struct IrCode code_na080Code = {
  0,              // Non-pulsed code
  27,		// # of pairs
  2,		// # of bits per index
  code_na055Times,
  code_na080Codes
};
const uint16_t code_na081Times[] = {
  48, 52,
  48, 409,
  48, 504,
  48, 9978,
};
const uint8_t code_na081Codes[] = {
  0x18,
  0x46,
  0x18,
  0x68,
  0x47,
  0x18,
  0x46,
  0x18,
  0x68,
  0x44,
};
const struct IrCode code_na081Code = {
  freq_to_timerval(40000),
  40,		// # of pairs
  2,		// # of bits per index
  code_na081Times,
  code_na081Codes
};
const uint16_t code_na082Times[] = {
  88, 89,
  88, 90,
  88, 179,
  88, 8888,
  177, 90,
  177, 179,
};
const uint8_t code_na082Codes[] = {
  0x0A,
  0x12,
  0x49,
  0x2A,
  0xB2,
  0xA1,
  0x24,
  0x92,
  0xA8,
};
const struct IrCode code_na082Code = {
  freq_to_timerval(35714),
  24,		// # of pairs
  3,		// # of bits per index
  code_na082Times,
  code_na082Codes
};

/* Duplicate timing table, same as na031 !
 const uint16_t code_na083Times[] = {
 	88, 89,
 	88, 90,
 	88, 179,
 	88, 8977,
 	177, 90,
 };
 */
const uint8_t code_na083Codes[] = {
  0x10,
  0x92,
  0x49,
  0x46,
  0x33,
  0x09,
  0x24,
  0x94,
  0x60,
};
const struct IrCode code_na083Code = {
  freq_to_timerval(35714),
  24,		// # of pairs
  3,		// # of bits per index
  code_na031Times,
  code_na083Codes
};

const uint16_t code_na084Times[] = {
  41, 43,
  41, 128,
  41, 7476,
  336, 171,
  338, 169,
};
const uint8_t code_na084Codes[] = {
  0x60,
  0x80,
  0x00,
  0x00,
  0x00,
  0x08,
  0x00,
  0x00,
  0x40,
  0x20,
  0x00,
  0x00,
  0x04,
  0x12,
  0x48,
  0x04,
  0x12,
  0x08,
  0x2A,
  0x02,
  0x00,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x01,
  0x00,
  0x80,
  0x00,
  0x00,
  0x10,
  0x49,
  0x20,
  0x10,
  0x48,
  0x20,
  0x80,
};
const struct IrCode code_na084Code = {
  freq_to_timerval(37037),
  100,		// # of pairs
  3,		// # of bits per index
  code_na084Times,
  code_na084Codes
};
const uint16_t code_na085Times[] = {
  55, 60,
  55, 165,
  55, 2284,
  445, 437,
  448, 436,
};
const uint8_t code_na085Codes[] = {
  0x64,
  0x00,
  0x00,
  0x00,
  0x00,
  0x40,
  0x00,
  0x80,
  0xA1,
  0x00,
  0x00,
  0x00,
  0x00,
  0x10,
  0x00,
  0x20,
  0x10,
};
const struct IrCode code_na085Code = {
  freq_to_timerval(38462),
  44,		// # of pairs
  3,		// # of bits per index
  code_na085Times,
  code_na085Codes
};
const uint16_t code_na086Times[] = {
  42, 46,
  42, 126,
  42, 6989,
  347, 176,
  347, 177,
};
const uint8_t code_na086Codes[] = {
  0x60,
  0x82,
  0x08,
  0x20,
  0x82,
  0x41,
  0x04,
  0x92,
  0x00,
  0x20,
  0x80,
  0x40,
  0x00,
  0x90,
  0x40,
  0x04,
  0x00,
  0x41,
  0x2A,
  0x02,
  0x08,
  0x20,
  0x82,
  0x09,
  0x04,
  0x12,
  0x48,
  0x00,
  0x82,
  0x01,
  0x00,
  0x02,
  0x41,
  0x00,
  0x10,
  0x01,
  0x04,
  0x80,
};
const struct IrCode code_na086Code = {
  freq_to_timerval(37175),
  100,		// # of pairs
  3,		// # of bits per index
  code_na086Times,
  code_na086Codes
};
const uint16_t code_na087Times[] = {
  56, 69,
  56, 174,
  56, 4165,
  56, 9585,
  880, 222,
  880, 435,
};
const uint8_t code_na087Codes[] = {
  0xA0,
  0x02,
  0x40,
  0x04,
  0x90,
  0x09,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na087Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na087Times,
  code_na087Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na088Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na088Codes[] = {
  0x80,
  0x00,
  0x40,
  0x04,
  0x12,
  0x08,
  0x04,
  0x92,
  0x40,
  0x00,
  0x00,
  0x09,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na088Code = {
  freq_to_timerval(38610),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na088Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na089Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na089Codes[] = {
  0xA0,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na089Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na089Codes
};
const uint16_t code_na090Times[] = {
  88, 90,
  88, 91,
  88, 181,
  88, 8976,
  177, 91,
  177, 181,
};
const uint8_t code_na090Codes[] = {
  0x10,
  0xAB,
  0x11,
  0x8C,
  0xC2,
  0xAC,
  0x46,
  0x00,
};
const struct IrCode code_na090Code = {
  freq_to_timerval(35714),
  20,		// # of pairs
  3,		// # of bits per index
  code_na090Times,
  code_na090Codes
};
const uint16_t code_na091Times[] = {
  48, 100,
  48, 200,
  48, 1050,
  400, 400,
};
const uint8_t code_na091Codes[] = {
  0xD5,
  0x41,
  0x51,
  0x40,
  0x14,
  0x04,
  0x2D,
  0x54,
  0x15,
  0x14,
  0x01,
  0x40,
  0x41,
};
const struct IrCode code_na091Code = {
  freq_to_timerval(58824),
  52,		// # of pairs
  2,		// # of bits per index
  code_na091Times,
  code_na091Codes
};
const uint16_t code_na092Times[] = {
  54, 56,
  54, 170,
  54, 4927,
  451, 447,
};
const uint8_t code_na092Codes[] = {
  0xD1,
  0x00,
  0x11,
  0x00,
  0x04,
  0x00,
  0x11,
  0x55,
  0x6D,
  0x10,
  0x01,
  0x10,
  0x00,
  0x40,
  0x01,
  0x15,
  0x55,
};
const struct IrCode code_na092Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  2,		// # of bits per index
  code_na092Times,
  code_na092Codes
};
const uint16_t code_na093Times[] = {
  55, 57,
  55, 167,
  55, 4400,
  895, 448,
  897, 447,
};
const uint8_t code_na093Codes[] = {
  0x60,
  0x90,
  0x00,
  0x20,
  0x80,
  0x00,
  0x04,
  0x02,
  0x01,
  0x00,
  0x90,
  0x48,
  0x2A,
  0x02,
  0x40,
  0x00,
  0x82,
  0x00,
  0x00,
  0x10,
  0x08,
  0x04,
  0x02,
  0x41,
  0x20,
  0x80,
};
const struct IrCode code_na093Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na093Times,
  code_na093Codes
};

/* Duplicate timing table, same as na005 !
 const uint16_t code_na094Times[] = {
 	88, 90,
 	88, 91,
 	88, 181,
 	88, 8976,
 	177, 91,
 };
 */
const uint8_t code_na094Codes[] = {
  0x10,
  0x94,
  0x62,
  0x31,
  0x98,
  0x4A,
  0x31,
  0x18,
  0x00,
};
const struct IrCode code_na094Code = {
  freq_to_timerval(35714),
  22,		// # of pairs
  3,		// # of bits per index
  code_na005Times,
  code_na094Codes
};
const uint16_t code_na095Times[] = {
  56, 58,
  56, 174,
  56, 4549,
  56, 9448,
  440, 446,
};
const uint8_t code_na095Codes[] = {
  0x80,
  0x02,
  0x00,
  0x00,
  0x02,
  0x00,
  0x04,
  0x82,
  0x00,
  0x00,
  0x10,
  0x49,
  0x2A,
  0x17,
  0x08,
};
const struct IrCode code_na095Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na095Times,
  code_na095Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na096Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na096Codes[] = {
  0x80,
  0x80,
  0x40,
  0x04,
  0x92,
  0x49,
  0x20,
  0x92,
  0x00,
  0x04,
  0x00,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na096Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na096Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na097Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na097Codes[] = {
  0x84,
  0x80,
  0x00,
  0x24,
  0x10,
  0x41,
  0x00,
  0x80,
  0x01,
  0x24,
  0x12,
  0x48,
  0x0A,
  0xBA,
  0x40,
};
const struct IrCode code_na097Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na097Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na098Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na098Codes[] = {
  0xA0,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x24,
  0x00,
  0x41,
  0x00,
  0x92,
  0x08,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na098Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na098Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na099Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na099Codes[] = {
  0x80,
  0x00,
  0x00,
  0x04,
  0x12,
  0x48,
  0x24,
  0x00,
  0x00,
  0x00,
  0x92,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na099Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na099Codes
};
const uint16_t code_na100Times[] = {
  43, 171,
  45, 60,
  45, 170,
  54, 2301,
};
const uint8_t code_na100Codes[] = {
  0x29,
  0x59,
  0x65,
  0x55,
  0xEA,
  0x56,
  0x59,
  0x55,
  0x70,
};
const struct IrCode code_na100Code = {
  freq_to_timerval(35842),
  34,		// # of pairs
  2,		// # of bits per index
  code_na100Times,
  code_na100Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na101Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na101Codes[] = {
  0xA0,
  0x00,
  0x09,
  0x04,
  0x92,
  0x40,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na101Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na101Codes
};
const uint16_t code_na102Times[] = {
  86, 87,
  86, 258,
  86, 3338,
  346, 348,
  348, 347,
};
const uint8_t code_na102Codes[] = {
  0x64,
  0x02,
  0x08,
  0x00,
  0x02,
  0x09,
  0x04,
  0x12,
  0x49,
  0x0A,
  0x10,
  0x08,
  0x20,
  0x00,
  0x08,
  0x24,
  0x10,
  0x49,
  0x24,
  0x10,
};
const struct IrCode code_na102Code = {
  freq_to_timerval(40000),
  52,		// # of pairs
  3,		// # of bits per index
  code_na102Times,
  code_na102Codes
};

/* Duplicate timing table, same as na045 !
 const uint16_t code_na103Times[] = {
 	58, 53,
 	58, 167,
 	58, 4494,
 	58, 9679,
 	455, 449,
 	456, 449,
 };
 */
const uint8_t code_na103Codes[] = {
  0x80,
  0x02,
  0x00,
  0x00,
  0x02,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_na103Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na045Times,
  code_na103Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na104Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na104Codes[] = {
  0xA4,
  0x00,
  0x49,
  0x00,
  0x92,
  0x00,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na104Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na104Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na105Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na105Codes[] = {
  0xA4,
  0x80,
  0x00,
  0x20,
  0x12,
  0x49,
  0x04,
  0x92,
  0x49,
  0x20,
  0x00,
  0x00,
  0x0A,
  0x38,
  0x40,
};
const struct IrCode code_na105Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na105Codes
};

/* Duplicate timing table, same as na044 !
 const uint16_t code_na106Times[] = {
 	51, 51,
 	51, 160,
 	51, 4096,
 	51, 9513,
 	431, 436,
 	883, 219,
 };
 */
const uint8_t code_na106Codes[] = {
  0x80,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x24,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na106Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na044Times,
  code_na106Codes
};

/* Duplicate timing table, same as na045 !
 const uint16_t code_na107Times[] = {
 	58, 53,
 	58, 167,
 	58, 4494,
 	58, 9679,
 	455, 449,
 	456, 449,
 };
 */
const uint8_t code_na107Codes[] = {
  0x80,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_na107Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na045Times,
  code_na107Codes
};

/* Duplicate timing table, same as na045 !
 const uint16_t code_na108Times[] = {
 	58, 53,
 	58, 167,
 	58, 4494,
 	58, 9679,
 	455, 449,
 	456, 449,
 };
 */
const uint8_t code_na108Codes[] = {
  0x80,
  0x90,
  0x40,
  0x00,
  0x90,
  0x40,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_na108Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na045Times,
  code_na108Codes
};
const uint16_t code_na109Times[] = {
  58, 61,
  58, 211,
  58, 9582,
  73, 4164,
  883, 211,
  1050, 494,
};
const uint8_t code_na109Codes[] = {
  0xA0,
  0x00,
  0x08,
  0x24,
  0x92,
  0x41,
  0x00,
  0x82,
  0x00,
  0x04,
  0x10,
  0x49,
  0x2E,
  0x28,
  0x00,
};
const struct IrCode code_na109Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na109Times,
  code_na109Codes
};


/* Duplicate timing table, same as na017 !
 const uint16_t code_na110Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na110Codes[] = {
  0xA4,
  0x80,
  0x00,
  0x20,
  0x12,
  0x49,
  0x00,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na110Code = {
  freq_to_timerval(40161),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na110Codes
};

/* Duplicate timing table, same as na044 !
 const uint16_t code_na111Times[] = {
 	51, 51,
 	51, 160,
 	51, 4096,
 	51, 9513,
 	431, 436,
 	883, 219,
 };
 */
const uint8_t code_na111Codes[] = {
  0x84,
  0x92,
  0x49,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_na111Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na044Times,
  code_na111Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na112Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na112Codes[] = {
  0xA4,
  0x00,
  0x00,
  0x00,
  0x92,
  0x49,
  0x24,
  0x00,
  0x00,
  0x00,
  0x92,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na112Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na112Codes
};
const uint16_t code_na113Times[] = {
  56, 54,
  56, 166,
  56, 3945,
  896, 442,
  896, 443,
};
const uint8_t code_na113Codes[] = {
  0x60,
  0x00,
  0x00,
  0x20,
  0x02,
  0x09,
  0x04,
  0x02,
  0x01,
  0x00,
  0x90,
  0x48,
  0x2A,
  0x00,
  0x00,
  0x00,
  0x80,
  0x08,
  0x24,
  0x10,
  0x08,
  0x04,
  0x02,
  0x41,
  0x20,
  0x80,
};
const struct IrCode code_na113Code = {
  freq_to_timerval(40000),
  68,		// # of pairs
  3,		// # of bits per index
  code_na113Times,
  code_na113Codes
};
const uint16_t code_na114Times[] = {
  44, 50,
  44, 147,
  44, 447,
  44, 2236,
  791, 398,
  793, 397,
};
const uint8_t code_na114Codes[] = {
  0x84,
  0x10,
  0x40,
  0x08,
  0x82,
  0x08,
  0x01,
  0xD2,
  0x08,
  0x20,
  0x04,
  0x41,
  0x04,
  0x00,
  0x40,
};
const struct IrCode code_na114Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na114Times,
  code_na114Codes
};


const uint16_t code_na115Times[] = {
  81, 86,
  81, 296,
  81, 3349,
  328, 331,
  329, 331,
};
const uint8_t code_na115Codes[] = {
  0x60,
  0x82,
  0x00,
  0x20,
  0x80,
  0x41,
  0x04,
  0x90,
  0x41,
  0x2A,
  0x02,
  0x08,
  0x00,
  0x82,
  0x01,
  0x04,
  0x12,
  0x41,
  0x04,
  0x80,
};
const struct IrCode code_na115Code = {
  freq_to_timerval(40000),
  52,		// # of pairs
  3,		// # of bits per index
  code_na115Times,
  code_na115Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na116Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na116Codes[] = {
  0xA0,
  0x00,
  0x40,
  0x04,
  0x92,
  0x09,
  0x24,
  0x00,
  0x40,
  0x00,
  0x92,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na116Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na116Codes
};
const uint16_t code_na117Times[] = {
  49, 54,
  49, 158,
  49, 420,
  49, 2446,
  819, 420,
  821, 419,
};
const uint8_t code_na117Codes[] = {
  0x84,
  0x00,
  0x00,
  0x08,
  0x12,
  0x40,
  0x01,
  0xD2,
  0x00,
  0x00,
  0x04,
  0x09,
  0x20,
  0x00,
  0x40,
};
const struct IrCode code_na117Code = {
  freq_to_timerval(41667),
  38,		// # of pairs
  3,		// # of bits per index
  code_na117Times,
  code_na117Codes
};

/* Duplicate timing table, same as na044 !
 const uint16_t code_na118Times[] = {
 	51, 51,
 	51, 160,
 	51, 4096,
 	51, 9513,
 	431, 436,
 	883, 219,
 };
 */
const uint8_t code_na118Codes[] = {
  0x84,
  0x90,
  0x49,
  0x20,
  0x02,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_na118Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na044Times,
  code_na118Codes
};
const uint16_t code_na119Times[] = {
  55, 63,
  55, 171,
  55, 4094,
  55, 9508,
  881, 219,
  881, 438,
};
const uint8_t code_na119Codes[] = {
  0xA0,
  0x10,
  0x00,
  0x04,
  0x82,
  0x49,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na119Code = {
  freq_to_timerval(55556),
  38,		// # of pairs
  3,		// # of bits per index
  code_na119Times,
  code_na119Codes
};


/* Duplicate timing table, same as na017 !
 const uint16_t code_na120Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na120Codes[] = {
  0xA0,
  0x12,
  0x00,
  0x04,
  0x80,
  0x49,
  0x24,
  0x92,
  0x40,
  0x00,
  0x00,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na120Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na120Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na121Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na121Codes[] = {
  0xA0,
  0x00,
  0x40,
  0x04,
  0x92,
  0x09,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na121Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na121Codes
};
const uint16_t code_na122Times[] = {
  80, 95,
  80, 249,
  80, 3867,
  81, 0,
  329, 322,
};
const uint8_t code_na122Codes[] = {
  0x80,
  0x00,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0x90,
  0x0A,
  0x80,
  0x00,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0x90,
  0x0B,
};
const struct IrCode code_na122Code = {
  freq_to_timerval(52632),
  48,		// # of pairs
  3,		// # of bits per index
  code_na122Times,
  code_na122Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na123Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na123Codes[] = {
  0xA0,
  0x02,
  0x48,
  0x04,
  0x90,
  0x01,
  0x20,
  0x12,
  0x40,
  0x04,
  0x80,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na123Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na123Codes
};
const uint16_t code_na124Times[] = {
  54, 56,
  54, 151,
  54, 4092,
  54, 8677,
  900, 421,
  901, 226,
};
const uint8_t code_na124Codes[] = {
  0x80,
  0x00,
  0x48,
  0x04,
  0x92,
  0x01,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na124Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na124Times,
  code_na124Codes
};

/* Duplicate timing table, same as na119 !
 const uint16_t code_na125Times[] = {
 	55, 63,
 	55, 171,
 	55, 4094,
 	55, 9508,
 	881, 219,
 	881, 438,
 };
 */
const uint8_t code_na125Codes[] = {
  0xA0,
  0x02,
  0x48,
  0x04,
  0x90,
  0x01,
  0x20,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na125Code = {
  freq_to_timerval(55556),
  38,		// # of pairs
  3,		// # of bits per index
  code_na119Times,
  code_na125Codes
};


/* Duplicate timing table, same as na017 !
 const uint16_t code_na126Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na126Codes[] = {
  0xA4,
  0x10,
  0x00,
  0x20,
  0x82,
  0x49,
  0x00,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na126Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na126Codes
};
const uint16_t code_na127Times[] = {
  114, 100,
  115, 100,
  115, 200,
  115, 2706,
};
const uint8_t code_na127Codes[] = {
  0x1B,
  0x59,
};
const struct IrCode code_na127Code = {
  freq_to_timerval(25641),
  8,		// # of pairs
  2,		// # of bits per index
  code_na127Times,
  code_na127Codes
};

/* Duplicate timing table, same as na102 !
 const uint16_t code_na128Times[] = {
 	86, 87,
 	86, 258,
 	86, 3338,
 	346, 348,
 	348, 347,
 };
 */
const uint8_t code_na128Codes[] = {
  0x60,
  0x02,
  0x08,
  0x00,
  0x02,
  0x49,
  0x04,
  0x12,
  0x49,
  0x0A,
  0x00,
  0x08,
  0x20,
  0x00,
  0x09,
  0x24,
  0x10,
  0x49,
  0x24,
  0x00,
};
const struct IrCode code_na128Code = {
  freq_to_timerval(40000),
  52,		// # of pairs
  3,		// # of bits per index
  code_na102Times,
  code_na128Codes
};

/* Duplicate timing table, same as na017 !
 const uint16_t code_na129Times[] = {
 	56, 57,
 	56, 175,
 	56, 4150,
 	56, 9499,
 	898, 227,
 	898, 449,
 };
 */
const uint8_t code_na129Codes[] = {
  0xA4,
  0x92,
  0x49,
  0x20,
  0x00,
  0x00,
  0x00,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x38,
  0x40,
};
const struct IrCode code_na129Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na017Times,
  code_na129Codes
};
const uint16_t code_na130Times[] = {
  88, 90,
  88, 258,
  88, 2247,
  358, 349,
  358, 350,
};
const uint8_t code_na130Codes[] = {
  0x64,
  0x00,
  0x08,
  0x24,
  0x82,
  0x09,
  0x24,
  0x10,
  0x01,
  0x0A,
  0x10,
  0x00,
  0x20,
  0x92,
  0x08,
  0x24,
  0x90,
  0x40,
  0x04,
  0x10,
};
const struct IrCode code_na130Code = {
  freq_to_timerval(37037),
  52,		// # of pairs
  3,		// # of bits per index
  code_na130Times,
  code_na130Codes
};

/* Duplicate timing table, same as na042 !
 const uint16_t code_na131Times[] = {
 	54, 65,
 	54, 170,
 	54, 4099,
 	54, 8668,
 	899, 226,
 	899, 421,
 };
 */
const uint8_t code_na131Codes[] = {
  0xA0,
  0x10,
  0x40,
  0x04,
  0x82,
  0x09,
  0x24,
  0x82,
  0x40,
  0x00,
  0x10,
  0x09,
  0x2A,
  0x38,
  0x00,
};
const struct IrCode code_na131Code = {
  freq_to_timerval(40000),
  38,		// # of pairs
  3,		// # of bits per index
  code_na042Times,
  code_na131Codes
};
const uint16_t code_na132Times[] = {
  28, 106,
  28, 238,
  28, 370,
  28, 1173,
};
const uint8_t code_na132Codes[] = {
  0x22,
  0x20,
  0x00,
  0x17,
  0x22,
  0x20,
  0x00,
  0x14,
};
const struct IrCode code_na132Code = {
  freq_to_timerval(83333),
  32,		// # of pairs
  2,		// # of bits per index
  code_na132Times,
  code_na132Codes
};
const uint16_t code_na133Times[] = {
  13, 741,
  15, 489,
  15, 740,
  17, 4641,
  18, 0,
};
const uint8_t code_na133Codes[] = {
  0x09,
  0x24,
  0x49,
  0x48,
  0xB4,
  0x92,
  0x44,
  0x94,
  0x8C,
};
const struct IrCode code_na133Code = {
  freq_to_timerval(41667),
  24,		// # of pairs
  3,		// # of bits per index
  code_na133Times,
  code_na133Codes
};

/* Duplicate timing table, same as na113 !
 const uint16_t code_na134Times[] = {
 	56, 54,
 	56, 166,
 	56, 3945,
 	896, 442,
 	896, 443,
 };
 */
const uint8_t code_na134Codes[] = {
  0x60,
  0x90,
  0x00,
  0x24,
  0x10,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x02,
  0x40,
  0x00,
  0x90,
  0x40,
  0x00,
  0x12,
  0x48,
  0x00,
  0x00,
  0x01,
  0x24,
  0x80,
};
const struct IrCode code_na134Code = {
  freq_to_timerval(40000),
  68,		// # of pairs
  3,		// # of bits per index
  code_na113Times,
  code_na134Codes
};
const uint16_t code_na135Times[] = {
  53, 59,
  53, 171,
  53, 2301,
  892, 450,
  895, 448,
};
const uint8_t code_na135Codes[] = {
  0x60,
  0x12,
  0x49,
  0x00,
  0x00,
  0x09,
  0x00,
  0x00,
  0x49,
  0x24,
  0x80,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0xA8,
  0x01,
  0x24,
  0x90,
  0x00,
  0x00,
  0x90,
  0x00,
  0x04,
  0x92,
  0x48,
  0x00,
  0x00,
  0x01,
  0x24,
  0x92,
  0x48,
};
const struct IrCode code_na135Code = {
  freq_to_timerval(38462),
  88,		// # of pairs
  3,		// # of bits per index
  code_na135Times,
  code_na135Codes
};
const uint16_t code_na136Times[] = {
  53, 59,
  53, 171,
  53, 2301,
  55, 0,
  892, 450,
  895, 448,
};
const uint8_t code_na136Codes[] = {
  0x84,
  0x82,
  0x49,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x49,
  0x24,
  0x80,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0xAA,
  0x48,
  0x24,
  0x90,
  0x00,
  0x00,
  0x02,
  0x00,
  0x04,
  0x92,
  0x48,
  0x00,
  0x00,
  0x01,
  0x24,
  0x92,
  0x4B,
};
const struct IrCode code_na136Code = {
  freq_to_timerval(38610),
  88,		// # of pairs
  3,		// # of bits per index
  code_na136Times,
  code_na136Codes
};




const uint16_t code_na137Times[] = {
  43, 47,
  43, 91,
  43, 8324,
  88, 47,
  133, 133,
  264, 90,
  264, 91,
};
const uint8_t code_na137Codes[] = {
  0xA4,
  0x08,
  0x00,
  0x00,
  0x00,
  0x00,
  0x64,
  0x2C,
  0x40,
  0x80,
  0x00,
  0x00,
  0x00,
  0x06,
  0x41,
};
const struct IrCode code_na137Code = {
  freq_to_timerval(35714),
  40,		// # of pairs
  3,		// # of bits per index
  code_na137Times,
  code_na137Codes
};
const uint16_t code_na138Times[] = {
  47, 265,
  51, 54,
  51, 108,
  51, 263,
  51, 2053,
  51, 11647,
  100, 109,
};
const uint8_t code_na138Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x35,
  0x89,
  0x24,
  0x9A,
  0xD6,
  0x24,
  0x92,
  0x48,
};
const struct IrCode code_na138Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_na138Times,
  code_na138Codes
};
const uint16_t code_na139Times[] = {
  43, 206,
  46, 204,
  46, 456,
  46, 3488,
};
const uint8_t code_na139Codes[] = {
  0x1A,
  0x56,
  0xA6,
  0xD6,
  0x95,
  0xA9,
  0x90,
};
const struct IrCode code_na139Code = {
  freq_to_timerval(33333),
  26,		// # of pairs
  2,		// # of bits per index
  code_na139Times,
  code_na139Codes
};

/* Duplicate timing table, same as na000 !
 const uint16_t code_na140Times[] = {
 	58, 60,
 	58, 2687,
 	118, 60,
 	237, 60,
 	238, 60,
 };
 */
/*
const uint8_t code_na140Codes[] = {
 	0x68,
 	0x20,
 	0x80,
 	0x40,
 	0x03,
 	0x10,
 	0x41,
 	0x00,
 	0x80,
 	0x00,
 };
 const struct IrCode code_na140Code = {
 	freq_to_timerval(38462),
 	26,		// # of pairs
 	3,		// # of bits per index
 	code_na000Times,
 	code_na140Codes
 };// Duplicate IR Code - same as na000
 */

const uint16_t code_na141Times[] = {
  44, 45,
  44, 131,
  44, 7462,
  346, 176,
  346, 178,
};
const uint8_t code_na141Codes[] = {
  0x60,
  0x80,
  0x00,
  0x00,
  0x00,
  0x08,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x00,
  0x04,
  0x12,
  0x48,
  0x04,
  0x12,
  0x48,
  0x2A,
  0x02,
  0x00,
  0x00,
  0x00,
  0x00,
  0x20,
  0x00,
  0x00,
  0x00,
  0x80,
  0x00,
  0x00,
  0x10,
  0x49,
  0x20,
  0x10,
  0x49,
  0x20,
  0x80,
};
const struct IrCode code_na141Code = {
  freq_to_timerval(37037),
  100,		// # of pairs
  3,		// # of bits per index
  code_na141Times,
  code_na141Codes
};// Duplicate IR Code? Similar to NA002

const uint16_t code_na142Times[] = {
  24, 190,
  25, 80,
  25, 190,
  25, 4199,
  25, 4799,
};
const uint8_t code_na142Codes[] = {
  0x04,
  0x92,
  0x52,
  0x28,
  0x92,
  0x8C,
  0x44,
  0x92,
  0x89,
  0x45,
  0x24,
  0x53,
  0x44,
  0x92,
  0x52,
  0x28,
  0x92,
  0x8C,
  0x44,
  0x92,
  0x89,
  0x45,
  0x24,
  0x51,
};
const struct IrCode code_na142Code = {
  freq_to_timerval(38610),
  64,		// # of pairs
  3,		// # of bits per index
  code_na142Times,
  code_na142Codes
};
// This is actually power TOGGLE for Samsung TVs. Therefore followed later by new eu141, discrete OFF
const uint16_t code_na143Times[] = {
  53, 63,
  53, 172,
  53, 4472,
  54, 0,
  455, 468,
};
const uint8_t code_na143Codes[] = {
  0x84,
  0x90,
  0x00,
  0x04,
  0x90,
  0x00,
  0x00,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0x12,
  0x40,
  0x00,
  0x12,
  0x40,
  0x00,
  0x02,
  0x00,
  0x00,
  0x10,
  0x49,
  0x24,
  0xB0,
};
const struct IrCode code_na143Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na143Times,
  code_na143Codes
};
const uint16_t code_na144Times[] = {
  50, 54,
  50, 159,
  50, 2307,
  838, 422,
};
const uint8_t code_na144Codes[] = {
  0xD4,
  0x00,
  0x15,
  0x10,
  0x25,
  0x00,
  0x05,
  0x44,
  0x09,
  0x40,
  0x01,
  0x51,
  0x01,
};
const struct IrCode code_na144Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  2,		// # of bits per index
  code_na144Times,
  code_na144Codes
};// Duplicate IR Code? - Similar to NA010


/* Duplicate timing table, same as na004 !
 const uint16_t code_na145Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na145Codes[] = {
  0xA0,
  0x00,
  0x41,
  0x04,
  0x92,
  0x08,
  0x24,
  0x90,
  0x40,
  0x00,
  0x02,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na145Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na145Codes
};


/* Duplicate timing table, same as na005 !
 const uint16_t code_na146Times[] = {
 	88, 90,
 	88, 91,
 	88, 181,
 	88, 8976,
 	177, 91,
 };
 */
/*
const uint8_t code_na146Codes[] = {
 	0x10,
 	0x92,
 	0x49,
 	0x46,
 	0x33,
 	0x09,
 	0x24,
 	0x94,
 	0x60,
 };
 const struct IrCode code_na146Code = {
 	freq_to_timerval(35714),
 	24,		// # of pairs
 	3,		// # of bits per index
 	code_na005Times,
 	code_na146Codes
 };// Duplicate IR Code - same as na005
 */


/* Duplicate timing table, same as na004 !
 const uint16_t code_na147Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
/*
const uint8_t code_na147Codes[] = {
 	0xA0,
 	0x00,
 	0x01,
 	0x04,
 	0x92,
 	0x48,
 	0x20,
 	0x80,
 	0x40,
 	0x04,
 	0x12,
 	0x09,
 	0x2B,
 	0x3D,
 	0x00,
 };
 const struct IrCode code_na147Code = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na004Times,
 	code_na147Codes
 };// Duplicate IR Code - same as NA004
 */

/* Duplicate timing table, same as na009 !
 const uint16_t code_na148Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na148Codes[] = {
  0x84,
  0x00,
  0x48,
  0x04,
  0x02,
  0x01,
  0x04,
  0x80,
  0x09,
  0x00,
  0x12,
  0x40,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_na148Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na148Codes
};
const uint16_t code_na149Times[] = {
  46, 206,
  46, 459,
  46, 3447,
};
const uint8_t code_na149Codes[] = {
  0x05,
  0x01,
  0x51,
  0x81,
  0x40,
  0x54,
  0x40,
};
const struct IrCode code_na149Code = {
  freq_to_timerval(33445),
  26,		// # of pairs
  2,		// # of bits per index
  code_na149Times,
  code_na149Codes
};
const uint16_t code_na150Times[] = {
  53, 59,
  53, 171,
  53, 2302,
  895, 449,
};
const uint8_t code_na150Codes[] = {
  0xD4,
  0x55,
  0x00,
  0x00,
  0x40,
  0x15,
  0x54,
  0x00,
  0x01,
  0x55,
  0x56,
  0xD4,
  0x55,
  0x00,
  0x00,
  0x40,
  0x15,
  0x54,
  0x00,
  0x01,
  0x55,
  0x55,
};
const struct IrCode code_na150Code = {
  freq_to_timerval(38462),
  88,		// # of pairs
  2,		// # of bits per index
  code_na150Times,
  code_na150Codes
};

/* Duplicate timing table, same as na021 !
 const uint16_t code_na151Times[] = {
 	48, 52,
 	48, 160,
 	48, 400,
 	48, 2335,
 	799, 400,
 };
 */
/*
const uint8_t code_na151Codes[] = {
 	0x80,
 	0x10,
 	0x40,
 	0x08,
 	0x82,
 	0x08,
 	0x01,
 	0xC0,
 	0x08,
 	0x20,
 	0x04,
 	0x41,
 	0x04,
 	0x00,
 	0x00,
 };
 const struct IrCode code_na151Code = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na021Times,
 	code_na151Codes
 };// Duplicate IR Code - same as NA021
 */

const uint16_t code_na152Times[] = {
  53, 54,
  53, 156,
  53, 2542,
  851, 425,
  853, 424,
};
const uint8_t code_na152Codes[] = {
  0x60,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x00,
  0x12,
  0x40,
  0x04,
  0x80,
  0x09,
  0x2A,
  0x02,
  0x08,
  0x20,
  0x90,
  0x41,
  0x04,
  0x00,
  0x49,
  0x00,
  0x12,
  0x00,
  0x24,
  0xA8,
  0x08,
  0x20,
  0x82,
  0x41,
  0x04,
  0x10,
  0x01,
  0x24,
  0x00,
  0x48,
  0x00,
  0x92,
  0xA0,
  0x20,
  0x82,
  0x09,
  0x04,
  0x10,
  0x40,
  0x04,
  0x90,
  0x01,
  0x20,
  0x02,
  0x48,
};
const struct IrCode code_na152Code = {
  freq_to_timerval(38462),
  136,		// # of pairs
  3,		// # of bits per index
  code_na152Times,
  code_na152Codes
};// Duplicate IR Code? - Similar to NA018

const uint16_t code_na153Times[] = {
  28, 92,
  28, 213,
  28, 214,
  28, 2771,
};
const uint8_t code_na153Codes[] = {
  0x68,
  0x08,
  0x20,
  0x00,
  0xEA,
  0x02,
  0x08,
  0x00,
  0x10,
};
const struct IrCode code_na153Code = {
  freq_to_timerval(33333),
  34,		// # of pairs
  2,		// # of bits per index
  code_na153Times,
  code_na153Codes
};
const uint16_t code_na154Times[] = {
  15, 844,
  16, 557,
  16, 844,
  16, 5224,
};
const uint8_t code_na154Codes[] = {
  0x1A,
  0x9A,
  0x9B,
  0x9A,
  0x9A,
  0x99,
};
const struct IrCode code_na154Code = {
  freq_to_timerval(33333),
  24,		// # of pairs
  2,		// # of bits per index
  code_na154Times,
  code_na154Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na155Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na155Codes[] = {
  0xA0,
  0x02,
  0x48,
  0x04,
  0x90,
  0x01,
  0x20,
  0x12,
  0x40,
  0x04,
  0x80,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na155Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na155Codes
};
const uint16_t code_na156Times[] = {
  50, 54,
  50, 158,
  50, 418,
  50, 2443,
  843, 418,
};
const uint8_t code_na156Codes[] = {
  0x80,
  0x80,
  0x00,
  0x08,
  0x12,
  0x40,
  0x01,
  0xC0,
  0x40,
  0x00,
  0x04,
  0x09,
  0x20,
  0x00,
  0x00,
};
const struct IrCode code_na156Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na156Times,
  code_na156Codes
};
const uint16_t code_na157Times[] = {
  48, 301,
  48, 651,
  48, 1001,
  48, 3001,
};
const uint8_t code_na157Codes[] = {
  0x22,
  0x20,
  0x00,
  0x01,
  0xC8,
  0x88,
  0x00,
  0x00,
  0x40,
};
const struct IrCode code_na157Code = {
  freq_to_timerval(35714),
  34,		// # of pairs
  2,		// # of bits per index
  code_na157Times,
  code_na157Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na158Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na158Codes[] = {
  0x84,
  0x80,
  0x00,
  0x20,
  0x82,
  0x49,
  0x00,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_na158Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na158Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na159Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na159Codes[] = {
  0xA4,
  0x80,
  0x41,
  0x00,
  0x12,
  0x08,
  0x24,
  0x90,
  0x40,
  0x00,
  0x02,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na159Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na159Codes
};

/* Duplicate timing table, same as na022 !
 const uint16_t code_na160Times[] = {
 	53, 60,
 	53, 175,
 	53, 4463,
 	53, 9453,
 	892, 450,
 	895, 225,
 };
 */
/*
const uint8_t code_na160Codes[] = {
 	0x80,
 	0x02,
 	0x40,
 	0x00,
 	0x02,
 	0x40,
 	0x00,
 	0x00,
 	0x01,
 	0x24,
 	0x92,
 	0x48,
 	0x0A,
 	0xBA,
 	0x00,
 };
 const struct IrCode code_na160Code = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na022Times,
 	code_na160Codes
 };// Duplicate IR Code - Same as NA022
 */


/* Duplicate timing table, same as na004 !
 const uint16_t code_na161Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na161Codes[] = {
  0xA0,
  0x02,
  0x48,
  0x04,
  0x90,
  0x01,
  0x20,
  0x00,
  0x40,
  0x04,
  0x92,
  0x09,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na161Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na161Codes
};
const uint16_t code_na162Times[] = {
  49, 52,
  49, 102,
  49, 250,
  49, 252,
  49, 2377,
  49, 12009,
  100, 52,
  100, 102,
};
const uint8_t code_na162Codes[] = {
  0x47,
  0x00,
  0x23,
  0x3C,
  0x01,
  0x59,
  0xE0,
  0x04,
};
const struct IrCode code_na162Code = {
  freq_to_timerval(31250),
  21,		// # of pairs
  3,		// # of bits per index
  code_na162Times,
  code_na162Codes
};
const uint16_t code_na163Times[] = {
  14, 491,
  14, 743,
  14, 4926,
};
const uint8_t code_na163Codes[] = {
  0x55,
  0x40,
  0x42,
  0x55,
  0x40,
  0x41,
};
const struct IrCode code_na163Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na163Times,
  code_na163Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na164Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na164Codes[] = {
  0xA0,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x04,
  0x10,
  0x01,
  0x20,
  0x82,
  0x48,
  0x0B,
  0x3D,
  0x00,
};
const struct IrCode code_na164Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na164Codes
};
const uint16_t code_na165Times[] = {
  47, 267,
  50, 55,
  50, 110,
  50, 265,
  50, 2055,
  50, 12117,
  100, 57,
};
const uint8_t code_na165Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x34,
  0x72,
  0x24,
  0x9A,
  0xD1,
  0xC8,
  0x92,
  0x48,
};
const struct IrCode code_na165Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_na165Times,
  code_na165Codes
};
const uint16_t code_na166Times[] = {
  50, 50,
  50, 99,
  50, 251,
  50, 252,
  50, 1445,
  50, 11014,
  102, 49,
  102, 98,
};
const uint8_t code_na166Codes[] = {
  0x47,
  0x00,
  0x00,
  0x00,
  0x00,
  0x04,
  0x64,
  0x62,
  0x00,
  0xE0,
  0x00,
  0x2B,
  0x23,
  0x10,
  0x07,
  0x00,
  0x00,
  0x80,
};
const struct IrCode code_na166Code = {
  freq_to_timerval(34483),
  46,		// # of pairs
  3,		// # of bits per index
  code_na166Times,
  code_na166Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na167Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na167Codes[] = {
  0xA0,
  0x10,
  0x00,
  0x04,
  0x82,
  0x49,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na167Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na167Codes
};// Duplicate IR Code? - Smilar to NA020

const uint16_t code_na168Times[] = {
  53, 53,
  53, 160,
  53, 1697,
  838, 422,
};
const uint8_t code_na168Codes[] = {
  0xD5,
  0x50,
  0x15,
  0x11,
  0x65,
  0x54,
  0x05,
  0x44,
  0x59,
  0x55,
  0x01,
  0x51,
  0x15,
};
const struct IrCode code_na168Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  2,		// # of bits per index
  code_na168Times,
  code_na168Codes
};
const uint16_t code_na169Times[] = {
  49, 205,
  49, 206,
  49, 456,
  49, 3690,
};
const uint8_t code_na169Codes[] = {
  0x1A,
  0x56,
  0xA5,
  0xD6,
  0x95,
  0xA9,
  0x40,
};
const struct IrCode code_na169Code = {
  freq_to_timerval(33333),
  26,		// # of pairs
  2,		// # of bits per index
  code_na169Times,
  code_na169Codes
};
const uint16_t code_na170Times[] = {
  48, 150,
  50, 149,
  50, 347,
  50, 2936,
};
const uint8_t code_na170Codes[] = {
  0x2A,
  0x5D,
  0xA9,
  0x60,
};
const struct IrCode code_na170Code = {
  freq_to_timerval(38462),
  14,		// # of pairs
  2,		// # of bits per index
  code_na170Times,
  code_na170Codes
};


/* Duplicate timing table, same as na004 !
 const uint16_t code_na171Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na171Codes[] = {
  0xA0,
  0x02,
  0x40,
  0x04,
  0x90,
  0x09,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na171Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na171Codes
};

/* Duplicate timing table, same as na005 !
 const uint16_t code_na172Times[] = {
 	88, 90,
 	88, 91,
 	88, 181,
 	88, 8976,
 	177, 91,
 };
 */
/*
const uint8_t code_na172Codes[] = {
 	0x10,
 	0x92,
 	0x49,
 	0x46,
 	0x33,
 	0x09,
 	0x24,
 	0x94,
 	0x60,
 };
 const struct IrCode code_na172Code = {
 	freq_to_timerval(35714),
 	24,		// # of pairs
 	3,		// # of bits per index
 	code_na005Times,
 	code_na172Codes
 };// Duplicate IR Code - same as eu009!
 */

/* Duplicate timing table, same as na004 !
 const uint16_t code_na173Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na173Codes[] = {
  0xA4,
  0x00,
  0x49,
  0x00,
  0x92,
  0x00,
  0x20,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na173Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na173Codes
};
const uint16_t code_na174Times[] = {
  14, 491,
  14, 743,
  14, 5178,
};
const uint8_t code_na174Codes[] = {
  0x45,
  0x50,
  0x02,
  0x45,
  0x50,
  0x01,
};
const struct IrCode code_na174Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na174Times,
  code_na174Codes
};
const uint16_t code_na175Times[] = {
  3, 1002,
  3, 1495,
  3, 3059,
};
const uint8_t code_na175Codes[] = {
  0x05,
  0x60,
  0x54,
};
const struct IrCode code_na175Code = {
  0,              // Non-pulsed code
  11,		// # of pairs
  2,		// # of bits per index
  code_na175Times,
  code_na175Codes
};
const uint16_t code_na176Times[] = {
  13, 445,
  13, 674,
  13, 675,
  13, 4583,
};
const uint8_t code_na176Codes[] = {
  0x6A,
  0x82,
  0x83,
  0xAA,
  0x82,
  0x81,
};
const struct IrCode code_na176Code = {
  freq_to_timerval(40161),
  24,		// # of pairs
  2,		// # of bits per index
  code_na176Times,
  code_na176Codes
};
const uint16_t code_na177Times[] = {
  85, 89,
  85, 264,
  85, 3402,
  347, 350,
  348, 350,
};
const uint8_t code_na177Codes[] = {
  0x60,
  0x90,
  0x40,
  0x20,
  0x80,
  0x40,
  0x20,
  0x90,
  0x41,
  0x2A,
  0x02,
  0x41,
  0x00,
  0x82,
  0x01,
  0x00,
  0x82,
  0x41,
  0x04,
  0x80,
};
const struct IrCode code_na177Code = {
  freq_to_timerval(35714),
  52,		// # of pairs
  3,		// # of bits per index
  code_na177Times,
  code_na177Codes
};
const uint16_t code_na178Times[] = {
  46, 300,
  49, 298,
  49, 648,
  49, 997,
  49, 3056,
};
const uint8_t code_na178Codes[] = {
  0x0C,
  0xB2,
  0xCA,
  0x49,
  0x13,
  0x0B,
  0x2C,
  0xB2,
  0x92,
  0x44,
  0xB0,
};
const struct IrCode code_na178Code = {
  freq_to_timerval(33333),
  28,		// # of pairs
  3,		// # of bits per index
  code_na178Times,
  code_na178Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na179Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na179Codes[] = {
  0x80,
  0x00,
  0x00,
  0x24,
  0x92,
  0x09,
  0x00,
  0x82,
  0x00,
  0x04,
  0x10,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na179Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na179Codes
};
const uint16_t code_na180Times[] = {
  1037, 4216,
  1040, 0,
};
const uint8_t code_na180Codes[] = {
  0x10,
};
const struct IrCode code_na180Code = {
  freq_to_timerval(41667),
  2,		// # of pairs
  2,		// # of bits per index
  code_na180Times,
  code_na180Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na181Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na181Codes[] = {
  0xA0,
  0x02,
  0x01,
  0x04,
  0x90,
  0x48,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na181Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na181Codes
};
const uint16_t code_na182Times[] = {
  152, 471,
  154, 156,
  154, 469,
  154, 2947,
};
const uint8_t code_na182Codes[] = {
  0x16,
  0xE5,
  0x90,
};
const struct IrCode code_na182Code = {
  freq_to_timerval(41667),
  10,		// # of pairs
  2,		// # of bits per index
  code_na182Times,
  code_na182Codes
};
const uint16_t code_na183Times[] = {
  15, 493,
  16, 493,
  16, 698,
  16, 1414,
};
const uint8_t code_na183Codes[] = {
  0x16,
  0xAB,
  0x56,
  0xA9,
};
const struct IrCode code_na183Code = {
  freq_to_timerval(34602),
  16,		// # of pairs
  2,		// # of bits per index
  code_na183Times,
  code_na183Codes
};
const uint16_t code_na184Times[] = {
  3, 496,
  3, 745,
  3, 1488,
};
const uint8_t code_na184Codes[] = {
  0x41,
  0x24,
  0x12,
  0x41,
  0x00,
};
const struct IrCode code_na184Code = {
  0,              // Non-pulsed code
  17,		// # of pairs
  2,		// # of bits per index
  code_na184Times,
  code_na184Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na185Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na185Codes[] = {
  0x80,
  0x00,
  0x00,
  0x24,
  0x82,
  0x49,
  0x04,
  0x80,
  0x40,
  0x00,
  0x12,
  0x09,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na185Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na185Codes
};
const uint16_t code_na186Times[] = {
  55, 55,
  55, 167,
  55, 4577,
  55, 9506,
  448, 445,
  450, 444,
};
const uint8_t code_na186Codes[] = {
  0x80,
  0x92,
  0x00,
  0x00,
  0x92,
  0x00,
  0x00,
  0x10,
  0x40,
  0x04,
  0x82,
  0x09,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_na186Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na186Times,
  code_na186Codes
};
const uint16_t code_na187Times[] = {
  91, 88,
  91, 267,
  91, 3621,
  361, 358,
  361, 359,
};
const uint8_t code_na187Codes[] = {
  0x60,
  0x00,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0x92,
  0x42,
  0x80,
  0x00,
  0x00,
  0x00,
  0x12,
  0x49,
  0x24,
  0x92,
  0x40,
};
const struct IrCode code_na187Code = {
  freq_to_timerval(33333),
  48,		// # of pairs
  3,		// # of bits per index
  code_na187Times,
  code_na187Codes
};
const uint16_t code_na188Times[] = {
  84, 88,
  84, 261,
  84, 3360,
  347, 347,
  347, 348,
};
const uint8_t code_na188Codes[] = {
  0x60,
  0x82,
  0x00,
  0x20,
  0x80,
  0x41,
  0x04,
  0x90,
  0x41,
  0x2A,
  0x02,
  0x08,
  0x00,
  0x82,
  0x01,
  0x04,
  0x12,
  0x41,
  0x04,
  0x80,
};
const struct IrCode code_na188Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  3,		// # of bits per index
  code_na188Times,
  code_na188Codes
};// Duplicate IR Code? - Similar to NA115

const uint16_t code_na189Times[] = {
  16, 838,
  17, 558,
  17, 839,
  17, 6328,
};
const uint8_t code_na189Codes[] = {
  0x1A,
  0x9A,
  0x9B,
  0x9A,
  0x9A,
  0x99,
};
const struct IrCode code_na189Code = {
  freq_to_timerval(31250),
  24,		// # of pairs
  2,		// # of bits per index
  code_na189Times,
  code_na189Codes
};// Duplicate IR Code? -  Similar to EU017


/* Duplicate timing table, same as eu046 !
 const uint16_t code_na190Times[] = {
 	15, 493,
 	16, 493,
 	16, 698,
 	16, 1414,
 };
 */
const uint8_t code_na190Codes[] = {
  0x26,
  0xAB,
  0x66,
  0xAA,
};
const struct IrCode code_na190Code = {
  freq_to_timerval(34483),
  16,		// # of pairs
  2,		// # of bits per index
  code_na183Times,
  code_na190Codes
};
const uint16_t code_na191Times[] = {
  49, 53,
  49, 104,
  49, 262,
  49, 264,
  49, 8030,
  100, 103,
};
const uint8_t code_na191Codes[] = {
  0x40,
  0x1A,
  0x23,
  0x00,
  0xD0,
  0x80,
};
const struct IrCode code_na191Code = {
  freq_to_timerval(31250),
  14,		// # of pairs
  3,		// # of bits per index
  code_na191Times,
  code_na191Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na192Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na192Codes[] = {
  0x80,
  0x00,
  0x00,
  0x20,
  0x92,
  0x49,
  0x00,
  0x02,
  0x40,
  0x04,
  0x90,
  0x09,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na192Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na192Codes
};
const uint16_t code_na193Times[] = {
  112, 107,
  113, 107,
  677, 2766,
};
const uint8_t code_na193Codes[] = {
  0x26,
};
const struct IrCode code_na193Code = {
  freq_to_timerval(38462),
  4,		// # of pairs
  2,		// # of bits per index
  code_na193Times,
  code_na193Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na194Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
/*
const uint8_t code_na194Codes[] = {
 	0xA0,
 	0x00,
 	0x41,
 	0x04,
 	0x92,
 	0x08,
 	0x20,
 	0x02,
 	0x00,
 	0x04,
 	0x90,
 	0x49,
 	0x2B,
 	0x3D,
 	0x00,
 };
 const struct IrCode code_na194Code = {
 	freq_to_timerval(38462),
 	38,		// # of pairs
 	3,		// # of bits per index
 	code_na004Times,
 	code_na194Codes
 }; // Duplicate IR code - same as EU008
 */
/* Duplicate timing table, same as na009 !
 const uint16_t code_na195Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na195Codes[] = {
  0x80,
  0x00,
  0x00,
  0x24,
  0x10,
  0x49,
  0x00,
  0x82,
  0x00,
  0x04,
  0x10,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na195Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na195Codes
};
const uint16_t code_na196Times[] = {
  310, 613,
  310, 614,
  622, 8312,
};
const uint8_t code_na196Codes[] = {
  0x26,
};
const struct IrCode code_na196Code = {
  freq_to_timerval(41667),
  4,		// # of pairs
  2,		// # of bits per index
  code_na196Times,
  code_na196Codes
};// Duplicate IR Code? - Similar to EU056

const uint16_t code_na197Times[] = {
  50, 158,
  53, 51,
  53, 156,
  53, 2180,
};
const uint8_t code_na197Codes[] = {
  0x25,
  0x59,
  0x9A,
  0x5A,
  0xE9,
  0x56,
  0x66,
  0x96,
  0xA0,
};
const struct IrCode code_na197Code = {
  freq_to_timerval(38462),
  34,		// # of pairs
  2,		// # of bits per index
  code_na197Times,
  code_na197Codes
};

/* Duplicate timing table, same as na005 !
 const uint16_t code_na198Times[] = {
 	88, 90,
 	88, 91,
 	88, 181,
 	88, 8976,
 	177, 91,
 };
 */
const uint8_t code_na198Codes[] = {
  0x10,
  0x92,
  0x54,
  0x24,
  0xB3,
  0x09,
  0x25,
  0x42,
  0x48,
};
const struct IrCode code_na198Code = {
  freq_to_timerval(35714),
  24,		// # of pairs
  3,		// # of bits per index
  code_na005Times,
  code_na198Codes
};

/* Duplicate timing table, same as eu060 !
 const uint16_t code_na199Times[] = {
 	50, 158,
 	53, 51,
 	53, 156,
 	53, 2180,
 };
 */
const uint8_t code_na199Codes[] = {
  0x25,
  0x99,
  0x9A,
  0x5A,
  0xE9,
  0x66,
  0x66,
  0x96,
  0xA0,
};
const struct IrCode code_na199Code = {
  freq_to_timerval(38462),
  34,		// # of pairs
  2,		// # of bits per index
  code_na197Times,
  code_na199Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na200Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na200Codes[] = {
  0x80,
  0x00,
  0x00,
  0x24,
  0x90,
  0x41,
  0x00,
  0x82,
  0x00,
  0x04,
  0x10,
  0x49,
  0x2A,
  0xBA,
  0x00,
};
const struct IrCode code_na200Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na200Codes
};
const uint16_t code_na201Times[] = {
  47, 267,
  50, 55,
  50, 110,
  50, 265,
  50, 2055,
  50, 12117,
  100, 57,
  100, 112,
};
const uint8_t code_na201Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x32,
  0x51,
  0xCB,
  0xD6,
  0x4A,
  0x39,
  0x72,
};
const struct IrCode code_na201Code = {
  freq_to_timerval(30395),
  29,		// # of pairs
  3,		// # of bits per index
  code_na201Times,
  code_na201Codes
};
const uint16_t code_na202Times[] = {
  47, 267,
  50, 55,
  50, 110,
  50, 265,
  50, 2055,
  50, 12117,
  100, 112,
};
const uint8_t code_na202Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x32,
  0x4A,
  0x38,
  0x9A,
  0xC9,
  0x28,
  0xE2,
  0x48,
};
const struct IrCode code_na202Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_na202Times,
  code_na202Codes
};

/* Duplicate timing table, same as eu049 !
 const uint16_t code_na203Times[] = {
 	55, 55,
 	55, 167,
 	55, 4577,
 	55, 9506,
 	448, 445,
 	450, 444,
 };
 */
const uint8_t code_na203Codes[] = {
  0x84,
  0x82,
  0x00,
  0x04,
  0x82,
  0x00,
  0x00,
  0x82,
  0x00,
  0x04,
  0x10,
  0x49,
  0x2A,
  0x87,
  0x41,
};
const struct IrCode code_na203Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na186Times,
  code_na203Codes
};
const uint16_t code_na204Times[] = {
  94, 473,
  94, 728,
  102, 1637,
};
const uint8_t code_na204Codes[] = {
  0x41,
  0x24,
  0x12,
};
const struct IrCode code_na204Code = {
  freq_to_timerval(38462),
  12,		// # of pairs
  2,		// # of bits per index
  code_na204Times,
  code_na204Codes
};
const uint16_t code_na205Times[] = {
  49, 263,
  50, 54,
  50, 108,
  50, 263,
  50, 2029,
  50, 10199,
  100, 110,
};
const uint8_t code_na205Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x34,
  0x49,
  0x38,
  0x9A,
  0xD1,
  0x24,
  0xE2,
  0x48,
};
const struct IrCode code_na205Code = {
  freq_to_timerval(38610),
  31,		// # of pairs
  3,		// # of bits per index
  code_na205Times,
  code_na205Codes
};
const uint16_t code_na206Times[] = {
  4, 499,
  4, 750,
  4, 4999,
};
const uint8_t code_na206Codes[] = {
  0x05,
  0x54,
  0x06,
  0x05,
  0x54,
  0x04,
};
const struct IrCode code_na206Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_na206Times,
  code_na206Codes
};

/* Duplicate timing table, same as eu069 !
 const uint16_t code_na207Times[] = {
 	4, 499,
 	4, 750,
 	4, 4999,
 };
 */
const uint8_t code_na207Codes[] = {
  0x14,
  0x54,
  0x06,
  0x14,
  0x54,
  0x04,
};
const struct IrCode code_na207Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_na206Times,
  code_na207Codes
};
const uint16_t code_na208Times[] = {
  14, 491,
  14, 743,
  14, 4422,
};
const uint8_t code_na208Codes[] = {
  0x45,
  0x44,
  0x56,
  0x45,
  0x44,
  0x55,
};
const struct IrCode code_na208Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na208Times,
  code_na208Codes
};
const uint16_t code_na209Times[] = {
  5, 568,
  5, 854,
  5, 4999,
};
const uint8_t code_na209Codes[] = {
  0x55,
  0x45,
  0x46,
  0x55,
  0x45,
  0x44,
};
const struct IrCode code_na209Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_na209Times,
  code_na209Codes
};

/* Duplicate timing table, same as eu046 !
 const uint16_t code_na210Times[] = {
 	15, 493,
 	16, 493,
 	16, 698,
 	16, 1414,
 };
 */
const uint8_t code_na210Codes[] = {
  0x19,
  0x57,
  0x59,
  0x55,
};
const struct IrCode code_na210Code = {
  freq_to_timerval(34483),
  16,		// # of pairs
  2,		// # of bits per index
  code_na183Times,
  code_na210Codes
};

/* Duplicate timing table, same as na031 !
 const uint16_t code_na211Times[] = {
 	88, 89,
 	88, 90,
 	88, 179,
 	88, 8977,
 	177, 90,
 };
 */
const uint8_t code_na211Codes[] = {
  0x04,
  0x92,
  0x49,
  0x28,
  0xC6,
  0x49,
  0x24,
  0x92,
  0x51,
  0x80,
};
const struct IrCode code_na211Code = {
  freq_to_timerval(35714),
  26,		// # of pairs
  3,		// # of bits per index
  code_na031Times,
  code_na211Codes
};
const uint16_t code_na212Times[] = {
  6, 566,
  6, 851,
  6, 5474,
};
const uint8_t code_na212Codes[] = {
  0x05,
  0x45,
  0x46,
  0x05,
  0x45,
  0x44,
};
const struct IrCode code_na212Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_na212Times,
  code_na212Codes
};
const uint16_t code_na213Times[] = {
  14, 843,
  16, 555,
  16, 841,
  16, 4911,
};
const uint8_t code_na213Codes[] = {
  0x2A,
  0x9A,
  0x9B,
  0xAA,
  0x9A,
  0x9A,
};
const struct IrCode code_na213Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na213Times,
  code_na213Codes
};

/* Duplicate timing table, same as eu028 !
 const uint16_t code_na214Times[] = {
 	47, 267,
 	50, 55,
 	50, 110,
 	50, 265,
 	50, 2055,
 	50, 12117,
 	100, 57,
 };
 */
const uint8_t code_na214Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x32,
  0x51,
  0xC8,
  0x9A,
  0xC9,
  0x47,
  0x22,
  0x48,
};
const struct IrCode code_na214Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_na165Times,
  code_na214Codes
};
const uint16_t code_na215Times[] = {
  6, 925,
  6, 1339,
  6, 2098,
  6, 2787,
};
const uint8_t code_na215Codes[] = {
  0x90,
  0x0D,
  0x00,
};
const struct IrCode code_na215Code = {
  0,              // Non-pulsed code
  12,		// # of pairs
  2,		// # of bits per index
  code_na215Times,
  code_na215Codes
};
const uint16_t code_na216Times[] = {
  53, 59,
  53, 170,
  53, 4359,
  892, 448,
  893, 448,
};
const uint8_t code_na216Codes[] = {
  0x60,
  0x00,
  0x00,
  0x24,
  0x80,
  0x09,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x00,
  0x00,
  0x00,
  0x92,
  0x00,
  0x24,
  0x12,
  0x48,
  0x00,
  0x00,
  0x01,
  0x24,
  0x80,
};
const struct IrCode code_na216Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na216Times,
  code_na216Codes
};
const uint16_t code_na217Times[] = {
  55, 57,
  55, 167,
  55, 4416,
  895, 448,
  897, 447,
};
const uint8_t code_na217Codes[] = {
  0x60,
  0x00,
  0x00,
  0x20,
  0x10,
  0x09,
  0x04,
  0x02,
  0x01,
  0x00,
  0x90,
  0x48,
  0x2A,
  0x00,
  0x00,
  0x00,
  0x80,
  0x40,
  0x24,
  0x10,
  0x08,
  0x04,
  0x02,
  0x41,
  0x20,
  0x80,
};
const struct IrCode code_na217Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na217Times,
  code_na217Codes
};

const uint16_t code_na218Times[] = {
  26, 185,
  27, 80,
  27, 185,
  27, 4249,
};
const uint8_t code_na218Codes[] = {
  0x1A,
  0x5A,
  0x65,
  0x67,
  0x9A,
  0x65,
  0x9A,
  0x9B,
  0x9A,
  0x5A,
  0x65,
  0x67,
  0x9A,
  0x65,
  0x9A,
  0x9B,
  0x9A,
  0x5A,
  0x65,
  0x65,
};
const struct IrCode code_na218Code = {
  freq_to_timerval(38462),
  80,		// # of pairs
  2,		// # of bits per index
  code_na218Times,
  code_na218Codes
};
const uint16_t code_na219Times[] = {
  51, 56,
  51, 162,
  51, 2842,
  848, 430,
  850, 429,
};
const uint8_t code_na219Codes[] = {
  0x60,
  0x82,
  0x08,
  0x24,
  0x10,
  0x41,
  0x04,
  0x82,
  0x40,
  0x00,
  0x10,
  0x09,
  0x2A,
  0x02,
  0x08,
  0x20,
  0x90,
  0x41,
  0x04,
  0x12,
  0x09,
  0x00,
  0x00,
  0x40,
  0x24,
  0x80,
};
const struct IrCode code_na219Code = {
  freq_to_timerval(40000),
  68,		// # of pairs
  3,		// # of bits per index
  code_na219Times,
  code_na219Codes
};
const uint16_t code_na220Times[] = {
  16, 559,
  16, 847,
  16, 5900,
  17, 559,
  17, 847,
};
const uint8_t code_na220Codes[] = {
  0x0E,
  0x38,
  0x21,
  0x82,
  0x26,
  0x20,
  0x82,
  0x48,
  0x23,
};
const struct IrCode code_na220Code = {
  freq_to_timerval(33333),
  24,		// # of pairs
  3,		// # of bits per index
  code_na220Times,
  code_na220Codes
};
const uint16_t code_na221Times[] = {
  16, 484,
  16, 738,
  16, 739,
  16, 4795,
};
const uint8_t code_na221Codes[] = {
  0x6A,
  0xA0,
  0x03,
  0xAA,
  0xA0,
  0x01,
};
const struct IrCode code_na221Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na221Times,
  code_na221Codes
};
const uint16_t code_na222Times[] = {
  48, 52,
  48, 160,
  48, 400,
  48, 2120,
  799, 400,
};
const uint8_t code_na222Codes[] = {
  0x84,
  0x82,
  0x40,
  0x08,
  0x92,
  0x48,
  0x01,
  0xC2,
  0x41,
  0x20,
  0x04,
  0x49,
  0x24,
  0x00,
  0x40,
};
const struct IrCode code_na222Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na222Times,
  code_na222Codes
};
const uint16_t code_na223Times[] = {
  16, 851,
  17, 554,
  17, 850,
  17, 851,
  17, 4847,
};
const uint8_t code_na223Codes[] = {
  0x45,
  0x86,
  0x5B,
  0x05,
  0xC6,
  0x5B,
  0x05,
  0xB0,
  0x42,
};
const struct IrCode code_na223Code = {
  freq_to_timerval(33333),
  24,		// # of pairs
  3,		// # of bits per index
  code_na223Times,
  code_na223Codes
};
const uint16_t code_na224Times[] = {
  14, 491,
  14, 743,
  14, 5126,
};
const uint8_t code_na224Codes[] = {
  0x55,
  0x50,
  0x02,
  0x55,
  0x50,
  0x01,
};
const struct IrCode code_na224Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na224Times,
  code_na224Codes
};
const uint16_t code_na225Times[] = {
  14, 491,
  14, 743,
  14, 4874,
};
const uint8_t code_na225Codes[] = {
  0x45,
  0x54,
  0x42,
  0x45,
  0x54,
  0x41,
};
const struct IrCode code_na225Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na225Times,
  code_na225Codes
};

/* Duplicate timing table, same as na021 !
 const uint16_t code_na226Times[] = {
 	48, 52,
 	48, 160,
 	48, 400,
 	48, 2335,
 	799, 400,
 };
 */
const uint8_t code_na226Codes[] = {
  0x84,
  0x10,
  0x40,
  0x08,
  0x82,
  0x08,
  0x01,
  0xC2,
  0x08,
  0x20,
  0x04,
  0x41,
  0x04,
  0x00,
  0x40,
};
const struct IrCode code_na226Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na021Times,
  code_na226Codes
};
const uint16_t code_na227Times[] = {
  3, 9,
  3, 19,
  3, 29,
  3, 39,
  3, 9968,
};
const uint8_t code_na227Codes[] = {
  0x60,
  0x00,
  0x88,
  0x00,
  0x02,
  0xE3,
  0x00,
  0x04,
  0x40,
  0x00,
  0x16,
};
const struct IrCode code_na227Code = {
  0,              // Non-pulsed code
  29,		// # of pairs
  3,		// # of bits per index
  code_na227Times,
  code_na227Codes
};
const uint16_t code_na228Times[] = {
  15, 138,
  15, 446,
  15, 605,
  15, 6565,
};
const uint8_t code_na228Codes[] = {
  0x80,
  0x01,
  0x00,
  0x2E,
  0x00,
  0x04,
  0x00,
  0xA0,
};
const struct IrCode code_na228Code = {
  freq_to_timerval(38462),
  30,		// # of pairs
  2,		// # of bits per index
  code_na228Times,
  code_na228Codes
};
const uint16_t code_na229Times[] = {
  48, 50,
  48, 148,
  48, 149,
  48, 1424,
};
const uint8_t code_na229Codes[] = {
  0x48,
  0x80,
  0x0E,
  0x22,
  0x00,
  0x10,
};
const struct IrCode code_na229Code = {
  freq_to_timerval(40000),
  22,		// # of pairs
  2,		// # of bits per index
  code_na229Times,
  code_na229Codes
};
const uint16_t code_na230Times[] = {
  87, 639,
  88, 275,
  88, 639,
};
const uint8_t code_na230Codes[] = {
  0x15,
  0x9A,
  0x94,
};
const struct IrCode code_na230Code = {
  freq_to_timerval(35714),
  11,		// # of pairs
  2,		// # of bits per index
  code_na230Times,
  code_na230Codes
};
const uint16_t code_na231Times[] = {
  3, 8,
  3, 18,
  3, 24,
  3, 38,
  3, 9969,
};
const uint8_t code_na231Codes[] = {
  0x60,
  0x80,
  0x88,
  0x00,
  0x00,
  0xE3,
  0x04,
  0x04,
  0x40,
  0x00,
  0x06,
};
const struct IrCode code_na231Code = {
  0,              // Non-pulsed code
  29,		// # of pairs
  3,		// # of bits per index
  code_na231Times,
  code_na231Codes
};

/* Duplicate timing table, same as eu046 !
 const uint16_t code_na232Times[] = {
 	15, 493,
 	16, 493,
 	16, 698,
 	16, 1414,
 };
 */
const uint8_t code_na232Codes[] = {
  0x2A,
  0xAB,
  0x6A,
  0xAA,
};
const struct IrCode code_na232Code = {
  freq_to_timerval(34483),
  16,		// # of pairs
  2,		// # of bits per index
  code_na183Times,
  code_na232Codes
};
const uint16_t code_na233Times[] = {
  13, 608,
  14, 141,
  14, 296,
  14, 451,
  14, 606,
  14, 608,
  14, 6207,
};
const uint8_t code_na233Codes[] = {
  0x04,
  0x94,
  0x4B,
  0x24,
  0x95,
  0x35,
  0x24,
  0xA2,
  0x59,
  0x24,
  0xA8,
  0x40,
};
const struct IrCode code_na233Code = {
  freq_to_timerval(38462),
  30,		// # of pairs
  3,		// # of bits per index
  code_na233Times,
  code_na233Codes
};

/* Duplicate timing table, same as eu046 !
 const uint16_t code_na234Times[] = {
 	15, 493,
 	16, 493,
 	16, 698,
 	16, 1414,
 };
 */
const uint8_t code_na234Codes[] = {
  0x19,
  0xAB,
  0x59,
  0xA9,
};
const struct IrCode code_na234Code = {
  freq_to_timerval(34483),
  16,		// # of pairs
  2,		// # of bits per index
  code_na183Times,
  code_na234Codes
};
const uint16_t code_na235Times[] = {
  3, 8,
  3, 18,
  3, 28,
  3, 12731,
};
const uint8_t code_na235Codes[] = {
  0x80,
  0x01,
  0x00,
  0xB8,
  0x55,
  0x10,
  0x08,
};
const struct IrCode code_na235Code = {
  0,              // Non-pulsed code
  27,		// # of pairs
  2,		// # of bits per index
  code_na235Times,
  code_na235Codes
};
const uint16_t code_na236Times[] = {
  46, 53,
  46, 106,
  46, 260,
  46, 1502,
  46, 10962,
  93, 53,
  93, 106,
};
const uint8_t code_na236Codes[] = {
  0x46,
  0x80,
  0x00,
  0x00,
  0x00,
  0x03,
  0x44,
  0x52,
  0x00,
  0x00,
  0x0C,
  0x22,
  0x22,
  0x90,
  0x00,
  0x00,
  0x60,
  0x80,
};
const struct IrCode code_na236Code = {
  freq_to_timerval(35714),
  46,		// # of pairs
  3,		// # of bits per index
  code_na236Times,
  code_na236Codes
};


/* Duplicate timing table, same as eu098 !
 const uint16_t code_na237Times[] = {
 	3, 8,
 	3, 18,
 	3, 28,
 	3, 12731,
 };
 */
const uint8_t code_na237Codes[] = {
  0x80,
  0x04,
  0x00,
  0xB8,
  0x55,
  0x40,
  0x08,
};
const struct IrCode code_na237Code = {
  0,              // Non-pulsed code
  27,		// # of pairs
  2,		// # of bits per index
  code_na235Times,
  code_na237Codes
};



const uint16_t code_na238Times[] = {
  14, 491,
  14, 743,
  14, 4674,
};
const uint8_t code_na238Codes[] = {
  0x55,
  0x50,
  0x06,
  0x55,
  0x50,
  0x05,
};
const struct IrCode code_na238Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na238Times,
  code_na238Codes
};

/* Duplicate timing table, same as eu087 !
 const uint16_t code_na239Times[] = {
 	14, 491,
 	14, 743,
 	14, 5126,
 };
 */
const uint8_t code_na239Codes[] = {
  0x45,
  0x54,
  0x02,
  0x45,
  0x54,
  0x01,
};
const struct IrCode code_na239Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na224Times,
  code_na239Codes
};
const uint16_t code_na240Times[] = {
  44, 815,
  45, 528,
  45, 815,
  45, 5000,
};
const uint8_t code_na240Codes[] = {
  0x29,
  0x9A,
  0x9B,
  0xA9,
  0x9A,
  0x9A,
};
const struct IrCode code_na240Code = {
  freq_to_timerval(34483),
  24,		// # of pairs
  2,		// # of bits per index
  code_na240Times,
  code_na240Codes
};
const uint16_t code_na241Times[] = {
  14, 491,
  14, 743,
  14, 5881,
};
const uint8_t code_na241Codes[] = {
  0x44,
  0x40,
  0x02,
  0x44,
  0x40,
  0x01,
};
const struct IrCode code_na241Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na241Times,
  code_na241Codes
};

/* Duplicate timing table, same as na009 !
 const uint16_t code_na242Times[] = {
 	53, 56,
 	53, 171,
 	53, 3950,
 	53, 9599,
 	898, 451,
 	900, 226,
 };
 */
const uint8_t code_na242Codes[] = {
  0x84,
  0x10,
  0x00,
  0x20,
  0x90,
  0x01,
  0x00,
  0x80,
  0x40,
  0x04,
  0x12,
  0x09,
  0x2A,
  0xBA,
  0x40,
};
const struct IrCode code_na242Code = {
  freq_to_timerval(38610),
  38,		// # of pairs
  3,		// # of bits per index
  code_na009Times,
  code_na242Codes
};
const uint16_t code_na243Times[] = {
  48, 246,
  50, 47,
  50, 94,
  50, 245,
  50, 1488,
  50, 10970,
  100, 47,
  100, 94,
};
const uint8_t code_na243Codes[] = {
  0x0B,
  0x12,
  0x49,
  0x24,
  0x92,
  0x49,
  0x8D,
  0x1C,
  0x89,
  0x27,
  0xFC,
  0xAB,
  0x47,
  0x22,
  0x49,
  0xFF,
  0x2A,
  0xD1,
  0xC8,
  0x92,
  0x7F,
  0xC9,
  0x00,
};
const struct IrCode code_na243Code = {
  freq_to_timerval(38462),
  59,		// # of pairs
  3,		// # of bits per index
  code_na243Times,
  code_na243Codes
};
const uint16_t code_na244Times[] = {
  16, 847,
  16, 5900,
  17, 559,
  17, 846,
  17, 847,
};
const uint8_t code_na244Codes[] = {
  0x62,
  0x08,
  0xA0,
  0x8A,
  0x19,
  0x04,
  0x08,
  0x40,
  0x83,
};
const struct IrCode code_na244Code = {
  freq_to_timerval(33333),
  24,		// # of pairs
  3,		// # of bits per index
  code_na244Times,
  code_na244Codes
};
const uint16_t code_na245Times[] = {
  14, 491,
  14, 743,
  14, 4622,
};
const uint8_t code_na245Codes[] = {
  0x45,
  0x54,
  0x16,
  0x45,
  0x54,
  0x15,
};
const struct IrCode code_na245Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na245Times,
  code_na245Codes
};
const uint16_t code_na246Times[] = {
  24, 185,
  27, 78,
  27, 183,
  27, 1542,
};
const uint8_t code_na246Codes[] = {
  0x19,
  0x95,
  0x5E,
  0x66,
  0x55,
  0x50,
};
const struct IrCode code_na246Code = {
  freq_to_timerval(38462),
  22,		// # of pairs
  2,		// # of bits per index
  code_na246Times,
  code_na246Codes
};


const uint16_t code_na247Times[] = {
  56, 55,
  56, 168,
  56, 4850,
  447, 453,
  448, 453,
};
const uint8_t code_na247Codes[] = {
  0x64,
  0x10,
  0x00,
  0x04,
  0x10,
  0x00,
  0x00,
  0x80,
  0x00,
  0x04,
  0x12,
  0x49,
  0x2A,
  0x10,
  0x40,
  0x00,
  0x10,
  0x40,
  0x00,
  0x02,
  0x00,
  0x00,
  0x10,
  0x49,
  0x24,
  0x90,
};
const struct IrCode code_na247Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na247Times,
  code_na247Codes
};
const uint16_t code_na248Times[] = {
  49, 52,
  49, 250,
  49, 252,
  49, 2377,
  49, 12009,
  100, 52,
  100, 102,
};
const uint8_t code_na248Codes[] = {
  0x22,
  0x80,
  0x1A,
  0x18,
  0x01,
  0x10,
  0xC0,
  0x02,
};
const struct IrCode code_na248Code = {
  freq_to_timerval(31250),
  21,		// # of pairs
  3,		// # of bits per index
  code_na248Times,
  code_na248Codes
};
const uint16_t code_na249Times[] = {
  55, 55,
  55, 167,
  55, 5023,
  55, 9506,
  448, 445,
  450, 444,
};
const uint8_t code_na249Codes[] = {
  0x80,
  0x02,
  0x00,
  0x00,
  0x02,
  0x00,
  0x04,
  0x92,
  0x00,
  0x00,
  0x00,
  0x49,
  0x2A,
  0x97,
  0x48,
};
const struct IrCode code_na249Code = {
  freq_to_timerval(38462),
  40,		// # of pairs
  3,		// # of bits per index
  code_na249Times,
  code_na249Codes
};


/* Duplicate timing table, same as eu054 !
 const uint16_t code_na250Times[] = {
 	49, 53,
 	49, 104,
 	49, 262,
 	49, 264,
 	49, 8030,
 	100, 103,
 };
 */
const uint8_t code_na250Codes[] = {
  0x46,
  0x80,
  0x23,
  0x34,
  0x00,
  0x80,
};
const struct IrCode code_na250Code = {
  freq_to_timerval(31250),
  14,		// # of pairs
  3,		// # of bits per index
  code_na191Times,
  code_na250Codes
};

/* Duplicate timing table, same as eu028 !
 const uint16_t code_na251Times[] = {
 	47, 267,
 	50, 55,
 	50, 110,
 	50, 265,
 	50, 2055,
 	50, 12117,
 	100, 57,
 };
 */
const uint8_t code_na251Codes[] = {
  0x04,
  0x92,
  0x49,
  0x26,
  0x34,
  0x71,
  0x44,
  0x9A,
  0xD1,
  0xC5,
  0x12,
  0x48,
};
const struct IrCode code_na251Code = {
  freq_to_timerval(30303),
  31,		// # of pairs
  3,		// # of bits per index
  code_na165Times,
  code_na251Codes
};


const uint16_t code_na252Times[] = {
  48, 98,
  48, 196,
  97, 836,
  395, 388,
  1931, 389,
};
const uint8_t code_na252Codes[] = {
  0x84,
  0x92,
  0x01,
  0x24,
  0x12,
  0x00,
  0x04,
  0x80,
  0x08,
  0x09,
  0x92,
  0x48,
  0x04,
  0x90,
  0x48,
  0x00,
  0x12,
  0x00,
  0x20,
  0x26,
  0x49,
  0x20,
  0x12,
  0x41,
  0x20,
  0x00,
  0x48,
  0x00,
  0x82,
};
const struct IrCode code_na252Code = {
  freq_to_timerval(58824),
  77,		// # of pairs
  3,		// # of bits per index
  code_na252Times,
  code_na252Codes
};
const uint16_t code_na253Times[] = {
  3, 9,
  3, 31,
  3, 42,
  3, 10957,
};
const uint8_t code_na253Codes[] = {
  0x80,
  0x01,
  0x00,
  0x2E,
  0x00,
  0x04,
  0x00,
  0x80,
};
const struct IrCode code_na253Code = {
  0,              // Non-pulsed code
  29,		// # of pairs
  2,		// # of bits per index
  code_na253Times,
  code_na253Codes
};
const uint16_t code_na254Times[] = {
  49, 53,
  49, 262,
  49, 264,
  49, 8030,
  100, 103,
};
const uint8_t code_na254Codes[] = {
  0x22,
  0x00,
  0x1A,
  0x10,
  0x00,
  0x40,
};
const struct IrCode code_na254Code = {
  freq_to_timerval(31250),
  14,		// # of pairs
  3,		// # of bits per index
  code_na254Times,
  code_na254Codes
};
const uint16_t code_na255Times[] = {
  44, 815,
  45, 528,
  45, 815,
  45, 4713,
};
const uint8_t code_na255Codes[] = {
  0x2A,
  0x9A,
  0x9B,
  0xAA,
  0x9A,
  0x9A,
};
const struct IrCode code_na255Code = {
  freq_to_timerval(34483),
  24,		// # of pairs
  2,		// # of bits per index
  code_na255Times,
  code_na255Codes
};

const uint16_t code_na256Times[] = {
  14, 491,
  14, 743,
  14, 5430,
};
const uint8_t code_na256Codes[] = {
  0x44,
  0x44,
  0x02,
  0x44,
  0x44,
  0x01,
};
const struct IrCode code_na256Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na256Times,
  code_na256Codes
};


const uint16_t code_na257Times[] = {
  19, 78,
  21, 27,
  21, 77,
  21, 3785,
  22, 0,
};
const uint8_t code_na257Codes[] = {
  0x09,
  0x24,
  0x92,
  0x49,
  0x12,
  0x4A,
  0x24,
  0x92,
  0x49,
  0x24,
  0x92,
  0x49,
  0x24,
  0x94,
  0x89,
  0x69,
  0x24,
  0x92,
  0x49,
  0x22,
  0x49,
  0x44,
  0x92,
  0x49,
  0x24,
  0x92,
  0x49,
  0x24,
  0x92,
  0x91,
  0x30,
};
const struct IrCode code_na257Code = {
  freq_to_timerval(38462),
  82,		// # of pairs
  3,		// # of bits per index
  code_na257Times,
  code_na257Codes
};

/* Duplicate timing table, same as eu051 !
 const uint16_t code_na258Times[] = {
 	84, 88,
 	84, 261,
 	84, 3360,
 	347, 347,
 	347, 348,
 };
 */
const uint8_t code_na258Codes[] = {
  0x64,
  0x00,
  0x09,
  0x24,
  0x00,
  0x09,
  0x24,
  0x00,
  0x09,
  0x2A,
  0x10,
  0x00,
  0x24,
  0x90,
  0x00,
  0x24,
  0x90,
  0x00,
  0x24,
  0x90,
};
const struct IrCode code_na258Code = {
  freq_to_timerval(38462),
  52,		// # of pairs
  3,		// # of bits per index
  code_na188Times,
  code_na258Codes
};

/* Duplicate timing table, same as eu120 !
 const uint16_t code_na259Times[] = {
 	19, 78,
 	21, 27,
 	21, 77,
 	21, 3785,
 	22, 0,
 };
 */
const uint8_t code_na259Codes[] = {
  0x04,
  0xA4,
  0x92,
  0x49,
  0x22,
  0x49,
  0x48,
  0x92,
  0x49,
  0x24,
  0x92,
  0x49,
  0x24,
  0x94,
  0x89,
  0x68,
  0x94,
  0x92,
  0x49,
  0x24,
  0x49,
  0x29,
  0x12,
  0x49,
  0x24,
  0x92,
  0x49,
  0x24,
  0x92,
  0x91,
  0x30,
};
const struct IrCode code_na259Code = {
  freq_to_timerval(38462),
  82,		// # of pairs
  3,		// # of bits per index
  code_na257Times,
  code_na259Codes
};
const uint16_t code_na260Times[] = {
  13, 490,
  13, 741,
  13, 742,
  13, 5443,
};
const uint8_t code_na260Codes[] = {
  0x6A,
  0xA0,
  0x0B,
  0xAA,
  0xA0,
  0x09,
};
const struct IrCode code_na260Code = {
  freq_to_timerval(40000),
  24,		// # of pairs
  2,		// # of bits per index
  code_na260Times,
  code_na260Codes
};
const uint16_t code_na261Times[] = {
  50, 54,
  50, 158,
  50, 407,
  50, 2153,
  843, 407,
};
const uint8_t code_na261Codes[] = {
  0x80,
  0x10,
  0x40,
  0x08,
  0x92,
  0x48,
  0x01,
  0xC0,
  0x08,
  0x20,
  0x04,
  0x49,
  0x24,
  0x00,
  0x00,
};
const struct IrCode code_na261Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na261Times,
  code_na261Codes
};
const uint16_t code_na262Times[] = {
  55, 56,
  55, 168,
  55, 3929,
  56, 0,
  882, 454,
  884, 452,
};
const uint8_t code_na262Codes[] = {
  0x84,
  0x80,
  0x00,
  0x20,
  0x82,
  0x49,
  0x00,
  0x02,
  0x00,
  0x04,
  0x90,
  0x49,
  0x2A,
  0x92,
  0x00,
  0x00,
  0x82,
  0x09,
  0x24,
  0x00,
  0x08,
  0x00,
  0x12,
  0x41,
  0x24,
  0xB0,
};
const struct IrCode code_na262Code = {
  freq_to_timerval(38462),
  68,		// # of pairs
  3,		// # of bits per index
  code_na262Times,
  code_na262Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na263Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na263Codes[] = {
  0xA0,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x20,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na263Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na263Codes
};

/* Duplicate timing table, same as eu087 !
 const uint16_t code_na264Times[] = {
 	14, 491,
 	14, 743,
 	14, 5126,
 };
 */
const uint8_t code_na264Codes[] = {
  0x44,
  0x40,
  0x56,
  0x44,
  0x40,
  0x55,
};
const struct IrCode code_na264Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na224Times,
  code_na264Codes
};
const uint16_t code_na265Times[] = {
  152, 471,
  154, 156,
  154, 469,
  154, 782,
  154, 2947,
};
const uint8_t code_na265Codes[] = {
  0x05,
  0xC4,
  0x59,
};
const struct IrCode code_na265Code = {
  freq_to_timerval(41667),
  8,		// # of pairs
  3,		// # of bits per index
  code_na265Times,
  code_na265Codes
};
const uint16_t code_na266Times[] = {
  50, 50,
  50, 99,
  50, 251,
  50, 252,
  50, 1449,
  50, 11014,
  102, 49,
  102, 98,
};
const uint8_t code_na266Codes[] = {
  0x47,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x8C,
  0x8C,
  0x40,
  0x03,
  0xF1,
  0xEB,
  0x23,
  0x10,
  0x00,
  0xFC,
  0x74,
};
const struct IrCode code_na266Code = {
  freq_to_timerval(38462),
  45,		// # of pairs
  3,		// # of bits per index
  code_na266Times,
  code_na266Codes
};

/* Duplicate timing table, same as eu129 !
 const uint16_t code_na267Times[] = {
 	50, 50,
 	50, 99,
 	50, 251,
 	50, 252,
 	50, 1449,
 	50, 11014,
 	102, 49,
 	102, 98,
 };
 */
const uint8_t code_na267Codes[] = {
  0x47,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x8C,
  0x8C,
  0x40,
  0x03,
  0xE3,
  0xEB,
  0x23,
  0x10,
  0x00,
  0xF8,
  0xF4,
};
const struct IrCode code_na267Code = {
  freq_to_timerval(38462),
  45,		// # of pairs
  3,		// # of bits per index
  code_na266Times,
  code_na267Codes
};
const uint16_t code_na268Times[] = {
  14, 491,
  14, 743,
  14, 4170,
};
const uint8_t code_na268Codes[] = {
  0x55,
  0x55,
  0x42,
  0x55,
  0x55,
  0x41,
};
const struct IrCode code_na268Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na268Times,
  code_na268Codes
};

/* Duplicate timing table, same as eu069 !
 const uint16_t code_na269Times[] = {
 	4, 499,
 	4, 750,
 	4, 4999,
 };
 */
const uint8_t code_na269Codes[] = {
  0x05,
  0x50,
  0x06,
  0x05,
  0x50,
  0x04,
};
const struct IrCode code_na269Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_na206Times,
  code_na269Codes
};

/* Duplicate timing table, same as eu071 !
 const uint16_t code_na270Times[] = {
 	14, 491,
 	14, 743,
 	14, 4422,
 };
 */
const uint8_t code_na270Codes[] = {
  0x55,
  0x54,
  0x12,
  0x55,
  0x54,
  0x11,
};
const struct IrCode code_na270Code = {
  freq_to_timerval(38462),
  24,		// # of pairs
  2,		// # of bits per index
  code_na208Times,
  code_na270Codes
};
const uint16_t code_na271Times[] = {
  13, 490,
  13, 741,
  13, 742,
  13, 5939,
};
const uint8_t code_na271Codes[] = {
  0x40,
  0x0A,
  0x83,
  0x80,
  0x0A,
  0x81,
};
const struct IrCode code_na271Code = {
  freq_to_timerval(40000),
  24,		// # of pairs
  2,		// # of bits per index
  code_na271Times,
  code_na271Codes
};
const uint16_t code_na272Times[] = {
  6, 566,
  6, 851,
  6, 5188,
};
const uint8_t code_na272Codes[] = {
  0x54,
  0x45,
  0x46,
  0x54,
  0x45,
  0x44,
};
const struct IrCode code_na272Code = {
  0,              // Non-pulsed code
  23,		// # of pairs
  2,		// # of bits per index
  code_na272Times,
  code_na272Codes
};

/* Duplicate timing table, same as na004 !
 const uint16_t code_na273Times[] = {
 	55, 57,
 	55, 170,
 	55, 3949,
 	55, 9623,
 	56, 0,
 	898, 453,
 	900, 226,
 };
 */
const uint8_t code_na273Codes[] = {
  0xA0,
  0x00,
  0x00,
  0x04,
  0x92,
  0x49,
  0x24,
  0x00,
  0x00,
  0x00,
  0x92,
  0x49,
  0x2B,
  0x3D,
  0x00,
};
const struct IrCode code_na273Code = {
  freq_to_timerval(38462),
  38,		// # of pairs
  3,		// # of bits per index
  code_na004Times,
  code_na273Codes
};
const uint16_t code_na274Times[] = {
  86, 91,
  87, 90,
  87, 180,
  87, 8868,
  88, 0,
  174, 90,
};
const uint8_t code_na274Codes[] = {
  0x14,
  0x95,
  0x4A,
  0x35,
  0x9A,
  0x4A,
  0xA5,
  0x1B,
  0x00,
};
const struct IrCode code_na274Code = {
  freq_to_timerval(35714),
  22,		// # of pairs
  3,		// # of bits per index
  code_na274Times,
  code_na274Codes
};
const uint16_t code_na275Times[] = {
  4, 1036,
  4, 1507,
  4, 3005,
};
const uint8_t code_na275Codes[] = {
  0x05,
  0x60,
  0x54,
};
const struct IrCode code_na275Code = {
  0,              // Non-pulsed code
  11,		// # of pairs
  2,		// # of bits per index
  code_na275Times,
  code_na275Codes
};

const uint16_t code_na276Times[] = {
  0, 0,
  14, 141,
  14, 452,
  14, 607,
  14, 6310,
};
const uint8_t code_na276Codes[] = {
  0x64,
  0x92,
  0x4A,
  0x24,
  0x92,
  0xE3,
  0x24,
  0x92,
  0x51,
  0x24,
  0x96,
  0x00,
};

const struct IrCode code_na276Code = {
  0,              // Non-pulsed code
  30,		// # of pairs
  3,		// # of bits per index
  code_na276Times,
  code_na276Codes
};

const uint16_t code_na277Times[] = {
  448, 448,
  56, 168,
  56, 56,
  56, 4526,
 };

const uint8_t code_na277Codes[] = {
  0x15,
  0xAA,
  0x95,
  0xAA,
  0xAA,
  0x5A,
  0x55,
  0xA5,
  0xB1,
  0x5A,
  0xA9,
  0x5A,
  0xAA,
  0xA5,
  0xA5,
  0x5A,
  0x5B,
};

const struct IrCode code_na277Code = {
  freq_to_timerval(38462),
  68,   // # of pairs
  2,    // # of bits per index
  code_na277Times,
  code_na277Codes
};

const uint16_t code_na278Times[] = { 312, 159, 49, 118, 49, 34, 49, 37, 47, 117, 48, 35, 48, 118, 46, 118, 49, 35, 49, 117, 46, 37, 47, 34, 48, 38, 46, 38, 46, 35, 46, 34, 48, 37, 47, 37, 46, 0 };
const uint8_t code_na278Codes[] = { 0x00, 0x42, 0x21, 0x0C, 0x85, 0x29, 0x82, 0x20, 0x88, 0x67, 0x0A, 0x02, 0x11, 0x09, 0x25, 0x28, 0x44, 0x21, 0xA9, 0x62, 0x63, 0x5C, 0x35, 0x3C, 0x6A, 0x52, 0xC6, 0xE1, 0xB8, 0x22, 0x10, 0x52, 0x52, 0xC1, 0x4A, 0x70, 0xD4, 0xA3, 0x94, 0xA5, 0x1B, 0x86, 0xF1, 0xA9, 0x4B, 0x63, 0x5A, 0xE4, 0x08, 0x6A, 0x53, 0xC7, 0x16, 0xB8, 0x6E, 0x1B, 0xC6, 0xF1, 0xAC, 0x6D, 0x69, 0xD0, 0x20, 0x88, 0x41, 0x48, 0x50, 0x80, 0x88, 0x43, 0x8C, 0x80 };
const struct IrCode code_na278Code = {
  freq_to_timerval(38000),
  114,
  5,
  code_na278Times,
  code_na278Codes
};

const uint16_t code_na279Times[] = { 313, 159, 49, 118, 49, 37, 46, 37, 46, 118, 46, 35, 49, 35, 50, 34, 49, 34, 49, 117, 50, 118, 49, 0 };
const uint8_t code_na279Codes[] = { 0x01, 0x12, 0x33, 0x42, 0x34, 0x12, 0x42, 0x51, 0x12, 0x41, 0x67, 0x17, 0x71, 0x77, 0x76, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x89, 0x78, 0x18, 0x89, 0xA8, 0x88, 0x88, 0x81, 0x88, 0x18, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x18, 0x81, 0x11, 0x81, 0x18, 0x88, 0x8B };
const struct IrCode code_na279Code = {
  freq_to_timerval(38000),
  114,
  4,
  code_na279Times,
  code_na279Codes
};

const uint16_t code_na280Times[] = { 309, 306, 310, 443, 58, 165, 57, 54, 57, 53, 57, 166, 57, 165, 58, 53, 57, 0 };
const uint8_t code_na280Codes[] = { 0x01, 0x23, 0x23, 0x45, 0x23, 0x63, 0x65, 0x73, 0x23, 0x25, 0x24, 0x74, 0x74, 0x74, 0x34, 0x47, 0x47, 0x45, 0x74, 0x74, 0x74, 0x57, 0x57, 0x47, 0x43, 0x44, 0x74, 0x34, 0x47, 0x47, 0x64, 0x74, 0x74, 0x34, 0x47, 0x43, 0x44, 0x74, 0x34, 0x47, 0x43, 0x44, 0x74, 0x34, 0x47, 0x43, 0x44, 0x74, 0x34, 0x47, 0x43, 0x46, 0x76, 0x34, 0x52, 0x62, 0x45, 0x80 };
const struct IrCode code_na280Code = {
  freq_to_timerval(38000),
  115,
  4,
  code_na280Times,
  code_na280Codes
};

const uint16_t code_na281Times[] = { 309, 306, 309, 444, 57, 166, 58, 53, 57, 53, 58, 165, 57, 165, 57, 54, 57, 0 };
const uint8_t code_na281Codes[] = { 0x01, 0x23, 0x23, 0x45, 0x23, 0x63, 0x62, 0x37, 0x44, 0x56, 0x24, 0x73, 0x43, 0x47, 0x34, 0x34, 0x43, 0x47, 0x44, 0x34, 0x43, 0x64, 0x54, 0x34, 0x43, 0x47, 0x34, 0x74, 0x43, 0x44, 0x54, 0x73, 0x47, 0x34, 0x34, 0x43, 0x44, 0x34, 0x73, 0x47, 0x34, 0x74, 0x43, 0x44, 0x34, 0x43, 0x44, 0x34, 0x73, 0x47, 0x34, 0x75, 0x42, 0x56, 0x65, 0x64, 0x56, 0x80 };
const struct IrCode code_na281Code = {
  freq_to_timerval(38000),
  115,
  4,
  code_na281Times,
  code_na281Codes
};

const uint16_t code_na282Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na282Codes[] = { 0x1A, 0xAA, 0x65, 0xA5, 0xA5, 0x55, 0x9A, 0x5A, 0x5A, 0xAA, 0x65, 0x55, 0xB0 };
const struct IrCode code_na282Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na282Times,
  code_na282Codes
};

const uint16_t code_na283Times[] = { 844, 421, 54, 157, 54, 54, 52, 53, 51, 54, 52, 156, 52, 54, 51, 157, 55, 53, 52, 157, 55, 156, 54, 0 };
const uint8_t code_na283Codes[] = { 0x01, 0x23, 0x45, 0x23, 0x63, 0x46, 0x46, 0x36, 0x37, 0x26, 0x58, 0x92, 0x67, 0xA8, 0x7B };
const struct IrCode code_na283Code = {
  freq_to_timerval(38000),
  30,
  4,
  code_na283Times,
  code_na283Codes
};

const uint16_t code_na284Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na284Codes[] = { 0x15, 0x65, 0x6A, 0x5A, 0xAA, 0x9A, 0x95, 0xA5, 0x55, 0x55, 0x6A, 0xAA, 0xB0 };
const struct IrCode code_na284Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na284Times,
  code_na284Codes
};

const uint16_t code_na285Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na285Codes[] = { 0x15, 0x65, 0x6A, 0x5A, 0xAA, 0x9A, 0x95, 0xA5, 0x55, 0x55, 0x6A, 0xAA, 0xB0 };
const struct IrCode code_na285Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na285Times,
  code_na285Codes
};

const uint16_t code_na286Times[] = { 897, 441, 60, 163, 60, 164, 60, 53, 59, 54, 59, 165, 59, 52, 60, 54, 60, 52, 59, 53, 59, 164, 59, 55, 60, 788, 60, 165, 60, 162, 60, 51, 59, 0 };
const uint8_t code_na286Codes[] = { 0x00, 0x44, 0x31, 0x8C, 0x84, 0x29, 0x82, 0x21, 0x90, 0xE7, 0x18, 0x50, 0x91, 0x8C, 0xE7, 0x1A, 0x14, 0x81, 0x88, 0xE7, 0x19, 0x92, 0x31, 0x9C, 0x6B, 0x1A, 0x10, 0x91, 0x8C, 0x84, 0x33, 0x10, 0x64, 0x10, 0x67, 0x68, 0x90, 0x84, 0xA4, 0x87, 0x38, 0xD0, 0x84, 0x24, 0x83, 0x58, 0xD0, 0x84, 0xA4, 0x83, 0x20, 0xD0, 0x84, 0x8C, 0xE3, 0x22, 0x4C, 0x94, 0x10, 0x64, 0x3A, 0x4C, 0x81, 0x8C, 0xE3, 0x38, 0xC2, 0xA4, 0xA4, 0xA7, 0x6B, 0x98, 0x84, 0x21, 0x24, 0x3A, 0xC6, 0x80, 0x89, 0x03, 0x39, 0xD2, 0x64, 0x8C, 0x63, 0x21, 0x12, 0x64, 0x25, 0x24, 0x39, 0xC6, 0x84, 0x25, 0xA5, 0x69, 0xC6, 0x84, 0x8C, 0x63, 0x22, 0xC6, 0x81, 0x28, 0x42, 0x69, 0xDF, 0x00 };
const struct IrCode code_na286Code = {
  freq_to_timerval(38000),
  172,
  5,
  code_na286Times,
  code_na286Codes
};

const uint16_t code_na287Times[] = { 320, 961, 62, 144, 59, 43, 61, 144, 59, 145, 58, 43, 61, 41, 58, 48, 56, 46, 56, 150, 53, 153, 59, 46, 56, 148, 58, 0 };
const uint8_t code_na287Codes[] = { 0x01, 0x22, 0x23, 0x22, 0x24, 0x32, 0x22, 0x56, 0x78, 0x88, 0x88, 0x98, 0xA8, 0x8B, 0xCD };
const struct IrCode code_na287Code = {
  freq_to_timerval(38000),
  30,
  4,
  code_na287Times,
  code_na287Codes
};

const uint16_t code_na288Times[] = { 29, 13236, 322, 960, 59, 147, 59, 43, 56, 150, 56, 45, 59, 45, 56, 147, 56, 46, 59, 46, 56, 0 };
const uint8_t code_na288Codes[] = { 0x01, 0x23, 0x33, 0x43, 0x33, 0x35, 0x53, 0x33, 0x63, 0x67, 0x28, 0x87, 0x98, 0x28, 0x79, 0xA0 };
const struct IrCode code_na288Code = {
  freq_to_timerval(38000),
  31,
  4,
  code_na288Times,
  code_na288Codes
};

const uint16_t code_na289Times[] = { 884, 394, 62, 143, 51, 50, 52, 50, 54, 47, 54, 149, 54, 48, 51, 154, 51, 152, 49, 52, 49, 53, 49, 154, 51, 151, 51, 0 };
const uint8_t code_na289Codes[] = { 0x01, 0x23, 0x45, 0x44, 0x67, 0x84, 0x22, 0x22, 0x22, 0x92, 0x2A, 0x84, 0xB2, 0x22, 0xCD };
const struct IrCode code_na289Code = {
  freq_to_timerval(38000),
  30,
  4,
  code_na289Times,
  code_na289Codes
};

const uint16_t code_na290Times[] = { 444, 441, 55, 160, 55, 53, 55, 161, 55, 521, 442, 441, 57, 158, 57, 51, 55, 0 };
const uint8_t code_na290Codes[] = { 0x01, 0x21, 0x22, 0x22, 0x32, 0x22, 0x33, 0x23, 0x32, 0x33, 0x33, 0x22, 0x23, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x22, 0x22, 0x34, 0x52, 0x32, 0x33, 0x33, 0x26, 0x33, 0x22, 0x32, 0x23, 0x22, 0x22, 0x33, 0x32, 0x22, 0x22, 0x22, 0x72, 0x22, 0x22, 0x22, 0x22, 0x22, 0x33, 0x33, 0x28 };
const struct IrCode code_na290Code = {
  freq_to_timerval(38000),
  100,
  4,
  code_na290Times,
  code_na290Codes
};

const uint16_t code_na291Times[] = { 446, 437, 59, 156, 59, 49, 60, 156, 60, 48, 59, 48, 60, 516, 445, 438, 59, 0 };
const uint8_t code_na291Codes[] = { 0x01, 0x23, 0x44, 0x55, 0x13, 0x44, 0x55, 0x21, 0x44, 0x11, 0x13, 0x45, 0x51, 0x33, 0x11, 0x33, 0x11, 0x33, 0x11, 0x33, 0x12, 0x13, 0x31, 0x24, 0x46, 0x74, 0x35, 0x11, 0x31, 0x52, 0x13, 0x11, 0x14, 0x31, 0x22, 0x44, 0x31, 0x14, 0x44, 0x45, 0x52, 0x44, 0x44, 0x45, 0x52, 0x23, 0x45, 0x55, 0x13, 0x38 };
const struct IrCode code_na291Code = {
  freq_to_timerval(38000),
  100,
  4,
  code_na291Times,
  code_na291Codes
};

const uint16_t code_na292Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na292Codes[] = { 0x1A, 0xAA, 0x95, 0x55, 0x65, 0x55, 0x6A, 0xAA, 0xA6, 0x9A, 0x99, 0x65, 0x70 };
const struct IrCode code_na292Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na292Times,
  code_na292Codes
};

const uint16_t code_na293Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na293Codes[] = { 0x1A, 0xAA, 0x95, 0x55, 0x65, 0x55, 0x6A, 0xAA, 0xA6, 0x9A, 0x99, 0x65, 0x70 };
const struct IrCode code_na293Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na293Times,
  code_na293Codes
};

const uint16_t code_na294Times[] = { 453, 423, 68, 146, 68, 39, 69, 41, 66, 41, 66, 42, 66, 149, 60, 47, 60, 154, 60, 155, 60, 157, 57, 157, 57, 50, 57, 513, 444, 431, 62, 152, 62, 45, 62, 0 };
const uint8_t code_na294Codes[] = { 0x00, 0x44, 0x11, 0x90, 0xA5, 0x31, 0x4E, 0x73, 0xA0, 0xE7, 0x39, 0xD0, 0x73, 0x9D, 0x08, 0x3A, 0x10, 0x84, 0xA5, 0x4B, 0x5A, 0xD6, 0xB5, 0xAD, 0x6B, 0x5A, 0xD6, 0xC5, 0xB1, 0x8C, 0x63, 0x5C, 0x74, 0x9D, 0x08, 0x43, 0xE0, 0xF7, 0xBD, 0x10, 0x43, 0xDE, 0xF8, 0x21, 0xEF, 0x84, 0x1F, 0x08, 0x42, 0x10, 0x84, 0x21, 0x08, 0x42, 0x10, 0x84, 0x21, 0x08, 0x3E, 0x0F, 0x7B, 0xDF, 0x10 };
const struct IrCode code_na294Code = {
  freq_to_timerval(38000),
  100,
  5,
  code_na294Times,
  code_na294Codes
};

const uint16_t code_na295Times[] = { 347, 174, 42, 46, 42, 131, 42, 47, 42, 48, 41, 46, 42, 132, 42, 130, 42, 45, 41, 131, 41, 47, 41, 48, 42, 43, 42, 1054, 347, 175, 41, 133, 41, 132, 41, 130, 42, 129, 42, 0 };
const uint8_t code_na295Codes[] = { 0x00, 0x44, 0x11, 0x8C, 0x64, 0x28, 0x4A, 0x10, 0x8C, 0xC4, 0x29, 0x4A, 0x11, 0x8C, 0xC6, 0x3A, 0x02, 0x90, 0x8C, 0x64, 0x40, 0x42, 0x15, 0x0D, 0x6B, 0x42, 0x02, 0xA5, 0x0D, 0x6B, 0x42, 0x02, 0xA5, 0x0C, 0x8B, 0x42, 0x0E, 0x90, 0x8C, 0x64, 0x63, 0x5C, 0x54, 0x84, 0x6B, 0x21, 0x10, 0x50, 0x84, 0x63, 0x31, 0x10, 0x80, 0x8C, 0x6B, 0x33, 0xCE, 0x10, 0x9C, 0x63, 0x19, 0x0A, 0x12, 0x84, 0x23, 0x19, 0x02, 0x72, 0x84, 0x50, 0x32, 0xD0, 0x80, 0xA4, 0x43, 0x31, 0x0A, 0x52, 0x84, 0x63, 0x21, 0x22, 0x73, 0x9C, 0x43, 0x31, 0x24, 0x70, 0xA4, 0x43, 0x19, 0x0A, 0x12, 0x84, 0x23, 0x19, 0x02, 0x11, 0x08, 0x43, 0x22, 0xD0, 0x80, 0x8C, 0x6B, 0x33, 0xCE, 0x12, 0x84, 0x23, 0x19, 0x02, 0x10, 0x84, 0x23, 0x19, 0x10, 0x72, 0x84, 0x23, 0x19, 0x0E, 0x52, 0x84, 0x63, 0x19, 0x0A, 0x12, 0x84, 0x23, 0x19, 0x02, 0x11, 0x08, 0x70, 0x22, 0xD9, 0x30 };
const struct IrCode code_na295Code = {
  freq_to_timerval(38000),
  220,
  5,
  code_na295Times,
  code_na295Codes
};

const uint16_t code_na296Times[] = { 347, 172, 44, 46, 42, 130, 42, 46, 42, 47, 42, 48, 41, 47, 41, 132, 42, 132, 41, 130, 42, 45, 42, 131, 41, 48, 41, 46, 41, 131, 42, 43, 41, 1054, 346, 175, 42, 129, 42, 0 };
const uint8_t code_na296Codes[] = { 0x00, 0x44, 0x31, 0x90, 0x85, 0x18, 0xC6, 0x33, 0x10, 0xE5, 0x18, 0xC6, 0x31, 0x91, 0x08, 0x4A, 0x86, 0xB3, 0x10, 0xAC, 0x52, 0x86, 0x42, 0x30, 0xA5, 0x53, 0x46, 0x32, 0x18, 0xA5, 0x6B, 0x5A, 0x32, 0x10, 0x85, 0x68, 0xDC, 0xB2, 0x30, 0xA5, 0x7C, 0x22, 0xA1, 0x0C, 0xC4, 0x63, 0x14, 0xA1, 0x98, 0xC4, 0x39, 0x54, 0x31, 0x98, 0xC4, 0x3A, 0x12, 0xD6, 0xAC, 0x8C, 0x29, 0x54, 0xD1, 0x8C, 0x84, 0x21, 0x5A, 0xD6, 0x8D, 0x68, 0x43, 0x14, 0xA1, 0xB8, 0xE4, 0x41, 0x5A, 0x36, 0x8C, 0x64, 0x21, 0x44, 0x91, 0x38, 0xE4, 0x41, 0x52, 0x91, 0xAD, 0x64, 0x63, 0x14, 0xA1, 0x98, 0xC4, 0x63, 0x14, 0xA1, 0x09, 0x64, 0x21, 0x5A, 0x36, 0x8C, 0x64, 0x42, 0x24, 0xA1, 0x90, 0x8C, 0x29, 0x54, 0xA1, 0x8C, 0x8C, 0x29, 0x5A, 0x91, 0x90, 0x8C, 0x29, 0x64, 0xA1, 0x98, 0x8C, 0x29, 0x54, 0xA1, 0x8C, 0x8C, 0x29, 0x54, 0x91, 0xAC, 0xCB, 0x61, 0x5F, 0x30 };
const struct IrCode code_na296Code = {
  freq_to_timerval(38000),
  220,
  5,
  code_na296Times,
  code_na296Codes
};

const uint16_t code_na297Times[] = { 903, 452, 59, 171, 56, 171, 56, 58, 57, 58, 56, 169, 60, 171, 57, 170, 57, 168, 59, 169, 59, 58, 57, 57, 59, 168, 56, 56, 59, 56, 58, 58, 60, 57, 59, 55, 56, 0 };
const uint8_t code_na297Codes[] = { 0x00, 0x44, 0x31, 0x90, 0x85, 0x30, 0x84, 0x71, 0xA1, 0x29, 0x52, 0xC6, 0x42, 0x0C, 0xA9, 0x62, 0x88, 0xB1, 0x8C, 0x6D, 0x50, 0xC8, 0x31, 0x8C, 0xAC, 0x50, 0xC8, 0xB1, 0x8C, 0x6D, 0x50, 0xC8, 0x31, 0x8D, 0x0E, 0x50, 0xC6, 0x41, 0x8D, 0xAE, 0x78, 0xC6, 0xB1, 0x8D, 0xAE, 0x50, 0xC8, 0x31, 0x8D, 0x0E, 0x50, 0xC6, 0x41, 0x8D, 0xAE, 0x80, 0x86, 0x21, 0x8D, 0xAE, 0x50, 0x84, 0x71, 0x15, 0x31, 0x0C, 0x80 };
const struct IrCode code_na297Code = {
  freq_to_timerval(38000),
  106,
  5,
  code_na297Times,
  code_na297Codes
};

const uint16_t code_na298Times[] = { 27, 1815, 302, 896, 52, 50, 50, 150, 49, 50, 50, 47, 53, 50, 50, 50, 49, 150, 50, 52, 47, 152, 50, 149, 50, 49, 49, 53, 47, 53, 46, 53, 47, 52, 52, 295, 300, 895, 52, 152, 47, 50, 52, 51, 50, 152, 52, 47, 49, 51, 52, 48, 49, 298, 52, 149, 52, 147, 52, 148, 50, 0 };
const uint8_t code_na298Codes[] = { 0x00, 0x44, 0x32, 0x14, 0xC7, 0x39, 0xC8, 0x83, 0xA5, 0x47, 0x38, 0xD0, 0xB5, 0xA1, 0x87, 0x39, 0xCE, 0xD7, 0x3E, 0x04, 0x21, 0xCE, 0x73, 0x90, 0x84, 0x39, 0xCE, 0x73, 0xB5, 0xF0, 0x81, 0x08, 0x73, 0x9C, 0x68, 0x5A, 0xE3, 0x29, 0xD2, 0xA7, 0x39, 0x08, 0x43, 0xAC, 0xE7, 0x41, 0xD7, 0x65, 0x0D, 0x0B, 0x39, 0xC8, 0x43, 0x9C, 0xE7, 0x39, 0x1B, 0x08, 0x5E, 0xF8, 0x39, 0xCE, 0x42, 0x30, 0xE7, 0x39, 0xC8, 0x44, 0xC2, 0x17, 0xC9, 0xCE, 0x7D, 0x4B, 0x67, 0x39, 0x08, 0x73, 0xA5, 0xCA, 0xC9, 0x08, 0x43, 0x9D, 0x68, 0x42, 0xCE, 0x36, 0xAB, 0x87, 0x39, 0xD0, 0x85, 0x9C, 0xE4, 0x21, 0xD3, 0x07, 0x73, 0xA4, 0x21, 0xD6, 0x73, 0x90, 0x87, 0x39, 0xEC, 0xAE, 0x23, 0xC0 };
const struct IrCode code_na298Code = {
  freq_to_timerval(38000),
  175,
  5,
  code_na298Times,
  code_na298Codes
};

const uint16_t code_na299Times[] = { 61, 1780, 302, 894, 52, 50, 50, 149, 49, 48, 52, 47, 52, 48, 52, 149, 49, 50, 50, 50, 49, 149, 49, 150, 50, 146, 52, 147, 49, 53, 47, 50, 51, 48, 50, 47, 49, 47, 52, 146, 49, 297, 299, 894, 52, 152, 49, 51, 49, 147, 50, 152, 47, 149, 51, 147, 47, 52, 46, 50, 51, 51, 53, 50, 50, 53, 46, 53, 50, 297, 300, 893, 50, 52, 51, 150, 52, 150, 49, 152, 46, 150, 52, 0 };
const uint8_t code_na299Codes[] = { 0x00, 0x10, 0x83, 0x10, 0x51, 0x46, 0x14, 0x51, 0x87, 0x20, 0x80, 0xC9, 0x08, 0xA2, 0xCC, 0x34, 0xD1, 0x42, 0x20, 0x92, 0x08, 0x24, 0x83, 0x8F, 0x15, 0x00, 0x88, 0x25, 0x10, 0x89, 0x44, 0x22, 0x49, 0x20, 0x82, 0x4E, 0x3C, 0x90, 0x84, 0x09, 0x24, 0xCD, 0x34, 0x75, 0x15, 0x58, 0xF2, 0x09, 0x08, 0x95, 0xC8, 0x48, 0x74, 0x42, 0x60, 0x22, 0xD9, 0x68, 0xB3, 0x5B, 0x14, 0x50, 0x92, 0x14, 0x24, 0x82, 0x20, 0x82, 0x48, 0x39, 0xC7, 0x5E, 0x10, 0x22, 0x51, 0x18, 0x22, 0x44, 0x15, 0xF2, 0x09, 0x24, 0x88, 0x1C, 0x84, 0xF1, 0x82, 0x8A, 0x34, 0xC5, 0x14, 0x61, 0x42, 0x20, 0x82, 0x4B, 0x91, 0x29, 0x52, 0x4C, 0xD1, 0x8D, 0x98, 0x39, 0xE8, 0x0C, 0xB3, 0x46, 0x14, 0x53, 0x53, 0x35, 0xF2, 0x09, 0x24, 0xE3, 0xC9, 0x39, 0x83, 0x46, 0x15, 0x33, 0x42, 0x24, 0x92, 0x08, 0x24, 0x82, 0x87, 0x61, 0x3A, 0x40 };
const struct IrCode code_na299Code = {
  freq_to_timerval(38000),
  175,
  6,
  code_na299Times,
  code_na299Codes
};

const uint16_t code_na300Times[] = { 908, 441, 71, 159, 71, 49, 74, 157, 74, 156, 74, 49, 71, 47, 74, 47, 71, 50, 71, 52, 71, 160, 71, 1996, 71, 0 };
const uint8_t code_na300Codes[] = { 0x01, 0x22, 0x33, 0x44, 0x56, 0x75, 0x22, 0x88, 0x88, 0x98, 0x88, 0xAA, 0x88, 0x88, 0x8A, 0x8A, 0x88, 0xA8, 0xBA, 0x88, 0x88, 0x88, 0x8A, 0x88, 0x88, 0xA8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8A, 0x8A, 0x8C };
const struct IrCode code_na300Code = {
  freq_to_timerval(38000),
  70,
  4,
  code_na300Times,
  code_na300Codes
};

const uint16_t code_na301Times[] = { 911, 437, 76, 155, 71, 50, 71, 160, 73, 50, 70, 50, 71, 1994, 70, 160, 71, 0 };
const uint8_t code_na301Codes[] = { 0x01, 0x22, 0x23, 0x33, 0x22, 0x22, 0x24, 0x22, 0x22, 0x22, 0x22, 0x32, 0x22, 0x22, 0x23, 0x53, 0x52, 0x32, 0x63, 0x22, 0x22, 0x22, 0x23, 0x22, 0x25, 0x35, 0x22, 0x25, 0x22, 0x22, 0x22, 0x22, 0x23, 0x23, 0x78 };
const struct IrCode code_na301Code = {
  freq_to_timerval(38000),
  70,
  4,
  code_na301Times,
  code_na301Codes
};

const uint16_t code_na302Times[] = { 383, 189, 46, 46, 51, 143, 44, 47, 49, 142, 43, 47, 44, 48, 46, 142, 43, 49, 43, 44, 51, 142, 43, 144, 48, 141, 49, 139, 46, 143, 46, 140, 43, 46, 46, 50, 46, 139, 44, 46, 49, 47, 46, 48, 46, 49, 46, 44, 43, 143, 49, 140, 49, 141, 43, 50, 46, 146, 41, 46, 46, 47, 48, 144, 48, 142, 44, 50, 44, 143, 44, 49, 44, 144, 48, 0 };
const uint8_t code_na302Codes[] = { 0x00, 0x10, 0x83, 0x10, 0x51, 0x06, 0x1C, 0x81, 0x09, 0x28, 0xB1, 0x8C, 0x18, 0xD3, 0x8F, 0x11, 0x04, 0x52, 0x11, 0x35, 0x15, 0x54, 0x72, 0x16, 0x5C, 0xA6, 0x08, 0x64, 0x80, 0x5A, 0x64, 0x72, 0x16, 0x6D, 0xC7, 0x54, 0x55, 0xE3, 0x06, 0x05, 0xF4, 0x20, 0x79, 0x57, 0x95, 0x5A, 0x16, 0xC1, 0x58, 0xE3, 0xC4, 0x88, 0x65, 0x63, 0x56, 0x35, 0x63, 0x56, 0x35, 0x63, 0x38, 0x65, 0x5E, 0x55, 0xE5, 0x5E, 0x55, 0xE5, 0x5E, 0x59, 0xE1, 0x24, 0x3C, 0x71, 0x96, 0x84, 0xE2, 0x04, 0x16, 0x50 };
const struct IrCode code_na302Code = {
  freq_to_timerval(38000),
  106,
  6,
  code_na302Times,
  code_na302Codes
};

const uint16_t code_na303Times[] = { 382, 190, 46, 51, 46, 142, 43, 49, 48, 142, 43, 48, 49, 142, 43, 47, 48, 143, 44, 47, 46, 143, 46, 144, 44, 48, 44, 142, 46, 47, 46, 141, 46, 49, 47, 143, 46, 48, 46, 138, 47, 48, 47, 142, 44, 46, 44, 49, 43, 143, 46, 46, 43, 50, 46, 139, 48, 0 };
const uint8_t code_na303Codes[] = { 0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x4C, 0x31, 0x28, 0x6B, 0x61, 0x1A, 0x21, 0x31, 0xC6, 0x7B, 0x20, 0xE8, 0x44, 0xF2, 0x71, 0xA7, 0x42, 0x1E, 0x15, 0x12, 0xAD, 0x07, 0x41, 0x4C, 0x95, 0xD4, 0xC9, 0x2D, 0x8B, 0x4C, 0x9D, 0x27, 0x49, 0xD2, 0x71, 0x30, 0x21, 0x5A, 0x19, 0x83, 0xA0, 0xE9, 0x3A, 0x4E, 0x31, 0xE4, 0xE9, 0x3A, 0x4E, 0x84, 0x34, 0xE8, 0x41, 0xFB, 0x20, 0x93, 0x27, 0x49, 0x6D, 0x67, 0x00 };
const struct IrCode code_na303Code = {
  freq_to_timerval(38000),
  106,
  5,
  code_na303Times,
  code_na303Codes
};

const uint16_t code_na304Times[] = { 309, 161, 49, 106, 52, 34, 49, 109, 48, 32, 51, 34, 49, 34, 49, 33, 48, 34, 49, 108, 48, 4423, 18, 0 };
const uint8_t code_na304Codes[] = { 0x01, 0x23, 0x45, 0x36, 0x63, 0x77, 0x86, 0x66, 0x63, 0x79, 0x63, 0x37, 0x8A, 0xB0 };
const struct IrCode code_na304Code = {
  freq_to_timerval(38000),
  27,
  4,
  code_na304Times,
  code_na304Codes
};

const uint16_t code_na305Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na305Codes[] = { 0x1A, 0xAA, 0x95, 0x55, 0x65, 0x55, 0x6A, 0xAA, 0xA6, 0x9A, 0x99, 0x65, 0x70 };
const struct IrCode code_na305Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na305Times,
  code_na305Codes
};

const uint16_t code_na306Times[] = { 438, 438, 52, 161, 55, 161, 56, 160, 56, 52, 55, 53, 55, 746, 439, 434, 55, 0 };
const uint8_t code_na306Codes[] = { 0x01, 0x22, 0x34, 0x52, 0x55, 0x55, 0x53, 0x35, 0x25, 0x55, 0x54, 0x42, 0x22, 0x23, 0x32, 0x25, 0x55, 0x44, 0x45, 0x55, 0x25, 0x23, 0x55, 0x55, 0x55, 0x55, 0x44, 0x45, 0x25, 0x55, 0x55, 0x44, 0x55, 0x22, 0x55, 0x44, 0x46, 0x73, 0x22, 0x25, 0x53, 0x45, 0x55, 0x52, 0x24, 0x35, 0x55, 0x55, 0x52, 0x33, 0x22, 0x22, 0x35, 0x55, 0x55, 0x55, 0x55, 0x35, 0x22, 0x55, 0x55, 0x44, 0x45, 0x55, 0x55, 0x24, 0x44, 0x45, 0x55, 0x55, 0x23, 0x45, 0x55, 0x58 };
const struct IrCode code_na306Code = {
  freq_to_timerval(38000),
  148,
  4,
  code_na306Times,
  code_na306Codes
};

const uint16_t code_na307Times[] = { 439, 435, 55, 161, 56, 160, 55, 53, 56, 53, 56, 52, 55, 745, 438, 435, 55, 163, 53, 160, 55, 160, 56, 0 };
const uint8_t code_na307Codes[] = { 0x01, 0x12, 0x13, 0x31, 0x33, 0x45, 0x52, 0x13, 0x13, 0x55, 0x53, 0x31, 0x11, 0x22, 0x11, 0x15, 0x55, 0x53, 0x33, 0x33, 0x14, 0x22, 0x33, 0x33, 0x33, 0x34, 0x55, 0x11, 0x13, 0x34, 0x55, 0x53, 0x33, 0x11, 0x55, 0x21, 0x36, 0x71, 0x11, 0x15, 0x52, 0x33, 0x33, 0x38, 0x95, 0x23, 0x33, 0x33, 0x3A, 0x21, 0x11, 0x12, 0x23, 0x33, 0x33, 0x33, 0x35, 0x23, 0x11, 0x33, 0x35, 0x55, 0x33, 0x33, 0x11, 0x25, 0x33, 0x33, 0x33, 0x33, 0x22, 0x33, 0x11, 0x4B };
const struct IrCode code_na307Code = {
  freq_to_timerval(38000),
  148,
  4,
  code_na307Times,
  code_na307Codes
};

const uint16_t code_na308Times[] = { 441, 435, 57, 158, 57, 50, 56, 54, 54, 51, 57, 53, 54, 50, 56, 51, 54, 158, 57, 157, 56, 158, 56, 161, 54, 517, 54, 161, 54, 157, 57, 51, 56, 0 };
const uint8_t code_na308Codes[] = { 0x00, 0x44, 0x11, 0x08, 0x64, 0x08, 0x4A, 0x61, 0x1C, 0xE5, 0x40, 0x92, 0xA3, 0xA8, 0x21, 0x2A, 0x12, 0xA5, 0x04, 0x21, 0x0A, 0x54, 0xA0, 0x84, 0x21, 0x49, 0xD4, 0xB3, 0x14, 0xC2, 0x5B, 0x00, 0x36, 0x90, 0x21, 0x08, 0x4A, 0x45, 0x28, 0x21, 0x08, 0x4A, 0x83, 0x9C, 0x22, 0x11, 0x5C, 0x73, 0x9D, 0xE2, 0x10, 0x84, 0x32, 0x1C, 0x45, 0x30, 0x8A, 0x83, 0xBC, 0x21, 0x0A, 0x45, 0x00 };
const struct IrCode code_na308Code = {
  freq_to_timerval(38000),
  100,
  5,
  code_na308Times,
  code_na308Codes
};

const uint16_t code_na309Times[] = { 439, 443, 53, 162, 53, 55, 53, 163, 53, 522, 440, 443, 53, 54, 53, 0 };
const uint8_t code_na309Codes[] = { 0x05, 0x14, 0x92, 0x29, 0x24, 0x93, 0x49, 0x94, 0x49, 0x44, 0x92, 0x49, 0x24, 0x92, 0x49, 0x24, 0x94, 0x91, 0x32, 0xA2, 0x89, 0x25, 0x12, 0x49, 0x28, 0x94, 0x8A, 0x48, 0xA4, 0x92, 0x49, 0x25, 0x92, 0x49, 0x24, 0x89, 0x29, 0x70 };
const struct IrCode code_na309Code = {
  freq_to_timerval(38000),
  100,
  3,
  code_na309Times,
  code_na309Codes
};

const uint16_t code_na310Times[] = { 99, 61, 59, 221, 59, 147, 59, 88, 59, 38, 58, 221, 59, 37, 58, 147, 58, 38, 58, 40, 56, 40, 56, 88, 58, 88, 58, 37, 59, 0 };
const uint8_t code_na310Codes[] = { 0x01, 0x23, 0x14, 0x56, 0x76, 0x88, 0x9A, 0xB4, 0x85, 0x6C, 0x36, 0x85, 0x38, 0x8D, 0xD8, 0x7C, 0x45, 0x35, 0x48, 0x9B, 0x68, 0x88, 0x85, 0x18, 0xCE };
const struct IrCode code_na310Code = {
  freq_to_timerval(38000),
  50,
  4,
  code_na310Times,
  code_na310Codes
};

const uint16_t code_na311Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na311Codes[] = { 0x15, 0x55, 0x95, 0xA6, 0xAA, 0xAA, 0x6A, 0x59, 0x6A, 0x99, 0x55, 0x66, 0xB0 };
const struct IrCode code_na311Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na311Times,
  code_na311Codes
};

const uint16_t code_na312Times[] = { 60, 120, 60, 60 };
const uint8_t code_na312Codes[] = { 0x2B, 0xD2, 0x90 };
const struct IrCode code_na312Code = {
  freq_to_timerval(38000),
  22,
  1,
  code_na312Times,
  code_na312Codes
};

const uint16_t code_na313Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na313Codes[] = { 0x1A, 0xAA, 0xA5, 0x55, 0x6A, 0xA9, 0x95, 0x56, 0x70 };
const struct IrCode code_na313Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na313Times,
  code_na313Codes
};

const uint16_t code_na314Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na314Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x56, 0x6A, 0xA9, 0xB0 };
const struct IrCode code_na314Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na314Times,
  code_na314Codes
};

const uint16_t code_na315Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na315Codes[] = { 0x1A, 0x55, 0xA6, 0x55, 0x65, 0xAA, 0x59, 0xAA, 0xAA, 0x95, 0x55, 0x6A, 0xB0 };
const struct IrCode code_na315Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na315Times,
  code_na315Codes
};

const uint16_t code_na316Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na316Codes[] = { 0x1A, 0x55, 0xA6, 0x55, 0x65, 0xAA, 0x59, 0xAA, 0xAA, 0x95, 0x55, 0x6A, 0xB0 };
const struct IrCode code_na316Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na316Times,
  code_na316Codes
};

const uint16_t code_na317Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na317Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na317Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na317Times,
  code_na317Codes
};

const uint16_t code_na318Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na318Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na318Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na318Times,
  code_na318Codes
};

const uint16_t code_na319Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na319Codes[] = { 0x16, 0x55, 0x56, 0x6A, 0xA9, 0xAA, 0xA9, 0x95, 0x55, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na319Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na319Times,
  code_na319Codes
};

const uint16_t code_na320Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na320Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na320Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na320Times,
  code_na320Codes
};

const uint16_t code_na321Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na321Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na321Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na321Times,
  code_na321Codes
};

const uint16_t code_na322Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na322Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na322Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na322Times,
  code_na322Codes
};

const uint16_t code_na323Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na323Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na323Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na323Times,
  code_na323Codes
};

const uint16_t code_na324Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na324Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na324Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na324Times,
  code_na324Codes
};

const uint16_t code_na325Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na325Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na325Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na325Times,
  code_na325Codes
};

const uint16_t code_na326Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na326Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na326Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na326Times,
  code_na326Codes
};

const uint16_t code_na327Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na327Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na327Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na327Times,
  code_na327Codes
};

const uint16_t code_na328Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na328Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na328Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na328Times,
  code_na328Codes
};

const uint16_t code_na329Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na329Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na329Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na329Times,
  code_na329Codes
};

const uint16_t code_na330Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na330Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na330Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na330Times,
  code_na330Codes
};

const uint16_t code_na331Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na331Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na331Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na331Times,
  code_na331Codes
};

const uint16_t code_na332Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na332Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na332Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na332Times,
  code_na332Codes
};

const uint16_t code_na333Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na333Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na333Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na333Times,
  code_na333Codes
};

const uint16_t code_na334Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na334Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na334Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na334Times,
  code_na334Codes
};

const uint16_t code_na335Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na335Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na335Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na335Times,
  code_na335Codes
};

const uint16_t code_na336Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na336Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na336Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na336Times,
  code_na336Codes
};

const uint16_t code_na337Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na337Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na337Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na337Times,
  code_na337Codes
};

const uint16_t code_na338Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na338Codes[] = { 0x1A, 0x65, 0x9A, 0x65, 0xA5, 0x9A, 0x65, 0x9A, 0x5A, 0xAA, 0xA5, 0x55, 0x70 };
const struct IrCode code_na338Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na338Times,
  code_na338Codes
};

const uint16_t code_na339Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na339Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na339Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na339Times,
  code_na339Codes
};

const uint16_t code_na340Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na340Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na340Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na340Times,
  code_na340Codes
};

const uint16_t code_na341Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na341Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na341Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na341Times,
  code_na341Codes
};

const uint16_t code_na342Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na342Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na342Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na342Times,
  code_na342Codes
};

const uint16_t code_na343Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na343Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na343Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na343Times,
  code_na343Codes
};

const uint16_t code_na344Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na344Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na344Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na344Times,
  code_na344Codes
};

const uint16_t code_na345Times[] = { 355, 171, 47, 41, 46, 128, 49, 38, 46, 41, 46, 40, 47, 40, 49, 41, 46, 7457, 354, 172, 46, 129, 46, 0 };
const uint8_t code_na345Codes[] = { 0x01, 0x21, 0x34, 0x45, 0x61, 0x74, 0x44, 0x24, 0x44, 0x44, 0x44, 0x44, 0x24, 0x44, 0x44, 0x44, 0x42, 0x42, 0x22, 0x24, 0x42, 0x42, 0x22, 0x24, 0x28, 0x94, 0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 0x24, 0x44, 0x44, 0x44, 0x44, 0x24, 0x44, 0x44, 0x44, 0x42, 0x42, 0x22, 0x24, 0x42, 0x42, 0x22, 0x24, 0x28, 0x94, 0x24, 0x44, 0x44, 0x44, 0x44, 0x44, 0x24, 0x44, 0x44, 0x44, 0x44, 0x24, 0x44, 0x44, 0x44, 0x42, 0x42, 0x22, 0x24, 0x42, 0x42, 0x2A, 0xA4, 0xAB };
const struct IrCode code_na345Code = {
  freq_to_timerval(38000),
  150,
  4,
  code_na345Times,
  code_na345Codes
};

const uint16_t code_na346Times[] = { 351, 177, 42, 46, 42, 133, 42, 45, 43, 45, 42, 130, 45, 130, 44, 131, 45, 131, 44, 46, 42, 131, 45, 45, 43, 130, 50, 125, 50, 38, 45, 7547, 351, 176, 45, 46, 43, 131, 46, 45, 44, 132, 45, 7548, 352, 177, 46, 130, 45, 42, 45, 0 };
const uint8_t code_na346Codes[] = { 0x00, 0x44, 0x32, 0x0C, 0x23, 0x20, 0xC2, 0x32, 0x0C, 0x44, 0x08, 0xC6, 0x40, 0x8C, 0x64, 0x10, 0xC8, 0x11, 0x8C, 0x21, 0x18, 0x82, 0x53, 0x1D, 0x09, 0x0A, 0x96, 0xC4, 0x35, 0xAE, 0x33, 0xE1, 0x12, 0xAC, 0x21, 0x18, 0xC2, 0x11, 0x8C, 0x21, 0x11, 0x08, 0x30, 0x8C, 0x83, 0x08, 0xE5, 0x30, 0x8C, 0x64, 0x20, 0xC6, 0xC5, 0xA8, 0xCD, 0xA3, 0x96, 0xC5, 0xA9, 0x06, 0x32, 0xD9, 0x5B, 0x0D, 0x8B, 0x19, 0x02, 0x31, 0x90, 0x23, 0x08, 0xCA, 0x90, 0x8C, 0x64, 0x08, 0xC6, 0x42, 0xAC, 0x84, 0x18, 0xC8, 0x41, 0xA9, 0x65, 0x41, 0xAE, 0xB0, 0xAA, 0x2A, 0x32, 0x0D, 0x84, 0x64 };
const struct IrCode code_na346Code = {
  freq_to_timerval(38000),
  150,
  5,
  code_na346Times,
  code_na346Codes
};

const uint16_t code_na347Times[] = { 350, 175, 43, 43, 43, 130, 43, 0 };
const uint8_t code_na347Codes[] = { 0x15, 0x55, 0x99, 0x55, 0x55, 0x66, 0xA9, 0x55, 0x70 };
const struct IrCode code_na347Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na347Times,
  code_na347Codes
};

const uint16_t code_na348Times[] = { 356, 169, 49, 38, 49, 126, 49, 7505, 49, 0 };
const uint8_t code_na348Codes[] = { 0x05, 0x12, 0x49, 0x24, 0x92, 0x51, 0x24, 0x92, 0x49, 0x44, 0x92, 0x49, 0x28, 0xA4, 0x91, 0x28, 0xA4, 0x91, 0x4C, 0x14, 0x49, 0x24, 0x92, 0x49, 0x44, 0x92, 0x49, 0x25, 0x12, 0x49, 0x24, 0xA2, 0x92, 0x44, 0xA2, 0x92, 0x45, 0x30, 0x51, 0x24, 0x92, 0x49, 0x25, 0x12, 0x49, 0x24, 0x94, 0x49, 0x24, 0x92, 0x8A, 0x49, 0x12, 0x8A, 0x49, 0x15, 0x00 };
const struct IrCode code_na348Code = {
  freq_to_timerval(38000),
  150,
  3,
  code_na348Times,
  code_na348Codes
};

const uint16_t code_na349Times[] = { 348, 174, 44, 43, 45, 130, 45, 42, 45, 43, 45, 45, 42, 43, 44, 130, 45, 129, 44, 7494, 348, 173, 45, 46, 42, 42, 45, 0 };
const uint8_t code_na349Codes[] = { 0x01, 0x23, 0x31, 0x43, 0x56, 0x43, 0x31, 0x73, 0x31, 0x43, 0x31, 0x43, 0x21, 0x33, 0x31, 0x43, 0x37, 0x32, 0x72, 0x73, 0x38, 0x42, 0x72, 0x83, 0x29, 0xA1, 0x23, 0x3B, 0xC3, 0x31, 0x43, 0x31, 0x23, 0x31, 0x33, 0x31, 0x43, 0x21, 0x33, 0x31, 0x43, 0x37, 0x32, 0x72, 0x73, 0x38, 0x32, 0x72, 0x73, 0x29, 0xA1, 0x23, 0x14, 0x33, 0x31, 0x43, 0x31, 0x23, 0x34, 0x33, 0x31, 0x43, 0x21, 0x33, 0x31, 0x43, 0x37, 0x32, 0x72, 0x73, 0x38, 0x32, 0x72, 0x73, 0x29, 0xA1, 0x23, 0x14, 0x33, 0x34, 0x33, 0x31, 0x23, 0x14, 0x33, 0x34, 0x33, 0x84, 0x33, 0x14, 0x33, 0x32, 0x38, 0x28, 0x23, 0x32, 0x38, 0x22, 0x73, 0x8D };
const struct IrCode code_na349Code = {
  freq_to_timerval(38000),
  200,
  4,
  code_na349Times,
  code_na349Codes
};

const uint16_t code_na350Times[] = { 348, 174, 44, 43, 45, 130, 45, 42, 45, 43, 45, 45, 42, 43, 44, 130, 45, 129, 44, 7494, 348, 173, 45, 46, 42, 42, 45, 0 };
const uint8_t code_na350Codes[] = { 0x01, 0x23, 0x31, 0x43, 0x56, 0x43, 0x31, 0x73, 0x31, 0x43, 0x31, 0x43, 0x21, 0x33, 0x31, 0x43, 0x37, 0x32, 0x72, 0x73, 0x38, 0x42, 0x72, 0x83, 0x29, 0xA1, 0x23, 0x3B, 0xC3, 0x31, 0x43, 0x31, 0x23, 0x31, 0x33, 0x31, 0x43, 0x21, 0x33, 0x31, 0x43, 0x37, 0x32, 0x72, 0x73, 0x38, 0x32, 0x72, 0x73, 0x29, 0xA1, 0x23, 0x14, 0x33, 0x31, 0x43, 0x31, 0x23, 0x34, 0x33, 0x31, 0x43, 0x21, 0x33, 0x31, 0x43, 0x37, 0x32, 0x72, 0x73, 0x38, 0x32, 0x72, 0x73, 0x29, 0xA1, 0x23, 0x14, 0x33, 0x34, 0x33, 0x31, 0x23, 0x14, 0x33, 0x34, 0x33, 0x84, 0x33, 0x14, 0x33, 0x32, 0x38, 0x28, 0x23, 0x32, 0x38, 0x22, 0x73, 0x8D };
const struct IrCode code_na350Code = {
  freq_to_timerval(38000),
  200,
  4,
  code_na350Times,
  code_na350Codes
};

const uint16_t code_na351Times[] = { 348, 172, 46, 44, 43, 128, 43, 44, 45, 42, 45, 129, 45, 45, 42, 42, 42, 45, 42, 132, 42, 7473, 348, 175, 42, 0 };
const uint8_t code_na351Codes[] = { 0x01, 0x21, 0x33, 0x33, 0x33, 0x44, 0x44, 0x54, 0x67, 0x68, 0x76, 0x88, 0x98, 0x88, 0x88, 0x88, 0x89, 0x89, 0x99, 0x98, 0x89, 0x89, 0x99, 0x98, 0x9A, 0xB8, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x89, 0x89, 0x99, 0x98, 0x89, 0x89, 0x99, 0x98, 0x9A, 0xB8, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x89, 0x89, 0x99, 0x98, 0x89, 0x89, 0x99, 0x98, 0x9C };
const struct IrCode code_na351Code = {
  freq_to_timerval(38000),
  150,
  4,
  code_na351Times,
  code_na351Codes
};

const uint16_t code_na352Times[] = { 350, 175, 43, 43, 43, 130, 43, 0 };
const uint8_t code_na352Codes[] = { 0x15, 0x55, 0x99, 0x55, 0x55, 0x66, 0xA9, 0x55, 0x70 };
const struct IrCode code_na352Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na352Times,
  code_na352Codes
};

const uint16_t code_na353Times[] = { 356, 167, 52, 39, 49, 124, 49, 39, 49, 36, 51, 39, 49, 126, 48, 39, 48, 40, 48, 42, 46, 40, 46, 130, 46, 42, 45, 42, 45, 130, 45, 7466, 352, 174, 353, 170, 48, 127, 48, 129, 45, 45, 43, 45, 43, 132, 43, 0 };
const uint8_t code_na353Codes[] = { 0x00, 0x44, 0x11, 0x8C, 0x63, 0x19, 0x0A, 0x31, 0x8C, 0xC3, 0x39, 0xCE, 0x84, 0x25, 0x49, 0x5B, 0x18, 0xC6, 0x31, 0x8C, 0x62, 0xDA, 0xB7, 0x39, 0xCD, 0x63, 0x9A, 0xE7, 0x39, 0xCD, 0x73, 0xE0, 0xD7, 0x35, 0xAD, 0x6B, 0x5A, 0xD6, 0xB5, 0xAD, 0x73, 0x5A, 0xD6, 0xB5, 0xAD, 0x6B, 0x5C, 0xD6, 0xB5, 0xAD, 0x6B, 0x5A, 0xE6, 0xB9, 0xCE, 0x73, 0x5A, 0xE6, 0xB9, 0xCE, 0x73, 0x5C, 0xF8, 0x35, 0xCD, 0x6B, 0x5A, 0xD6, 0xB5, 0xAD, 0x6B, 0x5C, 0xD6, 0xB5, 0xAD, 0x6B, 0x5A, 0xD7, 0x35, 0xAD, 0x6B, 0x5A, 0xD6, 0xB9, 0xAE, 0x73, 0x9C, 0xD6, 0xB9, 0xAE, 0x73, 0x9C, 0xD7, 0x3E, 0x27, 0x91, 0xCE, 0x73, 0x9C, 0xE7, 0x39, 0xCE, 0x79, 0xB1, 0x8C, 0x63, 0x18, 0xC6, 0x31, 0x6C, 0x63, 0x18, 0xC6, 0x31, 0x8B, 0x62, 0xD6, 0xB5, 0xD2, 0xB6, 0xAD, 0xAD, 0x6B, 0x56, 0xD7 };
const struct IrCode code_na353Code = {
  freq_to_timerval(38000),
  200,
  5,
  code_na353Times,
  code_na353Codes
};

const uint16_t code_na354Times[] = { 450, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na354Codes[] = { 0x1A, 0xA9, 0x65, 0x56, 0x96, 0x95, 0x69, 0x6A, 0xB0 };
const struct IrCode code_na354Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na354Times,
  code_na354Codes
};

const uint16_t code_na355Times[] = { 350, 175, 43, 43, 43, 130, 43, 0 };
const uint8_t code_na355Codes[] = { 0x15, 0x55, 0x99, 0x55, 0x55, 0x66, 0xA9, 0x55, 0x70 };
const struct IrCode code_na355Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na355Times,
  code_na355Codes
};

const uint16_t code_na356Times[] = { 352, 172, 47, 41, 47, 128, 46, 41, 47, 44, 46, 42, 46, 130, 46, 129, 46, 7471, 354, 173, 46, 132, 43, 132, 43, 42, 43, 45, 43, 7471, 353, 173, 46, 0 };
const uint8_t code_na356Codes[] = { 0x00, 0x44, 0x11, 0x84, 0x24, 0x18, 0xC6, 0x52, 0x94, 0xC5, 0x29, 0x4A, 0x52, 0x94, 0xA5, 0x39, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x8A, 0x63, 0x18, 0xC5, 0x29, 0x8A, 0x63, 0x18, 0xC5, 0x32, 0x12, 0x53, 0x14, 0xA5, 0x29, 0x4A, 0x52, 0x94, 0xA5, 0x31, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x4C, 0x52, 0x94, 0xA5, 0x29, 0x4A, 0x62, 0x98, 0xCA, 0x5B, 0x0A, 0xA6, 0x29, 0x6B, 0x5B, 0x56, 0xE4, 0x94, 0xC5, 0x29, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x4E, 0x52, 0x94, 0xA5, 0x29, 0x4A, 0x53, 0x14, 0xA5, 0x29, 0x4A, 0x52, 0x98, 0xA6, 0x31, 0x8C, 0x52, 0x98, 0xA6, 0x31, 0x8C, 0x53, 0x21, 0xE5, 0x31, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x4A, 0x53, 0x14, 0xA5, 0x29, 0x4A, 0x52, 0x94, 0xC5, 0x29, 0x4A, 0x52, 0x94, 0xA6, 0x29, 0x8E, 0x63, 0x14, 0xA6, 0x29, 0x8C, 0x63, 0x14, 0xC8, 0x79, 0x4E, 0x52, 0x94, 0xA5, 0x29, 0x4A, 0x52, 0x94, 0xC5, 0x29, 0x4A, 0x52, 0x94, 0xA5, 0x31, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x8A, 0x63, 0x18, 0xC5, 0x29, 0x8A, 0x63, 0x18, 0xC5, 0x32, 0x1E, 0x53, 0x14, 0xA5, 0x29, 0x4A, 0x52, 0x94, 0xA5, 0x31, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x4C, 0x52, 0x94, 0xA5, 0x29, 0x4A, 0x62, 0x98, 0xC6, 0x31, 0x4A, 0x62, 0x98, 0xC6, 0x31, 0x4C, 0x87, 0x94, 0xC5, 0x29, 0x4A, 0x52, 0x94, 0xA5, 0x29, 0x4C, 0x52, 0x94, 0xA5, 0x29, 0x4A, 0x53, 0x14, 0xA5, 0x29, 0x4A, 0x52, 0x98, 0xA6, 0x31, 0x8C, 0x52, 0x98, 0xA6, 0x31, 0x8C, 0x53, 0x40 };
const struct IrCode code_na356Code = {
  freq_to_timerval(38000),
  350,
  5,
  code_na356Times,
  code_na356Codes
};

const uint16_t code_na357Times[] = { 350, 175, 43, 43, 43, 130, 43, 0 };
const uint8_t code_na357Codes[] = { 0x15, 0x55, 0x99, 0x55, 0x55, 0x66, 0xA9, 0x55, 0x70 };
const struct IrCode code_na357Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na357Times,
  code_na357Codes
};

const uint16_t code_na358Times[] = { 353, 171, 45, 43, 45, 131, 45, 45, 42, 43, 45, 46, 42, 46, 45, 42, 46, 42, 42, 131, 43, 42, 43, 130, 43, 45, 45, 130, 46, 45, 42, 130, 45, 7469, 353, 172, 42, 45, 46, 130, 45, 7043, 18, 0 };
const uint8_t code_na358Codes[] = { 0x00, 0x44, 0x32, 0x14, 0xC4, 0x29, 0x0E, 0x82, 0x99, 0x23, 0x50, 0x4A, 0x42, 0x90, 0x23, 0x59, 0x4C, 0x41, 0xB1, 0x86, 0x32, 0x46, 0xB1, 0x34, 0x4E, 0x32, 0x4A, 0xF1, 0x34, 0x43, 0x5C, 0x22, 0xE4, 0x84, 0x27, 0x71, 0x02, 0x10, 0x84, 0x23, 0x58, 0x42, 0x10, 0x8D, 0x45, 0x20, 0x44, 0x35, 0x14, 0x85, 0x21, 0x64, 0xB2, 0xA5, 0xA2, 0x69, 0x48, 0x23, 0xCC, 0x4D, 0x11, 0xE7, 0x4A, 0x80 };
const struct IrCode code_na358Code = {
  freq_to_timerval(38000),
  101,
  5,
  code_na358Times,
  code_na358Codes
};

const uint16_t code_na359Times[] = { 340, 166, 46, 42, 44, 125, 43, 42, 44, 42, 43, 43, 43, 126, 43, 123, 44, 122, 46, 123, 46, 126, 47, 39, 46, 122, 46, 7280, 43, 40, 47, 42, 46, 40, 44, 123, 44, 7280, 340, 169, 46, 43, 44, 39, 43, 125, 340, 168, 46, 125, 46, 0 };
const uint8_t code_na359Codes[] = { 0x00, 0x44, 0x32, 0x10, 0x64, 0x20, 0xC8, 0x41, 0x90, 0x44, 0x29, 0x06, 0x42, 0x0C, 0x84, 0x31, 0x48, 0x42, 0x90, 0x65, 0x21, 0xC2, 0x21, 0x21, 0x21, 0x2A, 0x02, 0x74, 0xA9, 0x0B, 0x63, 0x40, 0x13, 0x14, 0x84, 0x29, 0x06, 0x42, 0x39, 0xE4, 0x31, 0x48, 0x32, 0x10, 0x64, 0x21, 0x44, 0x41, 0x90, 0x85, 0x21, 0x0A, 0x22, 0x18, 0x42, 0x44, 0x02, 0x22, 0x45, 0x46, 0x3B, 0xC5, 0x29, 0x90, 0xC3, 0x23, 0xA8, 0x41, 0x90, 0x83, 0x21, 0x0C, 0x42, 0x16, 0xA1, 0x29, 0x06, 0x44, 0x04, 0xA4, 0x21, 0x48, 0x32, 0x08, 0x86, 0x10, 0x90, 0x11, 0xA0, 0x22, 0xB1, 0xD4, 0x51, 0x4A, 0xE5, 0x11, 0x06, 0x42, 0x0C, 0x84, 0x19, 0x08, 0x51, 0x10, 0x64, 0x20, 0xC8, 0x42, 0x92, 0xC3, 0x21, 0x06, 0x42, 0x14, 0x96, 0x1A, 0x18, 0xCC, 0x10, 0xA2, 0x21, 0x8C, 0x64, 0x3C, 0x52, 0xB9, 0x44, 0x41, 0x90, 0x83, 0x21, 0x0A, 0x41, 0x94, 0x44, 0x29, 0x08, 0x52, 0x0C, 0x84, 0x30, 0xC8, 0x42, 0x90, 0x85, 0x21, 0x8A, 0x21, 0x08, 0x43, 0x20, 0x88, 0x61, 0x08, 0x44, 0x3E, 0x40 };
const struct IrCode code_na359Code = {
  freq_to_timerval(38000),
  250,
  5,
  code_na359Times,
  code_na359Codes
};

const uint16_t code_na360Times[] = { 350, 175, 43, 43, 43, 130, 43, 0 };
const uint8_t code_na360Codes[] = { 0x15, 0x55, 0x99, 0x55, 0x55, 0x66, 0xA9, 0x55, 0x70 };
const struct IrCode code_na360Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na360Times,
  code_na360Codes
};

const uint16_t code_na361Times[] = { 89, 89 };
const uint8_t code_na361Codes[] = { 0x00, 0x00 };
const struct IrCode code_na361Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na361Times,
  code_na361Codes
};

const uint16_t code_na362Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na362Codes[] = { 0x15, 0x55, 0x66, 0xA9, 0xAA, 0xAA, 0x99, 0x56, 0x65, 0x55, 0x5A, 0xAA, 0xB0 };
const struct IrCode code_na362Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na362Times,
  code_na362Codes
};

const uint16_t code_na363Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na363Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na363Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na363Times,
  code_na363Codes
};

const uint16_t code_na364Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na364Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na364Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na364Times,
  code_na364Codes
};

const uint16_t code_na365Times[] = { 89, 89 };
const uint8_t code_na365Codes[] = { 0x00, 0x00 };
const struct IrCode code_na365Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na365Times,
  code_na365Codes
};

const uint16_t code_na366Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na366Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na366Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na366Times,
  code_na366Codes
};

const uint16_t code_na367Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na367Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na367Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na367Times,
  code_na367Codes
};

const uint16_t code_na368Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na368Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na368Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na368Times,
  code_na368Codes
};

const uint16_t code_na369Times[] = { 89, 89 };
const uint8_t code_na369Codes[] = { 0x00, 0x00 };
const struct IrCode code_na369Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na369Times,
  code_na369Codes
};

const uint16_t code_na370Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na370Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na370Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na370Times,
  code_na370Codes
};

const uint16_t code_na371Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na371Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na371Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na371Times,
  code_na371Codes
};

const uint16_t code_na372Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na372Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na372Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na372Times,
  code_na372Codes
};

const uint16_t code_na373Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na373Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na373Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na373Times,
  code_na373Codes
};

const uint16_t code_na374Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na374Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na374Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na374Times,
  code_na374Codes
};

const uint16_t code_na375Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na375Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na375Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na375Times,
  code_na375Codes
};

const uint16_t code_na376Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na376Codes[] = { 0x19, 0x9A, 0xAA, 0x56, 0xA6, 0x65, 0x55, 0xA9, 0x6A, 0x65, 0x55, 0x9A, 0xB0 };
const struct IrCode code_na376Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na376Times,
  code_na376Codes
};

const uint16_t code_na377Times[] = { 400, 400, 50, 200, 50, 100, 50, 1000 };
const uint8_t code_na377Codes[] = { 0x15, 0x69, 0x99, 0xAA, 0x96, 0x66, 0x70 };
const struct IrCode code_na377Code = {
  freq_to_timerval(56000),
  26,
  2,
  code_na377Times,
  code_na377Codes
};

const uint16_t code_na378Times[] = { 400, 400, 50, 200, 50, 100, 50, 1000 };
const uint8_t code_na378Codes[] = { 0x15, 0x69, 0x59, 0x6A, 0x96, 0xA6, 0xB0 };
const struct IrCode code_na378Code = {
  freq_to_timerval(56000),
  26,
  2,
  code_na378Times,
  code_na378Codes
};

const uint16_t code_na379Times[] = { 18, 783, 17, 233, 18, 233, 18, 232, 18, 131, 18, 133, 18, 132, 17, 133, 18, 231, 17, 834, 18, 782, 17, 132, 18, 834, 18, 130, 57, 192, 59, 92, 58, 193, 58, 0 };
const uint8_t code_na379Codes[] = { 0x00, 0x44, 0x31, 0x10, 0xA1, 0x28, 0x88, 0x23, 0x14, 0x85, 0x38, 0x50, 0x51, 0x19, 0x06, 0x1A, 0x54, 0x21, 0x05, 0x05, 0x28, 0x88, 0x22, 0x88, 0xE4, 0x29, 0x48, 0x31, 0x14, 0x6B, 0x11, 0xC6, 0xC5, 0x09, 0x03, 0x11, 0x4A, 0x82, 0x88, 0xA2, 0x69, 0x4A, 0x43, 0x8C, 0x45, 0x71, 0x46, 0xF8, 0x44 };
const struct IrCode code_na379Code = {
  freq_to_timerval(38000),
  78,
  5,
  code_na379Times,
  code_na379Codes
};

const uint16_t code_na380Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na380Codes[] = { 0x1A, 0x55, 0xA6, 0x55, 0x65, 0xAA, 0x59, 0xAA, 0xAA, 0x95, 0x55, 0x6A, 0xB0 };
const struct IrCode code_na380Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na380Times,
  code_na380Codes
};

const uint16_t code_na381Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na381Codes[] = { 0x15, 0x59, 0x6A, 0xA6, 0x99, 0x66, 0x66, 0x99, 0xB0 };
const struct IrCode code_na381Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na381Times,
  code_na381Codes
};

const uint16_t code_na382Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na382Codes[] = { 0x15, 0x59, 0xAA, 0xA6, 0x6A, 0xA6, 0x55, 0x59, 0xB0 };
const struct IrCode code_na382Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na382Times,
  code_na382Codes
};

const uint16_t code_na383Times[] = { 905, 438, 68, 47, 68, 158, 71, 48, 70, 158, 68, 161, 68, 48, 70, 48, 68, 3957, 907, 439, 68, 50, 70, 45, 70, 156, 68, 0 };
const uint8_t code_na383Codes[] = { 0x01, 0x23, 0x23, 0x24, 0x42, 0x52, 0x66, 0x62, 0x42, 0x54, 0x72, 0x76, 0x66, 0x66, 0x27, 0x24, 0x48, 0x96, 0x2A, 0x27, 0x24, 0x44, 0x44, 0x66, 0x62, 0x54, 0x44, 0x72, 0x76, 0x26, 0xBB, 0xC7, 0x24, 0x7D };
const struct IrCode code_na383Code = {
  freq_to_timerval(38000),
  68,
  4,
  code_na383Times,
  code_na383Codes
};

const uint16_t code_na384Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na384Codes[] = { 0x15, 0x59, 0xAA, 0xA6, 0x6A, 0xA6, 0x55, 0x59, 0xB0 };
const struct IrCode code_na384Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na384Times,
  code_na384Codes
};

const uint16_t code_na385Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na385Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na385Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na385Times,
  code_na385Codes
};

const uint16_t code_na386Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na386Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na386Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na386Times,
  code_na386Codes
};

const uint16_t code_na387Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na387Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na387Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na387Times,
  code_na387Codes
};

const uint16_t code_na388Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na388Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na388Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na388Times,
  code_na388Codes
};

const uint16_t code_na389Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na389Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na389Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na389Times,
  code_na389Codes
};

const uint16_t code_na390Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na390Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na390Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na390Times,
  code_na390Codes
};

const uint16_t code_na391Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na391Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na391Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na391Times,
  code_na391Codes
};

const uint16_t code_na392Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na392Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na392Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na392Times,
  code_na392Codes
};

const uint16_t code_na393Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na393Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na393Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na393Times,
  code_na393Codes
};

const uint16_t code_na394Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na394Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na394Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na394Times,
  code_na394Codes
};

const uint16_t code_na395Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na395Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x6A, 0x5A, 0x55, 0xA5, 0xB0 };
const struct IrCode code_na395Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na395Times,
  code_na395Codes
};

const uint16_t code_na396Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na396Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na396Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na396Times,
  code_na396Codes
};

const uint16_t code_na397Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na397Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na397Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na397Times,
  code_na397Codes
};

const uint16_t code_na398Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na398Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na398Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na398Times,
  code_na398Codes
};

const uint16_t code_na399Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na399Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na399Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na399Times,
  code_na399Codes
};

const uint16_t code_na400Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na400Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na400Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na400Times,
  code_na400Codes
};

const uint16_t code_na401Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na401Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na401Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na401Times,
  code_na401Codes
};

const uint16_t code_na402Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na402Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na402Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na402Times,
  code_na402Codes
};

const uint16_t code_na403Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na403Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na403Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na403Times,
  code_na403Codes
};

const uint16_t code_na404Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na404Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na404Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na404Times,
  code_na404Codes
};

const uint16_t code_na405Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na405Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na405Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na405Times,
  code_na405Codes
};

const uint16_t code_na406Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na406Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na406Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na406Times,
  code_na406Codes
};

const uint16_t code_na407Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na407Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na407Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na407Times,
  code_na407Codes
};

const uint16_t code_na408Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na408Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na408Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na408Times,
  code_na408Codes
};

const uint16_t code_na409Times[] = { 450, 447, 57, 166, 56, 166, 56, 56, 54, 56, 54, 168, 54, 166, 57, 169, 54, 169, 54, 4297, 54, 167, 57, 56, 57, 168, 54, 4296, 56, 167, 450, 446, 56, 169, 54, 0 };
const uint8_t code_na409Codes[] = { 0x00, 0x44, 0x21, 0x90, 0x84, 0x21, 0x4C, 0x72, 0x10, 0x84, 0x21, 0x0A, 0x42, 0x10, 0x84, 0x21, 0x48, 0x52, 0x98, 0xE8, 0x30, 0xC8, 0x42, 0x24, 0x01, 0x10, 0x86, 0x42, 0x10, 0x88, 0x42, 0x96, 0x42, 0x10, 0x84, 0x41, 0x08, 0x42, 0x10, 0x88, 0x21, 0x4A, 0x66, 0x20, 0xCB, 0x21, 0x08, 0xD0, 0x38, 0x21, 0x59, 0x08, 0x42, 0x21, 0x06, 0x19, 0x08, 0x42, 0x11, 0x04, 0x21, 0x08, 0x42, 0x14, 0x85, 0x29, 0x98, 0x60, 0xAC, 0x84, 0x23, 0x5E, 0x21, 0x08, 0x64, 0x21, 0x08, 0x84, 0x18, 0x64, 0x21, 0x08, 0x42, 0x90, 0x84, 0x21, 0x08, 0x82, 0x21, 0x06, 0x82, 0x82, 0xB2, 0x10, 0x91 };
const struct IrCode code_na409Code = {
  freq_to_timerval(38000),
  152,
  5,
  code_na409Times,
  code_na409Codes
};

const uint16_t code_na410Times[] = { 457, 448, 73, 156, 70, 161, 70, 48, 68, 46, 67, 51, 65, 51, 62, 164, 67, 162, 67, 164, 65, 48, 64, 51, 65, 164, 65, 161, 67, 4854, 457, 450, 65, 49, 65, 162, 67, 0 };
const uint8_t code_na410Codes[] = { 0x00, 0x44, 0x21, 0x90, 0xA6, 0x31, 0xD0, 0x92, 0x98, 0xCA, 0x59, 0x98, 0x53, 0x29, 0x66, 0x33, 0x0A, 0xD4, 0xA5, 0x28, 0x4B, 0x9E, 0xC4, 0xA4, 0xC6, 0x31, 0x8C, 0xC6, 0x24, 0xA6, 0x32, 0x96, 0x66, 0x14, 0xD0, 0x59, 0x8C, 0xC2, 0xC5, 0x29, 0x90 };
const struct IrCode code_na410Code = {
  freq_to_timerval(38000),
  65,
  5,
  code_na410Times,
  code_na410Codes
};

const uint16_t code_na411Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na411Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na411Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na411Times,
  code_na411Codes
};

const uint16_t code_na412Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na412Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na412Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na412Times,
  code_na412Codes
};

const uint16_t code_na413Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na413Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na413Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na413Times,
  code_na413Codes
};

const uint16_t code_na414Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na414Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x6A, 0x5A, 0x55, 0xA5, 0xB0 };
const struct IrCode code_na414Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na414Times,
  code_na414Codes
};

const uint16_t code_na415Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na415Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na415Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na415Times,
  code_na415Codes
};

const uint16_t code_na416Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na416Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na416Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na416Times,
  code_na416Codes
};

const uint16_t code_na417Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na417Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na417Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na417Times,
  code_na417Codes
};

const uint16_t code_na418Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na418Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na418Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na418Times,
  code_na418Codes
};

const uint16_t code_na419Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na419Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na419Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na419Times,
  code_na419Codes
};

const uint16_t code_na420Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na420Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na420Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na420Times,
  code_na420Codes
};

const uint16_t code_na421Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na421Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x65, 0xA5, 0x5A, 0x5A, 0xB0 };
const struct IrCode code_na421Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na421Times,
  code_na421Codes
};

const uint16_t code_na422Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na422Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x6A, 0x5A, 0x55, 0xA5, 0xB0 };
const struct IrCode code_na422Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na422Times,
  code_na422Codes
};

const uint16_t code_na423Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na423Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na423Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na423Times,
  code_na423Codes
};

const uint16_t code_na424Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na424Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na424Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na424Times,
  code_na424Codes
};

const uint16_t code_na425Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na425Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na425Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na425Times,
  code_na425Codes
};

const uint16_t code_na426Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na426Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na426Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na426Times,
  code_na426Codes
};

const uint16_t code_na427Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na427Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na427Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na427Times,
  code_na427Codes
};

const uint16_t code_na428Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na428Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na428Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na428Times,
  code_na428Codes
};

const uint16_t code_na429Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na429Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na429Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na429Times,
  code_na429Codes
};

const uint16_t code_na430Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na430Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na430Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na430Times,
  code_na430Codes
};

const uint16_t code_na431Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na431Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na431Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na431Times,
  code_na431Codes
};

const uint16_t code_na432Times[] = { 26, 185, 26, 79, 26, 4356 };
const uint8_t code_na432Codes[] = { 0x15, 0x50, 0x45, 0x46, 0x15, 0x45, 0x10, 0x12 };
const struct IrCode code_na432Code = {
  freq_to_timerval(38000),
  32,
  2,
  code_na432Times,
  code_na432Codes
};

const uint16_t code_na433Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na433Codes[] = { 0x15, 0x55, 0x6A, 0xAA, 0x6A, 0xAA, 0x95, 0x55, 0x99, 0x95, 0x66, 0x6A, 0xB0 };
const struct IrCode code_na433Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na433Times,
  code_na433Codes
};

const uint16_t code_na434Times[] = { 338, 166, 44, 40, 44, 124, 44, 43, 44, 0 };
const uint8_t code_na434Codes[] = { 0x05, 0x14, 0x51, 0x45, 0x14, 0x9A, 0x29, 0x24, 0x49, 0x45, 0x12, 0x89, 0x25, 0x22, 0x89, 0x28, 0x92, 0x8A, 0x50 };
const struct IrCode code_na434Code = {
  freq_to_timerval(38000),
  50,
  3,
  code_na434Times,
  code_na434Codes
};

const uint16_t code_na435Times[] = { 28, 181, 28, 79, 25, 79, 25, 76, 25, 181, 28, 182, 27, 79, 26, 78, 26, 4532, 25, 77, 25, 182, 28, 78, 27, 182, 28, 4322, 26, 181, 28, 76, 25, 0 };
const uint8_t code_na435Codes[] = { 0x00, 0x44, 0x30, 0x88, 0x85, 0x31, 0x02, 0x71, 0x10, 0x28, 0x00, 0x52, 0x11, 0x28, 0xC2, 0x52, 0xD4, 0xC0, 0x05, 0x4D, 0x61, 0x86, 0x11, 0x09, 0xC0, 0x0A, 0x96, 0x97, 0xB1, 0x70 };
const struct IrCode code_na435Code = {
  freq_to_timerval(38000),
  48,
  5,
  code_na435Times,
  code_na435Codes
};

const uint16_t code_na436Times[] = { 35, 175, 35, 69, 35, 174, 36, 69, 36, 175, 36, 174, 36, 4639, 36, 4429, 26, 184, 26, 79, 26, 78, 26, 4649, 26, 0 };
const uint8_t code_na436Codes[] = { 0x01, 0x11, 0x11, 0x02, 0x34, 0x13, 0x35, 0x36, 0x53, 0x33, 0x35, 0x33, 0x53, 0x55, 0x53, 0x57, 0x89, 0x9A, 0xA9, 0x88, 0x98, 0x9A, 0x98, 0xAB, 0x89, 0x99, 0x98, 0x99, 0x89, 0x88, 0x89, 0x8C };
const struct IrCode code_na436Code = {
  freq_to_timerval(38000),
  64,
  4,
  code_na436Times,
  code_na436Codes
};

const uint16_t code_na437Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na437Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na437Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na437Times,
  code_na437Codes
};

const uint16_t code_na438Times[] = { 28, 181, 27, 78, 28, 78, 28, 77, 28, 180, 28, 183, 25, 78, 27, 4596, 27, 80, 25, 77, 26, 80, 26, 77, 27, 77, 28, 4389, 28, 80, 27, 184, 25, 181, 28, 4596, 25, 184, 25, 80, 26, 180, 27, 181, 28, 0 };
const uint8_t code_na438Codes[] = { 0x00, 0x44, 0x31, 0x8C, 0x00, 0x09, 0x04, 0x31, 0x94, 0xC7, 0x20, 0xC2, 0x84, 0x95, 0x4B, 0x00, 0x40, 0x40, 0x30, 0x0D, 0x00, 0xC4, 0xE5, 0x8D, 0xF0, 0x18, 0x02, 0x17, 0x40, 0x31, 0x20, 0xC2, 0x37, 0x49, 0x53, 0x80, 0xC0, 0x40, 0x04, 0x0D, 0x20, 0xC4, 0x11, 0x8C, 0xB4, 0x18, 0x02, 0x31, 0xD4, 0x56 };
const struct IrCode code_na438Code = {
  freq_to_timerval(38000),
  80,
  5,
  code_na438Times,
  code_na438Codes
};

const uint16_t code_na439Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na439Codes[] = { 0x15, 0x99, 0x6A, 0x66, 0xA9, 0x95, 0x56, 0x6A, 0xB0 };
const struct IrCode code_na439Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na439Times,
  code_na439Codes
};

const uint16_t code_na440Times[] = { 20, 183, 30, 77, 28, 76, 28, 79, 28, 74, 31, 73, 30, 180, 27, 80, 27, 183, 27, 77, 25, 4585, 33, 178, 30, 74, 31, 78, 28, 73, 31, 180, 30, 76, 30, 178, 33, 180, 27, 181, 25, 81, 27, 178, 28, 4376, 31, 76, 33, 76, 30, 73, 30, 183, 30, 79, 28, 180, 25, 4587, 28, 183, 27, 76, 27, 184, 28, 4374, 31, 79, 28, 178, 30, 4582, 28, 182, 24, 4377, 25, 76, 34, 177, 31, 182, 27, 0 };
const uint8_t code_na440Codes[] = { 0x00, 0x10, 0x83, 0x10, 0x51, 0x86, 0x14, 0x61, 0xC2, 0x08, 0x82, 0x4A, 0x2C, 0xC3, 0x4E, 0x30, 0xF1, 0x50, 0x44, 0x54, 0x88, 0x4D, 0x45, 0x56, 0x19, 0x71, 0x18, 0x39, 0x91, 0x8F, 0x15, 0xA2, 0x4E, 0x6D, 0xC0, 0x9D, 0x3D, 0x02, 0x43, 0x09, 0xE3, 0x99, 0x19, 0x77, 0x9C, 0x79, 0xF8, 0x21, 0x46, 0x20, 0x82, 0x09, 0x78, 0xCF, 0x31, 0xA0, 0x82, 0x31, 0xA3, 0xA4, 0x3D, 0x00, 0x83, 0x0A, 0x53, 0x8C, 0x3C, 0x56, 0x93, 0x78, 0x98, 0x26, 0x45, 0xB0, 0x82, 0x0E, 0x74, 0x68, 0x42, 0x50, 0x9F, 0x32, 0x90, 0xAA };
const struct IrCode code_na440Code = {
  freq_to_timerval(38000),
  112,
  6,
  code_na440Times,
  code_na440Codes
};

const uint16_t code_na441Times[] = { 60, 120, 60, 60 };
const uint8_t code_na441Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na441Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na441Times,
  code_na441Codes
};

const uint16_t code_na442Times[] = { 60, 120, 60, 60 };
const uint8_t code_na442Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na442Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na442Times,
  code_na442Codes
};

const uint16_t code_na443Times[] = { 60, 120, 60, 60 };
const uint8_t code_na443Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na443Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na443Times,
  code_na443Codes
};

const uint16_t code_na444Times[] = { 60, 120, 60, 60 };
const uint8_t code_na444Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na444Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na444Times,
  code_na444Codes
};

const uint16_t code_na445Times[] = { 60, 120, 60, 60 };
const uint8_t code_na445Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na445Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na445Times,
  code_na445Codes
};

const uint16_t code_na446Times[] = { 60, 120, 60, 60 };
const uint8_t code_na446Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na446Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na446Times,
  code_na446Codes
};

const uint16_t code_na447Times[] = { 60, 120, 60, 60 };
const uint8_t code_na447Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na447Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na447Times,
  code_na447Codes
};

const uint16_t code_na448Times[] = { 60, 120, 60, 60 };
const uint8_t code_na448Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na448Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na448Times,
  code_na448Codes
};

const uint16_t code_na449Times[] = { 60, 120, 60, 60 };
const uint8_t code_na449Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na449Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na449Times,
  code_na449Codes
};

const uint16_t code_na450Times[] = { 60, 120, 60, 60 };
const uint8_t code_na450Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na450Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na450Times,
  code_na450Codes
};

const uint16_t code_na451Times[] = { 60, 120, 60, 60 };
const uint8_t code_na451Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na451Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na451Times,
  code_na451Codes
};

const uint16_t code_na452Times[] = { 60, 120, 60, 60 };
const uint8_t code_na452Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na452Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na452Times,
  code_na452Codes
};

const uint16_t code_na453Times[] = { 60, 120, 60, 60 };
const uint8_t code_na453Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na453Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na453Times,
  code_na453Codes
};

const uint16_t code_na454Times[] = { 60, 120, 60, 60 };
const uint8_t code_na454Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na454Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na454Times,
  code_na454Codes
};

const uint16_t code_na455Times[] = { 60, 120, 60, 60 };
const uint8_t code_na455Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na455Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na455Times,
  code_na455Codes
};

const uint16_t code_na456Times[] = { 60, 120, 60, 60 };
const uint8_t code_na456Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na456Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na456Times,
  code_na456Codes
};

const uint16_t code_na457Times[] = { 60, 120, 60, 60 };
const uint8_t code_na457Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na457Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na457Times,
  code_na457Codes
};

const uint16_t code_na458Times[] = { 60, 120, 60, 60 };
const uint8_t code_na458Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na458Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na458Times,
  code_na458Codes
};

const uint16_t code_na459Times[] = { 60, 120, 60, 60 };
const uint8_t code_na459Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na459Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na459Times,
  code_na459Codes
};

const uint16_t code_na460Times[] = { 60, 120, 60, 60 };
const uint8_t code_na460Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na460Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na460Times,
  code_na460Codes
};

const uint16_t code_na461Times[] = { 60, 120, 60, 60 };
const uint8_t code_na461Codes[] = { 0x45, 0x78 };
const struct IrCode code_na461Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na461Times,
  code_na461Codes
};

const uint16_t code_na462Times[] = { 60, 120, 60, 60 };
const uint8_t code_na462Codes[] = { 0x05, 0x78 };
const struct IrCode code_na462Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na462Times,
  code_na462Codes
};

const uint16_t code_na463Times[] = { 60, 120, 60, 60 };
const uint8_t code_na463Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na463Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na463Times,
  code_na463Codes
};

const uint16_t code_na464Times[] = { 60, 120, 60, 60 };
const uint8_t code_na464Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na464Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na464Times,
  code_na464Codes
};

const uint16_t code_na465Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na465Codes[] = { 0x19, 0x9A, 0xAA, 0x56, 0xA6, 0x65, 0x55, 0xA9, 0x6A, 0x65, 0x55, 0x9A, 0xB0 };
const struct IrCode code_na465Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na465Times,
  code_na465Codes
};

const uint16_t code_na466Times[] = { 400, 400, 50, 50, 50, 150, 50, 0 };
const uint8_t code_na466Codes[] = { 0x16, 0x66, 0x70 };
const struct IrCode code_na466Code = {
  freq_to_timerval(38000),
  10,
  2,
  code_na466Times,
  code_na466Codes
};

const uint16_t code_na467Times[] = { 400, 400, 50, 50, 50, 150, 50, 0 };
const uint8_t code_na467Codes[] = { 0x16, 0x66, 0x70 };
const struct IrCode code_na467Code = {
  freq_to_timerval(38000),
  10,
  2,
  code_na467Times,
  code_na467Codes
};

const uint16_t code_na468Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na468Codes[] = { 0x19, 0x9A, 0xAA, 0x56, 0xA6, 0x65, 0x55, 0xA9, 0x6A, 0x65, 0x95, 0x9A, 0x70 };
const struct IrCode code_na468Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na468Times,
  code_na468Codes
};

const uint16_t code_na469Times[] = { 401, 399, 51, 199, 52, 198, 51, 198, 52, 101, 49, 101, 49, 199, 48, 199, 48, 101, 49, 198, 52, 98, 52, 818, 402, 398, 51, 101, 51, 99, 51, 807, 49, 100, 51, 0 };
const uint8_t code_na469Codes[] = { 0x00, 0x44, 0x31, 0x10, 0xA6, 0x21, 0x88, 0x72, 0x20, 0xA5, 0x42, 0x42, 0x44, 0x91, 0x2A, 0x12, 0xD8, 0x21, 0x88, 0x4D, 0x2A, 0x5A, 0x96, 0xA5, 0xA5, 0x41, 0x4A, 0x71, 0x35, 0x2E, 0x13, 0x52, 0xF6, 0x08, 0x62, 0x13, 0x4A, 0x96, 0xA5, 0xA9, 0x69, 0x60, 0x52, 0x9C, 0x4D, 0x4B, 0x52, 0xD4, 0xC4 };
const struct IrCode code_na469Code = {
  freq_to_timerval(38000),
  78,
  5,
  code_na469Times,
  code_na469Codes
};

const uint16_t code_na470Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na470Codes[] = { 0x19, 0x9A, 0xAA, 0x56, 0xA6, 0x65, 0x55, 0xA9, 0x6A, 0x65, 0x55, 0x9A, 0xB0 };
const struct IrCode code_na470Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na470Times,
  code_na470Codes
};

const uint16_t code_na471Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na471Codes[] = { 0x19, 0x9A, 0xAA, 0x56, 0xA6, 0x65, 0x55, 0xA9, 0x6A, 0x65, 0x55, 0x9A, 0xB0 };
const struct IrCode code_na471Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na471Times,
  code_na471Codes
};

const uint16_t code_na472Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na472Codes[] = { 0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na472Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na472Times,
  code_na472Codes
};

const uint16_t code_na473Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na473Codes[] = { 0x19, 0x55, 0x66, 0xAA, 0x66, 0xAA, 0x99, 0x55, 0x9A, 0x56, 0x65, 0xA9, 0xB0 };
const struct IrCode code_na473Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na473Times,
  code_na473Codes
};

const uint16_t code_na474Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na474Codes[] = { 0x19, 0x55, 0x66, 0xAA, 0x66, 0xAA, 0x99, 0x55, 0x9A, 0x56, 0x65, 0xA9, 0xB0 };
const struct IrCode code_na474Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na474Times,
  code_na474Codes
};

const uint16_t code_na475Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na475Codes[] = { 0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na475Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na475Times,
  code_na475Codes
};

const uint16_t code_na476Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na476Codes[] = { 0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na476Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na476Times,
  code_na476Codes
};

const uint16_t code_na477Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na477Codes[] = { 0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na477Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na477Times,
  code_na477Codes
};

const uint16_t code_na478Times[] = { 89, 89 };
const uint8_t code_na478Codes[] = { 0x00, 0x00 };
const struct IrCode code_na478Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na478Times,
  code_na478Codes
};

const uint16_t code_na479Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na479Codes[] = { 0x19, 0x55, 0x66, 0xAA, 0x66, 0xAA, 0x99, 0x55, 0x9A, 0x56, 0x65, 0xA9, 0xB0 };
const struct IrCode code_na479Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na479Times,
  code_na479Codes
};

const uint16_t code_na480Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na480Codes[] = { 0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na480Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na480Times,
  code_na480Codes
};

const uint16_t code_na481Times[] = { 53, 187, 43, 38, 43, 39, 43, 78, 42, 39, 43, 9557, 54, 186, 42, 42, 40, 78, 43, 42, 40, 39, 42, 9557, 42, 40, 41, 41, 40, 9557, 43, 41, 40, 42, 41, 80, 53, 186, 42, 79, 43, 0 };
const uint8_t code_na481Codes[] = { 0x00, 0x44, 0x21, 0x88, 0x42, 0x11, 0x0A, 0x60, 0x88, 0xE8, 0x20, 0x84, 0x95, 0x2C, 0x04, 0x10, 0x86, 0x21, 0x31, 0x2D, 0x70, 0x08, 0xC1, 0x0C, 0x4F, 0x82, 0x8E, 0xE0, 0x08, 0x89, 0x8A, 0x8E, 0xA1, 0x1D, 0xD2, 0x08, 0x85, 0x31, 0x30, 0x42, 0x25, 0x00 };
const struct IrCode code_na481Code = {
  freq_to_timerval(38000),
  66,
  5,
  code_na481Times,
  code_na481Codes
};

const uint16_t code_na482Times[] = { 276, 79, 53, 36, 53, 79, 98, 38, 53, 35, 50, 38, 51, 38, 50, 39, 94, 39, 50, 83, 49, 12226, 276, 80, 53, 38, 50, 82, 95, 38, 49, 0 };
const uint8_t code_na482Codes[] = { 0x01, 0x12, 0x23, 0x41, 0x15, 0x56, 0x65, 0x55, 0x77, 0x77, 0x78, 0x97, 0xAB, 0xC5, 0xD9, 0xE7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x89, 0x7F };
const struct IrCode code_na482Code = {
  freq_to_timerval(38000),
  50,
  4,
  code_na482Times,
  code_na482Codes
};

const uint16_t code_na483Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na483Codes[] = { 0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na483Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na483Times,
  code_na483Codes
};

const uint16_t code_na484Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na484Codes[] = { 0x15, 0xA9, 0x6A, 0x56, 0x99, 0x65, 0x66, 0x9A, 0xB0 };
const struct IrCode code_na484Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na484Times,
  code_na484Codes
};

const uint16_t code_na485Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na485Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na485Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na485Times,
  code_na485Codes
};

const uint16_t code_na486Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na486Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x6A, 0x5A, 0x55, 0xA5, 0xB0 };
const struct IrCode code_na486Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na486Times,
  code_na486Codes
};

const uint16_t code_na487Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na487Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x5A, 0x5A, 0x65, 0xA5, 0xB0 };
const struct IrCode code_na487Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na487Times,
  code_na487Codes
};

const uint16_t code_na488Times[] = { 450, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na488Codes[] = { 0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70 };
const struct IrCode code_na488Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na488Times,
  code_na488Codes
};

const uint16_t code_na489Times[] = { 89, 89 };
const uint8_t code_na489Codes[] = { 0x00, 0x00 };
const struct IrCode code_na489Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na489Times,
  code_na489Codes
};

const uint16_t code_na490Times[] = { 89, 89 };
const uint8_t code_na490Codes[] = { 0x00, 0x00 };
const struct IrCode code_na490Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na490Times,
  code_na490Codes
};

const uint16_t code_na491Times[] = { 60, 120, 60, 60 };
const uint8_t code_na491Codes[] = { 0x2B, 0x78 };
const struct IrCode code_na491Code = {
  freq_to_timerval(38000),
  13,
  1,
  code_na491Times,
  code_na491Codes
};

const uint16_t code_na492Times[] = { 89, 89 };
const uint8_t code_na492Codes[] = { 0x00, 0x00 };
const struct IrCode code_na492Code = {
  freq_to_timerval(38000),
  12,
  1,
  code_na492Times,
  code_na492Codes
};

const uint16_t code_na493Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na493Codes[] = { 0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0 };
const struct IrCode code_na493Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na493Times,
  code_na493Codes
};

const uint16_t code_na494Times[] = { 267, 89, 89, 89, 44, 133, 44, 44 };
const uint8_t code_na494Codes[] = { 0x1A, 0xAF, 0xAA, 0xAA, 0xA0 };
const struct IrCode code_na494Code = {
  freq_to_timerval(38000),
  18,
  2,
  code_na494Times,
  code_na494Codes
};

const uint16_t code_na495Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na495Codes[] = { 0x1A, 0x5A, 0xA5, 0xA5, 0x6A, 0x5A, 0x95, 0xA5, 0x70 };
const struct IrCode code_na495Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na495Times,
  code_na495Codes
};

const uint16_t code_na496Times[] = { 348, 172, 46, 44, 43, 128, 43, 44, 45, 42, 45, 129, 45, 45, 42, 42, 42, 45, 42, 132, 42, 7473, 348, 175, 42, 0 };
const uint8_t code_na496Codes[] = { 0x01, 0x21, 0x33, 0x33, 0x33, 0x44, 0x44, 0x54, 0x67, 0x68, 0x76, 0x88, 0x98, 0x88, 0x88, 0x88, 0x89, 0x89, 0x99, 0x98, 0x89, 0x89, 0x99, 0x98, 0x9A, 0xB8, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x89, 0x89, 0x99, 0x98, 0x89, 0x89, 0x99, 0x98, 0x9A, 0xB8, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x88, 0x98, 0x88, 0x88, 0x88, 0x89, 0x89, 0x99, 0x98, 0x89, 0x89, 0x99, 0x98, 0x9C };
const struct IrCode code_na496Code = {
  freq_to_timerval(38000),
  150,
  4,
  code_na496Times,
  code_na496Codes
};

const uint16_t code_na497Times[] = { 900, 450, 56, 169, 56, 56, 56, 0 };
const uint8_t code_na497Codes[] = { 0x1A, 0x69, 0xA5, 0x96, 0x66, 0x5A, 0x99, 0xA5, 0x70 };
const struct IrCode code_na497Code = {
  freq_to_timerval(38000),
  34,
  2,
  code_na497Times,
  code_na497Codes
};

const uint16_t code_na498Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na498Codes[] = { 0x16, 0x5A, 0x5A, 0x56, 0x69, 0xA5, 0xA5, 0xA9, 0xA6, 0xA6, 0x59, 0x59, 0xB0 };
const struct IrCode code_na498Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na498Times,
  code_na498Codes
};

const uint16_t code_na499Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na499Codes[] = { 0x15, 0x55, 0x6A, 0xAA, 0x6A, 0xAA, 0x95, 0x55, 0x99, 0x95, 0x66, 0x6A, 0xB0 };
const struct IrCode code_na499Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na499Times,
  code_na499Codes
};

const uint16_t code_na500Times[] = { 53, 187, 43, 38, 43, 39, 43, 78, 42, 39, 43, 9557, 54, 186, 42, 42, 40, 78, 43, 42, 40, 39, 42, 9557, 42, 40, 41, 41, 40, 9557, 43, 41, 40, 42, 41, 80, 53, 186, 42, 79, 43, 0 };
const uint8_t code_na500Codes[] = { 0x00, 0x44, 0x21, 0x88, 0x42, 0x11, 0x0A, 0x60, 0x88, 0xE8, 0x20, 0x84, 0x95, 0x2C, 0x04, 0x10, 0x86, 0x21, 0x31, 0x2D, 0x70, 0x08, 0xC1, 0x0C, 0x4F, 0x82, 0x8E, 0xE0, 0x08, 0x89, 0x8A, 0x8E, 0xA1, 0x1D, 0xD2, 0x08, 0x85, 0x31, 0x30, 0x42, 0x25, 0x00 };
const struct IrCode code_na500Code = {
  freq_to_timerval(38000),
  66,
  5,
  code_na500Times,
  code_na500Codes
};

const uint16_t code_na501Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na501Codes[] = { 0x15, 0x55, 0x95, 0xA6, 0xAA, 0xAA, 0x6A, 0x59, 0x6A, 0x99, 0x55, 0x66, 0xB0 };
const struct IrCode code_na501Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na501Times,
  code_na501Codes
};

const uint16_t code_na502Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na502Codes[] = { 0x15, 0x55, 0x6A, 0xAA, 0x6A, 0xAA, 0x95, 0x55, 0xA6, 0x65, 0x59, 0x9A, 0xB0 };
const struct IrCode code_na502Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na502Times,
  code_na502Codes
};

const uint16_t code_na503Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na503Codes[] = { 0x15, 0x55, 0x6A, 0xA9, 0xAA, 0xAA, 0x95, 0x56, 0x66, 0x95, 0x59, 0x6A, 0xB0 };
const struct IrCode code_na503Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na503Times,
  code_na503Codes
};

const uint16_t code_na504Times[] = { 900, 450, 56, 56, 56, 169, 56, 0 };
const uint8_t code_na504Codes[] = { 0x15, 0x55, 0x6A, 0xAA, 0x6A, 0xAA, 0x95, 0x55, 0xA6, 0x65, 0x59, 0x9A, 0xB0 };
const struct IrCode code_na504Code = {
  freq_to_timerval(38000),
  50,
  2,
  code_na504Times,
  code_na504Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_RAW)
const uint16_t code_na505Times[] = {
  485, 390,
  455, 415,
  460, 390,
  485, 385,
  485, 25430,
  3545, 1715,
  430, 1315,
  430, 415,
  485, 1260,
  485, 360,
  460, 415,
  480, 1265,
  480, 1290,
  455, 1290,
  455, 420,
  450, 395,
  450, 1295,
  450, 420,
  425, 420,
  450, 425,
  420, 425,
  425, 1325,
  420, 1325,
  450, 34985,
  3535, 1725,
  425, 1320,
  450, 35010,
  3510, 1725,
  450, 65535,
  9825, 9795,
  9820, 9800,
  4615, 2495,
  385, 345,
  390, 925,
  385, 930,
  390, 350,
  380, 355,
  385, 355,
  380, 935,
  385, 350,
  380, 350,
  390, 930,
  380, 930,
  380, 940,
  390, 355,
  385, 920,
  385, 925,
  385, 360,
  380, 365,
  390, 345,
  385, 935,
  380, 360,
  385, 20350,
  4620, 65535,
  5040, 2135,
  360, 1770,
  355, 695,
  365, 685,
  360, 690,
  365, 1770,
  365, 1765,
  355, 1775,
  360, 1775,
  355, 690,
  365, 29445,
  360, 685,
  360, 1800,
  325, 695,
  365, 1800,
  330, 690,
  335, 685,
};
const uint8_t code_na505Codes[] = {
  0x00, 0x04, 0x10, 0x30, 0x41, 0x02, 0x86, 0x0E, 0x04, 0x08, 0x81, 0x20,
  0xC5, 0x0A, 0x0C, 0x1C, 0x40, 0x80, 0x02, 0x05, 0x8B, 0x18, 0x34, 0x70,
  0xF2, 0x04, 0x48, 0x91, 0x24, 0x44, 0x89, 0x22, 0x24, 0x47, 0x90, 0x22,
  0x40, 0x99, 0x32, 0x84, 0x08, 0x13, 0x26, 0x3C, 0x99, 0x32, 0x65, 0x09,
  0x91, 0x24, 0x44, 0x88, 0xF2, 0x24, 0x48, 0x95, 0x2C, 0x54, 0x91, 0x02,
  0x64, 0x08, 0x17, 0x30, 0x40, 0x88, 0xF2, 0x24, 0x08, 0x8F, 0x22, 0x44,
  0x81, 0x13, 0x26, 0x49, 0x10, 0x20, 0x40, 0x81, 0x02, 0x24, 0x48, 0x0F,
  0x22, 0x44, 0x89, 0x22, 0x24, 0x47, 0x91, 0x22, 0x3C, 0x81, 0x12, 0x24,
  0x49, 0x10, 0x22, 0x44, 0x79, 0x12, 0x24, 0x49, 0x11, 0x22, 0x3C, 0x89,
  0x12, 0x25, 0x4A, 0x11, 0x26, 0x50, 0x99, 0x02, 0x23, 0xC8, 0x10, 0x26,
  0x68, 0xD9, 0x02, 0x24, 0x49, 0x10, 0x22, 0x44, 0x79, 0x12, 0x04, 0x48,
  0x10, 0x1E, 0x40, 0x81, 0x02, 0x04, 0x08, 0x91, 0x20, 0x44, 0x91, 0x12,
  0x23, 0xC8, 0x91, 0x1C, 0x48, 0x89, 0x11, 0xE4, 0x48, 0x8F, 0x22, 0x44,
  0x89, 0x92, 0x44, 0x48, 0x11, 0x1E, 0x44, 0x89, 0x12, 0x44, 0x08, 0x91,
  0x20, 0x3C, 0x89, 0x11, 0xE4, 0x48, 0x91, 0x24, 0x44, 0x88, 0xF2, 0x24,
  0x48, 0x92, 0x20, 0x44, 0x81, 0x11, 0xE4, 0x48, 0x91, 0x24, 0x44, 0x89,
  0x22, 0x24, 0x47, 0x91, 0x22, 0x44, 0x91, 0x12, 0x04, 0x08, 0x8F, 0x22,
  0x44, 0x89, 0x22, 0x24, 0x49, 0x11, 0x20, 0x40, 0x88, 0xF2, 0x24, 0x48,
  0x92, 0x22, 0x44, 0x79, 0x12, 0x24, 0x49, 0x11, 0x22, 0x48, 0x89, 0x02,
  0x23, 0xC8, 0x91, 0x22, 0x64, 0xC9, 0x22, 0x24, 0x47, 0x91, 0x22, 0x44,
  0xC9, 0x22, 0x24, 0x47, 0x91, 0x22, 0x3C, 0x89, 0x12, 0x04, 0x08, 0x92,
  0x22, 0x44, 0x81, 0xC3, 0xA7, 0x8F, 0xA0, 0x42, 0x89, 0x1A, 0x24, 0x88,
  0x12, 0xA0, 0x4C, 0x9D, 0x42, 0x45, 0x29, 0x12, 0xA0, 0x48, 0x9D, 0x52,
  0xA5, 0x69, 0x16, 0x2D, 0x48, 0x9D, 0x72, 0x24, 0x88, 0x17, 0xA0, 0x46,
  0x9D, 0x42, 0x64, 0xE9, 0xD8, 0x28, 0x4A, 0x91, 0x02, 0xE4, 0xAC, 0x56,
  0x2D, 0x48, 0x8D, 0x3A, 0x45, 0x69, 0x16, 0x2D, 0x48, 0x89, 0x32, 0x76,
  0x49, 0xD9, 0xB4, 0x6A, 0xD9, 0xBB, 0x87, 0x2E, 0x9B, 0xB9, 0x74, 0xE9,
  0xCB, 0xB7, 0x4F, 0x1B, 0xB8, 0x76, 0xF5, 0xDB, 0x77, 0x8E, 0x9D, 0x3C,
  0x74, 0xE9, 0xCB, 0xA7, 0x4E, 0x5E, 0x3E, 0x76, 0xDD, 0xE3, 0xA7, 0xCD,
  0xDF, 0xB9, 0x72, 0xE9, 0xC3, 0x97, 0x4E, 0x9C, 0xB9, 0x74, 0xE1, 0xE3,
  0xE7, 0x8D, 0xDC, 0x39, 0x74, 0xE2, 0x03, 0x67, 0xD0, 0x5D, 0x3A, 0x78,
  0xE9, 0xD3, 0x97, 0x4D, 0xDC, 0xB7, 0x7B, 0x05, 0xBB, 0xC6, 0xEF, 0x5B,
  0xB8, 0x73, 0x0A, 0x1B, 0x97, 0x4E, 0x9C, 0xBA, 0x74, 0xE1, 0xCB, 0xA7,
  0xCE, 0xDF, 0xB9, 0x89, 0x15, 0xE3, 0x77, 0x0E, 0x5D, 0x3A, 0x78, 0xDD,
  0xCB, 0x98, 0x51, 0x9C, 0xBA, 0x70, 0xE5, 0xBB, 0x87, 0x2E, 0x9D, 0x39,
  0x74, 0xE9, 0xC3, 0x97, 0x4E, 0x1C, 0xBA, 0x74, 0xE5, 0xCB, 0xA7, 0x0E,
  0x5D, 0x37, 0x76, 0xE9, 0xC3, 0x97, 0x4E, 0x9E, 0x3A, 0x74, 0xE5, 0xD3,
  0xA7, 0x0E, 0x5D, 0x3E, 0x72, 0xE9, 0xC3, 0x97, 0x4D, 0xDC, 0xB7, 0x7A,
  0xDD, 0xEC, 0x10,
};
const struct IrCode code_na505Code = {
  freq_to_timerval(38000),
  524,             // # of pairs
  7,              // # of bits per index
  code_na505Times,
  code_na505Codes
};

// Imported from tv.ir: On (REMOTE_PROTOCOL_RAW)
const uint16_t code_na506Times[] = {
  8365, 4225,
  620, 1960,
  1115, 1480,
  595, 1985,
  1080, 1565,
  1070, 1495,
  575, 2005,
  1070, 1515,
  1070, 1540,
  1070, 1505,
  1070, 1550,
  1070, 1530,
  1045, 1520,
  550, 2030,
  1045, 1580,
  1045, 1530,
  1045, 1565,
  550, 2020,
  550, 2065,
  1045, 1525,
  1045, 1575,
  1045, 1570,
  1040, 1530,
  1040, 1570,
  1040, 1535,
  1015, 1560,
  1040, 1525,
  1040, 1575,
  525, 2050,
  545, 2070,
  520, 2050,
};
const uint8_t code_na506Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x52, 0x55, 0x2D, 0x8D, 0x73, 0xD8,
  0xF8, 0x3D, 0xF1, 0x93, 0xE6, 0xF8, 0x3D, 0xF3, 0xA3, 0xE6, 0xF8, 0x3D,
  0xF3, 0xA3, 0xE6, 0xFA, 0xD9, 0xF3, 0xA5, 0xA6, 0xFB, 0xE3, 0x3A, 0xDE,
  0x79, 0xAE, 0xE3, 0x9E,
};
const struct IrCode code_na506Code = {
  freq_to_timerval(38000),
  64,             // # of pairs
  5,              // # of bits per index
  code_na506Times,
  code_na506Codes
};

// Imported from tv.ir: Off (REMOTE_PROTOCOL_RAW)
const uint16_t code_na507Times[] = {
  3380, 1605,
  465, 1170,
  465, 410,
  465, 405,
  470, 405,
  470, 1170,
  470, 415,
  470, 410,
  490, 1145,
  490, 385,
  465, 1175,
  485, 1150,
  485, 1145,
  465, 415,
  465, 1200,
  435, 415,
  460, 410,
  465, 435,
  435, 1175,
  460, 1175,
  460, 415,
  460, 1170,
  465, 1180,
};
const uint8_t code_na507Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0x43, 0x10, 0xC4, 0x32, 0x14, 0x63, 0x30, 0x86,
  0x21, 0x8C, 0xE2, 0x10, 0xC6, 0x41, 0x88, 0x65, 0x10, 0x42, 0x10, 0xA0,
  0x29, 0x52, 0xD8, 0x16, 0x05, 0x4C, 0x50, 0x84, 0x21, 0x08, 0x42, 0x68,
  0x84, 0x10, 0x88, 0x41, 0x50, 0x5C, 0xF8, 0x04, 0x22, 0x68, 0x94, 0x28,
  0x2A, 0x02, 0x52, 0x84, 0x10, 0xC6, 0x53, 0xA2, 0xA6, 0x26, 0xD4, 0x50,
  0x68, 0x84, 0x10, 0x89, 0x4A, 0x98, 0x84, 0x10, 0xA8, 0x41, 0x10, 0x42,
  0x31, 0x08, 0x22, 0x50, 0x86, 0x21, 0x08, 0x43, 0x10, 0x54, 0x10, 0x84,
  0x21, 0x50, 0x86, 0x21, 0x08, 0x42, 0x68, 0x42, 0x10, 0x84, 0x21, 0x50,
  0x84, 0x21, 0x08, 0x42, 0x68, 0x42, 0x10, 0x84, 0x21, 0xB4, 0x04, 0x21,
  0x08, 0x42, 0x68, 0x42, 0x15, 0x04, 0x21, 0x50, 0xC4, 0x21, 0x08, 0x42,
  0x6A, 0x95, 0x50, 0x84, 0x21, 0x50, 0x82, 0xA8, 0x04, 0x41, 0x68, 0x44,
  0x20, 0x8A, 0xA2, 0x50, 0x44, 0x21, 0x09, 0x4A, 0x50, 0x94, 0x10, 0x84,
  0x42, 0x68, 0x84, 0x21, 0x08, 0x42, 0x6A, 0x82, 0xA0, 0x85, 0x41, 0x50,
  0x84, 0x21, 0x08, 0x42, 0x6A, 0x95, 0x39, 0xA9, 0x4A, 0x98, 0x85, 0x01,
  0x0A, 0x10, 0x6A, 0x95, 0x30, 0xAA, 0x6A, 0xB4, 0xD5, 0x08, 0x0A, 0x02,
  0x68, 0x85, 0x39, 0xAA, 0x73, 0xB0,
};
const struct IrCode code_na507Code = {
  freq_to_timerval(38000),
  297,             // # of pairs
  5,              // # of bits per index
  code_na507Times,
  code_na507Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_RAW)
const uint16_t code_na508Times[] = {
  3495, 1645,
  510, 1225,
  490, 1200,
  510, 380,
  485, 385,
  485, 1225,
  490, 385,
  515, 1195,
  515, 355,
  545, 1170,
  510, 1200,
  510, 360,
  510, 385,
  485, 1230,
  480, 1230,
  485, 65535,
  3220, 1530,
  455, 355,
  440, 1135,
  455, 365,
  425, 355,
  440, 1160,
  430, 365,
  430, 1160,
  460, 355,
  495, 355,
  385, 355,
  465, 1100,
  485, 1100,
  485, 355,
  440, 1100,
  460, 1130,
  440, 355,
  440, 1130,
  455, 1130,
  455, 1135,
  450, 355,
  450, 1135,
};
const uint8_t code_na508Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x41, 0x44, 0x10, 0x51, 0x46, 0x14, 0x61, 0x05,
  0x1C, 0x81, 0xC9, 0x20, 0x81, 0xC8, 0x20, 0xA2, 0xCB, 0x30, 0x41, 0x04,
  0x10, 0x41, 0x04, 0x10, 0x41, 0x04, 0x10, 0x41, 0x0D, 0x10, 0x43, 0x44,
  0x10, 0x41, 0x04, 0x34, 0x41, 0x04, 0x10, 0xD3, 0x4D, 0x10, 0x41, 0x04,
  0x10, 0x43, 0x44, 0x10, 0xD1, 0x04, 0x10, 0x41, 0x04, 0x10, 0x41, 0x04,
  0x10, 0x41, 0x04, 0x10, 0x41, 0x04, 0x10, 0x41, 0x04, 0x10, 0x41, 0x04,
  0x10, 0x41, 0x0D, 0x10, 0x41, 0x04, 0x10, 0x43, 0x4D, 0x34, 0xE1, 0x0D,
  0x10, 0xF4, 0x11, 0x49, 0x35, 0x12, 0x45, 0x55, 0x96, 0x5D, 0x75, 0xD6,
  0x5D, 0x65, 0xD7, 0x5D, 0x66, 0x19, 0x69, 0xB7, 0x1D, 0x79, 0xF6, 0x20,
  0x85, 0x88, 0x21, 0x46, 0x08, 0x62, 0x46, 0x18, 0xE3, 0x8D, 0x14, 0xA3,
  0x8E, 0x34, 0x60, 0x81, 0x24, 0x60, 0x82, 0x04, 0xA3, 0x8E, 0x34, 0x60,
  0x4A, 0x34, 0x60, 0x82, 0x04, 0xA3, 0x46, 0x04, 0x91, 0x4A, 0x39, 0x20,
  0x82, 0x04, 0xA5, 0x92, 0x04, 0xA5, 0x96, 0x59, 0x00,
};
const struct IrCode code_na508Code = {
  freq_to_timerval(38000),
  203,             // # of pairs
  6,              // # of bits per index
  code_na508Times,
  code_na508Codes
};

// Imported from tv.ir: Off (REMOTE_PROTOCOL_RAW)
const uint16_t code_na509Times[] = {
  3440, 1755,
  440, 1260,
  435, 1285,
  430, 440,
  440, 425,
  455, 420,
  440, 1280,
  435, 435,
  435, 430,
  440, 1285,
  435, 1315,
  435, 410,
  460, 1295,
  435, 1290,
  410, 455,
  415, 1310,
  405, 1320,
  410, 430,
  440, 430,
  460, 1265,
  465, 405,
  430, 435,
  435, 460,
  435, 420,
  460, 410,
  440, 420,
  455, 410,
  435, 455,
  415, 455,
  405, 435,
  435, 425,
  460, 415,
  455, 1270,
  440, 1290,
  435, 1295,
  415, 425,
  460, 405,
  465, 415,
  435, 1320,
  410, 1285,
  465, 410,
  455, 1300,
  440, 410,
  465, 1260,
  470, 405,
  460, 1270,
  415, 1285,
  455, 415,
  470, 1275,
  430, 1320,
  440, 405,
  440, 450,
  410, 435,
  430, 415,
  435, 445,
  415, 430,
  465, 430,
  435, 450,
  430, 1270,
  440, 17050,
  3575, 1745,
  405, 1295,
  460, 440,
  410, 1290,
  440, 1310,
  465, 1290,
  410, 1315,
  410, 1295,
  430, 430,
  405, 440,
  430, 410,
  410, 425,
  430, 1290,
  415, 1315,
  415, 450,
  430, 1295,
  465, 1265,
  460, 425,
  440, 455,
  435, 405,
  435, 65535,
  3195, 1550,
  430, 365,
  430, 1160,
  460, 355,
  440, 355,
  440, 1130,
  495, 355,
  385, 1130,
  485, 355,
  440, 1100,
  460, 1130,
  460, 1125,
  455, 1130,
  455, 355,
  440, 1135,
  455, 1135,
};
const uint8_t code_na509Codes[] = {
  0x00, 0x04, 0x10, 0x30, 0x81, 0x43, 0x07, 0x10, 0x24, 0x50, 0xB1, 0x82,
  0xC2, 0x0D, 0x18, 0x38, 0x79, 0x02, 0x24, 0x89, 0x84, 0x28, 0x18, 0x40,
  0x42, 0xA5, 0x04, 0x16, 0x1C, 0x5C, 0x41, 0x81, 0x06, 0x4D, 0x1B, 0x38,
  0x74, 0x39, 0xE2, 0xA5, 0x03, 0x88, 0x3E, 0x20, 0xC8, 0x74, 0x08, 0x4C,
  0x04, 0x28, 0x88, 0x52, 0x30, 0x49, 0x0A, 0x87, 0x0E, 0x95, 0x32, 0x75,
  0x02, 0x54, 0xAA, 0x08, 0xAD, 0x01, 0x23, 0x0B, 0x16, 0x89, 0x2C, 0x39,
  0x72, 0xB5, 0xE8, 0x18, 0x31, 0x64, 0x58, 0x88, 0x42, 0x89, 0x19, 0xB4,
  0x10, 0xCC, 0x93, 0x22, 0x85, 0x14, 0x18, 0x24, 0x10, 0x21, 0x66, 0xA2,
  0x02, 0x36, 0x36, 0xDC, 0xF0, 0x40, 0xEE, 0x01, 0xB5, 0x24, 0x48, 0xC3,
  0x96, 0x41, 0xCD, 0xA3, 0x08, 0x6D, 0x19, 0x50, 0xE7, 0x8A, 0x15, 0x66,
  0xE8, 0x9A, 0xB2, 0x85, 0x0C, 0x8D, 0x24, 0xED, 0xE1, 0x07, 0xA5, 0x88,
  0xBE, 0x7E, 0x48, 0x94, 0x07, 0x4B, 0xE0, 0xB4, 0x34, 0x34, 0x49, 0x41,
  0xA3, 0x49, 0x33, 0x84, 0x8D, 0x9C, 0x31, 0x02, 0x09, 0x24, 0x88, 0x7D,
  0x78, 0x82, 0x41, 0x03, 0x88, 0x37, 0x14, 0x91, 0x50, 0xAC, 0xE3, 0x08,
  0x08, 0x1C, 0xB4, 0x70, 0xE6, 0xD3, 0x93, 0x0A, 0x60, 0x94, 0x07, 0x45,
  0x9F, 0x92, 0x30, 0x10, 0xA1, 0x41, 0x32, 0x04, 0x0A, 0x93, 0x29, 0x90,
  0x94, 0x07, 0xD7, 0xAF, 0x45, 0x2C, 0xA0, 0x71, 0x4B, 0x83, 0x8D, 0x13,
  0x30, 0x39, 0xB4, 0x65, 0x9A, 0x08, 0x36, 0x8C, 0x44, 0xD1, 0x07, 0xC4,
  0x04, 0x5E, 0x22, 0x72, 0x32, 0xA6, 0xD1, 0x94, 0x2A, 0x65, 0x78, 0x80,
  0x81, 0xD7, 0xAF, 0x2A, 0x6E, 0x3A, 0x89, 0xC2, 0xC3, 0xA8, 0x08, 0x6D,
  0x18, 0x72, 0xA1, 0xCD, 0x8B, 0x37, 0x3C, 0xAC, 0xC2, 0x69, 0xA3, 0xA8,
  0x08, 0x88, 0x3D, 0x0A, 0x34, 0xA9, 0xD2, 0xA5, 0x4E, 0x95, 0x3A, 0x54,
  0xA9, 0xD3, 0xA7, 0x4A, 0x9D, 0x2A, 0x74, 0xE9, 0xD2, 0xA5, 0x4A, 0x95,
  0x3A, 0x74, 0xA9, 0xD3, 0xA9, 0x56, 0xB5, 0x4A, 0xF6, 0x2C, 0xD5, 0xB5,
  0x6E, 0xA5, 0x6B, 0x96, 0xED, 0xD4, 0xAD, 0x76, 0xDD, 0xDB, 0xD5, 0x6A,
  0xD6, 0xBD, 0x56, 0xAD, 0x5A, 0xD7, 0x6E, 0xDD, 0xBD, 0x56, 0xFE, 0x0B,
  0xD5, 0x6A, 0xD5, 0xBF, 0x82, 0xF5, 0x5B, 0xF7, 0xAF, 0xE0, 0xC1, 0x7A,
  0xAD, 0x5B, 0xF8, 0x2F, 0x55, 0xAB, 0x7F, 0x06, 0x0B, 0xC0,
};
const struct IrCode code_na509Code = {
  freq_to_timerval(38000),
  381,             // # of pairs
  7,              // # of bits per index
  code_na509Times,
  code_na509Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_RAW)
const uint16_t code_na510Times[] = {
  3470, 1740,
  440, 430,
  440, 1335,
  410, 435,
  440, 435,
  440, 1305,
  440, 1310,
  440, 10390,
  3500, 1740,
};
const uint8_t code_na510Codes[] = {
  0x01, 0x23, 0x11, 0x44, 0x11, 0x11, 0x11, 0x51, 0x44, 0x11, 0x14, 0x55,
  0x64, 0x16, 0x11, 0x11, 0x14, 0x14, 0x44, 0x41, 0x41, 0x41, 0x14, 0x11,
  0x11, 0x11, 0x14, 0x11, 0x11, 0x55, 0x14, 0x11, 0x47, 0x81, 0x51, 0x14,
  0x11, 0x14, 0x14, 0x11, 0x54, 0x11, 0x11, 0x41, 0x65, 0x51, 0x15, 0x11,
  0x11, 0x11, 0x11, 0x11, 0x11, 0x55, 0x11, 0x11, 0x51, 0x55, 0x51, 0x15,
  0x61, 0x11, 0x61, 0x55, 0x45, 0x10,
};
const struct IrCode code_na510Code = {
  freq_to_timerval(38000),
  131,             // # of pairs
  4,              // # of bits per index
  code_na510Times,
  code_na510Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_NEC_EXT)
const uint16_t code_na511Times[] = {
  9000, 4500,
  560, 1685,
  560, 560,
  560, 0,
};
const uint8_t code_na511Codes[] = {
  0x1A, 0xAA, 0x65, 0xA5, 0x9A, 0xAA, 0x65, 0x55, 0xB0,
};
const struct IrCode code_na511Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na511Times,
  code_na511Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_RAW)
const uint16_t code_na512Times[] = {
  270, 18150,
  3020, 8955,
  525, 500,
  495, 1495,
  490, 505,
  500, 470,
  525, 495,
  500, 500,
  495, 500,
  490, 1500,
  500, 495,
  500, 525,
  470, 1520,
  500, 1490,
  495, 530,
  465, 530,
  475, 520,
  495, 505,
  470, 525,
  525, 2945,
  3000, 8955,
  525, 1520,
  470, 500,
  515, 505,
  495, 1500,
  495, 1520,
  465, 1525,
  490, 530,
  475, 525,
  525, 470,
  520, 475,
  500, 520,
  495, 2980,
  3000, 8950,
  525, 1490,
  495, 525,
  470, 1525,
  515, 480,
  475, 1520,
  520, 1470,
  515, 1475,
  525, 1465,
  500, 65535,
  620, 17785,
  3030, 8885,
  560, 460,
  530, 1455,
  535, 460,
  535, 455,
  535, 1450,
  560, 435,
  530, 1485,
  505, 1485,
  505, 1480,
  505, 490,
  505, 465,
  530, 465,
  530, 515,
  475, 515,
  500, 490,
  525, 515,
  505, 2985,
  2975, 8940,
  505, 1460,
  525, 490,
  505, 515,
  505, 1510,
  475, 1510,
  500, 1485,
  500, 515,
  500, 2960,
  3005, 8940,
  500, 1510,
};
const uint8_t code_na512Codes[] = {
  0x00, 0x04, 0x10, 0x30, 0x81, 0x43, 0x07, 0x10, 0x20, 0x40, 0x91, 0x42,
  0xC6, 0x0A, 0x10, 0x0C, 0x48, 0xD0, 0x60, 0xC5, 0x0A, 0x14, 0x20, 0x40,
  0xE1, 0xE3, 0xC8, 0x11, 0x08, 0x28, 0x50, 0x81, 0x02, 0x08, 0x84, 0x14,
  0x28, 0x38, 0x81, 0x03, 0x87, 0x90, 0x24, 0x10, 0x20, 0xA0, 0xE2, 0x01,
  0x89, 0x1A, 0x0C, 0x99, 0x42, 0xA5, 0x8B, 0x88, 0x10, 0x20, 0x88, 0x41,
  0x43, 0x44, 0x08, 0x30, 0x28, 0x69, 0x93, 0x40, 0xC4, 0x8D, 0x10, 0x20,
  0x40, 0x41, 0x42, 0x83, 0x88, 0x10, 0x20, 0xD9, 0x03, 0x87, 0x4F, 0x04,
  0x14, 0x20, 0x40, 0x80, 0x82, 0x85, 0x0A, 0x10, 0x20, 0x40, 0x43, 0xE7,
  0x09, 0x1E, 0x3C, 0x28, 0x40, 0x84, 0x08, 0x51, 0x08, 0x10, 0x44, 0x20,
  0xA1, 0x48, 0xC9, 0x24, 0x4A, 0x20, 0x88, 0x41, 0x42, 0x81, 0x83, 0x12,
  0x34, 0x40, 0x33, 0x69, 0x93, 0x8A, 0x0E, 0x20, 0x18, 0x91, 0xA2, 0x04,
  0x08, 0x08, 0x28, 0x59, 0x22, 0x49, 0xD4, 0x08, 0x08, 0x28, 0x68, 0x81,
  0x02, 0x02, 0x0A, 0x14, 0x1C, 0xC9, 0xA5, 0x22, 0x55, 0x2B, 0x58, 0xB5,
  0x72, 0xF5, 0xEB, 0xD7, 0xAF, 0x60, 0xC1, 0x8B, 0x05, 0xEC, 0x59, 0x2D,
  0x5C, 0xCD, 0xA3, 0x56, 0xAD, 0x9B, 0x36, 0x6C, 0xDD, 0xC3, 0x87, 0x0E,
  0x5D, 0x3B, 0x76, 0xED, 0xB3, 0x66, 0xCD, 0x9B, 0x36, 0x6C, 0xD9, 0xB3,
  0x66, 0xEE, 0x1C, 0x3C, 0x74, 0xED, 0xDB, 0xB7, 0x6D, 0x1A, 0x35, 0x68,
  0xF5, 0xF3, 0xF8, 0x0D, 0xA0, 0xBA, 0x76, 0xED, 0xDB, 0x66, 0x8D, 0x9D,
  0xB4, 0x6C, 0xD1, 0xA3, 0x48, 0x50, 0xE2, 0x3B, 0x76, 0xD9, 0xB3, 0xB6,
  0xCD, 0x9B, 0x36, 0x76, 0xD9, 0xB3, 0xB8, 0xAE, 0x9D, 0xBB, 0x76, 0xED,
  0xDB, 0xB6, 0xCE, 0xDB, 0x36, 0x76, 0xD9, 0xB3, 0xB7, 0x6D, 0x9D, 0xC1,
  0x14, 0xED, 0xDC, 0x68, 0xF1, 0x1D, 0xBB, 0x76, 0xED, 0xDB, 0xB6, 0xCE,
  0xDA, 0x45, 0x20, 0x2A, 0x24, 0x48, 0x8E, 0xE2, 0x44, 0x89, 0x12, 0x23,
  0xB9, 0x11, 0x1D, 0xBB, 0x77, 0x12, 0x24, 0x47, 0x6E, 0xDD, 0xBB, 0x77,
  0x10, 0xF9, 0x08, 0x91, 0x1D, 0xBB, 0x77, 0x11, 0xDB, 0xB7, 0x6E, 0xDD,
  0xBB, 0x77, 0x22, 0x1C, 0x48, 0x80,
};
const struct IrCode code_na512Code = {
  freq_to_timerval(38000),
  349,             // # of pairs
  7,              // # of bits per index
  code_na512Times,
  code_na512Codes
};

// Imported from tv.ir: Off (REMOTE_PROTOCOL_RAW)
const uint16_t code_na513Times[] = {
  645, 17765,
  3060, 8885,
  535, 460,
  555, 1425,
  560, 435,
  585, 435,
  590, 405,
  585, 405,
  585, 1400,
  585, 410,
  560, 1430,
  555, 1455,
  500, 490,
  525, 1460,
  530, 1460,
  555, 1430,
  555, 440,
  555, 465,
  530, 465,
  525, 465,
  550, 465,
  525, 470,
  550, 1435,
  555, 1435,
  555, 2935,
  3025, 8895,
  550, 1460,
  500, 495,
  550, 440,
  525, 1485,
  500, 1485,
  525, 490,
  525, 495,
  475, 520,
  525, 2935,
  3025, 8920,
  495, 495,
  500, 1490,
  495, 1490,
  475, 1515,
};
const uint8_t code_na513Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x50, 0x82, 0x08, 0x61, 0xC8, 0x1C, 0x92, 0x8B,
  0x30, 0xD3, 0x8F, 0x3C, 0xF4, 0x10, 0x41, 0x04, 0x52, 0x49, 0x24, 0x93,
  0x4D, 0x34, 0x10, 0x41, 0x04, 0x10, 0x41, 0x04, 0x10, 0x51, 0x24, 0x92,
  0x4C, 0xC5, 0x53, 0x4D, 0x04, 0x10, 0x59, 0x76, 0x19, 0x69, 0x34, 0x93,
  0x4D, 0xB5, 0x53, 0x4D, 0x67, 0x1C, 0x59, 0x43, 0x8D, 0x39, 0xD7, 0x9E,
  0x31, 0x34, 0x92, 0x4D, 0x24, 0xD2, 0x49, 0x34, 0x93, 0x4D, 0xF3, 0x0C,
  0x6D, 0xB3, 0x13, 0x4D, 0x34, 0xD3, 0x4D, 0x34, 0xD3, 0x4D, 0x34, 0xE0,
  0x6E, 0x16, 0xDB, 0x8A, 0x33, 0x53, 0x4D, 0x34, 0xD3, 0x4D, 0x34, 0xCD,
  0x81, 0xB6, 0xDB, 0x6D, 0xB3, 0x4D, 0x34, 0xD3, 0x4D, 0x55, 0xD7, 0xA4,
  0x6D, 0xB7, 0x8D, 0x35, 0x34, 0xD3, 0x4D, 0x53, 0x55, 0x82, 0x59, 0x9B,
  0x6D, 0x53, 0x55, 0x55, 0x55, 0x55, 0x55, 0x58, 0x1B, 0x96, 0x70,
};
const struct IrCode code_na513Code = {
  freq_to_timerval(38000),
  174,             // # of pairs
  6,              // # of bits per index
  code_na513Times,
  code_na513Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_RAW)
const uint16_t code_na514Times[] = {
  3300, 1645,
  410, 420,
  410, 415,
  415, 1235,
  405, 425,
  405, 1240,
  415, 1230,
  405, 420,
  405, 395,
  435, 420,
  415, 385,
  430, 420,
  415, 415,
  410, 1235,
  410, 1240,
  415, 1205,
  430, 1240,
  415, 65535,
  3305, 1600,
  430, 410,
  415, 405,
  410, 1200,
  440, 405,
  410, 1195,
  440, 400,
  410, 405,
  410, 410,
  405, 1200,
  435, 1200,
  405, 1230,
  405, 410,
  415, 1220,
  405, 1225,
  410, 1225,
  415, 1195,
  435, 1195,
  430, 1205,
  440, 1195,
  440, 380,
  435, 410,
  410, 380,
  415, 400,
  435, 405,
};
const uint8_t code_na514Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x50, 0x42, 0x08, 0x61, 0x47, 0x08, 0x20, 0xC5,
  0x20, 0x90, 0x82, 0x28, 0xB1, 0xC1, 0x08, 0xC1, 0x07, 0x04, 0xD0, 0x8C,
  0x1C, 0x70, 0x42, 0x08, 0x61, 0xC1, 0x04, 0x21, 0x85, 0x38, 0xD3, 0x46,
  0x14, 0xE0, 0x82, 0x0C, 0x71, 0xC1, 0x08, 0x22, 0x0B, 0x04, 0xD3, 0x4A,
  0x2C, 0x50, 0x42, 0x30, 0x41, 0x4D, 0x08, 0x23, 0x07, 0x1C, 0x10, 0x8C,
  0x10, 0x70, 0x42, 0x08, 0xC1, 0xC7, 0x04, 0x23, 0x04, 0x1C, 0x10, 0x82,
  0x30, 0x41, 0xC1, 0x08, 0x21, 0x07, 0x04, 0x20, 0x8C, 0x10, 0x70, 0x42,
  0x08, 0xC1, 0xC7, 0x04, 0x20, 0xC7, 0x1C, 0xD3, 0x4F, 0x40, 0x10, 0x4D,
  0x31, 0x14, 0x93, 0x51, 0x55, 0x97, 0x61, 0x96, 0x9B, 0x71, 0x66, 0x5A,
  0x75, 0x55, 0x99, 0x79, 0x46, 0x5A, 0x79, 0x96, 0x9E, 0x51, 0x97, 0x9F,
  0x69, 0xE6, 0x5A, 0x79, 0x46, 0x60, 0x65, 0xA7, 0x99, 0x86, 0x27, 0x23,
  0x91, 0xC9, 0x5C, 0x9A, 0x77, 0x68, 0x9D, 0x46, 0x5A, 0x79, 0x96, 0x9D,
  0x55, 0x66, 0x55, 0x59, 0xA7, 0x9F, 0x79, 0xF6, 0x9B, 0x71, 0x66, 0x5A,
  0xA5, 0x96, 0x9E, 0x51, 0x97, 0x94, 0x65, 0xA7, 0x99, 0x69, 0xE5, 0x19,
  0x79, 0x46, 0x5A, 0x79, 0x96, 0x9E, 0x51, 0x97, 0xA9, 0x65, 0xA7, 0x94,
  0x65, 0xE5, 0x19, 0x69, 0xE6, 0x5A, 0x6E, 0xA7, 0x94, 0x65, 0x59, 0x5C,
  0xA9, 0x5A, 0x80,
};
const struct IrCode code_na514Code = {
  freq_to_timerval(38000),
  259,             // # of pairs
  6,              // # of bits per index
  code_na514Times,
  code_na514Codes
};

// Imported from tv.ir: Off (REMOTE_PROTOCOL_RAW)
const uint16_t code_na515Times[] = {
  3305, 1625,
  405, 410,
  415, 405,
  410, 1225,
  410, 405,
  410, 410,
  405, 1230,
  415, 400,
  405, 1225,
  410, 1220,
  410, 1200,
  440, 1220,
};
const uint8_t code_na515Codes[] = {
  0x01, 0x23, 0x23, 0x14, 0x56, 0x37, 0x45, 0x63, 0x24, 0x17, 0x45, 0x14,
  0x51, 0x24, 0x56, 0x51, 0x24, 0x12, 0x43, 0x45, 0x12, 0x32, 0x45, 0x14,
  0x56, 0x48, 0x96, 0xAB, 0x30,
};
const struct IrCode code_na515Code = {
  freq_to_timerval(38000),
  57,             // # of pairs
  4,              // # of bits per index
  code_na515Times,
  code_na515Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_NEC_EXT)
const uint16_t code_na516Times[] = {
  9000, 4500,
  560, 1685,
  560, 560,
  560, 0,
};
const uint8_t code_na516Codes[] = {
  0x1A, 0xAA, 0x95, 0x55, 0x66, 0x9A, 0x99, 0x65, 0x70,
};
const struct IrCode code_na516Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na516Times,
  code_na516Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_NEC_EXT)
const uint16_t code_na517Times[] = {
  9000, 4500,
  560, 560,
  560, 1685,
  560, 0,
};
const uint8_t code_na517Codes[] = {
  0x15, 0x95, 0x69, 0x65, 0x6A, 0x55, 0x95, 0xAA, 0x70,
};
const struct IrCode code_na517Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na517Times,
  code_na517Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_NEC_EXT)
const uint16_t code_na518Times[] = {
  9000, 4500,
  560, 560,
  560, 1685,
  560, 0,
};
const uint8_t code_na518Codes[] = {
  0x15, 0x55, 0x55, 0x69, 0x6A, 0x96, 0x55, 0x69, 0xB0,
};
const struct IrCode code_na518Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na518Times,
  code_na518Codes
};

// Imported from tv.ir: Off (REMOTE_PROTOCOL_NEC_EXT)
const uint16_t code_na519Times[] = {
  9000, 4500,
  560, 560,
  560, 1685,
  560, 0,
};
const uint8_t code_na519Codes[] = {
  0x15, 0x55, 0x55, 0x69, 0x5A, 0x96, 0x65, 0x69, 0xB0,
};
const struct IrCode code_na519Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na519Times,
  code_na519Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_NEC_EXT)
const uint16_t code_na520Times[] = {
  9000, 4500,
  560, 1685,
  560, 560,
  560, 0,
};
const uint8_t code_na520Codes[] = {
  0x15, 0x69, 0xAA, 0x99, 0xA6, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_na520Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na520Times,
  code_na520Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_NEC_EXT)
const uint16_t code_na521Times[] = {
  9000, 4500,
  560, 560,
  560, 1685,
  560, 0,
};
const uint8_t code_na521Codes[] = {
  0x19, 0x69, 0x55, 0x55, 0x59, 0x55, 0x66, 0xAA, 0xB0,
};
const struct IrCode code_na521Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na521Times,
  code_na521Codes
};

// Imported from tv.ir: Off (REMOTE_PROTOCOL_NEC_EXT)
const uint16_t code_na522Times[] = {
  9000, 4500,
  560, 560,
  560, 1685,
  560, 0,
};
const uint8_t code_na522Codes[] = {
  0x19, 0x69, 0x55, 0x55, 0x5A, 0x99, 0x65, 0x66, 0xB0,
};
const struct IrCode code_na522Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na522Times,
  code_na522Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_NEC_EXT)
const uint16_t code_na523Times[] = {
  9000, 4500,
  560, 1685,
  560, 560,
  560, 0,
};
const uint8_t code_na523Codes[] = {
  0x16, 0xAA, 0x59, 0x99, 0xAA, 0x9A, 0x55, 0x65, 0xB0,
};
const struct IrCode code_na523Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na523Times,
  code_na523Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_NEC_EXT)
const uint16_t code_na524Times[] = {
  9000, 4500,
  560, 1685,
  560, 560,
  560, 0,
};
const uint8_t code_na524Codes[] = {
  0x16, 0xAA, 0x69, 0x95, 0x55, 0x69, 0xAA, 0x96, 0x70,
};
const struct IrCode code_na524Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na524Times,
  code_na524Codes
};

// Imported from tv.ir: Off (REMOTE_PROTOCOL_NEC_EXT)
const uint16_t code_na525Times[] = {
  9000, 4500,
  560, 1685,
  560, 560,
  560, 0,
};
const uint8_t code_na525Codes[] = {
  0x16, 0xAA, 0x69, 0x95, 0x65, 0x69, 0x9A, 0x96, 0x70,
};
const struct IrCode code_na525Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na525Times,
  code_na525Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_SAMSUNG)
const uint16_t code_na526Times[] = {
  4500, 4500,
  560, 1690,
  560, 560,
  560, 0,
};
const uint8_t code_na526Codes[] = {
  0x15, 0xAA, 0xAA, 0xAA, 0xA5, 0xA5, 0x5A, 0x5A, 0xB0,
};
const struct IrCode code_na526Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na526Times,
  code_na526Codes
};

// Imported from tv.ir: Power 2 (REMOTE_PROTOCOL_SAMSUNG)
const uint16_t code_na527Times[] = {
  4500, 4500,
  560, 1690,
  560, 560,
  560, 0,
};
const uint8_t code_na527Codes[] = {
  0x15, 0xAA, 0xAA, 0xAA, 0xA6, 0xAA, 0x99, 0x55, 0x70,
};
const struct IrCode code_na527Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na527Times,
  code_na527Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_NEC)
const uint16_t code_na528Times[] = {
  9000, 4500,
  560, 560,
  560, 1685,
  560, 0,
};
const uint8_t code_na528Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_na528Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na528Times,
  code_na528Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_SONY)
const uint16_t code_na529Times[] = {
  2400, 600,
  1200, 600,
  600, 600,
};
const uint8_t code_na529Codes[] = {
  0x19, 0x9A, 0x6A, 0x80,
};
const struct IrCode code_na529Code = {
  freq_to_timerval(40000),
  13,             // # of pairs
  2,              // # of bits per index
  code_na529Times,
  code_na529Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_RC6)
const uint16_t code_na530Times[] = {
  2665, 890,
  445, 445,
  0, 445,
  445, 890,
  890, 445,
  445, 0,
};
const uint8_t code_na530Codes[] = {
  0x05, 0x12, 0xE1, 0x24, 0x92, 0x49, 0x26, 0x33, 0x40,
};
const struct IrCode code_na530Code = {
  freq_to_timerval(36000),
  22,             // # of pairs
  3,              // # of bits per index
  code_na530Times,
  code_na530Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_KASEIKYO)
const uint16_t code_na531Times[] = {
  3455, 1730,
  430, 430,
  430, 1295,
  430, 0,
};
const uint8_t code_na531Codes[] = {
  0x15, 0x55, 0x99, 0x55, 0x55, 0x59, 0x55, 0x55, 0x55, 0x66, 0xAA, 0x99,
  0x70,
};
const struct IrCode code_na531Code = {
  freq_to_timerval(37000),
  50,             // # of pairs
  2,              // # of bits per index
  code_na531Times,
  code_na531Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_NEC_EXT)
const uint16_t code_na532Times[] = {
  9000, 4500,
  560, 560,
  560, 1685,
  560, 0,
};
const uint8_t code_na532Codes[] = {
  0x19, 0x9A, 0xAA, 0x56, 0xAA, 0x65, 0x55, 0x9A, 0xB0,
};
const struct IrCode code_na532Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na532Times,
  code_na532Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_NEC)
const uint16_t code_na533Times[] = {
  9000, 4500,
  560, 560,
  560, 1685,
  560, 0,
};
const uint8_t code_na533Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0,
};
const struct IrCode code_na533Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na533Times,
  code_na533Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_RAW)
const uint16_t code_na534Times[] = {
  195, 1835,
  300, 765,
  280, 760,
  275, 790,
  275, 735,
  310, 730,
  305, 1800,
  300, 1805,
  270, 795,
  275, 760,
  275, 1830,
  270, 770,
  245, 45850,
  325, 1780,
  300, 740,
  305, 785,
  280, 730,
  305, 735,
  310, 1795,
  305, 730,
  305, 765,
  305, 1775,
  335, 1800,
  270, 1810,
  250, 815,
  275, 1780,
  280, 43760,
  310, 760,
  330, 760,
  285, 730,
  300, 1830,
  275, 765,
  280, 735,
  300, 790,
  275, 1805,
  255, 45870,
  270, 765,
  280, 785,
  310, 755,
  280, 1825,
  280, 1830,
  270, 1835,
  280, 43740,
  305, 760,
  275, 1775,
  300, 45820,
  285, 1820,
  245, 43770,
  300, 1780,
  305, 790,
  285, 755,
  250, 765,
  300, 1775,
  335, 1770,
  310, 1825,
};
const uint8_t code_na534Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x87, 0x14, 0x62, 0x02, 0x24, 0xA2, 0xCC,
  0x34, 0xE3, 0xD0, 0x45, 0x24, 0xD4, 0x55, 0x15, 0x8A, 0x5D, 0x86, 0x5A,
  0x1D, 0xB1, 0x1C, 0x75, 0x11, 0xD2, 0x45, 0xE7, 0xE0, 0x86, 0x20, 0xA3,
  0x19, 0x49, 0x25, 0x08, 0xA7, 0x51, 0x1E, 0x69, 0xE2, 0xA1, 0xFA, 0x6A,
  0x54, 0xF0, 0x9F, 0x0A, 0xBB, 0x06, 0x45, 0xE0, 0x9F, 0x45, 0xE8, 0x2D,
  0x18, 0x10, 0x83, 0x0A, 0xE4, 0x11, 0x49, 0x17, 0xA2, 0x2A, 0x4A, 0x6F,
  0xC3, 0x12, 0x72, 0x97, 0x3D, 0x35, 0x06, 0x70, 0x9F, 0x3B, 0x60, 0x80,
};
const struct IrCode code_na534Code = {
  freq_to_timerval(38000),
  111,             // # of pairs
  6,              // # of bits per index
  code_na534Times,
  code_na534Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_RC5)
const uint16_t code_na535Times[] = {
  890, 890,
  890, 1780,
  1780, 890,
  890, 0,
};
const uint8_t code_na535Codes[] = {
  0x10, 0x00, 0x24, 0xC0,
};
const struct IrCode code_na535Code = {
  freq_to_timerval(36000),
  13,             // # of pairs
  2,              // # of bits per index
  code_na535Times,
  code_na535Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_RC5)
const uint16_t code_na536Times[] = {
  890, 890,
  890, 1780,
  1780, 1780,
  1780, 890,
  890, 0,
};
const uint8_t code_na536Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_na536Code = {
  freq_to_timerval(36000),
  12,             // # of pairs
  3,              // # of bits per index
  code_na536Times,
  code_na536Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_RC5)
const uint16_t code_na537Times[] = {
  890, 890,
  890, 1780,
  1780, 890,
  890, 0,
};
const uint8_t code_na537Codes[] = {
  0x10, 0x24, 0x93,
};
const struct IrCode code_na537Code = {
  freq_to_timerval(36000),
  12,             // # of pairs
  2,              // # of bits per index
  code_na537Times,
  code_na537Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_NEC)
const uint16_t code_na538Times[] = {
  9000, 4500,
  560, 560,
  560, 1685,
  560, 0,
};
const uint8_t code_na538Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0,
};
const struct IrCode code_na538Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,              // # of bits per index
  code_na538Times,
  code_na538Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_RCA)
const uint16_t code_na539Times[] = {
  4000, 4000,
  500, 2000,
  500, 1000,
  500, 8000,
};
const uint8_t code_na539Codes[] = {
  0x15, 0x66, 0x66, 0xAA, 0x99, 0x99, 0x70,
};
const struct IrCode code_na539Code = {
  freq_to_timerval(56000),
  26,             // # of pairs
  2,              // # of bits per index
  code_na539Times,
  code_na539Codes
};

// Imported from tv.ir: Power (REMOTE_PROTOCOL_RC5)
const uint16_t code_na540Times[] = {
  890, 890,
  890, 1780,
  1780, 1780,
  1780, 890,
  890, 0,
};
const uint8_t code_na540Codes[] = {
  0x04, 0x00, 0x10, 0x64, 0x40,
};
const struct IrCode code_na540Code = {
  freq_to_timerval(36000),
  12,             // # of pairs
  3,              // # of bits per index
  code_na540Times,
  code_na540Codes
};

////////////////////////////////////////////////////////////////

//const array (called "NApowerCodes") of const pointers to IrCode structs
//-otherwise stated: "declare NApowerCodes as array of const pointers to const IrCode structs"
//-to confirm this, go to http://cdecl.org/ and paste "const int* const NApowerCodes[]", and you'll 
// see it means "declare NApowerCodes as array of const pointer to const int"
const IrCode* const NApowerCodes[] = {
  &code_na000Code,
  &code_na001Code,
  &code_na002Code,
  &code_na003Code,
  &code_na004Code,
  &code_na005Code,
  &code_na006Code,
  &code_na007Code,
  &code_na008Code,
  &code_na009Code,
  &code_na010Code,
  &code_na011Code,
  &code_na012Code,
  &code_na013Code,
  &code_na014Code,
  &code_na015Code,
  &code_na016Code,
  &code_na017Code,
  &code_na018Code,
  &code_na019Code,
  &code_na020Code,
  &code_na021Code,
  &code_na022Code,
  &code_na023Code,
  &code_na024Code,
  &code_na025Code,
  &code_na026Code,
  &code_na027Code,
  &code_na028Code,
  &code_na029Code,
  &code_na030Code,
  &code_na031Code,
  &code_na032Code,
  &code_na033Code,
  &code_na034Code,
  &code_na035Code,
  &code_na036Code,
  &code_na037Code,
  &code_na038Code,
  &code_na039Code,
  &code_na040Code,
  &code_na041Code,
  &code_na042Code,
  &code_na043Code,
  &code_na044Code,
  &code_na045Code,
  &code_na046Code,
  &code_na047Code,
  &code_na048Code,
  &code_na049Code,
  &code_na050Code,
  &code_na051Code,
  &code_na052Code,
  &code_na053Code,
  &code_na054Code,
  &code_na055Code,
  &code_na056Code,
  &code_na057Code,
  &code_na058Code,
  &code_na059Code,
  &code_na060Code,
  &code_na061Code,
  &code_na062Code,
  &code_na063Code,
  &code_na064Code,
  &code_na065Code,
  &code_na066Code,
  &code_na067Code,
  &code_na068Code,
  &code_na069Code,
  &code_na070Code,
  &code_na071Code,
  &code_na072Code,
  &code_na073Code,
  &code_na074Code,
  &code_na075Code,
  &code_na076Code,
  &code_na077Code,
  &code_na078Code,
  &code_na079Code,
  &code_na080Code,
  &code_na081Code,
  &code_na082Code,
  &code_na083Code,
  &code_na084Code,
  &code_na085Code,
  &code_na086Code,
  &code_na087Code,
  &code_na088Code,
  &code_na089Code,
  &code_na090Code,
  &code_na091Code,
  &code_na092Code,
  &code_na093Code,
  &code_na094Code,
  &code_na095Code,
  &code_na096Code,
  &code_na097Code,
  &code_na098Code,
  &code_na099Code,
  &code_na100Code,
  &code_na101Code,
  &code_na102Code,
  &code_na103Code,
  &code_na104Code,
  &code_na105Code,
  &code_na106Code,
  &code_na107Code,
  &code_na108Code,
  &code_na109Code,
  &code_na110Code,
  &code_na111Code,
  &code_na112Code,
  &code_na113Code,
  &code_na114Code,
  &code_na115Code,
  &code_na116Code,
  &code_na117Code,
  &code_na118Code,
  &code_na119Code,
  &code_na120Code,
  &code_na121Code,
  &code_na122Code,
  &code_na123Code,
  &code_na124Code,
  &code_na125Code,
  &code_na126Code,
  &code_na127Code,
  &code_na128Code,
  &code_na129Code,
  &code_na130Code,
  &code_na131Code,
  &code_na132Code,
  &code_na133Code,
  &code_na134Code,
  &code_na135Code,
  &code_na136Code,
  &code_na137Code,
  &code_na138Code,
  &code_na139Code,
  &code_na000Code,
  &code_na141Code,
  &code_na142Code,
  &code_na143Code,
  &code_na277Code,
  &code_na144Code,
  &code_na145Code,
  &code_na005Code,
  &code_na004Code,
  &code_na148Code,
  &code_na149Code,
  &code_na150Code,
  &code_na021Code,
  &code_na152Code,
  &code_na153Code,
  &code_na154Code,
  &code_na155Code,
  &code_na156Code,
  &code_na157Code,
  &code_na158Code,
  &code_na159Code,
  &code_na022Code,
  &code_na161Code,
  &code_na162Code,
  &code_na163Code,
  &code_na277Code,
  &code_na143Code,
  &code_na164Code,
  &code_na165Code,
  &code_na166Code,
  &code_na167Code,
  &code_na168Code,
  &code_na169Code,
  &code_na170Code,
  &code_na171Code,
  &code_na173Code,
  &code_na174Code,
  &code_na175Code,
  &code_na176Code,
  &code_na177Code,
  &code_na178Code,
  &code_na179Code,
  &code_na180Code,
  &code_na181Code,
  &code_na182Code,
  &code_na183Code,
  &code_na184Code,
  &code_na185Code,
  &code_na186Code,
  &code_na187Code,
  &code_na188Code,
  &code_na189Code,
  &code_na190Code,
  &code_na191Code,
  &code_na192Code,
  &code_na193Code,
  &code_na195Code,
  &code_na196Code,
  &code_na197Code,
  &code_na198Code,
  &code_na199Code,
  &code_na200Code,
  &code_na201Code,
  &code_na202Code,
  &code_na203Code,
  &code_na204Code,
  &code_na205Code,
  &code_na206Code,
  &code_na207Code,
  &code_na208Code,
  &code_na209Code,
  &code_na210Code,
  &code_na211Code,
  &code_na212Code,
  &code_na213Code,
  &code_na214Code,
  &code_na215Code,
  &code_na216Code,
  &code_na217Code,
  &code_na218Code,
  &code_na219Code,
  &code_na220Code,
  &code_na221Code,
  &code_na222Code,
  &code_na223Code,
  &code_na224Code,
  &code_na225Code,
  &code_na226Code,
  &code_na227Code,
  &code_na228Code,
  &code_na229Code,
  &code_na230Code,
  &code_na231Code,
  &code_na232Code,
  &code_na233Code,
  &code_na234Code,
  &code_na235Code,
  &code_na236Code,
  &code_na237Code,
  &code_na238Code,
  &code_na239Code,
  &code_na240Code,
  &code_na241Code,
  &code_na242Code,
  &code_na243Code,
  &code_na244Code,
  &code_na245Code,
  &code_na246Code,
  &code_na247Code,
  &code_na248Code,
  &code_na249Code,
  &code_na250Code,
  &code_na251Code,
  &code_na252Code,
  &code_na253Code,
  &code_na254Code,
  &code_na255Code,
  &code_na256Code,
  &code_na257Code,
  &code_na258Code,
  &code_na259Code,
  &code_na260Code,
  &code_na261Code,
  &code_na262Code,
  &code_na263Code,
  &code_na264Code,
  &code_na265Code,
  &code_na266Code,
  &code_na267Code,
  &code_na268Code,
  &code_na269Code,
  &code_na270Code,
  &code_na271Code,
  &code_na272Code,
  &code_na273Code,
  &code_na274Code,
  &code_na275Code,
  &code_na276Code,
  &code_na278Code,
  &code_na279Code,
  &code_na280Code,
  &code_na281Code,
  &code_na282Code,
  &code_na283Code,
  &code_na284Code,
  &code_na285Code,
  &code_na286Code,
  &code_na287Code,
  &code_na288Code,
  &code_na289Code,
  &code_na290Code,
  &code_na291Code,
  &code_na292Code,
  &code_na293Code,
  &code_na294Code,
  &code_na295Code,
  &code_na296Code,
  &code_na297Code,
  &code_na298Code,
  &code_na299Code,
  &code_na300Code,
  &code_na301Code,
  &code_na302Code,
  &code_na303Code,
  &code_na304Code,
  &code_na305Code,
  &code_na306Code,
  &code_na307Code,
  &code_na308Code,
  &code_na309Code,
  &code_na310Code,
  &code_na311Code,
  &code_na312Code,
  &code_na313Code,
  &code_na314Code,
  &code_na315Code,
  &code_na316Code,
  &code_na317Code,
  &code_na318Code,
  &code_na319Code,
  &code_na320Code,
  &code_na321Code,
  &code_na322Code,
  &code_na323Code,
  &code_na324Code,
  &code_na325Code,
  &code_na326Code,
  &code_na327Code,
  &code_na328Code,
  &code_na329Code,
  &code_na330Code,
  &code_na331Code,
  &code_na332Code,
  &code_na333Code,
  &code_na334Code,
  &code_na335Code,
  &code_na336Code,
  &code_na337Code,
  &code_na338Code,
  &code_na339Code,
  &code_na340Code,
  &code_na341Code,
  &code_na342Code,
  &code_na343Code,
  &code_na344Code,
  &code_na345Code,
  &code_na346Code,
  &code_na347Code,
  &code_na348Code,
  &code_na349Code,
  &code_na350Code,
  &code_na351Code,
  &code_na352Code,
  &code_na353Code,
  &code_na354Code,
  &code_na355Code,
  &code_na356Code,
  &code_na357Code,
  &code_na358Code,
  &code_na359Code,
  &code_na360Code,
  &code_na361Code,
  &code_na362Code,
  &code_na363Code,
  &code_na364Code,
  &code_na365Code,
  &code_na366Code,
  &code_na367Code,
  &code_na368Code,
  &code_na369Code,
  &code_na370Code,
  &code_na371Code,
  &code_na372Code,
  &code_na373Code,
  &code_na374Code,
  &code_na375Code,
  &code_na376Code,
  &code_na377Code,
  &code_na378Code,
  &code_na379Code,
  &code_na380Code,
  &code_na381Code,
  &code_na382Code,
  &code_na383Code,
  &code_na384Code,
  &code_na385Code,
  &code_na386Code,
  &code_na387Code,
  &code_na388Code,
  &code_na389Code,
  &code_na390Code,
  &code_na391Code,
  &code_na392Code,
  &code_na393Code,
  &code_na394Code,
  &code_na395Code,
  &code_na396Code,
  &code_na397Code,
  &code_na398Code,
  &code_na399Code,
  &code_na400Code,
  &code_na401Code,
  &code_na402Code,
  &code_na403Code,
  &code_na404Code,
  &code_na405Code,
  &code_na406Code,
  &code_na407Code,
  &code_na408Code,
  &code_na409Code,
  &code_na410Code,
  &code_na411Code,
  &code_na412Code,
  &code_na413Code,
  &code_na414Code,
  &code_na415Code,
  &code_na416Code,
  &code_na417Code,
  &code_na418Code,
  &code_na419Code,
  &code_na420Code,
  &code_na421Code,
  &code_na422Code,
  &code_na423Code,
  &code_na424Code,
  &code_na425Code,
  &code_na426Code,
  &code_na427Code,
  &code_na428Code,
  &code_na429Code,
  &code_na430Code,
  &code_na431Code,
  &code_na432Code,
  &code_na433Code,
  &code_na434Code,
  &code_na435Code,
  &code_na436Code,
  &code_na437Code,
  &code_na438Code,
  &code_na439Code,
  &code_na440Code,
  &code_na441Code,
  &code_na442Code,
  &code_na443Code,
  &code_na444Code,
  &code_na445Code,
  &code_na446Code,
  &code_na447Code,
  &code_na448Code,
  &code_na449Code,
  &code_na450Code,
  &code_na451Code,
  &code_na452Code,
  &code_na453Code,
  &code_na454Code,
  &code_na455Code,
  &code_na456Code,
  &code_na457Code,
  &code_na458Code,
  &code_na459Code,
  &code_na460Code,
  &code_na461Code,
  &code_na462Code,
  &code_na463Code,
  &code_na464Code,
  &code_na465Code,
  &code_na466Code,
  &code_na467Code,
  &code_na468Code,
  &code_na469Code,
  &code_na470Code,
  &code_na471Code,
  &code_na472Code,
  &code_na473Code,
  &code_na474Code,
  &code_na475Code,
  &code_na476Code,
  &code_na477Code,
  &code_na478Code,
  &code_na479Code,
  &code_na480Code,
  &code_na481Code,
  &code_na482Code,
  &code_na483Code,
  &code_na484Code,
  &code_na485Code,
  &code_na486Code,
  &code_na487Code,
  &code_na488Code,
  &code_na489Code,
  &code_na490Code,
  &code_na491Code,
  &code_na492Code,
  &code_na493Code,
  &code_na494Code,
  &code_na495Code,
  &code_na496Code,
  &code_na497Code,
  &code_na498Code,
  &code_na499Code,
  &code_na500Code,
  &code_na501Code,
  &code_na502Code,
  &code_na503Code,
  &code_na504Code,
  &code_na505Code,
  &code_na506Code,
  &code_na507Code,
  &code_na508Code,
  &code_na509Code,
  &code_na510Code,
  &code_na511Code,
  &code_na512Code,
  &code_na513Code,
  &code_na514Code,
  &code_na515Code,
  &code_na516Code,
  &code_na517Code,
  &code_na518Code,
  &code_na519Code,
  &code_na520Code,
  &code_na521Code,
  &code_na522Code,
  &code_na523Code,
  &code_na524Code,
  &code_na525Code,
  &code_na526Code,
  &code_na527Code,
  &code_na528Code,
  &code_na529Code,
  &code_na530Code,
  &code_na531Code,
  &code_na532Code,
  &code_na533Code,
  &code_na534Code,
  &code_na535Code,
  &code_na536Code,
  &code_na537Code,
  &code_na538Code,
  &code_na539Code,
  &code_na540Code,
};

const char* const NAirFormats[] = {
  "raw", "raw", "raw", "raw", "parsed:NECext", "raw", "parsed:NECext", "parsed:NECext", "raw", "raw",
  "raw", "raw", "raw", "raw", "parsed:NECext", "parsed:NECext", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "parsed:NECext", "raw", "raw",
  "raw", "raw", "raw", "parsed:NECext", "parsed:SIRC20", "parsed:NEC", "parsed:NEC", "parsed:NECext", "parsed:NECext", "parsed:NEC",
  "parsed:NEC", "parsed:NECext", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC",
  "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC",
  "parsed:NECext", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "raw", "raw", "parsed:Kaseikyo",
  "raw", "raw", "raw", "raw", "parsed:Kaseikyo", "raw", "parsed:Samsung32", "parsed:Kaseikyo", "raw", "parsed:Kaseikyo",
  "raw", "raw", "parsed:Kaseikyo", "parsed:RC5", "parsed:NECext", "parsed:RC6", "parsed:RC6", "parsed:RC5", "parsed:RC6", "parsed:RC6",
  "parsed:RC6", "parsed:RC5", "parsed:RC6", "parsed:RC6", "parsed:RC6", "parsed:RC6", "parsed:RC6", "parsed:RC6", "parsed:NECext", "raw",
  "raw", "raw", "parsed:NECext", "parsed:NEC", "parsed:NEC", "raw", "parsed:NEC", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32",
  "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32",
  "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32",
  "parsed:Samsung32", "raw", "raw", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32",
  "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32",
  "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32", "raw", "parsed:NECext", "raw", "raw", "raw", "parsed:NEC",
  "raw", "parsed:NEC", "raw", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC",
  "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC",
  "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:SIRC", "parsed:NECext", "parsed:RCA", "parsed:RCA", "parsed:NECext",
  "raw", "parsed:NECext", "parsed:NECext", "parsed:NEC", "parsed:NECext", "parsed:NECext", "parsed:NEC", "parsed:NEC", "parsed:NEC",
  "parsed:RC5", "parsed:NECext", "parsed:NEC", "raw", "raw", "parsed:NEC", "parsed:NEC", "parsed:Samsung32", "parsed:Samsung32", "parsed:Samsung32",
  "raw:tv.ir", "raw:tv.ir", "raw:tv.ir", "raw:tv.ir", "raw:tv.ir", "raw:tv.ir", "parsed:NECext", "raw:tv.ir",
  "raw:tv.ir", "raw:tv.ir", "raw:tv.ir", "parsed:NECext", "parsed:NECext", "parsed:NECext", "parsed:NECext", "parsed:NECext",
  "parsed:NECext", "parsed:NECext", "parsed:NECext", "parsed:NECext", "parsed:NECext", "parsed:Samsung32", "parsed:Samsung32", "parsed:NEC",
  "parsed:SIRC", "parsed:RC6", "parsed:Kaseikyo", "parsed:NECext", "parsed:NEC", "raw:tv.ir", "parsed:RC5", "parsed:RC5",
  "parsed:RC5", "parsed:NEC", "parsed:RCA", "parsed:RC5",
};

const char* naFormatForIndex(uint16_t index) {
  if (index < 278) {
    return "TV-B-Gone:raw";
  }
  const uint16_t irIndex = index - 278;
  if (irIndex < sizeof(NAirFormats) / sizeof(NAirFormats[0])) {
    return NAirFormats[irIndex];
  }
  return "raw:unknown source";
}

const uint16_t NAshuffle[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
  25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
  50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
  75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99,
  100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124,
  125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
  150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174,
  175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199,
  247, 363, 412, 248, 288, 302, 217, 323, 360, 368, 299, 479, 423, 444, 246, 358, 200, 277, 211, 432, 204, 322, 387, 494, 270,
  443, 407, 233, 232, 313, 417, 466, 351, 501, 344, 491, 287, 254, 359, 388, 264, 251, 380, 333, 476, 503, 372, 430, 453, 461,
  213, 267, 353, 336, 498, 390, 205, 484, 230, 452, 354, 440, 327, 214, 416, 237, 263, 446, 404, 273, 215, 298, 486, 391, 474,
  330, 375, 221, 456, 304, 499, 431, 212, 283, 231, 373, 439, 339, 305, 389, 295, 475, 296, 310, 377, 470, 382, 413, 458, 271,
  405, 370, 278, 348, 289, 393, 457, 362, 477, 318, 261, 276, 361, 414, 415, 308, 347, 317, 462, 402, 504, 253, 297, 209, 399,
  369, 445, 367, 240, 218, 433, 357, 260, 257, 398, 312, 216, 460, 340, 265, 472, 282, 489, 485, 316, 448, 269, 438, 335, 495,
  409, 427, 314, 467, 419, 290, 201, 331, 284, 396, 449, 366, 306, 293, 309, 493, 279, 355, 411, 450, 403, 274, 258, 242, 329,
  356, 239, 447, 374, 481, 385, 350, 437, 346, 395, 490, 220, 266, 307, 425, 300, 325, 286, 497, 319, 483, 222, 291, 400, 249,
  408, 223, 334, 208, 255, 383, 210, 471, 338, 392, 219, 482, 238, 206, 454, 281, 332, 422, 397, 364, 365, 203, 463, 303, 311,
  285, 465, 349, 324, 275, 451, 268, 394, 381, 468, 401, 321, 256, 245, 243, 464, 496, 428, 224, 294, 236, 492, 207, 379, 345,
  342, 420, 442, 500, 280, 241, 473, 259, 418, 328, 426, 435, 250, 459, 244, 469, 371, 228, 424, 341, 225, 421, 378, 292, 352,
  229, 262, 320, 406, 478, 235, 301, 234, 272, 441, 343, 384, 227, 429, 480, 226, 410, 252, 326, 376, 487, 386, 455, 202, 315,
  502, 434, 436, 337, 488,
  505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540,
};

uint16_t naShuffledIndex(uint16_t position) {
  if (position < 130) {
    return position;
  }
  if (position < 278) {
    return 130 + ((73 * (position - 130) + 17) % 148);
  }
  if (position < 505) {
    return 278 + ((101 * (position - 278) + 29) % 227);
  }
  return position; // Imported tv.ir codes: 505..540
}



uint16_t num_NAcodes = NUM_ELEM(NApowerCodes);
