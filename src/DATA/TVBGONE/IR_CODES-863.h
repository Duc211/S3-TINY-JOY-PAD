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

const uint16_t code_na541Times[] = {
  4500, 4500, 560, 560, 560, 1690, 560, 40000
};
const uint8_t code_na541Codes[] = {
  0x1A, 0x95, 0x65, 0x6A, 0x96, 0x95, 0x69, 0x6A, 0xB0
};
const struct IrCode code_na541Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na541Times,
  code_na541Codes
};

const uint16_t code_na542Times[] = {
  2400, 600, 1200, 600, 600, 600, 600, 40000
};
const uint8_t code_na542Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0
};
const struct IrCode code_na542Code = {
  freq_to_timerval(40000),
  14,             // # of pairs
  2,             // # of bits per index
  code_na542Times,
  code_na542Codes
};

const uint16_t code_na543Times[] = {
  2400, 600, 1200, 600, 600, 600, 600, 40000
};
const uint8_t code_na543Codes[] = {
  0x19, 0x9A, 0xAA, 0x70
};
const struct IrCode code_na543Code = {
  freq_to_timerval(40000),
  14,             // # of pairs
  2,             // # of bits per index
  code_na543Times,
  code_na543Codes
};

const uint16_t code_na544Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na544Codes[] = {
  0x15, 0x95, 0x6A, 0x6A, 0xA6, 0x55, 0x59, 0xAA, 0xB0
};
const struct IrCode code_na544Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na544Times,
  code_na544Codes
};

const uint16_t code_na545Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na545Codes[] = {
  0x15, 0x55, 0x6A, 0xA6, 0x96, 0xA5, 0x69, 0x5A, 0xB0
};
const struct IrCode code_na545Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na545Times,
  code_na545Codes
};

const uint16_t code_na546Times[] = {
  4500, 4500, 560, 560, 560, 1690, 560, 40000
};
const uint8_t code_na546Codes[] = {
  0x1A, 0x95, 0x65, 0x6A, 0x96, 0x95, 0x69, 0x6A, 0xB0
};
const struct IrCode code_na546Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na546Times,
  code_na546Codes
};

const uint16_t code_na547Times[] = {
  2400, 600, 1200, 600, 600, 600, 600, 40000
};
const uint8_t code_na547Codes[] = {
  0x19, 0x9A, 0x6A, 0xB0
};
const struct IrCode code_na547Code = {
  freq_to_timerval(40000),
  14,             // # of pairs
  2,             // # of bits per index
  code_na547Times,
  code_na547Codes
};

const uint16_t code_na548Times[] = {
  2400, 600, 1200, 600, 600, 600, 600, 40000
};
const uint8_t code_na548Codes[] = {
  0x19, 0x9A, 0xAA, 0x70
};
const struct IrCode code_na548Code = {
  freq_to_timerval(40000),
  14,             // # of pairs
  2,             // # of bits per index
  code_na548Times,
  code_na548Codes
};

const uint16_t code_na549Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na549Codes[] = {
  0x15, 0x95, 0x6A, 0x6A, 0xA6, 0x55, 0x59, 0xAA, 0xB0
};
const struct IrCode code_na549Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na549Times,
  code_na549Codes
};

const uint16_t code_na550Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na550Codes[] = {
  0x15, 0x55, 0x6A, 0xA6, 0x96, 0xA5, 0x69, 0x5A, 0xB0
};
const struct IrCode code_na550Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na550Times,
  code_na550Codes
};

const uint16_t code_na551Times[] = {
  4500, 4500, 560, 560, 560, 1690, 560, 40000
};
const uint8_t code_na551Codes[] = {
  0x1A, 0x95, 0x65, 0x6A, 0x96, 0x95, 0x69, 0x6A, 0xB0
};
const struct IrCode code_na551Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na551Times,
  code_na551Codes
};

const uint16_t code_na552Times[] = {
  2665, 890, 445, 445, 445, 890, 890, 445, 890, 40000
};
const uint8_t code_na552Codes[] = {
  0x04, 0x92, 0x49, 0x24, 0x92, 0x51, 0x64, 0x98
};
const struct IrCode code_na552Code = {
  freq_to_timerval(36000),
  21,             // # of pairs
  3,             // # of bits per index
  code_na552Times,
  code_na552Codes
};

const uint16_t code_na553Times[] = {
  4500, 4500, 560, 1690, 560, 560, 560, 40000
};
const uint8_t code_na553Codes[] = {
  0x15, 0xAA, 0xAA, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70
};
const struct IrCode code_na553Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na553Times,
  code_na553Codes
};

const uint16_t code_na554Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na554Codes[] = {
  0x15, 0x66, 0x6A, 0x99, 0xAA, 0x65, 0x55, 0x9A, 0xB0
};
const struct IrCode code_na554Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na554Times,
  code_na554Codes
};

const uint16_t code_na555Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na555Codes[] = {
  0x15, 0x56, 0x6A, 0xA9, 0x99, 0x65, 0x66, 0x9A, 0xB0
};
const struct IrCode code_na555Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na555Times,
  code_na555Codes
};

const uint16_t code_na556Times[] = {
  9000, 4500, 560, 1685, 560, 560, 560, 40000
};
const uint8_t code_na556Codes[] = {
  0x1A, 0x96, 0x9A, 0x69, 0x96, 0xA5, 0xA9, 0x5A, 0x70
};
const struct IrCode code_na556Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na556Times,
  code_na556Codes
};

const uint16_t code_na557Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na557Codes[] = {
  0x19, 0x99, 0xA6, 0x66, 0x56, 0xA5, 0x69, 0x5A, 0xB0
};
const struct IrCode code_na557Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na557Times,
  code_na557Codes
};

const uint16_t code_na558Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na558Codes[] = {
  0x15, 0xA9, 0x6A, 0x56, 0x96, 0xA5, 0x69, 0x5A, 0xB0
};
const struct IrCode code_na558Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na558Times,
  code_na558Codes
};

const uint16_t code_na559Times[] = {
  9000, 4500, 560, 1685, 560, 560, 560, 40000
};
const uint8_t code_na559Codes[] = {
  0x16, 0xAA, 0x66, 0x55, 0xAA, 0x6A, 0x95, 0x95, 0x70
};
const struct IrCode code_na559Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na559Times,
  code_na559Codes
};

const uint16_t code_na560Times[] = {
  9000, 4500, 560, 1685, 560, 560, 560, 40000
};
const uint8_t code_na560Codes[] = {
  0x16, 0x99, 0xA9, 0x66, 0x55, 0x9A, 0xAA, 0x65, 0x70
};
const struct IrCode code_na560Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na560Times,
  code_na560Codes
};

const uint16_t code_na561Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na561Codes[] = {
  0x15, 0xA5, 0x55, 0xA5, 0x55, 0x56, 0xAA, 0xA9, 0x70
};
const struct IrCode code_na561Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na561Times,
  code_na561Codes
};

const uint16_t code_na562Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na562Codes[] = {
  0x15, 0xA9, 0x6A, 0x56, 0x95, 0x65, 0x6A, 0x9A, 0xB0
};
const struct IrCode code_na562Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na562Times,
  code_na562Codes
};

const uint16_t code_na563Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na563Codes[] = {
  0x19, 0x99, 0xA6, 0x66, 0x66, 0x56, 0x99, 0xA9, 0x70
};
const struct IrCode code_na563Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na563Times,
  code_na563Codes
};

const uint16_t code_na564Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na564Codes[] = {
  0x16, 0x55, 0x69, 0xAA, 0x95, 0x95, 0x6A, 0x6A, 0xB0
};
const struct IrCode code_na564Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na564Times,
  code_na564Codes
};

const uint16_t code_na565Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na565Codes[] = {
  0x15, 0xA5, 0x6A, 0x5A, 0x95, 0x95, 0x6A, 0x6A, 0xB0
};
const struct IrCode code_na565Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na565Times,
  code_na565Codes
};

const uint16_t code_na566Times[] = {
  9000, 4500, 560, 1685, 560, 560, 560, 40000
};
const uint8_t code_na566Codes[] = {
  0x1A, 0x95, 0xA5, 0x6A, 0x6A, 0x6A, 0x95, 0x95, 0x70
};
const struct IrCode code_na566Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na566Times,
  code_na566Codes
};

const uint16_t code_na567Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na567Codes[] = {
  0x15, 0x55, 0xAA, 0x9A, 0x59, 0x95, 0x66, 0x6A, 0xB0
};
const struct IrCode code_na567Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na567Times,
  code_na567Codes
};

const uint16_t code_na568Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na568Codes[] = {
  0x15, 0x96, 0x6A, 0x69, 0x95, 0x55, 0x6A, 0xAA, 0xB0
};
const struct IrCode code_na568Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na568Times,
  code_na568Codes
};

const uint16_t code_na569Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na569Codes[] = {
  0x15, 0x55, 0xA9, 0xAA, 0x69, 0x65, 0x56, 0x9A, 0xB0
};
const struct IrCode code_na569Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na569Times,
  code_na569Codes
};

const uint16_t code_na570Times[] = {
  4500, 4500, 560, 560, 560, 1690, 560, 40000
};
const uint8_t code_na570Codes[] = {
  0x1A, 0x95, 0x65, 0x6A, 0x96, 0x65, 0x69, 0x9A, 0xB0
};
const struct IrCode code_na570Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na570Times,
  code_na570Codes
};

const uint16_t code_na571Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na571Codes[] = {
  0x15, 0x55, 0x9A, 0xAA, 0x55, 0xA5, 0x6A, 0x5A, 0xB0
};
const struct IrCode code_na571Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na571Times,
  code_na571Codes
};

const uint16_t code_na572Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na572Codes[] = {
  0x15, 0x66, 0x6A, 0x99, 0x95, 0x95, 0x6A, 0x6A, 0xB0
};
const struct IrCode code_na572Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na572Times,
  code_na572Codes
};

const uint16_t code_na573Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na573Codes[] = {
  0x15, 0x55, 0xA6, 0x6A, 0x59, 0x95, 0x66, 0x6A, 0xB0
};
const struct IrCode code_na573Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na573Times,
  code_na573Codes
};

const uint16_t code_na574Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na574Codes[] = {
  0x15, 0x55, 0xAA, 0x66, 0x59, 0x95, 0x66, 0x6A, 0xB0
};
const struct IrCode code_na574Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na574Times,
  code_na574Codes
};

const uint16_t code_na575Times[] = {
  4500, 4500, 560, 1690, 560, 560, 560, 40000
};
const uint8_t code_na575Codes[] = {
  0x16, 0x6A, 0xA9, 0x95, 0x66, 0x6A, 0x99, 0x95, 0x70
};
const struct IrCode code_na575Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na575Times,
  code_na575Codes
};

const uint16_t code_na576Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na576Codes[] = {
  0x19, 0x99, 0xA6, 0x66, 0x69, 0xA5, 0x56, 0x5A, 0xB0
};
const struct IrCode code_na576Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na576Times,
  code_na576Codes
};

const uint16_t code_na577Times[] = {
  9000, 4500, 560, 1685, 560, 560, 560, 40000
};
const uint8_t code_na577Codes[] = {
  0x19, 0xAA, 0x65, 0xA9, 0xA6, 0x9A, 0x99, 0x65, 0x70
};
const struct IrCode code_na577Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na577Times,
  code_na577Codes
};

const uint16_t code_na578Times[] = {
  4500, 4500, 560, 1690, 560, 560, 560, 40000
};
const uint8_t code_na578Codes[] = {
  0x19, 0xAA, 0xA6, 0x55, 0x66, 0xAA, 0x99, 0x55, 0x70
};
const struct IrCode code_na578Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na578Times,
  code_na578Codes
};

const uint16_t code_na579Times[] = {
  4500, 4500, 560, 560, 560, 1690, 560, 40000
};
const uint8_t code_na579Codes[] = {
  0x15, 0x95, 0x6A, 0x6A, 0xAA, 0x95, 0x55, 0x6A, 0xB0
};
const struct IrCode code_na579Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na579Times,
  code_na579Codes
};

const uint16_t code_na580Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na580Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0xA5, 0x55, 0x5A, 0xAA, 0xB0
};
const struct IrCode code_na580Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na580Times,
  code_na580Codes
};

const uint16_t code_na581Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na581Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0xA5, 0x55, 0x5A, 0xAA, 0xB0
};
const struct IrCode code_na581Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na581Times,
  code_na581Codes
};

const uint16_t code_na582Times[] = {
  635, 2570, 505, 520, 480, 520, 480, 515, 480, 545, 480, 20040, 590, 2555, 500, 1005, 1000, 995, 510, 550, 480, 485, 510, 485, 540, 485, 515, 515, 480, 65535, 595, 2550, 505, 1005, 990, 1005, 515, 485, 485, 485, 545, 480, 515, 480
};
const uint8_t code_na582Codes[] = {
  0x00, 0x44, 0x21, 0x08, 0x43, 0x20, 0xCA, 0x63, 0xA1, 0x2A, 0x5A, 0xD8, 0xD7, 0x3E, 0x11, 0x6C, 0x9B, 0x3A, 0x54
};
const struct IrCode code_na582Code = {
  freq_to_timerval(38000),
  30,             // # of pairs
  5,             // # of bits per index
  code_na582Times,
  code_na582Codes
};

const uint16_t code_na583Times[] = {
  525, 1955, 450, 2000, 475, 4545, 445, 4545, 480, 2030, 445, 2005, 470, 2010, 445, 4575, 445, 34915, 445, 2030, 480, 4540, 450, 4540, 470, 2040, 450, 4545, 450, 4570, 450, 2030
};
const uint8_t code_na583Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x37, 0x12, 0x89, 0x5A, 0xBC, 0x56, 0x7D, 0xEF, 0x30
};
const struct IrCode code_na583Code = {
  freq_to_timerval(38000),
  25,             // # of pairs
  4,             // # of bits per index
  code_na583Times,
  code_na583Codes
};

const uint16_t code_na584Times[] = {
  2445, 580, 1220, 605, 550, 600, 1190, 610, 570, 600, 540, 605, 545, 630, 1170, 605, 570, 605, 545, 605, 565, 610, 545, 26265, 2415, 610, 1190, 605, 1195, 600, 540, 610, 540, 635, 565, 585
};
const uint8_t code_na584Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0xA6, 0x3A, 0x12, 0xA5, 0xB1, 0xA9, 0x72, 0x1C, 0xF8, 0x1D, 0x4F, 0x88
};
const struct IrCode code_na584Code = {
  freq_to_timerval(38000),
  25,             // # of pairs
  5,             // # of bits per index
  code_na584Times,
  code_na584Codes
};

const uint16_t code_na585Times[] = {
  3460, 1800, 440, 450, 445, 1285, 470, 450, 440, 455, 445, 445, 445, 420, 495, 450, 440, 425, 470, 420, 465, 450, 445, 1280, 465, 425, 470, 445, 460, 455, 475, 445, 440, 420, 435, 430, 470, 1260, 495, 425, 470, 1255, 495, 1260, 470, 1280, 470, 1285, 475, 415, 465, 1260, 490, 1265, 470, 425, 470, 65535, 3580, 1715, 475, 1280, 490, 430, 435, 1290, 465, 395, 440, 1290, 435, 425, 495, 420, 445, 1255, 465, 1290, 465, 455
};
const uint8_t code_na585Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x50, 0x46, 0x1C, 0x82, 0x4A, 0x14, 0x12, 0xC9, 0x30, 0xD2, 0x0D, 0x38, 0x11, 0x41, 0x2C, 0xD0, 0x46, 0x30, 0xF4, 0x07, 0x45, 0x24, 0xD4, 0x55, 0x65, 0xCC, 0x61, 0x72, 0x82, 0x5D, 0x96, 0x9B, 0x55, 0xC7, 0x4C, 0x78, 0x92, 0x86, 0x30, 0x97, 0xCA, 0x14, 0x11, 0x41, 0x80, 0xD2, 0x0F, 0x06, 0x17, 0xC3, 0x14, 0x18, 0x8F, 0x04, 0x50, 0x63, 0x26, 0x43, 0x14, 0x1E, 0x56, 0xA6, 0x58, 0x99, 0xC2, 0x0C, 0xB5, 0xD2, 0x54, 0x34, 0x80
};
const struct IrCode code_na585Code = {
  freq_to_timerval(38000),
  99,             // # of pairs
  6,             // # of bits per index
  code_na585Times,
  code_na585Codes
};

const uint16_t code_na586Times[] = {
  390, 1735, 280, 795, 255, 745, 295, 755, 275, 775, 275, 1825, 270, 1830, 270, 805, 255, 1820, 255, 795, 250, 745, 295, 1805, 300, 775, 245, 48940, 305, 1820, 275, 800, 305, 745, 270, 780, 250, 1825, 245, 1825, 270, 42825, 380, 1745, 245, 750, 245, 1830, 245, 755, 295, 780, 245, 780, 270, 755, 245, 800, 280, 1820
};
const uint8_t code_na586Codes[] = {
  0x00, 0x44, 0x32, 0x10, 0xA6, 0x3A, 0x02, 0x95, 0x2D, 0x8D, 0x73, 0xD5, 0x08, 0x98, 0x29, 0x43, 0xE4, 0x52, 0xBE, 0x74, 0xA9, 0xEC, 0x32, 0x10, 0xA5, 0x3D, 0xCE, 0x9C, 0x2F, 0x2D, 0xA9, 0xF5, 0xB2, 0x15, 0xFC, 0x99, 0xEF, 0xDE, 0xBE, 0x40
};
const struct IrCode code_na586Code = {
  freq_to_timerval(38000),
  63,             // # of pairs
  5,             // # of bits per index
  code_na586Times,
  code_na586Codes
};

const uint16_t code_na587Times[] = {
  560, 1720, 560, 595, 555, 595, 565, 615, 515, 615, 535, 620, 545, 1715, 565, 1715, 565, 1690, 565, 590, 565, 620, 545, 610, 540, 615, 555, 625, 530, 625, 515, 640, 510, 1720, 560, 620, 540, 1715, 560, 1725, 570, 1715, 555, 1700
};
const uint8_t code_na587Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x40, 0x52, 0xA5, 0xB0, 0xA6, 0x6B, 0x0A, 0xE7, 0xBE, 0x11, 0x92, 0x27, 0x4A, 0xCC
};
const struct IrCode code_na587Code = {
  freq_to_timerval(38000),
  30,             // # of pairs
  5,             // # of bits per index
  code_na587Times,
  code_na587Codes
};

const uint16_t code_na588Times[] = {
  8435, 4190, 540, 1565, 565, 1560, 540, 510, 560, 545, 515, 505, 540, 560, 510, 540, 510, 565, 510, 1585, 510, 1560, 540, 535, 535, 1565, 540, 505, 560, 515, 535, 540, 510, 22100, 645, 1480, 560, 1570, 535, 515, 535, 570, 540, 1585, 515, 1560, 560, 1565, 510, 22125, 535, 510, 540, 565, 515, 510, 510, 515, 565, 1590, 510, 1565, 555, 1570, 515, 535
};
const uint8_t code_na588Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x87, 0x20, 0x92, 0x82, 0x2C, 0xC3, 0x4E, 0x3D, 0x04, 0x52, 0x0C, 0xB4, 0xD4, 0x1C, 0x75, 0x56, 0x5C, 0xB3, 0x13, 0x50, 0x76, 0x11, 0x09, 0x96, 0x9B, 0x2C, 0xF7, 0x1D, 0x79, 0xF0, 0xD7, 0x2E, 0x03, 0xC0
};
const struct IrCode code_na588Code = {
  freq_to_timerval(38000),
  51,             // # of pairs
  6,             // # of bits per index
  code_na588Times,
  code_na588Codes
};

const uint16_t code_na589Times[] = {
  930, 825, 1710, 935, 795, 930, 790, 910, 820, 930, 790, 940, 795, 935, 790, 1720, 900, 855, 1710, 905, 825, 65535, 925, 830, 1705, 910, 820, 910, 825, 930, 820, 935, 795, 1715, 905, 850, 1705, 940
};
const uint8_t code_na589Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC2, 0x3A, 0x12, 0xA5, 0xB1, 0xAE, 0x1B, 0xC6, 0xF8, 0x46, 0x40
};
const struct IrCode code_na589Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  5,             // # of bits per index
  code_na589Times,
  code_na589Codes
};

const uint16_t code_na590Times[] = {
  450, 2030, 445, 2005, 480, 4540, 450, 4540, 475, 2035, 440, 2010, 475, 2005, 450, 4570, 455, 4570, 445, 2035, 450, 34905, 525, 1955, 450, 2000, 475, 4545, 480, 2030, 470, 2010, 445, 4575, 445, 4545
};
const uint8_t code_na590Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x1A, 0x12, 0x35, 0x2D, 0x8D, 0x1B, 0x82, 0xF8, 0x44, 0xEC, 0x68
};
const struct IrCode code_na590Code = {
  freq_to_timerval(38000),
  25,             // # of pairs
  5,             // # of bits per index
  code_na590Times,
  code_na590Codes
};

const uint16_t code_na591Times[] = {
  9020, 4495, 565, 1665, 565, 1690, 560, 565, 535, 1700, 565, 1695, 570, 1665, 570, 585, 535, 565, 565, 565, 535, 595, 535, 590, 540, 590, 530, 570, 540, 565, 540, 560, 560, 595, 535, 1695, 560, 1670, 560, 1695, 555, 1675, 565, 560, 515, 560, 570, 560, 540, 1665, 570, 23180, 9015, 4505, 570, 1690, 540, 1690, 645, 1610, 510, 565, 565, 590, 530, 595, 515, 590, 510, 1695, 540, 585, 510, 595
};
const uint8_t code_na591Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x11, 0x46, 0x1C, 0x82, 0x4A, 0x2C, 0xC3, 0x4E, 0x08, 0xF4, 0x0B, 0x39, 0x10, 0x42, 0x49, 0x35, 0x15, 0x41, 0x65, 0xD0, 0x20, 0xA2, 0xD8, 0x09, 0x24, 0xC1, 0x04, 0x54, 0x99, 0x69, 0xB7, 0x03, 0x44, 0x17, 0x52, 0x40, 0xA2, 0xDE, 0x7C, 0xC8, 0x21, 0x70, 0xF4, 0x0B, 0x32, 0x20, 0x42, 0x49, 0x35, 0x15, 0x42, 0x18, 0xCA, 0x2E, 0x42, 0xD8, 0x09, 0x24, 0xC1, 0x04, 0x54, 0x80
};
const struct IrCode code_na591Code = {
  freq_to_timerval(38000),
  87,             // # of pairs
  6,             // # of bits per index
  code_na591Times,
  code_na591Codes
};

const uint16_t code_na592Times[] = {
  8040, 3980, 515, 535, 480, 515, 515, 1560, 510, 515, 515, 510, 485, 4000, 535, 1565, 510, 535, 480, 1565, 480, 24150, 8045, 3975, 505, 520, 510, 540, 510, 510, 505, 1570, 480, 545, 485, 540, 480, 3975, 485, 1565, 510, 1565, 490, 535
};
const uint8_t code_na592Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0x85, 0x21, 0x8E, 0x84, 0xA1, 0x28, 0x10, 0x54, 0xB6, 0x35, 0x2E, 0x7B, 0x61, 0x19, 0x1C, 0x33, 0x2D, 0x0A, 0xDA, 0x80
};
const struct IrCode code_na592Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na592Times,
  code_na592Codes
};

const uint16_t code_na593Times[] = {
  385, 2025, 295, 2110, 270, 2140, 265, 890, 270, 885, 295, 925, 235, 2115, 300, 885, 275, 915, 235, 2145, 275, 885, 240, 920, 240, 915, 265, 895, 265, 26575, 275, 2135, 270, 890, 265, 920, 265, 925
};
const uint8_t code_na593Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x48, 0xA2, 0xAD, 0x8D, 0x70, 0x02, 0xF8, 0x10, 0xA6, 0x3A, 0x12, 0x44, 0x45, 0x6C, 0x90
};
const struct IrCode code_na593Code = {
  freq_to_timerval(38000),
  33,             // # of pairs
  5,             // # of bits per index
  code_na593Times,
  code_na593Codes
};

const uint16_t code_na594Times[] = {
  175, 8475, 175, 5510, 175, 8505, 170, 5515, 180, 8470, 175, 5540, 175, 45585, 170, 8480, 180, 5505, 180, 5540
};
const uint8_t code_na594Codes[] = {
  0x01, 0x00, 0x23, 0x04, 0x05, 0x06, 0x78, 0x00, 0x21, 0x70, 0x09, 0x00
};
const struct IrCode code_na594Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na594Times,
  code_na594Codes
};

const uint16_t code_na595Times[] = {
  8045, 3975, 505, 515, 510, 1565, 510, 540, 480, 515, 460, 565, 455, 570, 460, 3995, 530, 545, 485, 1565, 515, 1560, 515, 510, 490, 535, 485, 515, 505, 24150, 8045, 3980, 480, 520, 465, 560, 480, 1565, 485, 535, 480, 540
};
const uint8_t code_na595Codes[] = {
  0x00, 0x44, 0x11, 0x90, 0x65, 0x31, 0xD0, 0x95, 0x09, 0x63, 0x63, 0x5C, 0xF5, 0x89, 0x63, 0x80, 0xCB, 0x13, 0xA2, 0x4A, 0x12, 0xC7, 0x3A, 0x00
};
const struct IrCode code_na595Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na595Times,
  code_na595Codes
};

const uint16_t code_na596Times[] = {
  560, 2940, 450, 10020, 480, 2990, 485, 10015, 445, 3025, 470, 3100, 485, 2985, 475, 2995, 500, 3000, 480, 3020, 480, 6465, 485, 36270, 475, 3025, 475, 3000, 450, 3020, 475, 3100, 480, 2995, 505, 2995, 485, 3015, 480, 6460
};
const uint8_t code_na596Codes[] = {
  0x00, 0x44, 0x32, 0x04, 0xA6, 0x3A, 0x0E, 0x71, 0x24, 0xEA, 0x5B, 0x02, 0xD1, 0xB8, 0x2F, 0x80, 0xA2, 0x71, 0x0A, 0x42, 0x98
};
const struct IrCode code_na596Code = {
  freq_to_timerval(38000),
  33,             // # of pairs
  5,             // # of bits per index
  code_na596Times,
  code_na596Codes
};

const uint16_t code_na597Times[] = {
  585, 2405, 475, 1060, 965, 545, 480, 545, 450, 575, 450, 545, 450, 22110, 590, 2405, 480, 1060, 965, 1030, 510, 520, 510, 550, 480, 485, 510, 65535, 645, 2410, 470, 1065, 960, 1065, 485, 515, 515, 515, 505, 495
};
const uint8_t code_na597Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0xCF, 0x84, 0x65, 0x30
};
const struct IrCode code_na597Code = {
  freq_to_timerval(38000),
  20,             // # of pairs
  5,             // # of bits per index
  code_na597Times,
  code_na597Codes
};

const uint16_t code_na598Times[] = {
  170, 7440, 170, 7445, 175, 7435, 175, 7460, 180, 4885, 175, 4915, 170, 7470, 170, 4920, 175, 4920, 175, 55175, 175, 7440, 175, 7465, 170, 4895, 170, 7465, 180, 4915
};
const uint8_t code_na598Codes[] = {
  0x00, 0x12, 0x34, 0x55, 0x67, 0x89, 0x22, 0xA0, 0xBC, 0x57, 0xD5, 0xE0
};
const struct IrCode code_na598Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na598Times,
  code_na598Codes
};

const uint16_t code_na599Times[] = {
  590, 2555, 500, 525, 475, 555, 455, 545, 445, 585, 445, 550, 445, 20045, 585, 2560, 505, 1035, 485, 515, 965, 520, 480, 1030, 515, 510, 475, 520, 505, 490, 505, 520, 475, 65535, 965, 550, 450, 1030, 510, 520
};
const uint8_t code_na599Codes[] = {
  0x00, 0x44, 0x31, 0x8C, 0x63, 0x21, 0x4C, 0x74, 0x25, 0x4B, 0x63, 0x5C, 0xF8, 0x1D, 0x09, 0x8C, 0x9E, 0xD7, 0x4C
};
const struct IrCode code_na599Code = {
  freq_to_timerval(38000),
  30,             // # of pairs
  5,             // # of bits per index
  code_na599Times,
  code_na599Codes
};

const uint16_t code_na600Times[] = {
  585, 2405, 475, 1065, 965, 580, 450, 550, 450, 545, 480, 515, 480, 575, 470, 555, 455, 575, 455, 515, 485, 545, 455, 14955, 510, 2485, 480, 1060, 480, 550, 960, 550, 445, 1065, 510, 545, 990, 1005, 535, 495, 515, 545, 485, 515, 475, 520, 505, 550, 445, 65535, 590, 2405, 475, 550, 965, 515, 485, 1060, 990, 1035, 510, 515, 480, 545, 505, 525
};
const uint8_t code_na600Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x84, 0x10, 0x71, 0x08, 0x24, 0xA2, 0x8B, 0x30, 0xD3, 0x8F, 0x40, 0x54, 0x45, 0x49, 0x35, 0x15, 0x59, 0x76, 0x19, 0x35, 0xA6, 0xDC, 0x38, 0xE1, 0x5D, 0x79, 0xF5, 0x60, 0x28
};
const struct IrCode code_na600Code = {
  freq_to_timerval(38000),
  45,             // # of pairs
  6,             // # of bits per index
  code_na600Times,
  code_na600Codes
};

const uint16_t code_na601Times[] = {
  8445, 4180, 535, 1565, 565, 1560, 540, 1560, 555, 1570, 540, 535, 535, 540, 515, 560, 510, 1565, 535, 510, 540, 1555, 560, 23120, 540, 1585, 535, 515, 515, 1585, 540, 23165, 560, 1565, 535, 1590, 515, 535, 565, 1565, 540, 510, 540, 1590
};
const uint8_t code_na601Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0xA6, 0x3A, 0x02, 0x24, 0x88, 0xA1, 0x52, 0xC4, 0x41, 0xB0, 0x65, 0x69, 0x98, 0x81, 0x14, 0x25, 0x70, 0x5F, 0x01, 0x06, 0x23, 0x31, 0x64, 0x10, 0xCC, 0xC3, 0xA5, 0x46
};
const struct IrCode code_na601Code = {
  freq_to_timerval(38000),
  51,             // # of pairs
  5,             // # of bits per index
  code_na601Times,
  code_na601Codes
};

const uint16_t code_na602Times[] = {
  525, 1925, 480, 2000, 475, 4545, 450, 4540, 470, 2040, 445, 2005, 470, 2010, 445, 4575, 445, 4545, 450, 4570, 450, 2000, 475, 2035, 440, 34900, 525, 1955, 440, 2005, 445, 4580, 470, 2035
};
const uint8_t code_na602Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0x42, 0x42, 0xDC, 0x17, 0xA0, 0xE5, 0x80
};
const struct IrCode code_na602Code = {
  freq_to_timerval(38000),
  25,             // # of pairs
  5,             // # of bits per index
  code_na602Times,
  code_na602Codes
};

const uint16_t code_na603Times[] = {
  535, 1355, 435, 3475, 425, 3485, 430, 3455, 435, 1455, 430, 1460, 405, 28170, 510, 1380, 425, 3460, 430, 1455, 425, 1460
};
const uint8_t code_na603Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x11, 0x89, 0xA0
};
const struct IrCode code_na603Code = {
  freq_to_timerval(38000),
  13,             // # of pairs
  4,             // # of bits per index
  code_na603Times,
  code_na603Codes
};

const uint16_t code_na604Times[] = {
  920, 835, 1715, 930, 790, 940, 795, 935, 795, 905, 820, 910, 820, 905, 815, 940, 795, 1715, 900, 855, 1715, 905, 815, 65535, 920, 805, 1740, 930, 790, 935, 795, 930, 905, 825, 1740, 905
};
const uint8_t code_na604Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0xC3, 0x13, 0x9E, 0xE4, 0x42, 0x20
};
const struct IrCode code_na604Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  5,             // # of bits per index
  code_na604Times,
  code_na604Codes
};

const uint16_t code_na605Times[] = {
  180, 7435, 175, 4915, 175, 7435, 175, 7465, 175, 4920, 170, 4920, 175, 55175, 175, 7440, 170, 7465, 180, 4915
};
const uint8_t code_na605Codes[] = {
  0x01, 0x02, 0x32, 0x11, 0x45, 0x56, 0x24, 0x27, 0x87, 0x54, 0x11, 0x90
};
const struct IrCode code_na605Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na605Times,
  code_na605Codes
};

const uint16_t code_na606Times[] = {
  170, 6730, 175, 6750, 170, 6755, 170, 4425, 175, 4445, 180, 6720, 180, 4445, 170, 4455, 170, 54705, 175, 6725, 175, 6745, 170, 4430, 175, 4450
};
const uint8_t code_na606Codes[] = {
  0x01, 0x01, 0x23, 0x45, 0x16, 0x78, 0x91, 0x91, 0xAB, 0xC9, 0x1C, 0x40
};
const struct IrCode code_na606Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na606Times,
  code_na606Codes
};

const uint16_t code_na607Times[] = {
  3505, 3495, 875, 830, 840, 2575, 845, 2570, 845, 860, 820, 2570, 840, 865, 815, 865, 840, 835, 815, 2575, 850, 855, 845, 835, 870, 2570, 840, 32655, 3510, 3490, 870, 835, 850, 860, 820, 855, 820, 2565, 845, 830, 840, 840, 845, 2575, 850, 830, 870, 2575
};
const uint8_t code_na607Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x2A, 0x06, 0x63, 0xA4, 0xC7, 0x4A, 0x92, 0x35, 0x8D, 0x63, 0x63, 0x5C, 0xF1, 0x88, 0xC9, 0x84, 0x53, 0x09, 0x4E, 0x12, 0x5C, 0x0A, 0xB1, 0x8E, 0x95, 0xB0, 0xAE
};
const struct IrCode code_na607Code = {
  freq_to_timerval(38000),
  51,             // # of pairs
  5,             // # of bits per index
  code_na607Times,
  code_na607Codes
};

const uint16_t code_na608Times[] = {
  560, 2940, 455, 10020, 475, 2995, 475, 10020, 450, 3020, 450, 10020, 475, 3095, 480, 6465, 485, 6460, 475, 6465, 500, 6470, 480, 2995, 480, 2990, 485, 36275, 565, 2935, 455, 10015, 480, 10020, 535, 2935, 480, 3095, 480, 6460, 475, 6495, 475, 3000, 485, 2985
};
const uint8_t code_na608Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0xCF, 0x5C, 0x22, 0xF9, 0x4D, 0x33, 0xA5, 0x6C
};
const struct IrCode code_na608Code = {
  freq_to_timerval(38000),
  27,             // # of pairs
  5,             // # of bits per index
  code_na608Times,
  code_na608Codes
};

const uint16_t code_na609Times[] = {
  10725, 41045
};
const uint8_t code_na609Codes[] = {
  0x00
};
const struct IrCode code_na609Code = {
  freq_to_timerval(38000),
  1,             // # of pairs
  1,             // # of bits per index
  code_na609Times,
  code_na609Codes
};

const uint16_t code_na610Times[] = {
  1615, 4605, 1560, 1535, 1560, 4660, 1535, 33420, 1565, 1530, 1555, 1540, 1535, 4685
};
const uint8_t code_na610Codes[] = {
  0x04, 0xA6, 0x25, 0xC0
};
const struct IrCode code_na610Code = {
  freq_to_timerval(38000),
  9,             // # of pairs
  3,             // # of bits per index
  code_na610Times,
  code_na610Codes
};

const uint16_t code_na611Times[] = {
  175, 4970, 175, 4910, 175, 4945, 170, 6990, 175, 6985, 175, 6950, 175, 14270, 175, 4940, 180, 6980, 170, 6985, 175, 6955
};
const uint8_t code_na611Codes[] = {
  0x01, 0x23, 0x45, 0x46, 0x01, 0x78, 0x9A, 0x80
};
const struct IrCode code_na611Code = {
  freq_to_timerval(38000),
  15,             // # of pairs
  4,             // # of bits per index
  code_na611Times,
  code_na611Codes
};

const uint16_t code_na612Times[] = {
  175, 7065, 175, 10545, 1055, 720, 1055, 740, 955, 820, 1050, 2565, 170, 3435, 170, 3430, 175, 3445, 175, 3430, 180, 3440, 175, 3425, 170, 39320, 2325, 4900, 180, 10545, 1055, 2565, 180, 3425
};
const uint8_t code_na612Codes[] = {
  0x00, 0x44, 0x31, 0x90, 0xA6, 0x3A, 0x0E, 0x83, 0xA5, 0x49, 0x5B, 0x1A, 0xE1, 0x0C, 0x64, 0x79, 0x8E, 0x83, 0xA0, 0xE9, 0x52, 0x60
};
const struct IrCode code_na612Code = {
  freq_to_timerval(38000),
  35,             // # of pairs
  5,             // # of bits per index
  code_na612Times,
  code_na612Codes
};

const uint16_t code_na613Times[] = {
  3505, 3490, 870, 840, 840, 2575, 850, 860, 820, 2565, 845, 830, 820, 860, 810, 2575, 845, 860, 845, 835, 820, 2570, 840, 865, 815, 2570, 850, 2565, 845, 2570, 875, 2570, 840, 34395, 3505, 3495, 875, 835, 815, 835, 815, 865, 840, 835, 845, 2575, 850, 855, 815, 2575, 840, 840, 870, 2575
};
const uint8_t code_na613Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x66, 0x3A, 0x08, 0x94, 0x29, 0x0A, 0x5B, 0x04, 0xD4, 0x29, 0x2E, 0x7C, 0x23, 0x27, 0x25, 0xCB, 0x9A, 0x14, 0x97, 0x2E, 0x8C, 0xAD, 0xAF, 0x86, 0xB9, 0x6C, 0xC8, 0xB4
};
const struct IrCode code_na613Code = {
  freq_to_timerval(38000),
  51,             // # of pairs
  5,             // # of bits per index
  code_na613Times,
  code_na613Codes
};

const uint16_t code_na614Times[] = {
  170, 8480, 170, 5515, 180, 8470, 175, 8475, 175, 8505, 175, 5515, 175, 5540, 175, 45585, 175, 5510, 175, 5545
};
const uint8_t code_na614Codes[] = {
  0x01, 0x23, 0x45, 0x03, 0x26, 0x37, 0x38, 0x33, 0x41, 0x23, 0x39, 0x00
};
const struct IrCode code_na614Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na614Times,
  code_na614Codes
};

const uint16_t code_na615Times[] = {
  180, 4970, 170, 6960, 175, 4945, 175, 6985, 175, 6955, 175, 6980, 170, 16310, 180, 4965, 175, 4940, 170, 6985
};
const uint8_t code_na615Codes[] = {
  0x01, 0x23, 0x43, 0x56, 0x74, 0x89, 0x51, 0x50
};
const struct IrCode code_na615Code = {
  freq_to_timerval(38000),
  15,             // # of pairs
  4,             // # of bits per index
  code_na615Times,
  code_na615Codes
};

const uint16_t code_na616Times[] = {
  585, 2410, 475, 550, 480, 550, 450, 1035, 995, 1065, 485, 510, 505, 65535, 995, 1035, 515, 545
};
const uint8_t code_na616Codes[] = {
  0x01, 0x23, 0x45, 0x60, 0x11, 0x37, 0x80
};
const struct IrCode code_na616Code = {
  freq_to_timerval(38000),
  13,             // # of pairs
  4,             // # of bits per index
  code_na616Times,
  code_na616Codes
};

const uint16_t code_na617Times[] = {
  1190, 1010, 6650, 26845, 1190, 1015
};
const uint8_t code_na617Codes[] = {
  0x18
};
const struct IrCode code_na617Code = {
  freq_to_timerval(38000),
  3,             // # of pairs
  2,             // # of bits per index
  code_na617Times,
  code_na617Codes
};

const uint16_t code_na618Times[] = {
  3135, 6105, 6265, 65535
};
const uint8_t code_na618Codes[] = {
  0x40
};
const struct IrCode code_na618Code = {
  freq_to_timerval(38000),
  3,             // # of pairs
  1,             // # of bits per index
  code_na618Times,
  code_na618Codes
};

const uint16_t code_na619Times[] = {
  590, 1510, 565, 1535, 565, 590, 530, 595, 515, 590, 540, 585, 535, 1565, 535, 570, 540, 1535, 565, 560, 570, 1530, 535, 1535, 560, 595, 535, 590, 540, 1505, 560, 1540, 570, 22150, 585, 1515, 540, 560, 540, 565, 540, 1555, 515, 1535, 535, 1540, 560, 570, 560, 590, 540, 1510
};
const uint8_t code_na619Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0xCF, 0x84, 0x42, 0x29, 0x4C, 0x54, 0x1D, 0x44, 0x8B, 0x5F, 0x19, 0x50
};
const struct IrCode code_na619Code = {
  freq_to_timerval(38000),
  33,             // # of pairs
  5,             // # of bits per index
  code_na619Times,
  code_na619Codes
};

const uint16_t code_na620Times[] = {
  925, 830, 1715, 905, 820, 935, 795, 930, 790, 940, 795, 935, 795, 1715, 1740, 930, 790, 910, 800, 930, 790, 65535, 930, 800, 1735, 935, 790, 935
};
const uint8_t code_na620Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x82, 0x9A, 0xBC, 0x3D, 0x34, 0x6C, 0x38, 0x20
};
const struct IrCode code_na620Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na620Times,
  code_na620Codes
};

const uint16_t code_na621Times[] = {
  690, 1460, 565, 1535, 565, 590, 530, 595, 515, 1535, 565, 565, 535, 620, 510, 1535, 560, 590, 540, 1535, 545, 1530, 565, 585, 535, 595, 535, 1510, 565, 22160, 590, 1510, 555, 600, 535, 1540, 560, 595, 535, 1535, 540, 1530, 545, 585
};
const uint8_t code_na621Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x26, 0x3A, 0x12, 0xA5, 0xB1, 0xA1, 0x73, 0xC2, 0x58, 0x1C, 0xA1, 0x64, 0x65, 0x3A, 0x2E, 0xAD, 0x08
};
const struct IrCode code_na621Code = {
  freq_to_timerval(38000),
  33,             // # of pairs
  5,             // # of bits per index
  code_na621Times,
  code_na621Codes
};

const uint16_t code_na622Times[] = {
  590, 2560, 500, 525, 480, 515, 485, 545, 450, 545, 455, 545, 475, 555, 445, 20045, 585, 2560, 505, 520, 480, 520, 480, 1005, 515, 485, 1025, 550, 450, 1000, 995, 1000, 505, 65535, 595, 2550, 480, 550, 445, 1005, 515, 515, 995, 550
};
const uint8_t code_na622Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xA5, 0x29, 0x8E, 0x84, 0xA9, 0x6C, 0x6B, 0x9F, 0x08, 0xA6, 0x53, 0xA5, 0x5C, 0xF0
};
const struct IrCode code_na622Code = {
  freq_to_timerval(38000),
  28,             // # of pairs
  5,             // # of bits per index
  code_na622Times,
  code_na622Codes
};

const uint16_t code_na623Times[] = {
  585, 2560, 505, 515, 480, 515, 480, 545, 450, 515, 450, 545, 475, 525, 485, 20040, 590, 2555, 505, 520, 475, 550, 445, 520, 475, 1005, 515, 515, 990, 1035, 485, 515, 485, 65535, 595, 2550, 480, 550, 450, 520, 480, 1005, 995, 1030, 475, 520
};
const uint8_t code_na623Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0xA5, 0x29, 0x8E, 0x84, 0xA9, 0x6C, 0x6B, 0x9E, 0xF8, 0x45, 0x32, 0x9D, 0x1B, 0x57, 0xD8
};
const struct IrCode code_na623Code = {
  freq_to_timerval(38000),
  30,             // # of pairs
  5,             // # of bits per index
  code_na623Times,
  code_na623Codes
};

const uint16_t code_na624Times[] = {
  4560, 4575, 560, 595, 565, 65535, 4555, 4580, 565, 590
};
const uint8_t code_na624Codes[] = {
  0x05, 0x38
};
const struct IrCode code_na624Code = {
  freq_to_timerval(38000),
  5,             // # of pairs
  3,             // # of bits per index
  code_na624Times,
  code_na624Codes
};

const uint16_t code_na625Times[] = {
  1040, 7200, 960, 4715, 980, 4715, 960, 7255, 955, 4740, 955, 16075, 1040, 7205, 955, 4715
};
const uint8_t code_na625Codes[] = {
  0x05, 0x39, 0x77, 0x4E, 0x00
};
const struct IrCode code_na625Code = {
  freq_to_timerval(38000),
  11,             // # of pairs
  3,             // # of bits per index
  code_na625Times,
  code_na625Codes
};

const uint16_t code_na626Times[] = {
  505, 2640, 510, 515, 480, 515, 480, 545, 450, 545, 455, 545, 455, 575, 445, 555, 445, 20050, 590, 2555, 500, 1035, 960, 1035, 515, 515, 485, 515, 485, 65535, 595, 2550, 505, 1035, 505, 525, 965, 1030, 505, 520, 475, 490
};
const uint8_t code_na626Codes[] = {
  0x00, 0x44, 0x32, 0x10, 0xA5, 0x31, 0xD0, 0x95, 0x08, 0x41, 0x12, 0xD8, 0xD7, 0x3E, 0x0D, 0x6C, 0x5B, 0x29, 0xD0
};
const struct IrCode code_na626Code = {
  freq_to_timerval(38000),
  30,             // # of pairs
  5,             // # of bits per index
  code_na626Times,
  code_na626Codes
};

const uint16_t code_na627Times[] = {
  170, 7440, 170, 4925, 175, 7435, 195, 7445, 175, 4920, 175, 4915, 170, 55185, 175, 7440, 170, 7465, 175, 4890, 170, 4920, 175, 7465
};
const uint8_t code_na627Codes[] = {
  0x01, 0x23, 0x04, 0x05, 0x03, 0x06, 0x24, 0x27, 0x89, 0x0A, 0x00, 0xB0
};
const struct IrCode code_na627Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na627Times,
  code_na627Codes
};

const uint16_t code_na628Times[] = {
  180, 4965, 170, 4915, 180, 6980, 170, 4945, 170, 4950, 175, 4910, 175, 4940, 180, 16305, 175, 4970, 175, 6980, 170, 4920, 175, 4945
};
const uint8_t code_na628Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x85, 0x96, 0x3A, 0xB0
};
const struct IrCode code_na628Code = {
  freq_to_timerval(38000),
  15,             // # of pairs
  4,             // # of bits per index
  code_na628Times,
  code_na628Codes
};

const uint16_t code_na629Times[] = {
  1040, 795, 900, 885, 870, 860, 925, 885, 880, 875, 875, 880, 875, 855, 930, 1715, 900, 855, 1795, 880, 895, 885, 875, 1715, 900, 65535, 985, 800, 905, 880, 900, 850, 895, 855, 905, 875, 895, 1720, 905, 850, 1790, 885
};
const uint8_t code_na629Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0xC5, 0x7A, 0x21, 0x19, 0x4E, 0x88, 0x90
};
const struct IrCode code_na629Code = {
  freq_to_timerval(38000),
  25,             // # of pairs
  5,             // # of bits per index
  code_na629Times,
  code_na629Codes
};

const uint16_t code_na630Times[] = {
  170, 8480, 180, 8470, 175, 8475, 175, 5515, 175, 8505, 180, 5510, 175, 45560, 170, 5515, 175, 5510, 170, 8510
};
const uint8_t code_na630Codes[] = {
  0x00, 0x12, 0x23, 0x22, 0x45, 0x46, 0x22, 0x20, 0x07, 0x22, 0x48, 0x90
};
const struct IrCode code_na630Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na630Times,
  code_na630Codes
};

const uint16_t code_na631Times[] = {
  630, 2575, 500, 530, 480, 545, 455, 545, 475, 555, 445, 20045, 595, 2555, 505, 520, 475, 550, 445, 1005, 515, 515, 990, 520, 480, 1005, 485, 545, 455, 65535, 585, 2560, 480, 520, 480, 1000, 995, 550, 450, 1000, 475, 520
};
const uint8_t code_na631Codes[] = {
  0x00, 0x44, 0x31, 0x8C, 0x63, 0x19, 0x0A, 0x63, 0xA1, 0x2A, 0x5B, 0x14, 0xD7, 0x3C, 0xF0, 0x8A, 0xA5, 0x33, 0xD0
};
const struct IrCode code_na631Code = {
  freq_to_timerval(38000),
  30,             // # of pairs
  5,             // # of bits per index
  code_na631Times,
  code_na631Codes
};

const uint16_t code_na632Times[] = {
  8985, 4505, 570, 585, 535, 595, 535, 590, 510, 565, 565, 590, 540, 565, 565, 585, 515, 1690, 560, 1670, 560, 1700, 510, 590, 540, 590, 540, 1665, 565, 1690, 560, 595, 505, 1700, 565, 1695, 565, 1665, 535, 570, 560, 590, 510, 595, 535, 1695, 540, 1695, 515, 585, 535, 565, 565, 39550, 8995, 4495, 540, 560, 510, 1695, 505, 595, 535, 1670, 560, 1695, 540, 585, 555, 570, 570, 560
};
const uint8_t code_na632Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x87, 0x20, 0x92, 0x85, 0x2C, 0xC3, 0x4E, 0x3D, 0x02, 0x51, 0x48, 0x14, 0xD4, 0x55, 0x60, 0xD7, 0x3C, 0x83, 0xD8, 0x65, 0xA6, 0xC5, 0x70, 0xF6, 0x02, 0x0C, 0xC7, 0x52, 0x38, 0xF7, 0x99, 0x49, 0x13, 0xDF, 0x26, 0x04, 0x85, 0x84, 0x26, 0x16, 0x4E, 0x08, 0x97, 0x8C, 0xC8, 0x40
};
const struct IrCode code_na632Code = {
  freq_to_timerval(38000),
  67,             // # of pairs
  6,             // # of bits per index
  code_na632Times,
  code_na632Codes
};

const uint16_t code_na633Times[] = {
  8985, 4505, 570, 560, 560, 595, 535, 565, 565, 590, 540, 590, 530, 595, 515, 1690, 560, 570, 560, 590, 510, 1695, 510, 565, 565, 1690, 560, 1670, 560, 565, 565, 565, 565, 1665, 540, 585, 535, 1670, 535, 595, 535, 590, 540, 1690, 510, 40680, 570, 585, 510, 590, 540, 1665, 565, 585, 545, 585
};
const uint8_t code_na633Codes[] = {
  0x00, 0x44, 0x31, 0x90, 0xA6, 0x3A, 0x12, 0xA2, 0x2D, 0x8D, 0x43, 0x5C, 0xF8, 0x12, 0x32, 0x73, 0xE7, 0x4A, 0x96, 0x33, 0xA5, 0x81, 0x79, 0xD1, 0x64, 0x29, 0x8E, 0x2A, 0x28, 0x98, 0xAB, 0x45, 0x24, 0x97, 0x3A, 0xDC, 0x84, 0x39, 0xD2, 0xA5, 0x8C, 0xE8
};
const struct IrCode code_na633Code = {
  freq_to_timerval(38000),
  67,             // # of pairs
  5,             // # of bits per index
  code_na633Times,
  code_na633Codes
};

const uint16_t code_na634Times[] = {
  300, 1830, 270, 805, 245, 1830, 280, 1820, 280, 795, 250, 770, 275, 1825, 275, 800, 250, 1825, 245, 775, 250, 48930, 390, 1735, 255, 1820, 275, 1820, 250, 775, 275, 775, 275, 1800, 295, 1830, 270, 1830, 275, 42815, 300, 1825, 270, 1825, 245, 805, 245, 780, 255, 48925, 380, 1745, 355, 695, 275, 795, 250, 745, 305, 1825
};
const uint8_t code_na634Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x66, 0x3A, 0x0E, 0x92, 0x8C, 0xEA, 0x59, 0x18, 0xD3, 0xA0, 0xEE, 0x33, 0xE1, 0x19, 0x11, 0x93, 0xA1, 0xD1, 0x50, 0xD8, 0x43, 0x3A, 0x0E, 0xEB, 0x8C, 0x98, 0xCE, 0xA5, 0x22, 0x33, 0x7C, 0xEB, 0xE1, 0x4A, 0x84, 0x40
};
const struct IrCode code_na634Code = {
  freq_to_timerval(38000),
  63,             // # of pairs
  5,             // # of bits per index
  code_na634Times,
  code_na634Codes
};

const uint16_t code_na635Times[] = {
  175, 5510, 175, 5540, 175, 8475, 175, 8480, 170, 5545, 170, 8480, 175, 45575, 170, 5515, 175, 5545, 180, 8470
};
const uint8_t code_na635Codes[] = {
  0x01, 0x21, 0x34, 0x55, 0x21, 0x26, 0x71, 0x21, 0x28, 0x55, 0x91, 0x20
};
const struct IrCode code_na635Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na635Times,
  code_na635Codes
};

const uint16_t code_na636Times[] = {
  175, 8475, 170, 8480, 180, 5540, 175, 5510, 175, 5540, 175, 5545, 170, 5545, 170, 45575, 175, 8470, 180, 5505
};
const uint8_t code_na636Codes[] = {
  0x00, 0x01, 0x11, 0x23, 0x45, 0x67, 0x80, 0x00, 0x11, 0x94, 0x44, 0x50
};
const struct IrCode code_na636Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na636Times,
  code_na636Codes
};

const uint16_t code_na637Times[] = {
  8050, 3970, 510, 1560, 515, 1560, 510, 540, 490, 1555, 510, 1565, 515, 535, 485, 540, 490, 535, 485, 3985, 530, 1570, 510, 515, 480, 540, 490, 24150, 8040, 3980, 515, 510, 490, 3980, 535, 1565, 515, 1555
};
const uint8_t code_na637Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0x51, 0x14, 0x4B, 0x33, 0x1A, 0xE1, 0x15, 0xE5, 0x12, 0xCC, 0xC8, 0x44, 0x32, 0x28, 0x86, 0x83, 0x80
};
const struct IrCode code_na637Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na637Times,
  code_na637Codes
};

const uint16_t code_na638Times[] = {
  175, 8475, 175, 5510, 175, 8505, 180, 5510, 170, 5545, 170, 8480, 170, 45585, 170, 5515, 180, 8470, 175, 5540, 175, 8480
};
const uint8_t code_na638Codes[] = {
  0x01, 0x00, 0x23, 0x00, 0x04, 0x56, 0x01, 0x00, 0x27, 0x80, 0x09, 0xA0
};
const struct IrCode code_na638Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na638Times,
  code_na638Codes
};

const uint16_t code_na639Times[] = {
  175, 7435, 175, 7440, 170, 7440, 175, 7465, 170, 4920, 175, 4915, 175, 55175, 190, 7445, 180, 4915, 170, 4945
};
const uint8_t code_na639Codes[] = {
  0x01, 0x22, 0x32, 0x44, 0x55, 0x56, 0x01, 0x71, 0x00, 0x55, 0x85, 0x90
};
const struct IrCode code_na639Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na639Times,
  code_na639Codes
};

const uint16_t code_na640Times[] = {
  175, 7435, 175, 4915, 190, 7450, 175, 4920, 180, 55170, 170, 7440, 175, 7440, 175, 7460, 180, 4915, 170, 4920
};
const uint8_t code_na640Codes[] = {
  0x01, 0x00, 0x20, 0x03, 0x03, 0x14, 0x03, 0x56, 0x75, 0x61, 0x08, 0x90
};
const struct IrCode code_na640Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na640Times,
  code_na640Codes
};

const uint16_t code_na641Times[] = {
  8050, 3975, 510, 1565, 515, 510, 515, 535, 485, 1565, 485, 540, 490, 535, 485, 3980, 535, 1565, 510, 535, 480, 1565, 510, 510, 505, 1565, 480, 540, 485, 510, 505, 24150, 8045, 3975, 515, 1560, 515, 1555, 515, 505, 505, 3985, 540, 1560, 510, 515, 510, 540, 490, 1560, 480, 515
};
const uint8_t code_na641Codes[] = {
  0x00, 0x44, 0x11, 0x90, 0x65, 0x31, 0xD0, 0x95, 0x2D, 0x89, 0x6B, 0x9F, 0x08, 0xAE, 0x4B, 0x8A, 0xE6, 0xBA, 0x56, 0xD1, 0xBE, 0x2E, 0x6C, 0x80
};
const struct IrCode code_na641Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na641Times,
  code_na641Codes
};

const uint16_t code_na642Times[] = {
  365, 200, 865, 525, 170, 65535, 345, 225, 865, 530
};
const uint8_t code_na642Codes[] = {
  0x05, 0x38
};
const struct IrCode code_na642Code = {
  freq_to_timerval(38000),
  5,             // # of pairs
  3,             // # of bits per index
  code_na642Times,
  code_na642Codes
};

const uint16_t code_na643Times[] = {
  175, 5990, 175, 1370, 175, 1320, 175, 1345, 170, 1350, 180, 1370, 180, 1315, 175, 4445, 180, 1345, 175, 5965, 175, 65535, 170, 5995, 175, 1350, 170, 1380, 170, 1325, 170, 4445, 170, 1355, 175, 5960
};
const uint8_t code_na643Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x19, 0x06, 0x44, 0x25, 0x4B, 0x43, 0x06, 0x36, 0xB9, 0xE8, 0x64, 0x06, 0x48, 0x80
};
const struct IrCode code_na643Code = {
  freq_to_timerval(38000),
  29,             // # of pairs
  5,             // # of bits per index
  code_na643Times,
  code_na643Codes
};

const uint16_t code_na644Times[] = {
  495, 1480, 490, 510, 465, 1480, 495, 530, 445, 1475, 500, 500, 465, 535, 445, 530, 470, 505, 470, 530, 440, 12855, 490, 1485, 470, 1480, 450, 1475, 470, 480
};
const uint8_t code_na644Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0x1C, 0x3D, 0x19, 0x7E, 0x50
};
const struct IrCode code_na644Code = {
  freq_to_timerval(38000),
  21,             // # of pairs
  4,             // # of bits per index
  code_na644Times,
  code_na644Codes
};

const uint16_t code_na645Times[] = {
  980, 6315, 960, 2660, 905, 2720, 930, 2720, 905, 6365, 900, 2720, 910, 6360, 905, 6370, 905, 2740, 905, 46365, 990, 6305, 905, 2715, 910, 2710, 925, 2725, 900, 6370, 905, 2745
};
const uint8_t code_na645Codes[] = {
  0x01, 0x23, 0x45, 0x46, 0x78, 0x9A, 0xBC, 0xD4, 0xBE, 0x46, 0xF0
};
const struct IrCode code_na645Code = {
  freq_to_timerval(38000),
  21,             // # of pairs
  4,             // # of bits per index
  code_na645Times,
  code_na645Codes
};

const uint16_t code_na646Times[] = {
  600, 255, 975, 315, 175, 65535, 310, 230, 975, 320
};
const uint8_t code_na646Codes[] = {
  0x05, 0x38
};
const struct IrCode code_na646Code = {
  freq_to_timerval(38000),
  5,             // # of pairs
  3,             // # of bits per index
  code_na646Times,
  code_na646Codes
};

const uint16_t code_na647Times[] = {
  175, 4970, 170, 6960, 175, 6985, 175, 6980, 180, 6980, 170, 16310, 180, 4965, 175, 6955, 170, 6990
};
const uint8_t code_na647Codes[] = {
  0x01, 0x23, 0x14, 0x35, 0x67, 0x38, 0x72, 0x20
};
const struct IrCode code_na647Code = {
  freq_to_timerval(38000),
  15,             // # of pairs
  4,             // # of bits per index
  code_na647Times,
  code_na647Codes
};

const uint16_t code_na648Times[] = {
  180, 5990, 175, 1350, 175, 4445, 175, 1345, 170, 1350, 175, 4415, 180, 1345, 170, 1355, 175, 9050, 175, 65535, 175, 5995, 175, 4420, 170, 9055
};
const uint8_t code_na648Codes[] = {
  0x01, 0x11, 0x23, 0x45, 0x61, 0x73, 0x48, 0x9A, 0x11, 0x32, 0x43, 0xB1, 0x43, 0x43, 0xC0
};
const struct IrCode code_na648Code = {
  freq_to_timerval(38000),
  29,             // # of pairs
  4,             // # of bits per index
  code_na648Times,
  code_na648Codes
};

const uint16_t code_na649Times[] = {
  175, 4970, 175, 4910, 175, 6985, 175, 4940, 180, 6950, 175, 14270, 175, 6980, 175, 6955, 180, 6980
};
const uint8_t code_na649Codes[] = {
  0x01, 0x23, 0x24, 0x25, 0x01, 0x63, 0x27, 0x80
};
const struct IrCode code_na649Code = {
  freq_to_timerval(38000),
  15,             // # of pairs
  4,             // # of bits per index
  code_na649Times,
  code_na649Codes
};

const uint16_t code_na650Times[] = {
  1320, 225, 175, 65535, 1610, 230
};
const uint8_t code_na650Codes[] = {
  0x18
};
const struct IrCode code_na650Code = {
  freq_to_timerval(38000),
  3,             // # of pairs
  2,             // # of bits per index
  code_na650Times,
  code_na650Codes
};

const uint16_t code_na651Times[] = {
  585, 2410, 475, 1065, 960, 580, 445, 520, 480, 580, 450, 550, 450, 580, 450, 520, 480, 550, 480, 515, 480, 575, 450, 515, 450, 545, 455, 14955, 510, 2485, 480, 1060, 970, 545, 445, 1035, 510, 545, 480, 545, 485, 545, 485, 515, 965, 1065, 445, 65535, 625, 2425, 555, 955, 515, 510, 995, 545, 450, 1030, 505, 520, 510, 550, 475, 520, 480, 490, 970, 1055
};
const uint8_t code_na651Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x87, 0x20, 0x92, 0x4A, 0x2C, 0xA3, 0x0D, 0x38, 0xF2, 0x10, 0x45, 0x24, 0xC9, 0x4D, 0x45, 0x54, 0x59, 0x45, 0xD8, 0x65, 0xA6, 0xDC, 0x75, 0xE7, 0xC8, 0x22, 0x07, 0xA1, 0x24
};
const struct IrCode code_na651Code = {
  freq_to_timerval(38000),
  45,             // # of pairs
  6,             // # of bits per index
  code_na651Times,
  code_na651Codes
};

const uint16_t code_na652Times[] = {
  205, 270, 1215, 300, 170, 65535, 1425, 275
};
const uint8_t code_na652Codes[] = {
  0x1B
};
const struct IrCode code_na652Code = {
  freq_to_timerval(38000),
  4,             // # of pairs
  2,             // # of bits per index
  code_na652Times,
  code_na652Codes
};

const uint16_t code_na653Times[] = {
  175, 7435, 175, 7440, 190, 7445, 180, 7435, 175, 4915, 180, 4915, 195, 7440, 175, 55130, 285, 7375, 170, 7465, 175, 7410, 170, 4920, 175, 4920
};
const uint8_t code_na653Codes[] = {
  0x01, 0x20, 0x30, 0x44, 0x54, 0x67, 0x80, 0x01, 0x9A, 0x5B, 0xBC, 0x00
};
const struct IrCode code_na653Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na653Times,
  code_na653Codes
};

const uint16_t code_na654Times[] = {
  175, 7435, 175, 4920, 170, 7440, 180, 7460, 180, 7435, 175, 4915, 180, 4915, 170, 4920, 175, 55125, 290, 7370, 175, 7465
};
const uint8_t code_na654Codes[] = {
  0x01, 0x20, 0x32, 0x45, 0x67, 0x78, 0x97, 0x22, 0xA2, 0x26, 0x77, 0x10
};
const struct IrCode code_na654Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na654Times,
  code_na654Codes
};

const uint16_t code_na655Times[] = {
  170, 8475, 170, 8480, 170, 5515, 180, 8500, 180, 5510, 175, 8475, 175, 8480, 170, 5545, 170, 45590, 175, 5515, 175, 8505, 180, 8470, 175, 5540
};
const uint8_t code_na655Codes[] = {
  0x01, 0x12, 0x34, 0x55, 0x67, 0x18, 0x55, 0x59, 0xA2, 0x5B, 0x5C, 0x50
};
const struct IrCode code_na655Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na655Times,
  code_na655Codes
};

const uint16_t code_na656Times[] = {
  175, 7435, 175, 4920, 175, 7460, 180, 4885, 175, 4915, 170, 4920, 175, 55185, 180, 4915
};
const uint8_t code_na656Codes[] = {
  0x04, 0x14, 0xE4, 0x96, 0xE0, 0x41, 0x5E, 0x53, 0x20
};
const struct IrCode code_na656Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  3,             // # of bits per index
  code_na656Times,
  code_na656Codes
};

const uint16_t code_na657Times[] = {
  510, 2485, 480, 1060, 965, 545, 485, 545, 455, 575, 455, 545, 445, 555, 445, 520, 505, 550, 445, 550, 475, 550, 445, 580, 480, 550, 480, 15910, 625, 2425, 475, 1060, 475, 520, 995, 545, 450, 1060, 510, 550, 480, 520, 1000, 1060, 960, 1035, 990, 580, 445, 1035, 485, 65535, 590, 2405, 970, 545, 455, 1025, 480, 515, 510, 485, 510, 545, 960, 1065, 995, 580, 450, 1030
};
const uint8_t code_na657Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x06, 0x1C, 0x82, 0x49, 0x28, 0xB1, 0xCC, 0x34, 0xE3, 0xD0, 0x45, 0x24, 0x13, 0x51, 0x45, 0x56, 0x5D, 0x86, 0x5A, 0x04, 0xC6, 0xDC, 0x4D, 0xD7, 0x9F, 0x81, 0x68, 0x62
};
const struct IrCode code_na657Code = {
  freq_to_timerval(38000),
  44,             // # of pairs
  6,             // # of bits per index
  code_na657Times,
  code_na657Codes
};

const uint16_t code_na658Times[] = {
  175, 8475, 170, 8480, 170, 5515, 180, 8475, 180, 8500, 175, 5515, 175, 8505, 170, 45560, 180, 8470, 175, 8480, 175, 5510, 170, 8510, 170, 65535, 180, 65535, 175, 7435, 175, 4920, 175, 7440, 170, 7465, 170, 7440, 170, 4920, 175, 55165, 195, 7445, 175, 4915, 195, 7440
};
const uint8_t code_na658Codes[] = {
  0x00, 0x00, 0x10, 0x88, 0x60, 0x21, 0x4C, 0x74, 0x00, 0x00, 0x48, 0x80, 0x33, 0x29, 0x6C, 0x6B, 0x9E, 0xE8, 0x46, 0x12, 0x7C, 0xE5, 0x1A, 0x4A, 0x72, 0xAC, 0xA5, 0x0B, 0x3E, 0xF0
};
const struct IrCode code_na658Code = {
  freq_to_timerval(38000),
  48,             // # of pairs
  5,             // # of bits per index
  code_na658Times,
  code_na658Codes
};

const uint16_t code_na659Times[] = {
  295, 1805, 275, 775, 240, 1810, 270, 755, 245, 1805, 270, 775, 240, 760, 265, 760, 270, 14150, 295, 1800, 265, 785, 245, 780, 250, 750
};
const uint8_t code_na659Codes[] = {
  0x01, 0x23, 0x45, 0x63, 0x73, 0x89, 0xA4, 0x74, 0xAB, 0xC7, 0x30
};
const struct IrCode code_na659Code = {
  freq_to_timerval(38000),
  21,             // # of pairs
  4,             // # of bits per index
  code_na659Times,
  code_na659Codes
};

const uint16_t code_na660Times[] = {
  535, 1725, 570, 585, 565, 615, 535, 620, 540, 585, 535, 1720, 540, 615, 560, 620, 540, 590, 565, 620, 545, 1715, 535, 615, 545, 610, 560, 595, 565, 1715, 570, 1715, 555, 1700, 645, 1640
};
const uint8_t code_na660Codes[] = {
  0x00, 0x44, 0x32, 0x08, 0xA6, 0x29, 0xC8, 0x21, 0xA1, 0x2A, 0x58, 0xCC, 0x36, 0x18, 0xAD, 0x70, 0x1F, 0x08, 0xC4
};
const struct IrCode code_na660Code = {
  freq_to_timerval(38000),
  30,             // # of pairs
  5,             // # of bits per index
  code_na660Times,
  code_na660Codes
};

const uint16_t code_na661Times[] = {
  500, 2520, 505, 520, 995, 545, 455, 575, 455, 545, 455, 22095, 590, 2435, 510, 515, 995, 1060, 475, 550, 475, 520, 475, 65535, 630, 2455, 990, 1065, 485, 515, 505, 495, 515, 545
};
const uint8_t code_na661Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0xA6, 0x3A, 0x12, 0xA4, 0xAD, 0x87, 0x6B, 0x9F, 0x00
};
const struct IrCode code_na661Code = {
  freq_to_timerval(38000),
  20,             // # of pairs
  5,             // # of bits per index
  code_na661Times,
  code_na661Codes
};

const uint16_t code_na662Times[] = {
  590, 2405, 480, 1060, 965, 1030, 510, 520, 510, 550, 480, 520, 480, 65535, 585, 2410, 555, 955, 990, 1035, 515, 545, 485, 545, 475, 520
};
const uint8_t code_na662Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xC0
};
const struct IrCode code_na662Code = {
  freq_to_timerval(38000),
  13,             // # of pairs
  4,             // # of bits per index
  code_na662Times,
  code_na662Codes
};

const uint16_t code_na663Times[] = {
  585, 2560, 505, 520, 480, 550, 450, 550, 450, 515, 480, 515, 480, 545, 450, 545, 480, 20040, 590, 2555, 500, 1040, 480, 520, 970, 545, 455, 545, 475, 1005, 510, 515, 510, 485, 480, 65535, 505, 1035, 485, 515, 965, 550, 480, 1000, 475, 520
};
const uint8_t code_na663Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xA6, 0x39, 0x50, 0x95, 0x2D, 0x8D, 0x73, 0xCB, 0x08, 0x82, 0x53, 0xA0, 0xEA, 0x1B, 0x04
};
const struct IrCode code_na663Code = {
  freq_to_timerval(38000),
  30,             // # of pairs
  5,             // # of bits per index
  code_na663Times,
  code_na663Codes
};

const uint16_t code_na664Times[] = {
  915, 205, 175, 185, 170, 21560, 170, 2280, 175, 2275, 500, 1930, 170, 5180, 170, 2260, 175, 3725, 170, 3710, 170, 2275, 180, 3720, 170, 17225, 175, 7620, 175, 2255, 175, 5170, 170, 3730, 180, 2255, 175, 3705, 180, 2270, 175, 17250, 170, 7625, 175, 2270, 170, 2265, 180, 5170, 170, 3725, 175, 3720
};
const uint8_t code_na664Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x86, 0x3A, 0x0A, 0x32, 0x25, 0x4B, 0x63, 0x48, 0x37, 0x0D, 0xEE, 0x81, 0x22, 0x39, 0x4D, 0x14, 0xAD, 0x89, 0x75, 0x60, 0xF9, 0x70, 0xC8, 0x91, 0xE8
};
const struct IrCode code_na664Code = {
  freq_to_timerval(38000),
  46,             // # of pairs
  5,             // # of bits per index
  code_na664Times,
  code_na664Codes
};

const uint16_t code_na665Times[] = {
  565, 235, 655, 315, 170, 65535, 750, 235, 235, 105, 230, 400
};
const uint8_t code_na665Codes[] = {
  0x05, 0x39, 0x40
};
const struct IrCode code_na665Code = {
  freq_to_timerval(38000),
  6,             // # of pairs
  3,             // # of bits per index
  code_na665Times,
  code_na665Codes
};

const uint16_t code_na666Times[] = {
  585, 2440, 505, 550, 970, 1025, 510, 515, 480, 545, 480, 21585, 505, 520, 995, 1060, 480, 550, 480, 520, 480, 65535, 595, 2430, 500, 520, 475, 520
};
const uint8_t code_na666Codes[] = {
  0x01, 0x23, 0x34, 0x50, 0x67, 0x89, 0x8A, 0xBC, 0x7D, 0x68
};
const struct IrCode code_na666Code = {
  freq_to_timerval(38000),
  20,             // # of pairs
  4,             // # of bits per index
  code_na666Times,
  code_na666Codes
};

const uint16_t code_na667Times[] = {
  560, 8030, 475, 8115, 505, 8115, 480, 8110, 480, 8140, 475, 5240, 485, 8105, 480, 5235, 510, 8110, 475, 45290, 555, 8035, 475, 8145, 475, 5245, 480, 8105
};
const uint8_t code_na667Codes[] = {
  0x01, 0x23, 0x45, 0x12, 0x67, 0x89, 0xA3, 0x83, 0xBC, 0xD8, 0x35, 0x20
};
const struct IrCode code_na667Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na667Times,
  code_na667Codes
};

const uint16_t code_na668Times[] = {
  175, 7440, 170, 4920, 175, 7465, 175, 4890, 175, 4920, 175, 4915, 180, 55180, 170, 7440, 170, 4925, 175, 7435, 180, 4915, 170, 4895
};
const uint8_t code_na668Codes[] = {
  0x01, 0x01, 0x23, 0x01, 0x45, 0x56, 0x78, 0x9A, 0x2B, 0x74, 0x11, 0x40
};
const struct IrCode code_na668Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na668Times,
  code_na668Codes
};

const uint16_t code_na669Times[] = {
  225, 745, 220, 775, 195, 780, 200, 795, 175, 770, 195, 775, 200, 770, 200, 250, 220, 250, 195, 250, 220, 255, 225, 245, 220, 225, 225, 250, 215, 230, 220, 275, 175, 245, 220, 280, 190, 230, 230, 245, 215, 255, 195, 800, 190, 255, 200, 270, 195, 37715, 220, 750, 220, 780, 170, 770, 215, 780, 195, 280, 200, 275, 195, 750, 225, 275, 180, 240, 200, 245, 195, 255, 225, 270, 195, 225, 195, 805, 175, 295
};
const uint8_t code_na669Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x85, 0x00, 0x11, 0x87, 0x20, 0x92, 0x80, 0x20, 0x72, 0x0B, 0x30, 0xD2, 0x0E, 0x28, 0xB3, 0xD0, 0x45, 0x24, 0xCD, 0x20, 0x92, 0x94, 0x19, 0x55, 0x97, 0x61, 0x96, 0x86, 0x55, 0xB1, 0x85, 0x15, 0x97, 0x05, 0x25, 0x47, 0x5E, 0x7C, 0xA2, 0x4B, 0x82, 0x13, 0xE2, 0x8C, 0xB2, 0x0A, 0x26, 0x49, 0x4D, 0x21, 0x48, 0xCB, 0x20, 0x59, 0xA7, 0x40
};
const struct IrCode code_na669Code = {
  freq_to_timerval(38000),
  81,             // # of pairs
  6,             // # of bits per index
  code_na669Times,
  code_na669Codes
};

const uint16_t code_na670Times[] = {
  3505, 2655, 195, 640, 875, 2570, 845, 835, 850, 860, 820, 830, 840, 2575, 845, 2570, 825, 855, 815, 865, 815, 2570, 850, 2570, 840, 835, 845, 865, 820, 835, 845, 860, 820, 2570, 870, 2570, 840, 32650, 3505, 3495, 875, 2565, 810, 840, 850, 830, 840, 865, 815, 840, 815, 835
};
const uint8_t code_na670Codes[] = {
  0x00, 0x44, 0x31, 0x90, 0xA6, 0x39, 0xCC, 0x44, 0x25, 0x2A, 0x32, 0xCE, 0xC6, 0xB9, 0xF0, 0x3C, 0x65, 0x3A, 0x3C, 0xA4, 0xA9, 0x8E, 0x73, 0x5A, 0xF8, 0xBA, 0x8C, 0xB3, 0xDD, 0x39, 0x7C, 0x0F, 0x10
};
const struct IrCode code_na670Code = {
  freq_to_timerval(38000),
  52,             // # of pairs
  5,             // # of bits per index
  code_na670Times,
  code_na670Codes
};

const uint16_t code_na671Times[] = {
  345, 675, 220, 250, 195, 275, 200, 740, 225, 800, 175, 770, 190, 780, 200, 770, 195, 775, 225, 750, 220, 775, 195, 250, 220, 255, 225, 270, 195, 745, 215, 230, 225, 275, 175, 245, 230, 245, 225, 250, 220, 280, 200, 245, 225, 245, 200, 795, 175, 795, 200, 250, 220, 37665, 345, 680, 225, 220, 225, 770, 195, 800, 200, 745, 220, 750, 215, 755, 225, 775, 200, 800, 200, 270, 200, 275, 195, 255, 225, 745
};
const uint8_t code_na671Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x87, 0x20, 0x92, 0x87, 0x2C, 0xC2, 0xCD, 0x38, 0x13, 0xCC, 0x40, 0x24, 0x4C, 0x3D, 0x24, 0xC1, 0x2D, 0x45, 0x55, 0x4C, 0xC2, 0xD6, 0x4D, 0x76, 0x19, 0x55, 0xA6, 0xD2, 0x71, 0xD7, 0x9F, 0x82, 0x18, 0x88, 0x1E, 0x34, 0x56, 0x4D, 0x58, 0x14, 0x55, 0x54, 0xCC, 0x2D, 0x64, 0xE4, 0x2C, 0xC2, 0xD6, 0x4E, 0x52, 0xD6, 0x99, 0x02, 0xE1, 0x9C, 0x10, 0x80
};
const struct IrCode code_na671Code = {
  freq_to_timerval(38000),
  83,             // # of pairs
  6,             // # of bits per index
  code_na671Times,
  code_na671Codes
};

const uint16_t code_na672Times[] = {
  175, 7435, 175, 7440, 180, 7435, 175, 7460, 170, 7440, 180, 4915, 175, 4915, 170, 4920, 175, 7465, 175, 55165, 170, 7415
};
const uint8_t code_na672Codes[] = {
  0x01, 0x02, 0x34, 0x56, 0x77, 0x89, 0x00, 0x14, 0x8A, 0x65, 0x67, 0x10
};
const struct IrCode code_na672Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na672Times,
  code_na672Codes
};

const uint16_t code_na673Times[] = {
  8040, 3980, 515, 510, 510, 540, 485, 1560, 510, 515, 515, 1560, 475, 3980, 530, 1570, 510, 1565, 515, 535, 485, 540, 490, 24150, 480, 540, 490, 1560, 485, 535, 535, 1565, 510, 1560, 505, 1565, 515, 1555, 490, 535
};
const uint8_t code_na673Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x81, 0x11, 0x8E, 0x82, 0xA0, 0xA4, 0x4A, 0x96, 0x04, 0xB0, 0x62, 0x68, 0x9C, 0xC3, 0x3E, 0x11, 0x84, 0x85, 0x35, 0x00
};
const struct IrCode code_na673Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na673Times,
  code_na673Codes
};

const uint16_t code_na674Times[] = {
  8990, 4500, 560, 1695, 565, 1665, 565, 560, 570, 585, 515, 590, 540, 585, 535, 595, 535, 1665, 565, 590, 540, 1690, 540, 565, 565, 1690, 560, 1670, 535, 1670, 560, 570, 560, 590, 540, 590, 510, 590, 540, 560, 505, 595, 535, 39545, 8985, 4505, 570, 1690, 535, 590, 540, 1695, 560, 1675, 570, 1665, 510, 595, 540, 1665, 570, 560, 560, 565, 545, 585
};
const uint8_t code_na674Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x87, 0x20, 0x92, 0x8B, 0x30, 0xD3, 0x41, 0x0C, 0xB2, 0x46, 0x38, 0xF4, 0x11, 0x49, 0x14, 0xCB, 0x0C, 0x41, 0xD4, 0x1D, 0x55, 0x97, 0x34, 0x94, 0x52, 0x45, 0x33, 0x4F, 0x05, 0x86, 0x5A, 0x6D, 0x74, 0x1C, 0x61, 0x17, 0x43, 0x79, 0xF8, 0x07, 0x61, 0xC6, 0x11, 0x18, 0x51, 0x80
};
const struct IrCode code_na674Code = {
  freq_to_timerval(38000),
  67,             // # of pairs
  6,             // # of bits per index
  code_na674Times,
  code_na674Codes
};

const uint16_t code_na675Times[] = {
  8990, 4505, 640, 485, 560, 590, 540, 590, 510, 590, 530, 595, 515, 615, 515, 1690, 560, 1670, 565, 1695, 535, 1695, 565, 1665, 565, 1690, 610, 1620, 645, 1430, 800, 1615, 650, 480, 560, 570, 540, 585, 535, 595, 535, 590, 510, 595, 540, 1665, 570, 1690, 565, 1670, 645, 1585, 565, 40630, 8995, 2265, 555, 65535, 8985, 2275
};
const uint8_t code_na675Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0x65, 0x31, 0xD0, 0x95, 0x2D, 0x8D, 0x73, 0xE1, 0x11, 0xCA, 0x74, 0xAD, 0x2C, 0x94, 0x5F, 0x19, 0x4E, 0xB7, 0xCE, 0x80
};
const struct IrCode code_na675Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na675Times,
  code_na675Codes
};

const uint16_t code_na676Times[] = {
  175, 7440, 170, 4920, 170, 7440, 170, 7465, 175, 4915, 175, 4920, 190, 7445, 175, 55180, 175, 7435, 175, 7465, 175, 4890, 180, 7460
};
const uint8_t code_na676Codes[] = {
  0x01, 0x21, 0x34, 0x45, 0x20, 0x67, 0x85, 0x85, 0x9A, 0x44, 0xB2, 0x80
};
const struct IrCode code_na676Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na676Times,
  code_na676Codes
};

const uint16_t code_na677Times[] = {
  1635, 4610, 1565, 1535, 1585, 7760, 1560, 28770, 1640, 4605, 1555, 1540, 1590, 7755
};
const uint8_t code_na677Codes[] = {
  0x05, 0x39, 0x70
};
const struct IrCode code_na677Code = {
  freq_to_timerval(38000),
  7,             // # of pairs
  3,             // # of bits per index
  code_na677Times,
  code_na677Codes
};

const uint16_t code_na678Times[] = {
  590, 2405, 480, 1060, 970, 575, 455, 545, 455, 575, 475, 520, 475, 550, 445, 550, 445, 580, 450, 520, 480, 580, 445, 520, 480, 550, 480, 15965, 585, 2405, 475, 1060, 995, 545, 450, 1030, 510, 520, 510, 550, 480, 520, 1000, 1030, 1000, 1055, 480, 545, 960, 1065, 480, 65535, 475, 1065, 485, 515, 505, 550, 970, 1060, 970, 1025, 960, 1035
};
const uint8_t code_na678Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0x65, 0x31, 0x8E, 0x84, 0xA9, 0x6C, 0x6B, 0x9E, 0x58, 0x46, 0x53, 0xA5, 0x2B, 0x6B, 0xE3, 0x2E, 0xD6, 0xE1, 0x1E, 0x18, 0xAC, 0xEF, 0xA7, 0xF0
};
const struct IrCode code_na678Code = {
  freq_to_timerval(38000),
  44,             // # of pairs
  5,             // # of bits per index
  code_na678Times,
  code_na678Codes
};

const uint16_t code_na679Times[] = {
  590, 2405, 475, 1060, 965, 575, 450, 515, 480, 545, 485, 545, 455, 575, 445, 525, 485, 515, 505, 555, 455, 545, 475, 555, 445, 585, 445, 520, 475, 580, 445, 15970, 585, 2410, 475, 1065, 995, 550, 450, 1035, 515, 545, 475, 520, 475, 550, 965, 1030, 995, 575, 450, 1030, 1000, 1030, 480, 65535, 585, 2405, 965, 515, 480, 1030, 505, 550, 480, 550, 970, 1030, 1000, 575, 455, 1025, 990, 1035
};
const uint8_t code_na679Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x87, 0x20, 0x92, 0x8A, 0x2C, 0xC3, 0x4E, 0x3D, 0x04, 0x48, 0x49, 0x35, 0x0B, 0x55, 0x65, 0xD8, 0x65, 0xA6, 0xDC, 0x44, 0x57, 0x5E, 0x7D, 0x65, 0x60, 0x86, 0x28, 0xE4
};
const struct IrCode code_na679Code = {
  freq_to_timerval(38000),
  44,             // # of pairs
  6,             // # of bits per index
  code_na679Times,
  code_na679Codes
};

const uint16_t code_na680Times[] = {
  175, 7440, 195, 7440, 175, 7435, 170, 7440, 175, 7460, 180, 7435, 175, 4915, 175, 4920, 170, 55185, 170, 7415, 175, 7465
};
const uint8_t code_na680Codes[] = {
  0x01, 0x20, 0x30, 0x43, 0x56, 0x78, 0x03, 0x30, 0x49, 0xA2, 0x27, 0x60
};
const struct IrCode code_na680Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na680Times,
  code_na680Codes
};

const uint16_t code_na681Times[] = {
  175, 7440, 170, 7440, 175, 7435, 175, 7460, 170, 7445, 175, 4915, 175, 4940, 175, 55165, 195, 7440, 170, 4920, 170, 4895, 195, 7445
};
const uint8_t code_na681Codes[] = {
  0x01, 0x02, 0x34, 0x25, 0x50, 0x67, 0x08, 0x20, 0x10, 0x39, 0xAB, 0x90
};
const struct IrCode code_na681Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na681Times,
  code_na681Codes
};

const uint16_t code_na682Times[] = {
  175, 7435, 180, 4915, 175, 4915, 170, 4920, 175, 4945, 170, 4895, 175, 7465, 170, 55180, 170, 7440, 170, 4925, 175, 4920
};
const uint8_t code_na682Codes[] = {
  0x01, 0x23, 0x45, 0x00, 0x62, 0x27, 0x89, 0x33, 0xA2, 0x06, 0x02, 0x20
};
const struct IrCode code_na682Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na682Times,
  code_na682Codes
};

const uint16_t code_na683Times[] = {
  925, 825, 1710, 935, 795, 930, 790, 940, 795, 1715, 1735, 935, 790, 1720, 1710, 910, 820, 65535, 900, 830, 1740, 935, 800, 930, 790, 935
};
const uint8_t code_na683Codes[] = {
  0x01, 0x23, 0x45, 0x26, 0x07, 0x89, 0xAB, 0xC4, 0xA2, 0x69, 0xA0
};
const struct IrCode code_na683Code = {
  freq_to_timerval(38000),
  21,             // # of pairs
  4,             // # of bits per index
  code_na683Times,
  code_na683Codes
};

const uint16_t code_na684Times[] = {
  175, 5990, 175, 1370, 175, 1320, 175, 1345, 175, 1350, 175, 1375, 170, 1325, 170, 4450, 170, 1350, 170, 1355, 175, 5965, 175, 65535, 175, 5995, 180, 1345, 170, 1380, 170, 4445, 175, 5960
};
const uint8_t code_na684Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x1A, 0x06, 0x84, 0xA9, 0x6C, 0x69, 0x08, 0x37, 0x19, 0xED, 0x22, 0x46, 0x88, 0x00
};
const struct IrCode code_na684Code = {
  freq_to_timerval(38000),
  29,             // # of pairs
  5,             // # of bits per index
  code_na684Times,
  code_na684Codes
};

const uint16_t code_na685Times[] = {
  9000, 4500, 560, 1685, 560, 560, 560, 40000
};
const uint8_t code_na685Codes[] = {
  0x1A, 0x95, 0xA5, 0x6A, 0x66, 0x69, 0x99, 0x96, 0x70
};
const struct IrCode code_na685Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na685Times,
  code_na685Codes
};

const uint16_t code_na686Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na686Codes[] = {
  0x15, 0x5A, 0x6A, 0xA5, 0xA9, 0x55, 0x56, 0xAA, 0xB0
};
const struct IrCode code_na686Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na686Times,
  code_na686Codes
};

const uint16_t code_na687Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na687Codes[] = {
  0x15, 0x5A, 0x6A, 0xA5, 0x95, 0x55, 0x6A, 0xAA, 0xB0
};
const struct IrCode code_na687Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na687Times,
  code_na687Codes
};

const uint16_t code_na688Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na688Codes[] = {
  0x19, 0x56, 0x66, 0xA9, 0xA5, 0x55, 0x5A, 0xAA, 0xB0
};
const struct IrCode code_na688Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na688Times,
  code_na688Codes
};

const uint16_t code_na689Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na689Codes[] = {
  0x15, 0x66, 0x66, 0x99, 0x95, 0x55, 0x6A, 0xAA, 0xB0
};
const struct IrCode code_na689Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na689Times,
  code_na689Codes
};

const uint16_t code_na690Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na690Codes[] = {
  0x15, 0x66, 0x66, 0x99, 0x99, 0x55, 0x66, 0xAA, 0xB0
};
const struct IrCode code_na690Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na690Times,
  code_na690Codes
};

const uint16_t code_na691Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na691Codes[] = {
  0x15, 0x66, 0x6A, 0x99, 0xAA, 0xA9, 0x55, 0x56, 0xB0
};
const struct IrCode code_na691Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na691Times,
  code_na691Codes
};

const uint16_t code_na692Times[] = {
  4500, 4500, 560, 560, 560, 1690, 560, 40000
};
const uint8_t code_na692Codes[] = {
  0x1A, 0x55, 0x65, 0xAA, 0xAA, 0x95, 0x55, 0x6A, 0xB0
};
const struct IrCode code_na692Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na692Times,
  code_na692Codes
};

const uint16_t code_na693Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na693Codes[] = {
  0x15, 0x95, 0x6A, 0x6A, 0x99, 0x65, 0x66, 0x9A, 0xB0
};
const struct IrCode code_na693Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na693Times,
  code_na693Codes
};

const uint16_t code_na694Times[] = {
  4500, 4500, 560, 560, 560, 1690, 560, 40000
};
const uint8_t code_na694Codes[] = {
  0x15, 0x95, 0x6A, 0x6A, 0xA9, 0x95, 0x56, 0x6A, 0xB0
};
const struct IrCode code_na694Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na694Times,
  code_na694Codes
};

const uint16_t code_na695Times[] = {
  9000, 4500, 560, 1685, 560, 560, 560, 40000
};
const uint8_t code_na695Codes[] = {
  0x16, 0xAA, 0x59, 0x99, 0xA6, 0xA9, 0x59, 0x56, 0xB0
};
const struct IrCode code_na695Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na695Times,
  code_na695Codes
};

const uint16_t code_na696Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na696Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0xA5, 0x66, 0x5A, 0x99, 0xB0
};
const struct IrCode code_na696Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na696Times,
  code_na696Codes
};

const uint16_t code_na697Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na697Codes[] = {
  0x15, 0x55, 0x66, 0xA9, 0xA5, 0x55, 0x5A, 0xAA, 0xB0
};
const struct IrCode code_na697Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na697Times,
  code_na697Codes
};

const uint16_t code_na698Times[] = {
  4500, 4500, 560, 560, 560, 1690, 560, 40000
};
const uint8_t code_na698Codes[] = {
  0x15, 0x55, 0x6A, 0xAA, 0xAA, 0x95, 0x55, 0x6A, 0xB0
};
const struct IrCode code_na698Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na698Times,
  code_na698Codes
};

const uint16_t code_na699Times[] = {
  4500, 4500, 560, 560, 560, 1690, 560, 40000
};
const uint8_t code_na699Codes[] = {
  0x1A, 0x65, 0x65, 0x9A, 0xAA, 0x95, 0x55, 0x6A, 0xB0
};
const struct IrCode code_na699Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na699Times,
  code_na699Codes
};

const uint16_t code_na700Times[] = {
  9000, 4500, 560, 1685, 560, 560, 560, 40000
};
const uint8_t code_na700Codes[] = {
  0x1A, 0xAA, 0xA5, 0x55, 0x5A, 0xAA, 0xA5, 0x55, 0x70
};
const struct IrCode code_na700Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na700Times,
  code_na700Codes
};

const uint16_t code_na701Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na701Codes[] = {
  0x15, 0x55, 0x95, 0x9A, 0x65, 0x96, 0x5A, 0x69, 0xB0
};
const struct IrCode code_na701Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na701Times,
  code_na701Codes
};

const uint16_t code_na702Times[] = {
  9000, 4500, 560, 560, 560, 1685, 560, 40000
};
const uint8_t code_na702Codes[] = {
  0x1A, 0x55, 0x99, 0x55, 0x65, 0x96, 0x5A, 0x69, 0xB0
};
const struct IrCode code_na702Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  2,             // # of bits per index
  code_na702Times,
  code_na702Codes
};

const uint16_t code_na703Times[] = {
  2385, 610, 1215, 600, 610, 580, 1215, 610, 615, 585, 1210, 605, 605, 585, 615, 610, 1190, 600, 615, 580, 615, 615, 605, 26670, 2385, 600, 1210, 600, 610, 590, 1215, 605, 610, 585, 1215, 595, 605, 595, 620, 605, 1185, 600, 610, 610, 615, 590
};
const uint8_t code_na703Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x41, 0xD2, 0xA5, 0xB1, 0xAE, 0x7C, 0x23, 0x29, 0xD2, 0xB6, 0x38
};
const struct IrCode code_na703Code = {
  freq_to_timerval(38000),
  25,             // # of pairs
  5,             // # of bits per index
  code_na703Times,
  code_na703Codes
};

const uint16_t code_na704Times[] = {
  180, 7760, 175, 11310, 545, 955, 540, 1960, 540, 970, 535, 1955, 540, 960, 545, 1955, 545, 965, 545, 960, 550, 960, 545, 1945, 540, 1950, 540, 1955, 535, 1960, 540, 7880, 170, 7745, 170, 11320, 535, 970, 540, 965, 535, 1965
};
const uint8_t code_na704Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x44, 0x45, 0x2D, 0x88, 0x6A, 0x56, 0x47, 0x3E, 0x11, 0x91, 0x67, 0x49, 0xB2, 0x44, 0x94, 0xA7, 0x46, 0xCC, 0xA4, 0x74, 0x98
};
const struct IrCode code_na704Code = {
  freq_to_timerval(38000),
  43,             // # of pairs
  5,             // # of bits per index
  code_na704Times,
  code_na704Codes
};

const uint16_t code_na705Times[] = {
  3445, 1765, 415, 485, 420, 1345, 420, 480, 420, 485, 410, 490, 415, 480, 415, 490, 410, 1345, 415, 1345, 420, 1340, 415, 1350, 415, 1340, 410, 495, 410, 485, 415, 65535, 3445, 1755, 435, 460, 445, 1315, 445, 455, 440, 455, 440, 465, 440, 460, 445, 460, 435, 465, 445, 450, 435, 470, 440, 1320, 445, 1310, 440, 1325, 440, 1315
};
const uint8_t code_na705Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x30, 0x46, 0x13, 0x85, 0x04, 0x18, 0x4E, 0x63, 0x90, 0x27, 0x49, 0x8E, 0x60, 0x8C, 0xC7, 0x0A, 0x0E, 0xA5, 0xA5, 0x8D, 0x72, 0x8A, 0xC5, 0x29, 0x04, 0x53, 0xE1, 0x19, 0x4E, 0x95, 0xB5, 0xAF, 0x6C, 0x5B, 0x37, 0x95, 0xA7, 0x6C, 0x5B, 0x3A, 0x8C, 0xF7, 0x4A, 0xDA, 0x3A, 0xB4, 0xED, 0xCA, 0xCB, 0x9D, 0xDD, 0x2B, 0xEC, 0x6F, 0xDD, 0x95, 0xA4
};
const struct IrCode code_na705Code = {
  freq_to_timerval(38000),
  99,             // # of pairs
  5,             // # of bits per index
  code_na705Times,
  code_na705Codes
};

const uint16_t code_na706Times[] = {
  280, 1845, 275, 810, 270, 805, 280, 805, 275, 805, 275, 1840, 280, 1835, 275, 800, 275, 44955, 280, 1840, 270, 810, 280, 800, 270, 815, 275, 1845, 270, 1845, 275, 44960, 280, 44955, 270, 1840
};
const uint8_t code_na706Codes[] = {
  0x00, 0x44, 0x11, 0x90, 0xA0, 0x09, 0x84, 0x11, 0x94, 0xE8, 0x49, 0x0E, 0x15, 0x25, 0x6C, 0x69, 0x0A, 0x06, 0x85, 0xCF, 0x69, 0x04, 0x11, 0x90, 0xA0, 0x0B, 0x88, 0x11, 0x95, 0x70, 0x4A, 0xCE, 0x35, 0x18, 0x4C, 0x69, 0x0A, 0x06, 0x92, 0x20
};
const struct IrCode code_na706Code = {
  freq_to_timerval(38000),
  63,             // # of pairs
  5,             // # of bits per index
  code_na706Times,
  code_na706Codes
};

const uint16_t code_na707Times[] = {
  880, 910, 1750, 930, 875, 925, 875, 920, 870, 930, 875, 930, 875, 1815, 1745, 935, 875, 65535, 880, 920, 880, 915, 880, 925, 870, 925, 875, 1820, 1740, 935
};
const uint8_t code_na707Codes[] = {
  0x01, 0x23, 0x42, 0x35, 0x62, 0x78, 0x97, 0xAB, 0x3C, 0x23, 0xD4, 0xE0
};
const struct IrCode code_na707Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na707Times,
  code_na707Codes
};

const uint16_t code_na708Times[] = {
  510, 1715, 505, 630, 510, 630, 510, 625, 505, 635, 510, 635, 510, 1720, 515, 630, 515, 625, 505, 1715, 505, 1725, 505, 1720
};
const uint8_t code_na708Codes[] = {
  0x01, 0x23, 0x45, 0x06, 0x03, 0x44, 0x22, 0x36, 0x31, 0x73, 0x81, 0x02, 0x09, 0xA9, 0xB0
};
const struct IrCode code_na708Code = {
  freq_to_timerval(38000),
  30,             // # of pairs
  4,             // # of bits per index
  code_na708Times,
  code_na708Codes
};

const uint16_t code_na709Times[] = {
  505, 495, 505, 4060, 505, 5050, 500, 505, 500, 4065, 500, 510, 495, 4065, 500, 5060, 505, 505, 500, 5055, 505, 5040, 500, 515, 505, 65535, 505, 4065, 500, 5050, 495, 4070, 505, 500, 500, 4070, 505, 5045
};
const uint8_t code_na709Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x40, 0x44, 0x32, 0x25, 0x4B, 0x62, 0x1A, 0xE2, 0xBE, 0x11, 0x70, 0xC8, 0x92, 0x86, 0x47, 0x28
};
const struct IrCode code_na709Code = {
  freq_to_timerval(38000),
  33,             // # of pairs
  5,             // # of bits per index
  code_na709Times,
  code_na709Codes
};

const uint16_t code_na710Times[] = {
  8885, 4470, 530, 1740, 515, 1710, 535, 1710, 535, 575, 535, 570, 530, 580, 540, 1705, 540, 570, 540, 1700, 530, 575, 535, 1715, 530, 1715, 535, 1705, 535, 565, 535, 580, 540, 565, 535, 39040, 8915, 2230, 530, 65535, 8915, 2255
};
const uint8_t code_na710Codes[] = {
  0x00, 0x44, 0x32, 0x10, 0xA6, 0x39, 0x4E, 0x54, 0x21, 0x26, 0x42, 0x88, 0x54, 0x21, 0x2B, 0x18, 0xD8, 0xD1, 0x9D, 0xCF, 0x84, 0x65, 0x3A, 0x00
};
const struct IrCode code_na710Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na710Times,
  code_na710Codes
};

const uint16_t code_na711Times[] = {
  8315, 4160, 515, 1575, 515, 1570, 505, 570, 510, 560, 505, 565, 505, 560, 505, 1580, 510, 1575, 510, 1580, 515, 555, 510, 565, 505, 22605, 505, 1590, 510, 1585, 515, 560, 515, 22595, 515, 1580, 505, 1585, 510, 555
};
const uint8_t code_na711Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC3, 0x21, 0xD0, 0x92, 0x85, 0x43, 0x5B, 0x02, 0xD5, 0x94, 0xC3, 0x21, 0x4E, 0xE0, 0x91, 0x0F, 0x2A, 0xA1, 0x19, 0x14, 0xA3, 0x59, 0x4D, 0x24, 0xA2, 0x69, 0x2A, 0x94
};
const struct IrCode code_na711Code = {
  freq_to_timerval(38000),
  51,             // # of pairs
  5,             // # of bits per index
  code_na711Times,
  code_na711Codes
};

const uint16_t code_na712Times[] = {
  8735, 4385, 560, 575, 555, 550, 560, 570, 560, 545, 565, 1720, 560, 540, 560, 1730, 565, 1700, 560, 1725, 560, 1705, 555, 575, 555, 1700, 555, 1705, 565, 1725, 565, 540, 560, 550, 560, 565, 565, 1695, 565, 565, 560, 1735, 560, 1700, 560, 39925, 8755, 2245, 565, 65535, 8760, 2245
};
const uint8_t code_na712Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x21, 0x50, 0x95, 0x2D, 0x81, 0x6A, 0x50, 0x52, 0x38, 0xC1, 0x78, 0xE1, 0x19, 0x4E, 0x54, 0xAD, 0xAF, 0x8C, 0x80
};
const struct IrCode code_na712Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na712Times,
  code_na712Codes
};

const uint16_t code_na713Times[] = {
  3300, 3335, 820, 2505, 825, 880, 825, 2530, 825, 855, 825, 2525, 815, 865, 815, 2515, 820, 890, 815, 860, 820, 885, 825, 2520, 820, 865, 815, 2510, 820, 2530, 820, 2510, 820, 2560, 795, 32400, 3300, 3350, 820, 2525, 815, 870, 820, 855, 825, 875, 815, 890, 820, 2565
};
const uint8_t code_na713Codes[] = {
  0x00, 0x44, 0x11, 0x90, 0xA6, 0x19, 0xD0, 0x95, 0x19, 0x6C, 0x2A, 0x54, 0xD5, 0x19, 0xCF, 0x84, 0x64, 0x11, 0x3E, 0x74, 0x1D, 0x46, 0x11, 0x56, 0xC6, 0x19, 0x07, 0x5B, 0x86, 0xCC, 0x29, 0xF0
};
const struct IrCode code_na713Code = {
  freq_to_timerval(38000),
  51,             // # of pairs
  5,             // # of bits per index
  code_na713Times,
  code_na713Codes
};

const uint16_t code_na714Times[] = {
  8840, 4440, 530, 565, 535, 565, 535, 1670, 530, 1675, 530, 560, 540, 565, 535, 1665, 535, 560, 540, 1660, 540, 1670, 530, 570, 530, 1680, 530, 1670, 540, 1665, 535, 22775, 8860, 4445, 535, 65535, 8860, 4415
};
const uint8_t code_na714Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0xA6, 0x11, 0xC4, 0x21, 0x21, 0x2A, 0x58, 0x44, 0x32, 0x0C, 0xAA, 0x20, 0xC8, 0x82, 0x09, 0x0C, 0x0A, 0x0C, 0x71, 0x0D, 0xAB, 0x70, 0xC8, 0xF8, 0x46, 0x40
};
const struct IrCode code_na714Code = {
  freq_to_timerval(38000),
  47,             // # of pairs
  5,             // # of bits per index
  code_na714Times,
  code_na714Codes
};

const uint16_t code_na715Times[] = {
  290, 2110, 260, 2110, 295, 2100, 260, 920, 295, 910, 260, 915, 265, 915, 260, 2105, 295, 905, 290, 920, 265, 910, 290, 910, 295, 24790, 265, 2105, 300, 2100, 265, 2110, 295, 915, 290, 2105, 300, 910
};
const uint8_t code_na715Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x46, 0x21, 0xD0, 0x64, 0xA9, 0x63, 0x63, 0x5C, 0xF8, 0x15, 0x0F, 0x21, 0x62, 0x69, 0x29, 0x63, 0x80
};
const struct IrCode code_na715Code = {
  freq_to_timerval(38000),
  33,             // # of pairs
  5,             // # of bits per index
  code_na715Times,
  code_na715Codes
};

const uint16_t code_na716Times[] = {
  8900, 4455, 570, 580, 575, 575, 575, 570, 570, 1745, 565, 1745, 570, 585, 570, 1740, 570, 575, 575, 1745, 565, 580, 565, 575, 575, 1740, 575, 1735, 565, 1750, 565, 1740, 570, 1750, 575, 41005, 8875, 2260, 570, 65535, 8900, 2265
};
const uint8_t code_na716Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xA6, 0x09, 0xC8, 0x70, 0xA0, 0x69, 0x2A, 0x88, 0xB1, 0x30, 0x61, 0x43, 0x04, 0xD7, 0x09, 0xF0, 0x6C, 0x65, 0x3A, 0x00
};
const struct IrCode code_na716Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na716Times,
  code_na716Codes
};

const uint16_t code_na717Times[] = {
  3215, 1635, 410, 430, 405, 440, 405, 1240, 410, 435, 410, 1240, 405, 435, 410, 1245, 405, 430, 400, 1255, 400, 440, 405, 445, 400, 1250, 400, 445, 405, 1250, 400, 435, 405, 45470, 3240, 1615, 410, 1250, 405, 1245, 425, 420, 420, 420
};
const uint8_t code_na717Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x22, 0x31, 0x4E, 0x81, 0x18, 0xA9, 0x32, 0x84, 0x81, 0x18, 0x22, 0x32, 0x84, 0x32, 0x29, 0x0B, 0x62, 0x84, 0x32, 0x28, 0xCD, 0x62, 0x9C, 0xF2, 0x28, 0xCD, 0x54, 0x22, 0x66, 0xB1, 0xF2, 0x51, 0x95, 0x37, 0x51, 0x0B, 0x63, 0x2A, 0x66, 0xA9, 0x0B, 0x51, 0x94, 0x66, 0xB1, 0xED, 0x08, 0xA6, 0x66, 0xB1, 0xED, 0x09, 0x8E, 0x64, 0x99, 0xED, 0x09, 0x88
};
const struct IrCode code_na717Code = {
  freq_to_timerval(38000),
  99,             // # of pairs
  5,             // # of bits per index
  code_na717Times,
  code_na717Codes
};

const uint16_t code_na718Times[] = {
  7930, 3950, 505, 515, 505, 520, 500, 1585, 505, 510, 510, 515, 500, 515, 500, 3950, 510, 1580, 510, 505, 500, 520, 510, 1570, 500, 23075, 7930, 3945, 505, 1580, 500, 525, 510, 510, 505, 3950, 510, 1575, 505, 1585
};
const uint8_t code_na718Codes[] = {
  0x00, 0x44, 0x30, 0x8C, 0x85, 0x31, 0xD0, 0x91, 0xA9, 0x62, 0x31, 0x98, 0xD2, 0x85, 0xCF, 0x74, 0x0A, 0x48, 0xC8, 0xD3, 0x33, 0x82, 0x10, 0x80
};
const struct IrCode code_na718Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na718Times,
  code_na718Codes
};

const uint16_t code_na719Times[] = {
  8835, 4465, 540, 610, 530, 620, 530, 615, 540, 1750, 535, 1750, 530, 610, 540, 615, 535, 615, 535, 610, 535, 1755, 540, 1745, 535, 605, 535, 620, 530, 1755, 530, 1745, 540, 44105, 8865, 2225, 535, 65535, 8910, 2200
};
const uint8_t code_na719Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x08, 0xD0, 0x95, 0x2D, 0x8D, 0x42, 0x44, 0x30, 0x84, 0xC4, 0x29, 0x5C, 0xB5, 0x95, 0xED, 0x44, 0x23, 0x29, 0x80
};
const struct IrCode code_na719Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na719Times,
  code_na719Codes
};

const uint16_t code_na720Times[] = {
  490, 4975, 495, 4995, 500, 500, 500, 4055, 500, 505, 495, 4055, 500, 4965, 495, 530, 495, 4030, 490, 4995, 495, 500, 495, 4060, 495, 4970, 500, 4990, 490, 505, 490, 4065, 490, 510, 495, 4050, 490, 4970, 490, 540, 500, 4025, 495, 65535, 500, 4960, 500, 4995, 495, 505, 490, 535, 495, 4025, 495, 510, 490, 4060, 495, 4965, 495, 5000, 495, 4065, 490, 4030
};
const uint8_t code_na720Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x87, 0x20, 0x92, 0x8B, 0x30, 0xD3, 0x8F, 0x41, 0x14, 0x93, 0x51, 0x55, 0x97, 0x60, 0x50, 0x83, 0x31, 0x96, 0x81, 0x6D, 0xC7, 0x5E, 0x40, 0x53, 0x9F, 0x00, 0x78, 0x00
};
const struct IrCode code_na720Code = {
  freq_to_timerval(38000),
  43,             // # of pairs
  6,             // # of bits per index
  code_na720Times,
  code_na720Codes
};

const uint16_t code_na721Times[] = {
  2355, 610, 1185, 590, 1190, 615, 1180, 595, 1190, 620, 585, 615, 590, 615, 1190, 610, 590, 605, 585, 25400, 2355, 625, 1180, 590, 1180, 625, 1185, 620, 1185, 585, 585, 605, 585, 610
};
const uint8_t code_na721Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x66, 0x3A, 0x0A, 0x84, 0xA9, 0x6C, 0x0B, 0x4A, 0xE2, 0x89, 0xE5, 0x80
};
const struct IrCode code_na721Code = {
  freq_to_timerval(38000),
  25,             // # of pairs
  5,             // # of bits per index
  code_na721Times,
  code_na721Codes
};

const uint16_t code_na722Times[] = {
  3425, 3480, 850, 2605, 845, 2640, 845, 2610, 850, 2625, 850, 2615, 850, 910, 850, 885, 845, 920, 845, 890, 850, 915, 850, 905, 845, 895, 845, 915, 845, 885, 850, 2630, 845, 34280, 3455, 3480, 850, 2600, 850, 2635, 845, 2615, 845, 2635, 850, 890, 845, 2630
};
const uint8_t code_na722Codes[] = {
  0x00, 0x44, 0x31, 0x0C, 0x85, 0x31, 0xD0, 0x95, 0x25, 0x6C, 0x6A, 0x54, 0xE1, 0x0C, 0x85, 0x7C, 0x23, 0x29, 0x85, 0xF4, 0xA8, 0x54, 0x95, 0x59, 0xAC, 0x6A, 0x54, 0x74, 0x32, 0xF4, 0xA8, 0x66
};
const struct IrCode code_na722Code = {
  freq_to_timerval(38000),
  51,             // # of pairs
  5,             // # of bits per index
  code_na722Times,
  code_na722Codes
};

const uint16_t code_na723Times[] = {
  500, 500, 500, 4065, 500, 5060, 505, 500, 505, 4060, 505, 510, 500, 4060, 505, 5055, 495, 5055, 495, 510, 495, 4070, 505, 5045, 505, 505, 500, 5050, 495, 65535, 500, 510, 500, 515, 495, 4075, 495, 4065
};
const uint8_t code_na723Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x05, 0xA5, 0x73, 0xC2, 0xB8, 0x10, 0x71, 0x6B, 0x5F, 0x21, 0x30, 0xC7, 0x78
};
const struct IrCode code_na723Code = {
  freq_to_timerval(38000),
  33,             // # of pairs
  5,             // # of bits per index
  code_na723Times,
  code_na723Codes
};

const uint16_t code_na724Times[] = {
  175, 7765, 175, 8815, 170, 10840, 545, 1955, 540, 965, 540, 1950, 545, 960, 540, 970, 545, 1945, 545, 965, 540, 1955, 545, 1950, 545, 7875, 170, 7745, 170, 10350, 175, 11810, 535, 1960, 535, 970, 535, 965, 540, 1945, 540, 975
};
const uint8_t code_na724Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x32, 0x0A, 0x95, 0x11, 0x07, 0x5B, 0x1A, 0xE7, 0x9A, 0x11, 0x8C, 0x94, 0xA2, 0x4E, 0x90, 0x89, 0x40
};
const struct IrCode code_na724Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  5,             // # of bits per index
  code_na724Times,
  code_na724Codes
};

const uint16_t code_na725Times[] = {
  2570, 2680, 1190, 1210, 1185, 2665, 1185, 1215, 1185, 2670, 1180, 2670, 1190, 2695, 1185, 1185, 1185, 2690, 1190, 1215, 1180, 1195, 1190, 1205, 1180, 2675, 1185, 46940, 2565, 2685, 1185, 1190, 1185, 2700, 1185, 2695, 1185, 1210, 1185, 2675, 1190, 1190
};
const uint8_t code_na725Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0xA6, 0x3A, 0x0A, 0x95, 0x2C, 0x49, 0x63, 0x5C, 0xF8, 0x3D, 0x0A, 0x88, 0xA5, 0x38, 0x9D, 0x74, 0x89, 0xD0
};
const struct IrCode code_na725Code = {
  freq_to_timerval(38000),
  35,             // # of pairs
  5,             // # of bits per index
  code_na725Times,
  code_na725Codes
};

const uint16_t code_na726Times[] = {
  875, 915, 1775, 905, 875, 925, 880, 920, 875, 930, 880, 1805, 1770, 915, 880, 1810, 870, 930, 1770, 65535, 870, 925, 1775, 910, 875, 1810
};
const uint8_t code_na726Codes[] = {
  0x01, 0x23, 0x42, 0x56, 0x78, 0x9A, 0xB2, 0x04, 0x27, 0x1C, 0x80
};
const struct IrCode code_na726Code = {
  freq_to_timerval(38000),
  21,             // # of pairs
  4,             // # of bits per index
  code_na726Times,
  code_na726Codes
};

const uint16_t code_na727Times[] = {
  875, 905, 875, 910, 1765, 905, 880, 910, 875, 920, 875, 915, 880, 905, 875, 1795, 1775, 895, 875, 65535, 880, 915, 870, 920, 1765, 895, 880, 1790, 1775, 890
};
const uint8_t code_na727Codes[] = {
  0x01, 0x23, 0x45, 0x64, 0x75, 0x89, 0xAB, 0xC4, 0x53, 0xB5, 0xD5, 0xE0
};
const struct IrCode code_na727Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na727Times,
  code_na727Codes
};

const uint16_t code_na728Times[] = {
  3325, 1560, 405, 445, 400, 455, 400, 1225, 405, 450, 405, 1225, 400, 450, 405, 1230, 400, 445, 410, 445, 410, 440, 405, 440, 405, 455, 410, 1220, 405, 52350, 3320, 1555, 400, 1230, 410, 1230, 430, 420, 430, 425, 400, 1235
};
const uint8_t code_na728Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x22, 0x31, 0x4E, 0x84, 0x98, 0xA7, 0x50, 0x52, 0x84, 0x99, 0x6C, 0x30, 0x4C, 0x52, 0x05, 0x09, 0x6A, 0x8E, 0xA2, 0x91, 0x64, 0x29, 0x02, 0xA0, 0xA5, 0x02, 0x53, 0x9E, 0x11, 0x41, 0x11, 0x30, 0x4C, 0x53, 0xC9, 0x6C, 0x84, 0x26, 0x81, 0x19, 0x6C, 0x30, 0x4C, 0x13, 0x1D, 0x02, 0x30, 0x68, 0x18, 0x24, 0x64, 0x09, 0x8E, 0x60, 0xA5, 0x02, 0x30, 0x44
};
const struct IrCode code_na728Code = {
  freq_to_timerval(38000),
  99,             // # of pairs
  5,             // # of bits per index
  code_na728Times,
  code_na728Codes
};

const uint16_t code_na729Times[] = {
  990, 915, 980, 910, 985, 925, 980, 2830, 980, 935, 980, 2825, 980, 905, 990, 33895, 990, 905, 990, 925, 990, 900, 985, 2840, 980, 915, 980, 2850
};
const uint8_t code_na729Codes[] = {
  0x01, 0x23, 0x45, 0x23, 0x46, 0x78, 0x9A, 0xBC, 0xD1, 0xBC, 0x40
};
const struct IrCode code_na729Code = {
  freq_to_timerval(38000),
  21,             // # of pairs
  4,             // # of bits per index
  code_na729Times,
  code_na729Codes
};

const uint16_t code_na730Times[] = {
  820, 5755, 850, 2490, 840, 2490, 820, 2525, 815, 5725, 845, 2490, 840, 5725, 845, 5755, 845, 5725, 855, 2485
};
const uint8_t code_na730Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x89
};
const struct IrCode code_na730Code = {
  freq_to_timerval(38000),
  10,             // # of pairs
  4,             // # of bits per index
  code_na730Times,
  code_na730Codes
};

const uint16_t code_na731Times[] = {
  5090, 1620, 405, 2600, 405, 2605, 1655, 1615, 410, 2620, 1610, 1605, 1655, 1620, 410, 2625, 380, 2600
};
const uint8_t code_na731Codes[] = {
  0x01, 0x12, 0x34, 0x56, 0x78
};
const struct IrCode code_na731Code = {
  freq_to_timerval(38000),
  10,             // # of pairs
  4,             // # of bits per index
  code_na731Times,
  code_na731Codes
};

const uint16_t code_na732Times[] = {
  8880, 4445, 565, 1745, 565, 585, 570, 580, 570, 1745, 570, 575, 565, 580, 565, 1755, 565, 1750, 570, 1750, 575, 1740, 570, 570, 570, 585, 570, 1740, 570, 41005, 8905, 2255, 565, 65535, 8870, 2265
};
const uint8_t code_na732Codes[] = {
  0x00, 0x44, 0x11, 0x90, 0xA2, 0x30, 0xCE, 0x54, 0x08, 0x29, 0x41, 0x88, 0x61, 0xA9, 0x6C, 0x33, 0x46, 0xA4, 0x14, 0x29, 0x6B, 0x9F, 0x08, 0x80
};
const struct IrCode code_na732Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na732Times,
  code_na732Codes
};

const uint16_t code_na733Times[] = {
  1145, 1010, 6795, 26755, 1150, 995
};
const uint8_t code_na733Codes[] = {
  0x18
};
const struct IrCode code_na733Code = {
  freq_to_timerval(38000),
  3,             // # of pairs
  2,             // # of bits per index
  code_na733Times,
  code_na733Codes
};

const uint16_t code_na734Times[] = {
  1145, 1010, 1120, 1005, 1145, 1990, 1115, 26760, 1145, 1005, 1125, 1005
};
const uint8_t code_na734Codes[] = {
  0x05, 0x39, 0x50
};
const struct IrCode code_na734Code = {
  freq_to_timerval(38000),
  7,             // # of pairs
  3,             // # of bits per index
  code_na734Times,
  code_na734Codes
};

const uint16_t code_na735Times[] = {
  170, 46240
};
const uint8_t code_na735Codes[] = {
  0x00
};
const struct IrCode code_na735Code = {
  freq_to_timerval(38000),
  1,             // # of pairs
  1,             // # of bits per index
  code_na735Times,
  code_na735Codes
};

const uint16_t code_na736Times[] = {
  8905, 4165, 570, 1670, 570, 1680, 565, 640, 570, 635, 565, 645, 570, 645, 570, 1675, 565, 1685, 565, 635, 565, 1680, 565, 1675, 570, 630, 570, 640, 570, 40485, 8900, 2250, 570, 65535, 8955, 2195
};
const uint8_t code_na736Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x86, 0x38, 0xD0, 0x95, 0x1D, 0x62, 0x20, 0xC8, 0x34, 0x0D, 0x8D, 0x21, 0xD4, 0x16, 0xA8, 0x22, 0x53, 0x9F, 0x08, 0x80
};
const struct IrCode code_na736Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na736Times,
  code_na736Codes
};

const uint16_t code_na737Times[] = {
  445, 1190, 450, 1195, 445, 1195, 445, 1205, 445, 1200, 1315, 460, 450, 1190, 450, 34490, 440, 1205, 1315, 435, 440, 1200, 450, 1200
};
const uint8_t code_na737Codes[] = {
  0x01, 0x23, 0x45, 0x24, 0x14, 0x67, 0x32, 0x48, 0x49, 0xAB, 0x84, 0xA0
};
const struct IrCode code_na737Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na737Times,
  code_na737Codes
};

const uint16_t code_na738Times[] = {
  4270, 4325, 520, 1595, 515, 1605, 515, 1595, 520, 520, 520, 515, 515, 530, 520, 1600, 515, 525, 515, 520, 520, 525, 515, 1600, 520, 1590, 515, 40480, 8750, 2185, 525, 65535, 8720, 2190
};
const uint8_t code_na738Codes[] = {
  0x00, 0x44, 0x32, 0x10, 0xA6, 0x21, 0x08, 0x40, 0x84, 0x67, 0x0A, 0x04, 0x95, 0x21, 0x2A, 0x42, 0xC8, 0x31, 0x2C, 0x62, 0x63, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na738Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na738Times,
  code_na738Codes
};

const uint16_t code_na739Times[] = {
  245, 3005, 245, 155, 180, 1005, 250, 115, 635, 595, 380, 680, 220, 155, 175, 530, 215, 155, 175, 24965, 245, 3040, 220, 995, 250, 120, 215, 485, 280, 780, 175, 165, 170, 570, 385, 680, 175, 65535, 245, 120, 195, 505, 170, 530, 275, 780, 170, 170, 180, 560
};
const uint8_t code_na739Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x2A, 0x12, 0xA1, 0xAD, 0x8D, 0x19, 0xDC, 0xF8, 0x45, 0x12, 0x53, 0x17, 0x3A, 0x32, 0xB6, 0xBE, 0x0A, 0x80
};
const struct IrCode code_na739Code = {
  freq_to_timerval(38000),
  36,             // # of pairs
  5,             // # of bits per index
  code_na739Times,
  code_na739Codes
};

const uint16_t code_na740Times[] = {
  8870, 4455, 570, 580, 575, 570, 570, 1745, 570, 575, 565, 585, 565, 580, 565, 1745, 565, 1750, 565, 1740, 570, 1740, 575, 575, 570, 585, 570, 41005, 8905, 2260, 575, 65535, 8870, 2265
};
const uint8_t code_na740Codes[] = {
  0x00, 0x42, 0x20, 0x8C, 0x85, 0x30, 0xC6, 0x74, 0x15, 0x23, 0x39, 0xD0, 0xA4, 0x04, 0xE8, 0x51, 0x0A, 0x65, 0xA0, 0x4C, 0x0B, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na740Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na740Times,
  code_na740Codes
};

const uint16_t code_na741Times[] = {
  4280, 4320, 520, 515, 520, 520, 515, 530, 520, 1595, 515, 1605, 515, 1600, 520, 1600, 515, 525, 515, 520, 520, 525, 515, 1595, 515, 40480, 8750, 2185, 525, 65535, 8720, 2190
};
const uint8_t code_na741Codes[] = {
  0x01, 0x21, 0x22, 0x13, 0x24, 0x56, 0x74, 0x67, 0x46, 0x64, 0x58, 0x9A, 0x88, 0x81, 0x85, 0xB5, 0x4C, 0xDE, 0xF0
};
const struct IrCode code_na741Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  4,             // # of bits per index
  code_na741Times,
  code_na741Codes
};

const uint16_t code_na742Times[] = {
  2745, 8425, 2745, 19605, 2745, 19600, 2740, 8430, 2740, 19610, 2745, 8420, 2745, 19610
};
const uint8_t code_na742Codes[] = {
  0x05, 0x31, 0x2E, 0x34
};
const struct IrCode code_na742Code = {
  freq_to_timerval(38000),
  10,             // # of pairs
  3,             // # of bits per index
  code_na742Times,
  code_na742Codes
};

const uint16_t code_na743Times[] = {
  170, 6685, 175, 4890, 175, 10380, 370, 850, 820, 2500, 265, 2480, 840, 2490, 840, 2475, 845, 2485, 840, 2480, 840, 2495, 835, 2475, 845, 845, 845, 37010, 170, 6680, 375, 850, 925, 2395, 845, 2490, 175, 10385, 250, 2490, 170, 10385, 245, 2495
};
const uint8_t code_na743Codes[] = {
  0x00, 0x44, 0x32, 0x08, 0xA6, 0x3A, 0x12, 0xA5, 0xB1, 0xAE, 0x08, 0x9F, 0x08, 0xCA, 0x74, 0xA8
};
const struct IrCode code_na743Code = {
  freq_to_timerval(38000),
  25,             // # of pairs
  5,             // # of bits per index
  code_na743Times,
  code_na743Codes
};

const uint16_t code_na744Times[] = {
  8900, 4455, 570, 580, 575, 575, 575, 1735, 565, 585, 565, 580, 570, 575, 565, 1750, 570, 1740, 570, 1745, 575, 1740, 575, 580, 575, 570, 565, 1740, 570, 1750, 575, 41005, 8875, 2260, 570, 65535, 8905, 2255
};
const uint8_t code_na744Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x12, 0x65, 0x25, 0x0B, 0x31, 0x42, 0x63, 0xA9, 0x81, 0x0A, 0x94, 0x83, 0x09, 0xAE, 0x53, 0xE1, 0x19, 0x00
};
const struct IrCode code_na744Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na744Times,
  code_na744Codes
};

const uint16_t code_na745Times[] = {
  8870, 4455, 570, 1745, 565, 1750, 565, 1745, 565, 585, 570, 585, 570, 580, 570, 575, 565, 580, 575, 575, 570, 570, 570, 1740, 570, 1750, 565, 41015, 8905, 2255, 565, 65535, 8870, 2265
};
const uint8_t code_na745Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0x65, 0x31, 0xC8, 0x81, 0x19, 0x01, 0x1A, 0x02, 0x84, 0x89, 0x45, 0x32, 0xCC, 0x31, 0x24, 0x6C, 0x13, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na745Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na745Times,
  code_na745Codes
};

const uint16_t code_na746Times[] = {
  180, 2645, 180, 8175, 170, 2645, 175, 8180, 175, 2650, 175, 8175, 175, 2640, 170, 5420, 175, 5415, 170, 2650, 175, 2645, 175, 5410, 175, 28830, 170, 8185, 170, 2655, 170, 5410
};
const uint8_t code_na746Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x89, 0xA0, 0xAB, 0xC4, 0xD9, 0x5E, 0x56, 0xF7, 0x4A, 0x6E, 0x70
};
const struct IrCode code_na746Code = {
  freq_to_timerval(38000),
  29,             // # of pairs
  4,             // # of bits per index
  code_na746Times,
  code_na746Codes
};

const uint16_t code_na747Times[] = {
  175, 2650, 175, 8180, 175, 2640, 170, 8185, 170, 2655, 170, 8180, 170, 2645, 175, 2645, 555, 2265, 560, 5025, 175, 5410, 175, 5420, 175, 5415, 170, 28835, 170, 2650, 175, 8185, 170, 8190, 170, 5415
};
const uint8_t code_na747Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0xCF, 0x71, 0x4F, 0x03, 0x9D, 0xCC, 0x54, 0x62
};
const struct IrCode code_na747Code = {
  freq_to_timerval(38000),
  27,             // # of pairs
  5,             // # of bits per index
  code_na747Times,
  code_na747Codes
};

const uint16_t code_na748Times[] = {
  180, 705, 265, 140, 270, 135, 175, 175, 200, 235, 180, 65535, 175, 300, 170, 85, 275, 130, 170, 230
};
const uint8_t code_na748Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x81, 0x90
};
const struct IrCode code_na748Code = {
  freq_to_timerval(38000),
  11,             // # of pairs
  4,             // # of bits per index
  code_na748Times,
  code_na748Codes
};

const uint16_t code_na749Times[] = {
  555, 1920, 585, 3810, 580, 3780, 580, 3820, 580, 1920, 555, 1940, 545, 1920
};
const uint8_t code_na749Codes[] = {
  0x05, 0x39, 0x70
};
const struct IrCode code_na749Code = {
  freq_to_timerval(38000),
  7,             // # of pairs
  3,             // # of bits per index
  code_na749Times,
  code_na749Codes
};

const uint16_t code_na750Times[] = {
  475, 1470, 465, 3480, 475, 3470, 475, 3475, 475, 1465, 470, 1470, 475, 27475, 470, 1475, 470, 3475
};
const uint8_t code_na750Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x81, 0x20, 0x00
};
const struct IrCode code_na750Code = {
  freq_to_timerval(38000),
  13,             // # of pairs
  4,             // # of bits per index
  code_na750Times,
  code_na750Codes
};

const uint16_t code_na751Times[] = {
  300, 2190, 235, 2170, 235, 2205, 230, 1010, 235, 1070, 185, 1065, 180, 2200, 205, 1045, 205, 1070, 175, 2205, 205, 1040, 210, 1060, 200, 1045, 210, 1030, 230, 1005, 235, 1040, 235, 1005
};
const uint8_t code_na751Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0xCF, 0x80
};
const struct IrCode code_na751Code = {
  freq_to_timerval(38000),
  17,             // # of pairs
  5,             // # of bits per index
  code_na751Times,
  code_na751Codes
};

const uint16_t code_na752Times[] = {
  8870, 4455, 570, 1745, 570, 580, 570, 1740, 565, 1755, 565, 585, 565, 1750, 565, 580, 570, 575, 570, 585, 565, 1745, 565, 1740, 570, 1750, 565, 41015, 8900, 2265, 565, 65535, 8875, 2260
};
const uint8_t code_na752Codes[] = {
  0x00, 0x44, 0x30, 0x88, 0x64, 0x11, 0x4C, 0x71, 0x05, 0x09, 0x51, 0xC4, 0x32, 0x98, 0xE2, 0x41, 0x8C, 0x83, 0x15, 0x6C, 0x53, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na752Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na752Times,
  code_na752Codes
};

const uint16_t code_na753Times[] = {
  8905, 4445, 575, 570, 570, 580, 570, 575, 565, 585, 565, 580, 570, 1740, 575, 580, 565, 1745, 565, 1750, 575, 1740, 570, 1750, 570, 1745, 570, 1735, 565, 1755, 570, 41010, 8880, 2255, 565, 65535, 8905, 2260
};
const uint8_t code_na753Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x1A, 0x12, 0x65, 0x18, 0x6B, 0x31, 0x84, 0x11, 0x30, 0x64, 0x08, 0x94, 0x66, 0x09, 0xAE, 0x63, 0xE1, 0x19, 0x00
};
const struct IrCode code_na753Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na753Times,
  code_na753Codes
};

const uint16_t code_na754Times[] = {
  8880, 4450, 565, 585, 570, 575, 565, 1740, 570, 580, 570, 1745, 565, 1745, 565, 1750, 565, 580, 575, 1745, 570, 570, 570, 585, 570, 1740, 565, 41015, 8900, 2265, 570, 65535, 8870, 2265
};
const uint8_t code_na754Codes[] = {
  0x00, 0x42, 0x20, 0x84, 0x64, 0x29, 0x4A, 0x62, 0x9D, 0x05, 0x41, 0x4A, 0x84, 0x91, 0x4B, 0x20, 0x82, 0x62, 0x15, 0x85, 0x33, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na754Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na754Times,
  code_na754Codes
};

const uint16_t code_na755Times[] = {
  8900, 4450, 570, 575, 565, 585, 565, 580, 575, 1745, 570, 580, 570, 1735, 575, 570, 570, 1745, 565, 1745, 565, 575, 565, 1755, 570, 1740, 575, 1740, 575, 575, 570, 41010, 8870, 2265, 565, 65535, 8905, 2260
};
const uint8_t code_na755Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC2, 0x3A, 0x10, 0x91, 0xA1, 0x4B, 0x63, 0x10, 0x36, 0x94, 0xE5, 0x2B, 0x84, 0xC2, 0xB1, 0x84, 0x43, 0xE1, 0x19, 0x00
};
const struct IrCode code_na755Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na755Times,
  code_na755Codes
};

const uint16_t code_na756Times[] = {
  8870, 4455, 570, 1745, 565, 1750, 565, 1745, 560, 1750, 570, 1735, 565, 1755, 570, 580, 565, 585, 565, 580, 570, 575, 570, 1740, 565, 590, 570, 570, 570, 1750, 565, 41015, 8905, 2255, 575, 65535, 8870, 2265
};
const uint8_t code_na756Codes[] = {
  0x00, 0x44, 0x31, 0x10, 0xA6, 0x09, 0xD0, 0x93, 0xA9, 0x27, 0x50, 0x84, 0xB1, 0x05, 0x6C, 0x52, 0x4E, 0xA4, 0x1D, 0xAE, 0x23, 0xE1, 0x19, 0x00
};
const struct IrCode code_na756Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na756Times,
  code_na756Codes
};

const uint16_t code_na757Times[] = {
  175, 7765, 175, 11360, 545, 1950, 175, 8815, 170, 2320, 175, 2320, 180, 2315, 175, 18280, 170, 7745, 170, 11370, 535, 1955, 540, 1955, 540, 970, 540, 1950, 535, 1960, 175, 2315, 170, 2330
};
const uint8_t code_na757Codes[] = {
  0x00, 0x44, 0x21, 0x90, 0xA5, 0x29, 0x8E, 0x84, 0xA9, 0x6C, 0x5B, 0x5C, 0xE2, 0xBE, 0x06
};
const struct IrCode code_na757Code = {
  freq_to_timerval(38000),
  24,             // # of pairs
  5,             // # of bits per index
  code_na757Times,
  code_na757Codes
};

const uint16_t code_na758Times[] = {
  170, 23035, 175, 2265, 180, 2285, 170, 2270, 175, 2290, 175, 11600, 220, 2220, 215, 2245, 175, 185, 175, 935, 220, 220, 175, 865, 220, 1250, 170, 1310, 225, 2220, 220, 1245, 225, 215, 175, 870, 170, 1295, 215, 2240, 215, 1255, 220, 9125, 170, 7640, 175, 2285, 170, 2275, 170, 2290, 170, 10145, 180, 10625, 220, 215, 175, 1845, 220, 2225, 220, 1265, 225, 1235, 180, 950, 170, 9190, 175, 7635, 180, 2265, 170, 2285, 170, 2280, 170, 10125, 175, 10620, 215, 2230, 170, 1300, 175, 1850, 215, 1245, 220, 760
};
const uint8_t code_na758Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x87, 0x20, 0x92, 0x8B, 0x30, 0xD3, 0x87, 0x3D, 0x04, 0x52, 0x4D, 0x44, 0x0B, 0x55, 0x65, 0xD8, 0x64, 0x16, 0x9B, 0x3D, 0xC7, 0x5E, 0x7E, 0x02, 0x21, 0x19, 0x02, 0xCC, 0x8A, 0x39, 0x25, 0x99, 0x79, 0xE8, 0x41, 0x1A, 0x53, 0xA9, 0x02, 0xC8, 0x25, 0xCA, 0xEC, 0x7E, 0xD0
};
const struct IrCode code_na758Code = {
  freq_to_timerval(38000),
  66,             // # of pairs
  6,             // # of bits per index
  code_na758Times,
  code_na758Codes
};

const uint16_t code_na759Times[] = {
  7410, 1480, 380, 2740, 375, 2745, 380, 2750, 1630, 1535, 400, 2725, 1655, 1530, 1630, 1540, 405, 2720, 405, 2715, 400, 2720, 4125, 1550, 375, 2750, 380, 2745, 1625, 1540, 405, 2725, 1660, 1530, 1630, 1530, 4125, 1540, 385, 2745, 1625, 1535, 400, 2730, 1650, 1540, 410, 2720
};
const uint8_t code_na759Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x31, 0xAE, 0x7C, 0x22, 0xF2, 0x96, 0x53, 0x6B, 0x69, 0x5B, 0x45, 0x17
};
const struct IrCode code_na759Code = {
  freq_to_timerval(38000),
  32,             // # of pairs
  5,             // # of bits per index
  code_na759Times,
  code_na759Codes
};

const uint16_t code_na760Times[] = {
  4275, 4320, 520, 520, 520, 1595, 515, 1595, 520, 1600, 515, 1600, 515, 525, 520, 510, 515, 530, 520, 515, 515, 1605, 515, 520, 520, 525, 515, 40480, 8750, 2185, 525, 65535, 8720, 2190
};
const uint8_t code_na760Codes[] = {
  0x00, 0x42, 0x11, 0x08, 0x64, 0x11, 0x48, 0x23, 0x18, 0xE8, 0x4A, 0x54, 0xB3, 0x19, 0x6C, 0x31, 0x58, 0x31, 0x28, 0x6A, 0x13, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na760Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na760Times,
  code_na760Codes
};

const uint16_t code_na761Times[] = {
  1325, 430, 445, 1200, 1315, 455, 440, 1205, 1295, 455, 450, 1190, 440, 1210, 1320, 455, 440, 65535, 1320, 435, 440, 1200, 1325, 450, 450, 1200, 1290, 460, 445, 1195, 1325, 445
};
const uint8_t code_na761Codes[] = {
  0x01, 0x23, 0x14, 0x56, 0x31, 0x78, 0x9A, 0xBC, 0x3D, 0xE1, 0xCA, 0xF0
};
const struct IrCode code_na761Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na761Times,
  code_na761Codes
};

const uint16_t code_na762Times[] = {
  8875, 4450, 570, 575, 565, 585, 565, 580, 575, 575, 565, 575, 565, 590, 565, 1745, 565, 1750, 560, 1750, 570, 1735, 565, 1755, 570, 1745, 570, 580, 570, 570, 570, 585, 570, 1740, 565, 41015, 8900, 2265, 565, 65535, 8875, 2265
};
const uint8_t code_na762Codes[] = {
  0x00, 0x44, 0x32, 0x08, 0xA6, 0x09, 0xD0, 0x74, 0x25, 0x4B, 0x63, 0x18, 0x36, 0x35, 0xCF, 0x68, 0x44, 0x76, 0xB2, 0x0C, 0x3C, 0x65, 0x3A, 0x00
};
const struct IrCode code_na762Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na762Times,
  code_na762Codes
};

const uint16_t code_na763Times[] = {
  300, 1790, 295, 745, 295, 750, 300, 745, 300, 735, 295, 1835, 270, 745, 300, 1795, 295, 1800, 295, 740, 295, 1805, 300, 31590, 295, 1830, 295, 1810, 300, 750
};
const uint8_t code_na763Codes[] = {
  0x01, 0x12, 0x31, 0x45, 0x61, 0x72, 0x88, 0x9A, 0xB8, 0x92, 0x31, 0x12, 0xC6, 0x1D, 0x38, 0x8E
};
const struct IrCode code_na763Code = {
  freq_to_timerval(38000),
  32,             // # of pairs
  4,             // # of bits per index
  code_na763Times,
  code_na763Codes
};

const uint16_t code_na764Times[] = {
  180, 2005, 175, 2900, 175, 1995, 175, 2910, 170, 2910, 175, 2000, 170, 2005
};
const uint8_t code_na764Codes[] = {
  0x05, 0x39, 0x70
};
const struct IrCode code_na764Code = {
  freq_to_timerval(38000),
  7,             // # of pairs
  3,             // # of bits per index
  code_na764Times,
  code_na764Codes
};

const uint16_t code_na765Times[] = {
  8900, 4175, 565, 640, 570, 1675, 565, 1675, 565, 645, 570, 630, 570, 640, 570, 635, 565, 1685, 565, 635, 570, 1670, 565, 1680, 570, 645, 565, 40490, 8905, 2245, 565, 65535, 8900, 2250
};
const uint8_t code_na765Codes[] = {
  0x00, 0x44, 0x32, 0x04, 0xA6, 0x38, 0x50, 0x23, 0x1D, 0x24, 0x09, 0xCC, 0xA3, 0x2C, 0xAC, 0x38, 0xD0, 0x75, 0x9C, 0x6B, 0x13, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na765Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na765Times,
  code_na765Codes
};

const uint16_t code_na766Times[] = {
  8895, 4455, 570, 580, 575, 1745, 570, 575, 565, 1750, 575, 1735, 570, 585, 565, 1745, 565, 585, 570, 1740, 570, 1750, 575, 575, 565, 580, 570, 570, 570, 1745, 575, 1740, 570, 1735, 575, 41005, 8880, 2260, 565, 65535, 8900, 2260
};
const uint8_t code_na766Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0xA6, 0x39, 0xD0, 0x90, 0xA4, 0x6A, 0x5B, 0x02, 0x30, 0x85, 0xA6, 0x3B, 0x94, 0x52, 0x3E, 0x04, 0x1C, 0x65, 0x3A, 0x00
};
const struct IrCode code_na766Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na766Times,
  code_na766Codes
};

const uint16_t code_na767Times[] = {
  8880, 4445, 565, 1745, 565, 585, 565, 580, 575, 575, 565, 1750, 575, 570, 570, 1750, 570, 580, 575, 1745, 570, 1740, 570, 1745, 570, 1735, 565, 590, 570, 575, 575, 580, 570, 41010, 8905, 2260, 575, 65535, 8870, 2265
};
const uint8_t code_na767Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x1A, 0x12, 0xA5, 0xA1, 0x8D, 0x28, 0x90, 0xE2, 0x90, 0x6F, 0x70, 0x4A, 0xA1, 0x14, 0x25, 0x54, 0x23, 0x29, 0x80
};
const struct IrCode code_na767Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na767Times,
  code_na767Codes
};

const uint16_t code_na768Times[] = {
  3890, 3855, 525, 980, 530, 975, 530, 970, 525, 975, 530, 1925, 525, 1925, 530, 1915, 530, 1920, 525, 1945, 510, 1925, 530, 980, 1035, 9200, 3870, 3865, 520, 980, 525, 970, 525, 985, 525, 1930, 525, 1950, 505, 1920, 525, 1920, 535, 1920
};
const uint8_t code_na768Codes[] = {
  0x00, 0x44, 0x31, 0x08, 0x85, 0x19, 0x84, 0x71, 0x21, 0x2A, 0x41, 0x8A, 0x33, 0x08, 0xEB, 0x43, 0x1A, 0x41, 0x39, 0xF0, 0x0A, 0x02, 0x61, 0x45, 0xF1, 0x94, 0xE2, 0x62, 0x8E, 0x90, 0xA9, 0x10
};
const struct IrCode code_na768Code = {
  freq_to_timerval(38000),
  51,             // # of pairs
  5,             // # of bits per index
  code_na768Times,
  code_na768Codes
};

const uint16_t code_na769Times[] = {
  8900, 4450, 570, 575, 575, 1740, 570, 1740, 570, 580, 575, 1735, 565, 1750, 575, 575, 565, 580, 570, 570, 570, 585, 570, 1745, 575, 570, 575, 580, 565, 1745, 565, 41015, 8880, 2260, 560, 65535, 8900, 2260
};
const uint8_t code_na769Codes[] = {
  0x00, 0x44, 0x31, 0x10, 0xA6, 0x09, 0x4E, 0x82, 0x09, 0x2A, 0x5A, 0x08, 0x23, 0x99, 0x8D, 0x09, 0x4C, 0x15, 0x9C, 0x6B, 0x73, 0xE1, 0x19, 0x00
};
const struct IrCode code_na769Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na769Times,
  code_na769Codes
};

const uint16_t code_na770Times[] = {
  875, 905, 1745, 925, 880, 915, 880, 1785, 875, 920, 875, 915, 1740, 920, 870, 1800, 875, 910, 1745, 920, 870, 65535, 880, 905, 1740, 930, 875, 1790, 870, 925, 880, 910, 1750, 920, 875, 1800, 870, 915, 1745, 930
};
const uint8_t code_na770Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x15, 0xAE, 0x7C, 0x23, 0x29, 0x80
};
const struct IrCode code_na770Code = {
  freq_to_timerval(38000),
  21,             // # of pairs
  5,             // # of bits per index
  code_na770Times,
  code_na770Codes
};

const uint16_t code_na771Times[] = {
  4760, 1545, 405, 2730, 405, 2725, 400, 2740, 1600, 1515, 400, 2760, 1580, 1530, 1575, 1540, 405, 2760, 400, 2710, 1600, 1535, 410, 2730, 410, 2725, 400, 2730, 1600, 1520, 1570, 1540, 405, 2735, 430, 2705, 1605, 1535, 410, 2720, 1600, 1510, 405, 2765, 1580, 1535, 430, 2710, 1610, 1535
};
const uint8_t code_na771Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0x35, 0xB1, 0xAE, 0x43, 0xCD, 0x08, 0xCA, 0x70, 0x80, 0x69, 0x53, 0xD9, 0xB7, 0xC0
};
const struct IrCode code_na771Code = {
  freq_to_timerval(38000),
  33,             // # of pairs
  5,             // # of bits per index
  code_na771Times,
  code_na771Codes
};

const uint16_t code_na772Times[] = {
  8875, 4455, 570, 580, 565, 1755, 570, 575, 565, 1750, 565, 585, 565, 1740, 570, 585, 570, 1745, 570, 1740, 575, 1740, 570, 570, 570, 1750, 565, 1745, 565, 590, 565, 575, 565, 41015, 8900, 2265, 570, 65535, 8880, 2260
};
const uint8_t code_na772Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x02, 0x90, 0xA9, 0x6C, 0x2A, 0x08, 0xD2, 0x85, 0x2E, 0x48, 0xCA, 0xF2, 0x20, 0x6C, 0x1C, 0x23, 0x29, 0x80
};
const struct IrCode code_na772Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na772Times,
  code_na772Codes
};

const uint16_t code_na773Times[] = {
  170, 315, 175, 800, 335, 135, 600, 230, 170, 65535, 175, 65, 170, 495, 175, 200
};
const uint8_t code_na773Codes[] = {
  0x05, 0x39, 0x77
};
const struct IrCode code_na773Code = {
  freq_to_timerval(38000),
  8,             // # of pairs
  3,             // # of bits per index
  code_na773Times,
  code_na773Codes
};

const uint16_t code_na774Times[] = {
  500, 525, 490, 4035, 500, 4985, 495, 510, 500, 4055, 500, 500, 500, 4050, 495, 4975, 495, 530, 500, 4025, 495, 4990, 490, 515, 495, 4055, 495, 4965, 500, 505, 490, 4060, 495, 505, 500, 65535, 500, 4990, 495, 4050, 495, 4030, 495, 4060, 495, 4970, 490, 4995, 490, 505, 490, 4055
};
const uint8_t code_na774Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0x4E, 0x7C, 0x19, 0x14, 0x26, 0x43, 0x61, 0x66, 0x74, 0x51, 0x4E, 0xAD, 0xAE, 0x37, 0xE3, 0x20
};
const struct IrCode code_na774Code = {
  freq_to_timerval(38000),
  39,             // # of pairs
  5,             // # of bits per index
  code_na774Times,
  code_na774Codes
};

const uint16_t code_na775Times[] = {
  880, 900, 870, 1795, 1770, 905, 870, 915, 875, 915, 880, 905, 875, 920, 880, 1790, 1770, 1785, 875, 65535, 870, 920, 1770, 895, 880, 910, 880, 915, 870, 1800, 1775, 1765
};
const uint8_t code_na775Codes[] = {
  0x01, 0x23, 0x44, 0x56, 0x47, 0x89, 0xA1, 0xB6, 0x4C, 0x64, 0xDE, 0xF0
};
const struct IrCode code_na775Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na775Times,
  code_na775Codes
};

const uint16_t code_na776Times[] = {
  875, 905, 1775, 895, 880, 915, 880, 910, 875, 915, 880, 905, 875, 920, 875, 1795, 880, 65535, 870, 920, 1770, 900, 870, 915, 870, 925, 875, 910, 875, 1800, 1770, 895
};
const uint8_t code_na776Codes[] = {
  0x01, 0x23, 0x44, 0x56, 0x74, 0x18, 0x9A, 0xBC, 0x34, 0x4D, 0xE9, 0xF0
};
const struct IrCode code_na776Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na776Times,
  code_na776Codes
};

const uint16_t code_na777Times[] = {
  3340, 1715, 415, 445, 420, 1285, 420, 440, 415, 450, 420, 445, 420, 435, 410, 445, 410, 450, 415, 1280, 410, 455, 415, 1285, 415, 440, 415, 455, 420, 1280, 410, 1285, 420, 450, 420, 65535, 3335, 1695, 410, 1290, 415, 1290
};
const uint8_t code_na777Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC5, 0x18, 0x4A, 0x72, 0xA1, 0x2A, 0x18, 0x50, 0x14, 0x2D, 0x8D, 0x58, 0x4A, 0x62, 0x8D, 0x84, 0x0B, 0x8A, 0xF5, 0xAD, 0x25, 0x1A, 0xC8, 0xE7, 0x15, 0xF0, 0x14, 0x64, 0x19, 0xA1, 0x8D, 0x20, 0xC8, 0x14, 0x04, 0xD0, 0x70, 0xC8, 0xC2, 0x04, 0xC2, 0x08, 0xE8, 0x15, 0x11, 0x84, 0x08, 0xC2, 0xE4, 0x2D, 0x22, 0x58, 0x54, 0xB0, 0x89, 0xCD, 0x58, 0x44
};
const struct IrCode code_na777Code = {
  freq_to_timerval(38000),
  99,             // # of pairs
  5,             // # of bits per index
  code_na777Times,
  code_na777Codes
};

const uint16_t code_na778Times[] = {
  4410, 4330, 560, 1660, 560, 595, 565, 610, 565, 615, 565, 585, 565, 620, 560, 590, 560, 620, 565, 1655, 560, 625, 565, 590, 560, 615, 565, 1630, 560, 22590, 4440, 4320, 560, 1640, 555, 595, 560, 600, 560, 1630, 565, 1650
};
const uint8_t code_na778Codes[] = {
  0x00, 0x44, 0x31, 0x10, 0xA6, 0x3A, 0x04, 0x31, 0x24, 0xEA, 0x5B, 0x1A, 0xC5, 0xB9, 0xF0, 0x42, 0xD0, 0x75, 0x44, 0x72, 0x42, 0xD1, 0x34, 0x08, 0x62, 0xA0, 0x88
};
const struct IrCode code_na778Code = {
  freq_to_timerval(38000),
  43,             // # of pairs
  5,             // # of bits per index
  code_na778Times,
  code_na778Codes
};

const uint16_t code_na779Times[] = {
  3445, 1765, 415, 485, 420, 1275, 415, 480, 415, 1275, 415, 490, 420, 1265, 410, 1280, 420, 480, 415, 1280, 415, 1270, 410, 485, 410, 495, 420, 1270, 420, 475, 420, 485, 410, 1275, 420, 490, 420, 65535, 3440, 1760, 440, 455, 440, 1255, 440, 465, 445, 1245, 440, 470, 440, 1250, 440, 460, 445, 455, 445, 1240, 445, 460, 445, 1250, 445, 450, 435, 465, 435, 1255
};
const uint8_t code_na779Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x85, 0x10, 0x11, 0xC8, 0x08, 0x40, 0xC9, 0x20, 0xA0, 0x8A, 0x08, 0x12, 0xCC, 0x10, 0x10, 0x88, 0x04, 0xD3, 0x8F, 0x20, 0x32, 0x50, 0x14, 0x22, 0x11, 0x20, 0x40, 0x48, 0x3C, 0x73, 0x82, 0x11, 0x24, 0xD4, 0x55, 0x65, 0xD8, 0x65, 0xA5, 0xDB, 0x65, 0xA7, 0x15, 0x6D, 0x97, 0x5C, 0x55, 0x77, 0x16, 0x69, 0xA7, 0x94, 0x65, 0x67, 0xDE, 0x69, 0xB6, 0x9F, 0x79, 0x95, 0x15, 0x81, 0xB5, 0x97, 0x6D, 0xA7, 0xDE, 0x6A, 0x15, 0x40
};
const struct IrCode code_na779Code = {
  freq_to_timerval(38000),
  99,             // # of pairs
  6,             // # of bits per index
  code_na779Times,
  code_na779Codes
};

const uint16_t code_na780Times[] = {
  8705, 4315, 585, 680, 580, 690, 585, 1720, 580, 1720, 580, 680, 580, 1725, 585, 1715, 585, 685, 585, 1725, 590, 1715, 590, 675, 580, 685, 580, 1730, 585, 41145, 8705, 2215, 585, 65535
};
const uint8_t code_na780Codes[] = {
  0x00, 0x44, 0x11, 0x90, 0xA2, 0x09, 0x0C, 0x71, 0x20, 0x89, 0x52, 0xD0, 0xC3, 0x04, 0x28, 0x08, 0xC6, 0x44, 0x28, 0xED, 0x1B, 0x9F, 0x07, 0x80
};
const struct IrCode code_na780Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na780Times,
  code_na780Codes
};

const uint16_t code_na781Times[] = {
  8890, 4470, 530, 575, 535, 575, 535, 570, 540, 570, 540, 1705, 530, 580, 530, 1710, 530, 1715, 535, 1705, 540, 575, 535, 1710, 530, 570, 530, 585, 535, 1700, 530, 1720, 530, 39045, 8910, 2260, 540, 65535, 8910, 2235
};
const uint8_t code_na781Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x66, 0x31, 0xCC, 0x74, 0x09, 0x2A, 0x19, 0x56, 0x74, 0x2D, 0x8D, 0x19, 0x8C, 0x11, 0x09, 0xCF, 0x3C, 0x23, 0x29, 0x80
};
const struct IrCode code_na781Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na781Times,
  code_na781Codes
};

const uint16_t code_na782Times[] = {
  875, 915, 1775, 905, 880, 925, 870, 1815, 1770, 1800, 880, 1805, 875, 930, 1770, 910, 875, 65535, 875, 925, 880, 920, 870, 1820, 1765, 1795, 1770, 915, 880, 1810, 870, 930
};
const uint8_t code_na782Codes[] = {
  0x01, 0x23, 0x41, 0x56, 0x78, 0x91, 0xAB, 0xCD, 0xEF, 0x70
};
const struct IrCode code_na782Code = {
  freq_to_timerval(38000),
  19,             // # of pairs
  4,             // # of bits per index
  code_na782Times,
  code_na782Codes
};

const uint16_t code_na783Times[] = {
  180, 7755, 175, 2310, 180, 2285, 170, 2315, 170, 2300, 175, 10230, 175, 10725, 225, 1255, 220, 215, 175, 1870, 170, 2295, 170, 1325, 215, 1265, 180, 1315, 215, 2245, 220, 220, 175, 885, 220, 1260, 170, 10705, 175, 7750, 175, 2295, 170, 2305, 180, 10215, 175, 6265, 175, 10730, 220, 1270, 215, 1270, 220, 1255, 175, 875
};
const uint8_t code_na783Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0xCF, 0x84, 0x65, 0x3A, 0x0D, 0x55, 0xB5, 0xF1, 0x1C, 0xE8, 0x3B, 0x47, 0x00
};
const struct IrCode code_na783Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  5,             // # of bits per index
  code_na783Times,
  code_na783Codes
};

const uint16_t code_na784Times[] = {
  530, 1690, 560, 560, 530, 575, 565, 560, 530, 565, 565, 555, 535, 1695, 555, 570, 535, 565, 565, 1690, 540, 560, 530, 1695, 540, 1685, 560, 1690, 565, 1685, 535, 1690, 560, 1685
};
const uint8_t code_na784Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x00, 0x44, 0x72, 0x15, 0x09, 0x41, 0x50, 0x35, 0x05, 0x63, 0x63, 0x56, 0xE7, 0xC0
};
const struct IrCode code_na784Code = {
  freq_to_timerval(38000),
  30,             // # of pairs
  5,             // # of bits per index
  code_na784Times,
  code_na784Codes
};

const uint16_t code_na785Times[] = {
  875, 915, 1775, 905, 880, 925, 870, 925, 875, 1815, 875, 925, 1775, 900, 870, 1820, 880, 920, 1770, 910, 875, 65535, 880, 915, 880, 1815, 875, 920
};
const uint8_t code_na785Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x89, 0xA3, 0x15, 0xB4, 0x51, 0xCD, 0x90
};
const struct IrCode code_na785Code = {
  freq_to_timerval(38000),
  21,             // # of pairs
  4,             // # of bits per index
  code_na785Times,
  code_na785Codes
};

const uint16_t code_na786Times[] = {
  8885, 4475, 540, 570, 530, 1715, 535, 570, 530, 580, 535, 565, 535, 580, 530, 575, 535, 1710, 535, 1705, 535, 1700, 530, 1720, 530, 1710, 530, 585, 535, 575, 540, 1700, 530, 39045, 8915, 2260, 530, 65535, 8905, 2240
};
const uint8_t code_na786Codes[] = {
  0x00, 0x44, 0x32, 0x08, 0xA6, 0x3A, 0x04, 0x94, 0x09, 0x4B, 0x61, 0x04, 0x94, 0x1C, 0x6D, 0x18, 0x9C, 0x32, 0x09, 0xEB, 0x64, 0x23, 0x29, 0x80
};
const struct IrCode code_na786Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na786Times,
  code_na786Codes
};

const uint16_t code_na787Times[] = {
  445, 1695, 455, 1705, 425, 630, 450, 595, 450, 620, 460, 1675, 455, 625, 455, 595, 455, 590, 460, 620, 460, 590, 460, 615, 540, 22750, 455, 1735, 425, 1710, 425, 620, 460, 1680, 455, 600, 450, 625, 455, 615
};
const uint8_t code_na787Codes[] = {
  0x00, 0x42, 0x21, 0x90, 0xA6, 0x38, 0x50, 0x95, 0x2D, 0x09, 0x61, 0x5A, 0xE7, 0xA8, 0x90, 0x48, 0xC3, 0x19, 0x22, 0x71, 0x90
};
const struct IrCode code_na787Code = {
  freq_to_timerval(38000),
  33,             // # of pairs
  5,             // # of bits per index
  code_na787Times,
  code_na787Codes
};

const uint16_t code_na788Times[] = {
  3430, 3445, 875, 2555, 870, 875, 865, 870, 870, 2560, 875, 870, 875, 2550, 870, 870, 870, 865, 865, 2565, 870, 2555, 865, 875, 870, 2565, 870, 2585, 845, 2575, 845, 2590, 845, 870, 870, 32985, 3470, 3430, 875, 865, 875, 875, 875, 860, 870, 2590, 845, 2585, 845, 2580, 840, 875
};
const uint8_t code_na788Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC2, 0x39, 0xCA, 0x84, 0x89, 0x49, 0x59, 0x0A, 0xA6, 0x35, 0xCF, 0x84, 0x64, 0x42, 0xCC, 0xD4, 0x24, 0xD7, 0x51, 0x1D, 0x42, 0x09, 0x0A, 0x11, 0x11, 0x56, 0xBE, 0x32
};
const struct IrCode code_na788Code = {
  freq_to_timerval(38000),
  51,             // # of pairs
  5,             // # of bits per index
  code_na788Times,
  code_na788Codes
};

const uint16_t code_na789Times[] = {
  8875, 4450, 570, 1745, 570, 580, 570, 575, 565, 585, 565, 1740, 570, 1750, 565, 580, 565, 1755, 570, 1740, 570, 570, 570, 585, 575, 570, 565, 1745, 565, 41015, 8900, 2265, 570, 65535, 8875, 2265
};
const uint8_t code_na789Codes[] = {
  0x00, 0x44, 0x32, 0x04, 0xA6, 0x38, 0x90, 0x90, 0x89, 0x4B, 0x08, 0x84, 0xC0, 0x9C, 0x64, 0x38, 0x42, 0xD1, 0x04, 0xA1, 0x6B, 0x9F, 0x08, 0x80
};
const struct IrCode code_na789Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na789Times,
  code_na789Codes
};

const uint16_t code_na790Times[] = {
  8900, 4450, 575, 1740, 570, 575, 565, 585, 565, 580, 570, 585, 565, 1745, 570, 580, 570, 1740, 570, 1745, 575, 1745, 570, 1750, 575, 575, 575, 570, 570, 41010, 8870, 2265, 565, 65535, 8900, 2260
};
const uint8_t code_na790Codes[] = {
  0x00, 0x42, 0x21, 0x90, 0x45, 0x31, 0x0E, 0x80, 0xA5, 0x0A, 0x22, 0x12, 0x84, 0x98, 0xCB, 0x0B, 0x0A, 0x26, 0x0C, 0x43, 0x6B, 0x9F, 0x08, 0x80
};
const struct IrCode code_na790Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na790Times,
  code_na790Codes
};

const uint16_t code_na791Times[] = {
  4275, 4320, 520, 520, 520, 525, 515, 520, 520, 1600, 520, 515, 525, 520, 520, 1595, 525, 1595, 525, 1590, 520, 1590, 515, 1605, 515, 1600, 520, 40475, 8725, 2185, 515, 65535, 8750, 2185
};
const uint8_t code_na791Codes[] = {
  0x00, 0x44, 0x32, 0x04, 0xA6, 0x09, 0xD0, 0x90, 0x91, 0x4B, 0x61, 0xD0, 0x93, 0x84, 0xA6, 0x09, 0x42, 0x50, 0x9D, 0x44, 0x3B, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na791Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na791Times,
  code_na791Codes
};

const uint16_t code_na792Times[] = {
  10380, 4890, 600, 620, 590, 605, 595, 620, 600, 625, 590, 2080, 595, 2080, 600, 2100, 600, 2105, 575, 2100, 590, 2090, 590, 2110, 600, 590, 590, 2115, 595, 600, 595, 625, 595, 2085, 595, 595, 595, 2105, 595, 605, 750, 41150, 8720, 2110, 590, 65535, 8725, 2105
};
const uint8_t code_na792Codes[] = {
  0x00, 0x44, 0x31, 0x10, 0xA4, 0x31, 0xD0, 0x95, 0x2D, 0x8D, 0x73, 0xCC, 0x38, 0x3E, 0x24, 0x74, 0xA6, 0x71, 0x48, 0xCD, 0x35, 0x2B, 0x6B, 0x80
};
const struct IrCode code_na792Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na792Times,
  code_na792Codes
};

const uint16_t code_na793Times[] = {
  8880, 4445, 565, 1745, 565, 1750, 570, 575, 570, 580, 570, 570, 570, 585, 575, 1735, 570, 1740, 565, 1755, 575, 575, 565, 585, 565, 575, 565, 580, 570, 1735, 570, 41010, 8905, 2260, 570, 65535, 8880, 2255
};
const uint8_t code_na793Codes[] = {
  0x00, 0x44, 0x32, 0x10, 0xA6, 0x09, 0x08, 0x71, 0x21, 0x09, 0x22, 0x96, 0xC1, 0x0D, 0xA4, 0x18, 0x84, 0x85, 0x89, 0xC2, 0x43, 0xE1, 0x19, 0x00
};
const struct IrCode code_na793Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na793Times,
  code_na793Codes
};

const uint16_t code_na794Times[] = {
  4270, 4325, 515, 1600, 520, 1600, 520, 1595, 515, 1605, 520, 520, 515, 520, 515, 525, 520, 525, 520, 1590, 520, 515, 525, 520, 520, 1605, 520, 40475, 8755, 2185, 515, 65535, 8725, 2185
};
const uint8_t code_na794Codes[] = {
  0x00, 0x44, 0x32, 0x04, 0x64, 0x09, 0x4A, 0x62, 0x9C, 0xC8, 0x30, 0x46, 0x91, 0x15, 0x4B, 0x31, 0x50, 0x62, 0x85, 0x2C, 0x0B, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na794Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na794Times,
  code_na794Codes
};

const uint16_t code_na795Times[] = {
  7845, 3930, 470, 1450, 465, 495, 470, 1445, 470, 490, 465, 1450, 465, 490, 465, 500, 465, 4415, 465, 1455, 470, 485, 470, 1440, 465, 22095, 7850, 3935, 465, 1445, 470, 495, 475, 485, 475, 4410, 470, 1455
};
const uint8_t code_na795Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x22, 0x12, 0xA0, 0x89, 0x67, 0x30, 0x98, 0xD4, 0x91, 0xCF, 0x19, 0x1F, 0x08, 0x84, 0xD2, 0x20, 0x44, 0xA2, 0x00
};
const struct IrCode code_na795Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na795Times,
  code_na795Codes
};

const uint16_t code_na796Times[] = {
  990, 915, 980, 910, 985, 925, 980, 2830, 980, 935, 980, 2825, 980, 905, 990, 33895, 990, 905, 990, 925, 990, 900, 985, 2840, 980, 915, 980, 2850
};
const uint8_t code_na796Codes[] = {
  0x01, 0x23, 0x45, 0x23, 0x46, 0x78, 0x9A, 0xBC, 0xD1, 0xBC, 0x40
};
const struct IrCode code_na796Code = {
  freq_to_timerval(38000),
  21,             // # of pairs
  4,             // # of bits per index
  code_na796Times,
  code_na796Codes
};

const uint16_t code_na797Times[] = {
  820, 5755, 850, 2490, 840, 2490, 820, 2525, 815, 5725, 845, 2490, 840, 5725, 845, 5755, 845, 5725, 855, 2485
};
const uint8_t code_na797Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x89
};
const struct IrCode code_na797Code = {
  freq_to_timerval(38000),
  10,             // # of pairs
  4,             // # of bits per index
  code_na797Times,
  code_na797Codes
};

const uint16_t code_na798Times[] = {
  5090, 1620, 405, 2600, 405, 2605, 1655, 1615, 410, 2620, 1610, 1605, 1655, 1620, 410, 2625, 380, 2600
};
const uint8_t code_na798Codes[] = {
  0x01, 0x12, 0x34, 0x56, 0x78
};
const struct IrCode code_na798Code = {
  freq_to_timerval(38000),
  10,             // # of pairs
  4,             // # of bits per index
  code_na798Times,
  code_na798Codes
};

const uint16_t code_na799Times[] = {
  8880, 4445, 565, 1745, 565, 585, 570, 580, 570, 1745, 570, 575, 565, 580, 565, 1755, 565, 1750, 570, 1750, 575, 1740, 570, 570, 570, 585, 570, 1740, 570, 41005, 8905, 2255, 565, 65535, 8870, 2265
};
const uint8_t code_na799Codes[] = {
  0x00, 0x44, 0x11, 0x90, 0xA2, 0x30, 0xCE, 0x54, 0x08, 0x29, 0x41, 0x88, 0x61, 0xA9, 0x6C, 0x33, 0x46, 0xA4, 0x14, 0x29, 0x6B, 0x9F, 0x08, 0x80
};
const struct IrCode code_na799Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na799Times,
  code_na799Codes
};

const uint16_t code_na800Times[] = {
  1145, 1010, 6795, 26755, 1150, 995
};
const uint8_t code_na800Codes[] = {
  0x18
};
const struct IrCode code_na800Code = {
  freq_to_timerval(38000),
  3,             // # of pairs
  2,             // # of bits per index
  code_na800Times,
  code_na800Codes
};

const uint16_t code_na801Times[] = {
  1145, 1010, 1120, 1005, 1145, 1990, 1115, 26760, 1145, 1005, 1125, 1005
};
const uint8_t code_na801Codes[] = {
  0x05, 0x39, 0x50
};
const struct IrCode code_na801Code = {
  freq_to_timerval(38000),
  7,             // # of pairs
  3,             // # of bits per index
  code_na801Times,
  code_na801Codes
};

const uint16_t code_na802Times[] = {
  170, 46240
};
const uint8_t code_na802Codes[] = {
  0x00
};
const struct IrCode code_na802Code = {
  freq_to_timerval(38000),
  1,             // # of pairs
  1,             // # of bits per index
  code_na802Times,
  code_na802Codes
};

const uint16_t code_na803Times[] = {
  8905, 4165, 570, 1670, 570, 1680, 565, 640, 570, 635, 565, 645, 570, 645, 570, 1675, 565, 1685, 565, 635, 565, 1680, 565, 1675, 570, 630, 570, 640, 570, 40485, 8900, 2250, 570, 65535, 8955, 2195
};
const uint8_t code_na803Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x86, 0x38, 0xD0, 0x95, 0x1D, 0x62, 0x20, 0xC8, 0x34, 0x0D, 0x8D, 0x21, 0xD4, 0x16, 0xA8, 0x22, 0x53, 0x9F, 0x08, 0x80
};
const struct IrCode code_na803Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na803Times,
  code_na803Codes
};

const uint16_t code_na804Times[] = {
  445, 1190, 450, 1195, 445, 1195, 445, 1205, 445, 1200, 1315, 460, 450, 1190, 450, 34490, 440, 1205, 1315, 435, 440, 1200, 450, 1200
};
const uint8_t code_na804Codes[] = {
  0x01, 0x23, 0x45, 0x24, 0x14, 0x67, 0x32, 0x48, 0x49, 0xAB, 0x84, 0xA0
};
const struct IrCode code_na804Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na804Times,
  code_na804Codes
};

const uint16_t code_na805Times[] = {
  4270, 4325, 520, 1595, 515, 1605, 515, 1595, 520, 520, 520, 515, 515, 530, 520, 1600, 515, 525, 515, 520, 520, 525, 515, 1600, 520, 1590, 515, 40480, 8750, 2185, 525, 65535, 8720, 2190
};
const uint8_t code_na805Codes[] = {
  0x00, 0x44, 0x32, 0x10, 0xA6, 0x21, 0x08, 0x40, 0x84, 0x67, 0x0A, 0x04, 0x95, 0x21, 0x2A, 0x42, 0xC8, 0x31, 0x2C, 0x62, 0x63, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na805Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na805Times,
  code_na805Codes
};

const uint16_t code_na806Times[] = {
  245, 3005, 245, 155, 180, 1005, 250, 115, 635, 595, 380, 680, 220, 155, 175, 530, 215, 155, 175, 24965, 245, 3040, 220, 995, 250, 120, 215, 485, 280, 780, 175, 165, 170, 570, 385, 680, 175, 65535, 245, 120, 195, 505, 170, 530, 275, 780, 170, 170, 180, 560
};
const uint8_t code_na806Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x2A, 0x12, 0xA1, 0xAD, 0x8D, 0x19, 0xDC, 0xF8, 0x45, 0x12, 0x53, 0x17, 0x3A, 0x32, 0xB6, 0xBE, 0x0A, 0x80
};
const struct IrCode code_na806Code = {
  freq_to_timerval(38000),
  36,             // # of pairs
  5,             // # of bits per index
  code_na806Times,
  code_na806Codes
};

const uint16_t code_na807Times[] = {
  8870, 4455, 570, 580, 575, 570, 570, 1745, 570, 575, 565, 585, 565, 580, 565, 1745, 565, 1750, 565, 1740, 570, 1740, 575, 575, 570, 585, 570, 41005, 8905, 2260, 575, 65535, 8870, 2265
};
const uint8_t code_na807Codes[] = {
  0x00, 0x42, 0x20, 0x8C, 0x85, 0x30, 0xC6, 0x74, 0x15, 0x23, 0x39, 0xD0, 0xA4, 0x04, 0xE8, 0x51, 0x0A, 0x65, 0xA0, 0x4C, 0x0B, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na807Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na807Times,
  code_na807Codes
};

const uint16_t code_na808Times[] = {
  4280, 4320, 520, 515, 520, 520, 515, 530, 520, 1595, 515, 1605, 515, 1600, 520, 1600, 515, 525, 515, 520, 520, 525, 515, 1595, 515, 40480, 8750, 2185, 525, 65535, 8720, 2190
};
const uint8_t code_na808Codes[] = {
  0x01, 0x21, 0x22, 0x13, 0x24, 0x56, 0x74, 0x67, 0x46, 0x64, 0x58, 0x9A, 0x88, 0x81, 0x85, 0xB5, 0x4C, 0xDE, 0xF0
};
const struct IrCode code_na808Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  4,             // # of bits per index
  code_na808Times,
  code_na808Codes
};

const uint16_t code_na809Times[] = {
  2745, 8425, 2745, 19605, 2745, 19600, 2740, 8430, 2740, 19610, 2745, 8420, 2745, 19610
};
const uint8_t code_na809Codes[] = {
  0x05, 0x31, 0x2E, 0x34
};
const struct IrCode code_na809Code = {
  freq_to_timerval(38000),
  10,             // # of pairs
  3,             // # of bits per index
  code_na809Times,
  code_na809Codes
};

const uint16_t code_na810Times[] = {
  170, 6685, 175, 4890, 175, 10380, 370, 850, 820, 2500, 265, 2480, 840, 2490, 840, 2475, 845, 2485, 840, 2480, 840, 2495, 835, 2475, 845, 845, 845, 37010, 170, 6680, 375, 850, 925, 2395, 845, 2490, 175, 10385, 250, 2490, 170, 10385, 245, 2495
};
const uint8_t code_na810Codes[] = {
  0x00, 0x44, 0x32, 0x08, 0xA6, 0x3A, 0x12, 0xA5, 0xB1, 0xAE, 0x08, 0x9F, 0x08, 0xCA, 0x74, 0xA8
};
const struct IrCode code_na810Code = {
  freq_to_timerval(38000),
  25,             // # of pairs
  5,             // # of bits per index
  code_na810Times,
  code_na810Codes
};

const uint16_t code_na811Times[] = {
  8900, 4455, 570, 580, 575, 575, 575, 1735, 565, 585, 565, 580, 570, 575, 565, 1750, 570, 1740, 570, 1745, 575, 1740, 575, 580, 575, 570, 565, 1740, 570, 1750, 575, 41005, 8875, 2260, 570, 65535, 8905, 2255
};
const uint8_t code_na811Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x12, 0x65, 0x25, 0x0B, 0x31, 0x42, 0x63, 0xA9, 0x81, 0x0A, 0x94, 0x83, 0x09, 0xAE, 0x53, 0xE1, 0x19, 0x00
};
const struct IrCode code_na811Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na811Times,
  code_na811Codes
};

const uint16_t code_na812Times[] = {
  8870, 4455, 570, 1745, 565, 1750, 565, 1745, 565, 585, 570, 585, 570, 580, 570, 575, 565, 580, 575, 575, 570, 570, 570, 1740, 570, 1750, 565, 41015, 8905, 2255, 565, 65535, 8870, 2265
};
const uint8_t code_na812Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0x65, 0x31, 0xC8, 0x81, 0x19, 0x01, 0x1A, 0x02, 0x84, 0x89, 0x45, 0x32, 0xCC, 0x31, 0x24, 0x6C, 0x13, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na812Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na812Times,
  code_na812Codes
};

const uint16_t code_na813Times[] = {
  180, 2645, 180, 8175, 170, 2645, 175, 8180, 175, 2650, 175, 8175, 175, 2640, 170, 5420, 175, 5415, 170, 2650, 175, 2645, 175, 5410, 175, 28830, 170, 8185, 170, 2655, 170, 5410
};
const uint8_t code_na813Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x89, 0xA0, 0xAB, 0xC4, 0xD9, 0x5E, 0x56, 0xF7, 0x4A, 0x6E, 0x70
};
const struct IrCode code_na813Code = {
  freq_to_timerval(38000),
  29,             // # of pairs
  4,             // # of bits per index
  code_na813Times,
  code_na813Codes
};

const uint16_t code_na814Times[] = {
  175, 2650, 175, 8180, 175, 2640, 170, 8185, 170, 2655, 170, 8180, 170, 2645, 175, 2645, 555, 2265, 560, 5025, 175, 5410, 175, 5420, 175, 5415, 170, 28835, 170, 2650, 175, 8185, 170, 8190, 170, 5415
};
const uint8_t code_na814Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0xCF, 0x71, 0x4F, 0x03, 0x9D, 0xCC, 0x54, 0x62
};
const struct IrCode code_na814Code = {
  freq_to_timerval(38000),
  27,             // # of pairs
  5,             // # of bits per index
  code_na814Times,
  code_na814Codes
};

const uint16_t code_na815Times[] = {
  180, 705, 265, 140, 270, 135, 175, 175, 200, 235, 180, 65535, 175, 300, 170, 85, 275, 130, 170, 230
};
const uint8_t code_na815Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x81, 0x90
};
const struct IrCode code_na815Code = {
  freq_to_timerval(38000),
  11,             // # of pairs
  4,             // # of bits per index
  code_na815Times,
  code_na815Codes
};

const uint16_t code_na816Times[] = {
  555, 1920, 585, 3810, 580, 3780, 580, 3820, 580, 1920, 555, 1940, 545, 1920
};
const uint8_t code_na816Codes[] = {
  0x05, 0x39, 0x70
};
const struct IrCode code_na816Code = {
  freq_to_timerval(38000),
  7,             // # of pairs
  3,             // # of bits per index
  code_na816Times,
  code_na816Codes
};

const uint16_t code_na817Times[] = {
  475, 1470, 465, 3480, 475, 3470, 475, 3475, 475, 1465, 470, 1470, 475, 27475, 470, 1475, 470, 3475
};
const uint8_t code_na817Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x81, 0x20, 0x00
};
const struct IrCode code_na817Code = {
  freq_to_timerval(38000),
  13,             // # of pairs
  4,             // # of bits per index
  code_na817Times,
  code_na817Codes
};

const uint16_t code_na818Times[] = {
  300, 2190, 235, 2170, 235, 2205, 230, 1010, 235, 1070, 185, 1065, 180, 2200, 205, 1045, 205, 1070, 175, 2205, 205, 1040, 210, 1060, 200, 1045, 210, 1030, 230, 1005, 235, 1040, 235, 1005
};
const uint8_t code_na818Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0xCF, 0x80
};
const struct IrCode code_na818Code = {
  freq_to_timerval(38000),
  17,             // # of pairs
  5,             // # of bits per index
  code_na818Times,
  code_na818Codes
};

const uint16_t code_na819Times[] = {
  8870, 4455, 570, 1745, 570, 580, 570, 1740, 565, 1755, 565, 585, 565, 1750, 565, 580, 570, 575, 570, 585, 565, 1745, 565, 1740, 570, 1750, 565, 41015, 8900, 2265, 565, 65535, 8875, 2260
};
const uint8_t code_na819Codes[] = {
  0x00, 0x44, 0x30, 0x88, 0x64, 0x11, 0x4C, 0x71, 0x05, 0x09, 0x51, 0xC4, 0x32, 0x98, 0xE2, 0x41, 0x8C, 0x83, 0x15, 0x6C, 0x53, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na819Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na819Times,
  code_na819Codes
};

const uint16_t code_na820Times[] = {
  8905, 4445, 575, 570, 570, 580, 570, 575, 565, 585, 565, 580, 570, 1740, 575, 580, 565, 1745, 565, 1750, 575, 1740, 570, 1750, 570, 1745, 570, 1735, 565, 1755, 570, 41010, 8880, 2255, 565, 65535, 8905, 2260
};
const uint8_t code_na820Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x1A, 0x12, 0x65, 0x18, 0x6B, 0x31, 0x84, 0x11, 0x30, 0x64, 0x08, 0x94, 0x66, 0x09, 0xAE, 0x63, 0xE1, 0x19, 0x00
};
const struct IrCode code_na820Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na820Times,
  code_na820Codes
};

const uint16_t code_na821Times[] = {
  8880, 4450, 565, 585, 570, 575, 565, 1740, 570, 580, 570, 1745, 565, 1745, 565, 1750, 565, 580, 575, 1745, 570, 570, 570, 585, 570, 1740, 565, 41015, 8900, 2265, 570, 65535, 8870, 2265
};
const uint8_t code_na821Codes[] = {
  0x00, 0x42, 0x20, 0x84, 0x64, 0x29, 0x4A, 0x62, 0x9D, 0x05, 0x41, 0x4A, 0x84, 0x91, 0x4B, 0x20, 0x82, 0x62, 0x15, 0x85, 0x33, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na821Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na821Times,
  code_na821Codes
};

const uint16_t code_na822Times[] = {
  8900, 4450, 570, 575, 565, 585, 565, 580, 575, 1745, 570, 580, 570, 1735, 575, 570, 570, 1745, 565, 1745, 565, 575, 565, 1755, 570, 1740, 575, 1740, 575, 575, 570, 41010, 8870, 2265, 565, 65535, 8905, 2260
};
const uint8_t code_na822Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC2, 0x3A, 0x10, 0x91, 0xA1, 0x4B, 0x63, 0x10, 0x36, 0x94, 0xE5, 0x2B, 0x84, 0xC2, 0xB1, 0x84, 0x43, 0xE1, 0x19, 0x00
};
const struct IrCode code_na822Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na822Times,
  code_na822Codes
};

const uint16_t code_na823Times[] = {
  8870, 4455, 570, 1745, 565, 1750, 565, 1745, 560, 1750, 570, 1735, 565, 1755, 570, 580, 565, 585, 565, 580, 570, 575, 570, 1740, 565, 590, 570, 570, 570, 1750, 565, 41015, 8905, 2255, 575, 65535, 8870, 2265
};
const uint8_t code_na823Codes[] = {
  0x00, 0x44, 0x31, 0x10, 0xA6, 0x09, 0xD0, 0x93, 0xA9, 0x27, 0x50, 0x84, 0xB1, 0x05, 0x6C, 0x52, 0x4E, 0xA4, 0x1D, 0xAE, 0x23, 0xE1, 0x19, 0x00
};
const struct IrCode code_na823Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na823Times,
  code_na823Codes
};

const uint16_t code_na824Times[] = {
  175, 7765, 175, 11360, 545, 1950, 175, 8815, 170, 2320, 175, 2320, 180, 2315, 175, 18280, 170, 7745, 170, 11370, 535, 1955, 540, 1955, 540, 970, 540, 1950, 535, 1960, 175, 2315, 170, 2330
};
const uint8_t code_na824Codes[] = {
  0x00, 0x44, 0x21, 0x90, 0xA5, 0x29, 0x8E, 0x84, 0xA9, 0x6C, 0x5B, 0x5C, 0xE2, 0xBE, 0x06
};
const struct IrCode code_na824Code = {
  freq_to_timerval(38000),
  24,             // # of pairs
  5,             // # of bits per index
  code_na824Times,
  code_na824Codes
};

const uint16_t code_na825Times[] = {
  170, 23035, 175, 2265, 180, 2285, 170, 2270, 175, 2290, 175, 11600, 220, 2220, 215, 2245, 175, 185, 175, 935, 220, 220, 175, 865, 220, 1250, 170, 1310, 225, 2220, 220, 1245, 225, 215, 175, 870, 170, 1295, 215, 2240, 215, 1255, 220, 9125, 170, 7640, 175, 2285, 170, 2275, 170, 2290, 170, 10145, 180, 10625, 220, 215, 175, 1845, 220, 2225, 220, 1265, 225, 1235, 180, 950, 170, 9190, 175, 7635, 180, 2265, 170, 2285, 170, 2280, 170, 10125, 175, 10620, 215, 2230, 170, 1300, 175, 1850, 215, 1245, 220, 760
};
const uint8_t code_na825Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x87, 0x20, 0x92, 0x8B, 0x30, 0xD3, 0x87, 0x3D, 0x04, 0x52, 0x4D, 0x44, 0x0B, 0x55, 0x65, 0xD8, 0x64, 0x16, 0x9B, 0x3D, 0xC7, 0x5E, 0x7E, 0x02, 0x21, 0x19, 0x02, 0xCC, 0x8A, 0x39, 0x25, 0x99, 0x79, 0xE8, 0x41, 0x1A, 0x53, 0xA9, 0x02, 0xC8, 0x25, 0xCA, 0xEC, 0x7E, 0xD0
};
const struct IrCode code_na825Code = {
  freq_to_timerval(38000),
  66,             // # of pairs
  6,             // # of bits per index
  code_na825Times,
  code_na825Codes
};

const uint16_t code_na826Times[] = {
  7410, 1480, 380, 2740, 375, 2745, 380, 2750, 1630, 1535, 400, 2725, 1655, 1530, 1630, 1540, 405, 2720, 405, 2715, 400, 2720, 4125, 1550, 375, 2750, 380, 2745, 1625, 1540, 405, 2725, 1660, 1530, 1630, 1530, 4125, 1540, 385, 2745, 1625, 1535, 400, 2730, 1650, 1540, 410, 2720
};
const uint8_t code_na826Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x31, 0xAE, 0x7C, 0x22, 0xF2, 0x96, 0x53, 0x6B, 0x69, 0x5B, 0x45, 0x17
};
const struct IrCode code_na826Code = {
  freq_to_timerval(38000),
  32,             // # of pairs
  5,             // # of bits per index
  code_na826Times,
  code_na826Codes
};

const uint16_t code_na827Times[] = {
  4275, 4320, 520, 520, 520, 1595, 515, 1595, 520, 1600, 515, 1600, 515, 525, 520, 510, 515, 530, 520, 515, 515, 1605, 515, 520, 520, 525, 515, 40480, 8750, 2185, 525, 65535, 8720, 2190
};
const uint8_t code_na827Codes[] = {
  0x00, 0x42, 0x11, 0x08, 0x64, 0x11, 0x48, 0x23, 0x18, 0xE8, 0x4A, 0x54, 0xB3, 0x19, 0x6C, 0x31, 0x58, 0x31, 0x28, 0x6A, 0x13, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na827Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na827Times,
  code_na827Codes
};

const uint16_t code_na828Times[] = {
  1325, 430, 445, 1200, 1315, 455, 440, 1205, 1295, 455, 450, 1190, 440, 1210, 1320, 455, 440, 65535, 1320, 435, 440, 1200, 1325, 450, 450, 1200, 1290, 460, 445, 1195, 1325, 445
};
const uint8_t code_na828Codes[] = {
  0x01, 0x23, 0x14, 0x56, 0x31, 0x78, 0x9A, 0xBC, 0x3D, 0xE1, 0xCA, 0xF0
};
const struct IrCode code_na828Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na828Times,
  code_na828Codes
};

const uint16_t code_na829Times[] = {
  8875, 4450, 570, 575, 565, 585, 565, 580, 575, 575, 565, 575, 565, 590, 565, 1745, 565, 1750, 560, 1750, 570, 1735, 565, 1755, 570, 1745, 570, 580, 570, 570, 570, 585, 570, 1740, 565, 41015, 8900, 2265, 565, 65535, 8875, 2265
};
const uint8_t code_na829Codes[] = {
  0x00, 0x44, 0x32, 0x08, 0xA6, 0x09, 0xD0, 0x74, 0x25, 0x4B, 0x63, 0x18, 0x36, 0x35, 0xCF, 0x68, 0x44, 0x76, 0xB2, 0x0C, 0x3C, 0x65, 0x3A, 0x00
};
const struct IrCode code_na829Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na829Times,
  code_na829Codes
};

const uint16_t code_na830Times[] = {
  300, 1790, 295, 745, 295, 750, 300, 745, 300, 735, 295, 1835, 270, 745, 300, 1795, 295, 1800, 295, 740, 295, 1805, 300, 31590, 295, 1830, 295, 1810, 300, 750
};
const uint8_t code_na830Codes[] = {
  0x01, 0x12, 0x31, 0x45, 0x61, 0x72, 0x88, 0x9A, 0xB8, 0x92, 0x31, 0x12, 0xC6, 0x1D, 0x38, 0x8E
};
const struct IrCode code_na830Code = {
  freq_to_timerval(38000),
  32,             // # of pairs
  4,             // # of bits per index
  code_na830Times,
  code_na830Codes
};

const uint16_t code_na831Times[] = {
  180, 2005, 175, 2900, 175, 1995, 175, 2910, 170, 2910, 175, 2000, 170, 2005
};
const uint8_t code_na831Codes[] = {
  0x05, 0x39, 0x70
};
const struct IrCode code_na831Code = {
  freq_to_timerval(38000),
  7,             // # of pairs
  3,             // # of bits per index
  code_na831Times,
  code_na831Codes
};

const uint16_t code_na832Times[] = {
  8900, 4175, 565, 640, 570, 1675, 565, 1675, 565, 645, 570, 630, 570, 640, 570, 635, 565, 1685, 565, 635, 570, 1670, 565, 1680, 570, 645, 565, 40490, 8905, 2245, 565, 65535, 8900, 2250
};
const uint8_t code_na832Codes[] = {
  0x00, 0x44, 0x32, 0x04, 0xA6, 0x38, 0x50, 0x23, 0x1D, 0x24, 0x09, 0xCC, 0xA3, 0x2C, 0xAC, 0x38, 0xD0, 0x75, 0x9C, 0x6B, 0x13, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na832Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na832Times,
  code_na832Codes
};

const uint16_t code_na833Times[] = {
  8895, 4455, 570, 580, 575, 1745, 570, 575, 565, 1750, 575, 1735, 570, 585, 565, 1745, 565, 585, 570, 1740, 570, 1750, 575, 575, 565, 580, 570, 570, 570, 1745, 575, 1740, 570, 1735, 575, 41005, 8880, 2260, 565, 65535, 8900, 2260
};
const uint8_t code_na833Codes[] = {
  0x00, 0x44, 0x32, 0x0C, 0xA6, 0x39, 0xD0, 0x90, 0xA4, 0x6A, 0x5B, 0x02, 0x30, 0x85, 0xA6, 0x3B, 0x94, 0x52, 0x3E, 0x04, 0x1C, 0x65, 0x3A, 0x00
};
const struct IrCode code_na833Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na833Times,
  code_na833Codes
};

const uint16_t code_na834Times[] = {
  8880, 4445, 565, 1745, 565, 585, 565, 580, 575, 575, 565, 1750, 575, 570, 570, 1750, 570, 580, 575, 1745, 570, 1740, 570, 1745, 570, 1735, 565, 590, 570, 575, 575, 580, 570, 41010, 8905, 2260, 575, 65535, 8870, 2265
};
const uint8_t code_na834Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x1A, 0x12, 0xA5, 0xA1, 0x8D, 0x28, 0x90, 0xE2, 0x90, 0x6F, 0x70, 0x4A, 0xA1, 0x14, 0x25, 0x54, 0x23, 0x29, 0x80
};
const struct IrCode code_na834Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na834Times,
  code_na834Codes
};

const uint16_t code_na835Times[] = {
  3890, 3855, 525, 980, 530, 975, 530, 970, 525, 975, 530, 1925, 525, 1925, 530, 1915, 530, 1920, 525, 1945, 510, 1925, 530, 980, 1035, 9200, 3870, 3865, 520, 980, 525, 970, 525, 985, 525, 1930, 525, 1950, 505, 1920, 525, 1920, 535, 1920
};
const uint8_t code_na835Codes[] = {
  0x00, 0x44, 0x31, 0x08, 0x85, 0x19, 0x84, 0x71, 0x21, 0x2A, 0x41, 0x8A, 0x33, 0x08, 0xEB, 0x43, 0x1A, 0x41, 0x39, 0xF0, 0x0A, 0x02, 0x61, 0x45, 0xF1, 0x94, 0xE2, 0x62, 0x8E, 0x90, 0xA9, 0x10
};
const struct IrCode code_na835Code = {
  freq_to_timerval(38000),
  51,             // # of pairs
  5,             // # of bits per index
  code_na835Times,
  code_na835Codes
};

const uint16_t code_na836Times[] = {
  8900, 4450, 570, 575, 575, 1740, 570, 1740, 570, 580, 575, 1735, 565, 1750, 575, 575, 565, 580, 570, 570, 570, 585, 570, 1745, 575, 570, 575, 580, 565, 1745, 565, 41015, 8880, 2260, 560, 65535, 8900, 2260
};
const uint8_t code_na836Codes[] = {
  0x00, 0x44, 0x31, 0x10, 0xA6, 0x09, 0x4E, 0x82, 0x09, 0x2A, 0x5A, 0x08, 0x23, 0x99, 0x8D, 0x09, 0x4C, 0x15, 0x9C, 0x6B, 0x73, 0xE1, 0x19, 0x00
};
const struct IrCode code_na836Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na836Times,
  code_na836Codes
};

const uint16_t code_na837Times[] = {
  875, 905, 1745, 925, 880, 915, 880, 1785, 875, 920, 875, 915, 1740, 920, 870, 1800, 875, 910, 1745, 920, 870, 65535, 880, 905, 1740, 930, 875, 1790, 870, 925, 880, 910, 1750, 920, 875, 1800, 870, 915, 1745, 930
};
const uint8_t code_na837Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x15, 0xAE, 0x7C, 0x23, 0x29, 0x80
};
const struct IrCode code_na837Code = {
  freq_to_timerval(38000),
  21,             // # of pairs
  5,             // # of bits per index
  code_na837Times,
  code_na837Codes
};

const uint16_t code_na838Times[] = {
  4760, 1545, 405, 2730, 405, 2725, 400, 2740, 1600, 1515, 400, 2760, 1580, 1530, 1575, 1540, 405, 2760, 400, 2710, 1600, 1535, 410, 2730, 410, 2725, 400, 2730, 1600, 1520, 1570, 1540, 405, 2735, 430, 2705, 1605, 1535, 410, 2720, 1600, 1510, 405, 2765, 1580, 1535, 430, 2710, 1610, 1535
};
const uint8_t code_na838Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0x35, 0xB1, 0xAE, 0x43, 0xCD, 0x08, 0xCA, 0x70, 0x80, 0x69, 0x53, 0xD9, 0xB7, 0xC0
};
const struct IrCode code_na838Code = {
  freq_to_timerval(38000),
  33,             // # of pairs
  5,             // # of bits per index
  code_na838Times,
  code_na838Codes
};

const uint16_t code_na839Times[] = {
  8875, 4455, 570, 580, 565, 1755, 570, 575, 565, 1750, 565, 585, 565, 1740, 570, 585, 570, 1745, 570, 1740, 575, 1740, 570, 570, 570, 1750, 565, 1745, 565, 590, 565, 575, 565, 41015, 8900, 2265, 570, 65535, 8880, 2260
};
const uint8_t code_na839Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x02, 0x90, 0xA9, 0x6C, 0x2A, 0x08, 0xD2, 0x85, 0x2E, 0x48, 0xCA, 0xF2, 0x20, 0x6C, 0x1C, 0x23, 0x29, 0x80
};
const struct IrCode code_na839Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na839Times,
  code_na839Codes
};

const uint16_t code_na840Times[] = {
  170, 315, 175, 800, 335, 135, 600, 230, 170, 65535, 175, 65, 170, 495, 175, 200
};
const uint8_t code_na840Codes[] = {
  0x05, 0x39, 0x77
};
const struct IrCode code_na840Code = {
  freq_to_timerval(38000),
  8,             // # of pairs
  3,             // # of bits per index
  code_na840Times,
  code_na840Codes
};

const uint16_t code_na841Times[] = {
  500, 525, 490, 4035, 500, 4985, 495, 510, 500, 4055, 500, 500, 500, 4050, 495, 4975, 495, 530, 500, 4025, 495, 4990, 490, 515, 495, 4055, 495, 4965, 500, 505, 490, 4060, 495, 505, 500, 65535, 500, 4990, 495, 4050, 495, 4030, 495, 4060, 495, 4970, 490, 4995, 490, 505, 490, 4055
};
const uint8_t code_na841Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0x4E, 0x7C, 0x19, 0x14, 0x26, 0x43, 0x61, 0x66, 0x74, 0x51, 0x4E, 0xAD, 0xAE, 0x37, 0xE3, 0x20
};
const struct IrCode code_na841Code = {
  freq_to_timerval(38000),
  39,             // # of pairs
  5,             // # of bits per index
  code_na841Times,
  code_na841Codes
};

const uint16_t code_na842Times[] = {
  880, 900, 870, 1795, 1770, 905, 870, 915, 875, 915, 880, 905, 875, 920, 880, 1790, 1770, 1785, 875, 65535, 870, 920, 1770, 895, 880, 910, 880, 915, 870, 1800, 1775, 1765
};
const uint8_t code_na842Codes[] = {
  0x01, 0x23, 0x44, 0x56, 0x47, 0x89, 0xA1, 0xB6, 0x4C, 0x64, 0xDE, 0xF0
};
const struct IrCode code_na842Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na842Times,
  code_na842Codes
};

const uint16_t code_na843Times[] = {
  875, 905, 1775, 895, 880, 915, 880, 910, 875, 915, 880, 905, 875, 920, 875, 1795, 880, 65535, 870, 920, 1770, 900, 870, 915, 870, 925, 875, 910, 875, 1800, 1770, 895
};
const uint8_t code_na843Codes[] = {
  0x01, 0x23, 0x44, 0x56, 0x74, 0x18, 0x9A, 0xBC, 0x34, 0x4D, 0xE9, 0xF0
};
const struct IrCode code_na843Code = {
  freq_to_timerval(38000),
  23,             // # of pairs
  4,             // # of bits per index
  code_na843Times,
  code_na843Codes
};

const uint16_t code_na844Times[] = {
  3340, 1715, 415, 445, 420, 1285, 420, 440, 415, 450, 420, 445, 420, 435, 410, 445, 410, 450, 415, 1280, 410, 455, 415, 1285, 415, 440, 415, 455, 420, 1280, 410, 1285, 420, 450, 420, 65535, 3335, 1695, 410, 1290, 415, 1290
};
const uint8_t code_na844Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC5, 0x18, 0x4A, 0x72, 0xA1, 0x2A, 0x18, 0x50, 0x14, 0x2D, 0x8D, 0x58, 0x4A, 0x62, 0x8D, 0x84, 0x0B, 0x8A, 0xF5, 0xAD, 0x25, 0x1A, 0xC8, 0xE7, 0x15, 0xF0, 0x14, 0x64, 0x19, 0xA1, 0x8D, 0x20, 0xC8, 0x14, 0x04, 0xD0, 0x70, 0xC8, 0xC2, 0x04, 0xC2, 0x08, 0xE8, 0x15, 0x11, 0x84, 0x08, 0xC2, 0xE4, 0x2D, 0x22, 0x58, 0x54, 0xB0, 0x89, 0xCD, 0x58, 0x44
};
const struct IrCode code_na844Code = {
  freq_to_timerval(38000),
  99,             // # of pairs
  5,             // # of bits per index
  code_na844Times,
  code_na844Codes
};

const uint16_t code_na845Times[] = {
  4410, 4330, 560, 1660, 560, 595, 565, 610, 565, 615, 565, 585, 565, 620, 560, 590, 560, 620, 565, 1655, 560, 625, 565, 590, 560, 615, 565, 1630, 560, 22590, 4440, 4320, 560, 1640, 555, 595, 560, 600, 560, 1630, 565, 1650
};
const uint8_t code_na845Codes[] = {
  0x00, 0x44, 0x31, 0x10, 0xA6, 0x3A, 0x04, 0x31, 0x24, 0xEA, 0x5B, 0x1A, 0xC5, 0xB9, 0xF0, 0x42, 0xD0, 0x75, 0x44, 0x72, 0x42, 0xD1, 0x34, 0x08, 0x62, 0xA0, 0x88
};
const struct IrCode code_na845Code = {
  freq_to_timerval(38000),
  43,             // # of pairs
  5,             // # of bits per index
  code_na845Times,
  code_na845Codes
};

const uint16_t code_na846Times[] = {
  3445, 1765, 415, 485, 420, 1275, 415, 480, 415, 1275, 415, 490, 420, 1265, 410, 1280, 420, 480, 415, 1280, 415, 1270, 410, 485, 410, 495, 420, 1270, 420, 475, 420, 485, 410, 1275, 420, 490, 420, 65535, 3440, 1760, 440, 455, 440, 1255, 440, 465, 445, 1245, 440, 470, 440, 1250, 440, 460, 445, 455, 445, 1240, 445, 460, 445, 1250, 445, 450, 435, 465, 435, 1255
};
const uint8_t code_na846Codes[] = {
  0x00, 0x10, 0x83, 0x10, 0x51, 0x85, 0x10, 0x11, 0xC8, 0x08, 0x40, 0xC9, 0x20, 0xA0, 0x8A, 0x08, 0x12, 0xCC, 0x10, 0x10, 0x88, 0x04, 0xD3, 0x8F, 0x20, 0x32, 0x50, 0x14, 0x22, 0x11, 0x20, 0x40, 0x48, 0x3C, 0x73, 0x82, 0x11, 0x24, 0xD4, 0x55, 0x65, 0xD8, 0x65, 0xA5, 0xDB, 0x65, 0xA7, 0x15, 0x6D, 0x97, 0x5C, 0x55, 0x77, 0x16, 0x69, 0xA7, 0x94, 0x65, 0x67, 0xDE, 0x69, 0xB6, 0x9F, 0x79, 0x95, 0x15, 0x81, 0xB5, 0x97, 0x6D, 0xA7, 0xDE, 0x6A, 0x15, 0x40
};
const struct IrCode code_na846Code = {
  freq_to_timerval(38000),
  99,             // # of pairs
  6,             // # of bits per index
  code_na846Times,
  code_na846Codes
};

const uint16_t code_na847Times[] = {
  8705, 4315, 585, 680, 580, 690, 585, 1720, 580, 1720, 580, 680, 580, 1725, 585, 1715, 585, 685, 585, 1725, 590, 1715, 590, 675, 580, 685, 580, 1730, 585, 41145, 8705, 2215, 585, 65535
};
const uint8_t code_na847Codes[] = {
  0x00, 0x44, 0x11, 0x90, 0xA2, 0x09, 0x0C, 0x71, 0x20, 0x89, 0x52, 0xD0, 0xC3, 0x04, 0x28, 0x08, 0xC6, 0x44, 0x28, 0xED, 0x1B, 0x9F, 0x07, 0x80
};
const struct IrCode code_na847Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na847Times,
  code_na847Codes
};

const uint16_t code_na848Times[] = {
  8890, 4470, 530, 575, 535, 575, 535, 570, 540, 570, 540, 1705, 530, 580, 530, 1710, 530, 1715, 535, 1705, 540, 575, 535, 1710, 530, 570, 530, 585, 535, 1700, 530, 1720, 530, 39045, 8910, 2260, 540, 65535, 8910, 2235
};
const uint8_t code_na848Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0x66, 0x31, 0xCC, 0x74, 0x09, 0x2A, 0x19, 0x56, 0x74, 0x2D, 0x8D, 0x19, 0x8C, 0x11, 0x09, 0xCF, 0x3C, 0x23, 0x29, 0x80
};
const struct IrCode code_na848Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na848Times,
  code_na848Codes
};

const uint16_t code_na849Times[] = {
  875, 915, 1775, 905, 880, 925, 870, 1815, 1770, 1800, 880, 1805, 875, 930, 1770, 910, 875, 65535, 875, 925, 880, 920, 870, 1820, 1765, 1795, 1770, 915, 880, 1810, 870, 930
};
const uint8_t code_na849Codes[] = {
  0x01, 0x23, 0x41, 0x56, 0x78, 0x91, 0xAB, 0xCD, 0xEF, 0x70
};
const struct IrCode code_na849Code = {
  freq_to_timerval(38000),
  19,             // # of pairs
  4,             // # of bits per index
  code_na849Times,
  code_na849Codes
};

const uint16_t code_na850Times[] = {
  180, 7755, 175, 2310, 180, 2285, 170, 2315, 170, 2300, 175, 10230, 175, 10725, 225, 1255, 220, 215, 175, 1870, 170, 2295, 170, 1325, 215, 1265, 180, 1315, 215, 2245, 220, 220, 175, 885, 220, 1260, 170, 10705, 175, 7750, 175, 2295, 170, 2305, 180, 10215, 175, 6265, 175, 10730, 220, 1270, 215, 1270, 220, 1255, 175, 875
};
const uint8_t code_na850Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x42, 0x54, 0xB6, 0x35, 0xCF, 0x84, 0x65, 0x3A, 0x0D, 0x55, 0xB5, 0xF1, 0x1C, 0xE8, 0x3B, 0x47, 0x00
};
const struct IrCode code_na850Code = {
  freq_to_timerval(38000),
  34,             // # of pairs
  5,             // # of bits per index
  code_na850Times,
  code_na850Codes
};

const uint16_t code_na851Times[] = {
  530, 1690, 560, 560, 530, 575, 565, 560, 530, 565, 565, 555, 535, 1695, 555, 570, 535, 565, 565, 1690, 540, 560, 530, 1695, 540, 1685, 560, 1690, 565, 1685, 535, 1690, 560, 1685
};
const uint8_t code_na851Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x00, 0x44, 0x72, 0x15, 0x09, 0x41, 0x50, 0x35, 0x05, 0x63, 0x63, 0x56, 0xE7, 0xC0
};
const struct IrCode code_na851Code = {
  freq_to_timerval(38000),
  30,             // # of pairs
  5,             // # of bits per index
  code_na851Times,
  code_na851Codes
};

const uint16_t code_na852Times[] = {
  875, 915, 1775, 905, 880, 925, 870, 925, 875, 1815, 875, 925, 1775, 900, 870, 1820, 880, 920, 1770, 910, 875, 65535, 880, 915, 880, 1815, 875, 920
};
const uint8_t code_na852Codes[] = {
  0x01, 0x23, 0x45, 0x67, 0x89, 0xA3, 0x15, 0xB4, 0x51, 0xCD, 0x90
};
const struct IrCode code_na852Code = {
  freq_to_timerval(38000),
  21,             // # of pairs
  4,             // # of bits per index
  code_na852Times,
  code_na852Codes
};

const uint16_t code_na853Times[] = {
  8885, 4475, 540, 570, 530, 1715, 535, 570, 530, 580, 535, 565, 535, 580, 530, 575, 535, 1710, 535, 1705, 535, 1700, 530, 1720, 530, 1710, 530, 585, 535, 575, 540, 1700, 530, 39045, 8915, 2260, 530, 65535, 8905, 2240
};
const uint8_t code_na853Codes[] = {
  0x00, 0x44, 0x32, 0x08, 0xA6, 0x3A, 0x04, 0x94, 0x09, 0x4B, 0x61, 0x04, 0x94, 0x1C, 0x6D, 0x18, 0x9C, 0x32, 0x09, 0xEB, 0x64, 0x23, 0x29, 0x80
};
const struct IrCode code_na853Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na853Times,
  code_na853Codes
};

const uint16_t code_na854Times[] = {
  445, 1695, 455, 1705, 425, 630, 450, 595, 450, 620, 460, 1675, 455, 625, 455, 595, 455, 590, 460, 620, 460, 590, 460, 615, 540, 22750, 455, 1735, 425, 1710, 425, 620, 460, 1680, 455, 600, 450, 625, 455, 615
};
const uint8_t code_na854Codes[] = {
  0x00, 0x42, 0x21, 0x90, 0xA6, 0x38, 0x50, 0x95, 0x2D, 0x09, 0x61, 0x5A, 0xE7, 0xA8, 0x90, 0x48, 0xC3, 0x19, 0x22, 0x71, 0x90
};
const struct IrCode code_na854Code = {
  freq_to_timerval(38000),
  33,             // # of pairs
  5,             // # of bits per index
  code_na854Times,
  code_na854Codes
};

const uint16_t code_na855Times[] = {
  3430, 3445, 875, 2555, 870, 875, 865, 870, 870, 2560, 875, 870, 875, 2550, 870, 870, 870, 865, 865, 2565, 870, 2555, 865, 875, 870, 2565, 870, 2585, 845, 2575, 845, 2590, 845, 870, 870, 32985, 3470, 3430, 875, 865, 875, 875, 875, 860, 870, 2590, 845, 2585, 845, 2580, 840, 875
};
const uint8_t code_na855Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC2, 0x39, 0xCA, 0x84, 0x89, 0x49, 0x59, 0x0A, 0xA6, 0x35, 0xCF, 0x84, 0x64, 0x42, 0xCC, 0xD4, 0x24, 0xD7, 0x51, 0x1D, 0x42, 0x09, 0x0A, 0x11, 0x11, 0x56, 0xBE, 0x32
};
const struct IrCode code_na855Code = {
  freq_to_timerval(38000),
  51,             // # of pairs
  5,             // # of bits per index
  code_na855Times,
  code_na855Codes
};

const uint16_t code_na856Times[] = {
  8875, 4450, 570, 1745, 570, 580, 570, 575, 565, 585, 565, 1740, 570, 1750, 565, 580, 565, 1755, 570, 1740, 570, 570, 570, 585, 575, 570, 565, 1745, 565, 41015, 8900, 2265, 570, 65535, 8875, 2265
};
const uint8_t code_na856Codes[] = {
  0x00, 0x44, 0x32, 0x04, 0xA6, 0x38, 0x90, 0x90, 0x89, 0x4B, 0x08, 0x84, 0xC0, 0x9C, 0x64, 0x38, 0x42, 0xD1, 0x04, 0xA1, 0x6B, 0x9F, 0x08, 0x80
};
const struct IrCode code_na856Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na856Times,
  code_na856Codes
};

const uint16_t code_na857Times[] = {
  8900, 4450, 575, 1740, 570, 575, 565, 585, 565, 580, 570, 585, 565, 1745, 570, 580, 570, 1740, 570, 1745, 575, 1745, 570, 1750, 575, 575, 575, 570, 570, 41010, 8870, 2265, 565, 65535, 8900, 2260
};
const uint8_t code_na857Codes[] = {
  0x00, 0x42, 0x21, 0x90, 0x45, 0x31, 0x0E, 0x80, 0xA5, 0x0A, 0x22, 0x12, 0x84, 0x98, 0xCB, 0x0B, 0x0A, 0x26, 0x0C, 0x43, 0x6B, 0x9F, 0x08, 0x80
};
const struct IrCode code_na857Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na857Times,
  code_na857Codes
};

const uint16_t code_na858Times[] = {
  4275, 4320, 520, 520, 520, 525, 515, 520, 520, 1600, 520, 515, 525, 520, 520, 1595, 525, 1595, 525, 1590, 520, 1590, 515, 1605, 515, 1600, 520, 40475, 8725, 2185, 515, 65535, 8750, 2185
};
const uint8_t code_na858Codes[] = {
  0x00, 0x44, 0x32, 0x04, 0xA6, 0x09, 0xD0, 0x90, 0x91, 0x4B, 0x61, 0xD0, 0x93, 0x84, 0xA6, 0x09, 0x42, 0x50, 0x9D, 0x44, 0x3B, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na858Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na858Times,
  code_na858Codes
};

const uint16_t code_na859Times[] = {
  10380, 4890, 600, 620, 590, 605, 595, 620, 600, 625, 590, 2080, 595, 2080, 600, 2100, 600, 2105, 575, 2100, 590, 2090, 590, 2110, 600, 590, 590, 2115, 595, 600, 595, 625, 595, 2085, 595, 595, 595, 2105, 595, 605, 750, 41150, 8720, 2110, 590, 65535, 8725, 2105
};
const uint8_t code_na859Codes[] = {
  0x00, 0x44, 0x31, 0x10, 0xA4, 0x31, 0xD0, 0x95, 0x2D, 0x8D, 0x73, 0xCC, 0x38, 0x3E, 0x24, 0x74, 0xA6, 0x71, 0x48, 0xCD, 0x35, 0x2B, 0x6B, 0x80
};
const struct IrCode code_na859Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na859Times,
  code_na859Codes
};

const uint16_t code_na860Times[] = {
  8880, 4445, 565, 1745, 565, 1750, 570, 575, 570, 580, 570, 570, 570, 585, 575, 1735, 570, 1740, 565, 1755, 575, 575, 565, 585, 565, 575, 565, 580, 570, 1735, 570, 41010, 8905, 2260, 570, 65535, 8880, 2255
};
const uint8_t code_na860Codes[] = {
  0x00, 0x44, 0x32, 0x10, 0xA6, 0x09, 0x08, 0x71, 0x21, 0x09, 0x22, 0x96, 0xC1, 0x0D, 0xA4, 0x18, 0x84, 0x85, 0x89, 0xC2, 0x43, 0xE1, 0x19, 0x00
};
const struct IrCode code_na860Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na860Times,
  code_na860Codes
};

const uint16_t code_na861Times[] = {
  4270, 4325, 515, 1600, 520, 1600, 520, 1595, 515, 1605, 520, 520, 515, 520, 515, 525, 520, 525, 520, 1590, 520, 515, 525, 520, 520, 1605, 520, 40475, 8755, 2185, 515, 65535, 8725, 2185
};
const uint8_t code_na861Codes[] = {
  0x00, 0x44, 0x32, 0x04, 0x64, 0x09, 0x4A, 0x62, 0x9C, 0xC8, 0x30, 0x46, 0x91, 0x15, 0x4B, 0x31, 0x50, 0x62, 0x85, 0x2C, 0x0B, 0x5C, 0xF8, 0x00
};
const struct IrCode code_na861Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na861Times,
  code_na861Codes
};

const uint16_t code_na862Times[] = {
  7845, 3930, 470, 1450, 465, 495, 470, 1445, 470, 490, 465, 1450, 465, 490, 465, 500, 465, 4415, 465, 1455, 470, 485, 470, 1440, 465, 22095, 7850, 3935, 465, 1445, 470, 495, 475, 485, 475, 4410, 470, 1455
};
const uint8_t code_na862Codes[] = {
  0x00, 0x44, 0x32, 0x14, 0xC7, 0x22, 0x12, 0xA0, 0x89, 0x67, 0x30, 0x98, 0xD4, 0x91, 0xCF, 0x19, 0x1F, 0x08, 0x84, 0xD2, 0x20, 0x44, 0xA2, 0x00
};
const struct IrCode code_na862Code = {
  freq_to_timerval(38000),
  37,             // # of pairs
  5,             // # of bits per index
  code_na862Times,
  code_na862Codes
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
  &code_na541Code,
  &code_na542Code,
  &code_na543Code,
  &code_na544Code,
  &code_na545Code,
  &code_na546Code,
  &code_na547Code,
  &code_na548Code,
  &code_na549Code,
  &code_na550Code,
  &code_na551Code,
  &code_na552Code,
  &code_na553Code,
  &code_na554Code,
  &code_na555Code,
  &code_na556Code,
  &code_na557Code,
  &code_na558Code,
  &code_na559Code,
  &code_na560Code,
  &code_na561Code,
  &code_na562Code,
  &code_na563Code,
  &code_na564Code,
  &code_na565Code,
  &code_na566Code,
  &code_na567Code,
  &code_na568Code,
  &code_na569Code,
  &code_na570Code,
  &code_na571Code,
  &code_na572Code,
  &code_na573Code,
  &code_na574Code,
  &code_na575Code,
  &code_na576Code,
  &code_na577Code,
  &code_na578Code,
  &code_na579Code,
  &code_na580Code,
  &code_na581Code,
  &code_na582Code,
  &code_na583Code,
  &code_na584Code,
  &code_na585Code,
  &code_na586Code,
  &code_na587Code,
  &code_na588Code,
  &code_na589Code,
  &code_na590Code,
  &code_na591Code,
  &code_na592Code,
  &code_na593Code,
  &code_na594Code,
  &code_na595Code,
  &code_na596Code,
  &code_na597Code,
  &code_na598Code,
  &code_na599Code,
  &code_na600Code,
  &code_na601Code,
  &code_na602Code,
  &code_na603Code,
  &code_na604Code,
  &code_na605Code,
  &code_na606Code,
  &code_na607Code,
  &code_na608Code,
  &code_na609Code,
  &code_na610Code,
  &code_na611Code,
  &code_na612Code,
  &code_na613Code,
  &code_na614Code,
  &code_na615Code,
  &code_na616Code,
  &code_na617Code,
  &code_na618Code,
  &code_na619Code,
  &code_na620Code,
  &code_na621Code,
  &code_na622Code,
  &code_na623Code,
  &code_na624Code,
  &code_na625Code,
  &code_na626Code,
  &code_na627Code,
  &code_na628Code,
  &code_na629Code,
  &code_na630Code,
  &code_na631Code,
  &code_na632Code,
  &code_na633Code,
  &code_na634Code,
  &code_na635Code,
  &code_na636Code,
  &code_na637Code,
  &code_na638Code,
  &code_na639Code,
  &code_na640Code,
  &code_na641Code,
  &code_na642Code,
  &code_na643Code,
  &code_na644Code,
  &code_na645Code,
  &code_na646Code,
  &code_na647Code,
  &code_na648Code,
  &code_na649Code,
  &code_na650Code,
  &code_na651Code,
  &code_na652Code,
  &code_na653Code,
  &code_na654Code,
  &code_na655Code,
  &code_na656Code,
  &code_na657Code,
  &code_na658Code,
  &code_na659Code,
  &code_na660Code,
  &code_na661Code,
  &code_na662Code,
  &code_na663Code,
  &code_na664Code,
  &code_na665Code,
  &code_na666Code,
  &code_na667Code,
  &code_na668Code,
  &code_na669Code,
  &code_na670Code,
  &code_na671Code,
  &code_na672Code,
  &code_na673Code,
  &code_na674Code,
  &code_na675Code,
  &code_na676Code,
  &code_na677Code,
  &code_na678Code,
  &code_na679Code,
  &code_na680Code,
  &code_na681Code,
  &code_na682Code,
  &code_na683Code,
  &code_na684Code,
  &code_na685Code,
  &code_na686Code,
  &code_na687Code,
  &code_na688Code,
  &code_na689Code,
  &code_na690Code,
  &code_na691Code,
  &code_na692Code,
  &code_na693Code,
  &code_na694Code,
  &code_na695Code,
  &code_na696Code,
  &code_na697Code,
  &code_na698Code,
  &code_na699Code,
  &code_na700Code,
  &code_na701Code,
  &code_na702Code,
  &code_na703Code,
  &code_na704Code,
  &code_na705Code,
  &code_na706Code,
  &code_na707Code,
  &code_na708Code,
  &code_na709Code,
  &code_na710Code,
  &code_na711Code,
  &code_na712Code,
  &code_na713Code,
  &code_na714Code,
  &code_na715Code,
  &code_na716Code,
  &code_na717Code,
  &code_na718Code,
  &code_na719Code,
  &code_na720Code,
  &code_na721Code,
  &code_na722Code,
  &code_na723Code,
  &code_na724Code,
  &code_na725Code,
  &code_na726Code,
  &code_na727Code,
  &code_na728Code,
  &code_na729Code,
  &code_na730Code,
  &code_na731Code,
  &code_na732Code,
  &code_na733Code,
  &code_na734Code,
  &code_na735Code,
  &code_na736Code,
  &code_na737Code,
  &code_na738Code,
  &code_na739Code,
  &code_na740Code,
  &code_na741Code,
  &code_na742Code,
  &code_na743Code,
  &code_na744Code,
  &code_na745Code,
  &code_na746Code,
  &code_na747Code,
  &code_na748Code,
  &code_na749Code,
  &code_na750Code,
  &code_na751Code,
  &code_na752Code,
  &code_na753Code,
  &code_na754Code,
  &code_na755Code,
  &code_na756Code,
  &code_na757Code,
  &code_na758Code,
  &code_na759Code,
  &code_na760Code,
  &code_na761Code,
  &code_na762Code,
  &code_na763Code,
  &code_na764Code,
  &code_na765Code,
  &code_na766Code,
  &code_na767Code,
  &code_na768Code,
  &code_na769Code,
  &code_na770Code,
  &code_na771Code,
  &code_na772Code,
  &code_na773Code,
  &code_na774Code,
  &code_na775Code,
  &code_na776Code,
  &code_na777Code,
  &code_na778Code,
  &code_na779Code,
  &code_na780Code,
  &code_na781Code,
  &code_na782Code,
  &code_na783Code,
  &code_na784Code,
  &code_na785Code,
  &code_na786Code,
  &code_na787Code,
  &code_na788Code,
  &code_na789Code,
  &code_na790Code,
  &code_na791Code,
  &code_na792Code,
  &code_na793Code,
  &code_na794Code,
  &code_na795Code,
  &code_na796Code,
  &code_na797Code,
  &code_na798Code,
  &code_na799Code,
  &code_na800Code,
  &code_na801Code,
  &code_na802Code,
  &code_na803Code,
  &code_na804Code,
  &code_na805Code,
  &code_na806Code,
  &code_na807Code,
  &code_na808Code,
  &code_na809Code,
  &code_na810Code,
  &code_na811Code,
  &code_na812Code,
  &code_na813Code,
  &code_na814Code,
  &code_na815Code,
  &code_na816Code,
  &code_na817Code,
  &code_na818Code,
  &code_na819Code,
  &code_na820Code,
  &code_na821Code,
  &code_na822Code,
  &code_na823Code,
  &code_na824Code,
  &code_na825Code,
  &code_na826Code,
  &code_na827Code,
  &code_na828Code,
  &code_na829Code,
  &code_na830Code,
  &code_na831Code,
  &code_na832Code,
  &code_na833Code,
  &code_na834Code,
  &code_na835Code,
  &code_na836Code,
  &code_na837Code,
  &code_na838Code,
  &code_na839Code,
  &code_na840Code,
  &code_na841Code,
  &code_na842Code,
  &code_na843Code,
  &code_na844Code,
  &code_na845Code,
  &code_na846Code,
  &code_na847Code,
  &code_na848Code,
  &code_na849Code,
  &code_na850Code,
  &code_na851Code,
  &code_na852Code,
  &code_na853Code,
  &code_na854Code,
  &code_na855Code,
  &code_na856Code,
  &code_na857Code,
  &code_na858Code,
  &code_na859Code,
  &code_na860Code,
  &code_na861Code,
  &code_na862Code,
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
  "parsed:Samsung32", "parsed:SIRC", "parsed:SIRC", "parsed:NEC", "parsed:NECext", "parsed:Samsung32", "parsed:SIRC", "parsed:SIRC", "parsed:NEC", "parsed:NECext",
  "parsed:Samsung32", "parsed:RC6", "parsed:Samsung32", "parsed:NEC", "parsed:NEC", "parsed:NECext", "parsed:NEC", "parsed:NEC", "parsed:NECext", "parsed:NEC",
  "parsed:NECext", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NECext", "parsed:NEC", "parsed:NECext", "parsed:Samsung32",
  "parsed:NECext", "parsed:NEC", "parsed:NECext", "parsed:NECext", "parsed:Samsung32", "parsed:NEC", "parsed:NECext", "parsed:Samsung32", "parsed:Samsung32", "parsed:NEC",
  "parsed:NEC", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NEC", "parsed:NECext", "parsed:NECext",
  "parsed:NEC", "parsed:Samsung32", "parsed:NEC", "parsed:Samsung32", "parsed:NECext", "parsed:NEC", "parsed:NECext", "parsed:Samsung32", "parsed:Samsung32", "parsed:NEC",
  "parsed:NECext", "parsed:NECext", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw", "raw",
  "raw", "raw",
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
  541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565,
  566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590,
  591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615,
  616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640,
  641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665,
  666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690,
  691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715,
  716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740,
  741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765,
  766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790,
  791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815,
  816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 837, 838, 839, 840,
  841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862,
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
