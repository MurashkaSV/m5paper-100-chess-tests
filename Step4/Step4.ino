#include <M5EPD.h>
const uint8_t m_pozic[3200] PROGMEM =
{ 0x50,0x00,0x04,0x00, 0x04,0x00,0x01,0x06, 0x00,0x00,0x00,0x10, 0x00,0x00,0x00,0x01, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x91, 0x00,0x00,0x0b,0x09, 0xd0,0xc0,0x0c,0xe0,
  0x40,0x00,0x04,0x60, 0x11,0x00,0x01,0x01, 0x03,0x10,0x00,0x50, 0x00,0x03,0x00,0x00, 0x09,0x00,0x00,0x00, 0x90,0x90,0xb9,0x00, 0x00,0x0d,0xb0,0x99, 0xc0,0x00,0x0c,0xe0,
  0x40,0x00,0x04,0x60, 0x00,0x10,0x01,0x11, 0x00,0x00,0x02,0x00, 0x02,0x00,0x10,0x00, 0x01,0xa0,0x90,0x00, 0x19,0x59,0x00,0x00, 0x90,0x90,0x00,0x99, 0x0e,0xcb,0x00,0xdc,
  0x40,0x00,0x00,0x46, 0x10,0x00,0x00,0x50, 0x00,0x13,0x01,0x00, 0x00,0x11,0x01,0x00, 0x00,0x99,0x29,0x00, 0x00,0x00,0x9b,0x00, 0x99,0x00,0x00,0x09, 0xc0,0xbd,0x0c,0x0e,
  0x00,0x00,0x04,0x60, 0x11,0x10,0x00,0x11, 0x00,0x03,0x04,0x20, 0x00,0x01,0x01,0x02, 0x00,0x09,0x00,0x05, 0x00,0x9b,0x09,0xa0, 0x99,0xdb,0x09,0xe9, 0x00,0x00,0x00,0xcc,
  0x06,0x04,0x00,0x00, 0x10,0x10,0x00,0x00, 0x91,0x00,0x05,0x00, 0x09,0x04,0x30,0x01, 0x00,0x00,0x10,0x09, 0x0d,0x00,0x90,0x00, 0x00,0xcb,0x09,0x00, 0x00,0x00,0xec,0x00,
  0x60,0x04,0x00,0x00, 0x01,0x00,0x00,0x11, 0x10,0x00,0x01,0x00, 0x00,0x90,0x10,0x00, 0x90,0x00,0x92,0x00, 0x0b,0x50,0x00,0x90, 0x0d,0x00,0x09,0x09, 0x0c,0x00,0x00,0xe0,
  0x40,0x30,0x63,0x04, 0x01,0x00,0x11,0x11, 0x01,0x00,0x02,0x00, 0x00,0x01,0xb0,0x00, 0x00,0x00,0x00,0x00, 0x00,0x10,0x00,0x00, 0x99,0x00,0x99,0x99, 0xca,0x00,0xeb,0xac,
  0x00,0x00,0x50,0x60, 0x11,0x00,0x01,0x11, 0x03,0x10,0x00,0x00, 0x90,0x00,0x00,0x00, 0x09,0x00,0x00,0x00, 0x00,0x9b,0x00,0x93, 0x00,0xd0,0x09,0x09, 0xc0,0xb0,0x4a,0xe0,
  0x00,0x00,0x00,0x60, 0x10,0x00,0x00,0x01, 0x00,0xd1,0x00,0x10, 0x00,0x30,0x00,0x00, 0x00,0x00,0x0b,0x00, 0x00,0x00,0x00,0x95, 0x94,0x90,0x09,0x00, 0x00,0x0c,0x00,0xe0,
  0x00,0x04,0x40,0x60, 0x01,0x00,0x01,0x10, 0x10,0x00,0x02,0x10, 0x00,0x00,0x00,0x50, 0x00,0x03,0x00,0x00, 0x09,0xa0,0x0d,0x09, 0x9b,0x0c,0x09,0x90, 0x00,0x0c,0x00,0xe0,
  0x00,0x00,0x40,0x00, 0x11,0x04,0x01,0x61, 0x00,0x00,0x00,0x10, 0x00,0x0b,0x00,0x20, 0x00,0x90,0x9e,0x00, 0x00,0x00,0x00,0x90, 0x9c,0x0c,0x00,0x09, 0x00,0x00,0x00,0x00,
  0x00,0x64,0x00,0x00, 0x11,0x10,0x00,0x11, 0x00,0x00,0x00,0x00, 0x99,0xd2,0x91,0x00, 0x00,0x00,0x40,0x00, 0x00,0x00,0x95,0x00, 0x00,0xc0,0x09,0x00, 0x00,0xb0,0xe0,0xc0,
  0x40,0x00,0x40,0x60, 0x11,0x10,0x01,0x11, 0x00,0x10,0x05,0x00, 0x00,0x30,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x09,0x00,0x93, 0x99,0x9d,0x09,0xb9, 0xc0,0xb0,0x0e,0x0c,
  0x00,0x00,0x00,0x60, 0x11,0x00,0x04,0x10, 0x00,0x50,0x00,0x00, 0x00,0x00,0x00,0x09, 0x00,0x00,0x00,0x00, 0x90,0x00,0xc1,0xd0, 0x09,0x00,0x09,0x00, 0x00,0x00,0x00,0xe0,
  0x50,0x00,0x00,0x60, 0x00,0x00,0x01,0x30, 0x10,0x00,0x00,0x10, 0x90,0x00,0x40,0x01, 0x00,0x90,0x00,0x00, 0x00,0xd0,0x1a,0x00, 0x00,0x00,0x09,0x99, 0x00,0x00,0x0c,0xe0,
  0x40,0x00,0x40,0x06, 0x00,0x10,0x00,0x00, 0x00,0x10,0x00,0x01, 0x10,0xa0,0x00,0x00, 0x90,0x00,0x00,0x00, 0x00,0x90,0x00,0x05, 0x09,0xd0,0x01,0xb0, 0x00,0x0c,0x0e,0x00,
  0x00,0x00,0x40,0x00, 0x10,0x10,0x00,0x61, 0x00,0x13,0x01,0x10, 0x00,0x00,0x00,0x00, 0x00,0x00,0x59,0x00, 0x00,0xda,0x00,0x00, 0x99,0x00,0x00,0x99, 0x00,0x00,0xc0,0x0e,
  0x06,0x00,0x00,0x40, 0x01,0x00,0x00,0x01, 0x10,0x00,0x00,0x00, 0x90,0x00,0x01,0x00, 0xb0,0x30,0x19,0x00, 0x00,0x00,0x09,0x0e, 0x09,0x04,0x00,0x09, 0xc0,0x0c,0x00,0x00,
  0x06,0x04,0x00,0x04, 0x11,0x10,0x00,0x10, 0x00,0x30,0x01,0x00, 0x00,0x00,0x00,0x01, 0x00,0x00,0x00,0x00, 0x59,0x00,0x9b,0x0d, 0x90,0x00,0x09,0x99, 0xe0,0xcc,0x00,0x00,
  0x00,0x00,0x04,0x60, 0x01,0xd0,0xc1,0x11, 0x00,0x00,0x00,0x30, 0x01,0x00,0x00,0x00, 0x09,0x00,0x00,0x00, 0x00,0x02,0x00,0x99, 0x00,0x00,0xa5,0xbe, 0x00,0x00,0x00,0x00,
  0x00,0x64,0x00,0x04, 0x11,0x00,0x00,0x10, 0x00,0x23,0x10,0x00, 0x00,0x00,0x00,0x00, 0x00,0x99,0xd1,0x50, 0x09,0xa0,0x00,0x90, 0x9b,0x00,0x09,0xe0, 0xc0,0x00,0x0c,0x00,
  0x00,0x00,0xd4,0x06, 0x01,0x00,0x00,0x11, 0x00,0x20,0x00,0x00, 0x00,0x0a,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x99,0x90,0x05,0x99, 0x00,0x00,0xc0,0x0e,
  0x00,0x60,0x00,0x00, 0x04,0x10,0x00,0x0c, 0x00,0x00,0x00,0x00, 0xe0,0x00,0x00,0x00, 0x00,0x09,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
  0x40,0x35,0x04,0x60, 0x11,0x10,0x01,0x10, 0x03,0x20,0x00,0x01, 0x00,0x02,0x10,0x00, 0x00,0x00,0x00,0x00, 0x00,0xa9,0x00,0x00, 0x99,0x9a,0xb9,0x99, 0xc0,0xbd,0xc0,0xe0,
  0x00,0x64,0x00,0x04, 0x11,0x10,0x00,0x11, 0x00,0x10,0x00,0x00, 0x00,0x00,0x50,0x00, 0x00,0x00,0x20,0x30, 0x00,0xa0,0xd0,0x09, 0x99,0x90,0x00,0x90, 0xc0,0xb0,0xe0,0x0c,
  0x0d,0x00,0x00,0x00, 0x00,0x00,0x00,0x01, 0x90,0x00,0x00,0x16, 0x00,0x00,0x01,0x00, 0x00,0x00,0x00,0x00, 0x00,0x04,0x00,0x09, 0x00,0x00,0x50,0x9e, 0x00,0x00,0x00,0xc0,
  0x00,0x00,0x00,0x60, 0x00,0x00,0x01,0x10, 0x00,0x00,0x00,0x40, 0x00,0x0d,0xb0,0x00, 0x09,0x40,0x00,0x01, 0x90,0x00,0x90,0x00, 0x00,0x00,0x59,0x09, 0x00,0x0c,0x00,0x0e,
  0x00,0x04,0x00,0x60, 0x00,0x00,0x01,0x10, 0x00,0x00,0x00,0x01, 0x10,0x00,0x00,0x00, 0x20,0x50,0x00,0x00, 0x9d,0x00,0x00,0x00, 0xe9,0x00,0x09,0x09, 0xca,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00, 0x10,0x00,0x01,0x60, 0x00,0x00,0x04,0x00, 0x09,0xc0,0x03,0x10, 0x00,0x00,0x00,0x00, 0x00,0x01,0x00,0x90, 0x90,0x0c,0x0e,0x00, 0x00,0x00,0x4b,0x00,
  0x40,0x00,0x00,0x60, 0x11,0x00,0x20,0x31, 0x00,0x01,0x24,0x00, 0x00,0x10,0x10,0x00, 0x00,0x90,0x90,0x10, 0x09,0xd9,0x01,0x95, 0x90,0xa0,0x09,0x09, 0x00,0xbc,0xac,0xe0,
  0x04,0x00,0x00,0x60, 0x00,0x00,0x00,0x10, 0x00,0x00,0x00,0xa1, 0x10,0x35,0x10,0x00, 0x00,0x10,0x00,0xd0, 0x90,0x92,0x00,0x90, 0x00,0x00,0x09,0x09, 0x00,0xb0,0x0c,0xe0,
  0x00,0x04,0x60,0x04, 0x11,0x15,0x00,0x01, 0x00,0x00,0x30,0x00, 0x00,0x90,0x21,0x10, 0x00,0x00,0x10,0x20, 0x00,0x90,0x90,0x90, 0x90,0xda,0x09,0xa9, 0xc0,0xb0,0xc0,0xeb,
  0x00,0x64,0x40,0x00, 0x11,0x10,0x00,0x01, 0x50,0x00,0x01,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x19, 0x90,0x02,0xb0,0x00, 0x00,0xda,0x09,0x90, 0x0c,0x00,0x0e,0xc0,
  0x40,0x00,0x00,0x60, 0x01,0x03,0x00,0x11, 0x10,0x13,0x00,0x00, 0x00,0x01,0xa0,0x05, 0x09,0x09,0x40,0x00, 0x90,0xd0,0x90,0x00, 0x00,0x00,0x0c,0x99, 0x00,0xb0,0x0c,0xe0,
  0x00,0x00,0x00,0x00, 0x00,0x00,0x05,0x16, 0x09,0x0d,0x00,0x01, 0x00,0x00,0x01,0x09, 0x00,0x00,0x30,0x00, 0x00,0x00,0x00,0x9e, 0x00,0x00,0xb9,0x0a, 0x00,0x00,0x00,0x40,
  0x06,0x00,0x00,0x04, 0x01,0x10,0x00,0x00, 0x10,0x50,0x00,0x00, 0x90,0x00,0xd0,0x00, 0x03,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x09,0x90,0x01,0xb9, 0x00,0x00,0x0a,0x0e,
  0x00,0x00,0x00,0x00, 0x01,0x00,0x00,0x00, 0x10,0x00,0x61,0x00, 0x42,0xc0,0x00,0x01, 0x00,0x00,0x9e,0x09, 0x00,0x00,0xa9,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x46, 0x11,0x10,0x01,0x01, 0x00,0x30,0x10,0x00, 0x00,0x00,0x90,0x00, 0x00,0x00,0x00,0x50, 0x00,0x0c,0x0b,0x00, 0x99,0x90,0xd9,0x09, 0x00,0xb0,0x0c,0x0e,
  0x00,0x00,0x06,0x00, 0x10,0x00,0x00,0x00, 0x01,0x00,0x30,0x10, 0x00,0x10,0x00,0x51, 0x00,0x02,0x00,0x00, 0x09,0x0d,0x90,0x00, 0x90,0x09,0x00,0xb9, 0x00,0x00,0x0a,0xe0,
  0x00,0x00,0x00,0x46, 0x00,0x00,0x00,0x41, 0x00,0x00,0x00,0x00, 0x00,0x01,0x90,0x00, 0x00,0x09,0x01,0x00, 0x90,0x05,0x2d,0x00, 0x0b,0x00,0x00,0x09, 0x00,0xc0,0xc0,0x0e,
  0x00,0x00,0x00,0x00, 0x00,0x60,0x30,0x11, 0x10,0x00,0x00,0x00, 0x01,0x00,0x00,0x00, 0x00,0x02,0x90,0x30, 0x09,0x0b,0x10,0x00, 0x09,0x90,0x00,0x99, 0x00,0x00,0xec,0x00,
  0x00,0x00,0x00,0x60, 0x10,0x00,0x00,0x11, 0x00,0x00,0x00,0x00, 0x01,0x10,0x00,0x30, 0x00,0x20,0x00,0x00, 0x00,0x90,0x04,0x90, 0x99,0x00,0x40,0x09, 0xce,0x0a,0x0a,0x0c,
  0x00,0x00,0x00,0x00, 0x06,0x00,0x00,0x00, 0x00,0x15,0xb0,0x00, 0x01,0x02,0xc0,0x10, 0x10,0x00,0x00,0x00, 0x90,0x00,0x09,0x00, 0xe9,0x00,0xd9,0x00, 0x00,0x00,0x00,0x40,
  0x00,0x00,0x44,0x60, 0x11,0x03,0x01,0x01, 0x50,0x10,0x0d,0x1b, 0x00,0x00,0x00,0x00, 0x00,0x0c,0x00,0x00, 0x00,0x90,0x00,0x90, 0x99,0x00,0x09,0x09, 0xca,0x00,0x00,0xe0,
  0x40,0x00,0x63,0x24, 0x10,0x00,0x00,0x11, 0x05,0x10,0x11,0x00, 0x00,0x01,0x03,0x00, 0xb0,0x99,0x00,0x00, 0x00,0x00,0x00,0xd0, 0x99,0x00,0x09,0x99, 0xca,0xb0,0xe0,0x0c,
  0x40,0x00,0x04,0x60, 0x11,0x00,0x01,0x11, 0x03,0x10,0x30,0x00, 0x00,0x00,0xa0,0x00, 0x09,0x05,0x0b,0x20, 0x90,0xa0,0x00,0x00, 0x00,0x90,0xb0,0x99, 0xc0,0x0d,0x0c,0x0e,
  0x40,0x00,0x00,0x06, 0x10,0x13,0x00,0x11, 0x00,0x10,0x00,0x04, 0x00,0x00,0x01,0x00, 0x00,0x00,0x09,0x05, 0x90,0x09,0xb1,0x00, 0x09,0xd0,0xa0,0x90, 0xc0,0x00,0x0c,0xe0,
  0x00,0x00,0x00,0x00, 0x00,0x10,0x00,0x60, 0x00,0x01,0x00,0x10, 0x00,0x90,0x10,0xe0, 0x00,0x90,0xc0,0x90, 0x00,0x00,0x00,0x09, 0x00,0x00,0x04,0x40, 0x0c,0x00,0x00,0x00,
  0x40,0x00,0x60,0x04, 0x10,0x10,0x51,0x11, 0x30,0x13,0x00,0x00, 0x00,0x01,0x00,0x00, 0x00,0x00,0x00,0x00, 0x09,0x00,0x90,0x09, 0x90,0x9a,0x09,0x90, 0xc0,0xbd,0xe0,0x0c,
  0x40,0x30,0x00,0x60, 0x11,0x10,0x01,0x01, 0x00,0x00,0x05,0x00, 0x00,0x00,0x00,0x10, 0x00,0x99,0x00,0x20, 0x00,0xa0,0x40,0x00, 0x99,0x0d,0x00,0x99, 0xc0,0x00,0x0b,0xec,
  0x04,0x03,0x04,0x00, 0x00,0x00,0x05,0x06, 0x00,0x01,0x30,0x01, 0x10,0x1a,0x10,0x09, 0x90,0x92,0x09,0x00, 0x00,0xb9,0xa0,0x10, 0xc0,0x00,0x00,0x90, 0x00,0x0d,0x0c,0xe0,
  0x00,0x04,0x00,0x60, 0x11,0x00,0x00,0x11, 0x00,0x10,0x00,0x00, 0x50,0x00,0x00,0x00, 0x00,0x90,0x10,0x30, 0x09,0xd0,0x90,0x90, 0x90,0x00,0xa9,0x09, 0x00,0x00,0xe0,0x0c,
  0x06,0x00,0x00,0x00, 0x01,0x10,0xc0,0x00, 0x00,0x00,0x00,0x01, 0x00,0x90,0xd0,0x00, 0x10,0x54,0x00,0x90, 0xe0,0x00,0x00,0x00, 0x09,0x90,0x00,0x00, 0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x60, 0x11,0x00,0x01,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x10,0x00, 0x00,0x01,0x20,0x00, 0x90,0x00,0x00,0x00, 0x0d,0x90,0xe0,0x00, 0x00,0x00,0x00,0x04,
  0x00,0x00,0x00,0x46, 0x11,0x00,0x00,0x00, 0x00,0x10,0x01,0x00, 0x00,0x90,0x39,0x01, 0x09,0x00,0x01,0x00, 0x90,0x00,0x09,0x50, 0x00,0x00,0x00,0x1a, 0x00,0xdc,0x00,0xe0,
  0x00,0x00,0x40,0x60, 0x00,0x0a,0x41,0x10, 0x00,0x10,0x00,0x01, 0x00,0x00,0x00,0x00, 0x00,0x0d,0x00,0x00, 0x00,0x00,0x05,0x90, 0x99,0x0c,0x39,0x09, 0x00,0x00,0xc0,0xe0,
  0x06,0x04,0x00,0x04, 0x11,0x50,0x01,0x00, 0x00,0x00,0x10,0x00, 0x00,0x01,0x30,0x10, 0x09,0x00,0x30,0x91, 0x9d,0x90,0x90,0x0e, 0x0b,0x00,0xb0,0x00, 0x00,0xc0,0xca,0x00,
  0x00,0x04,0x00,0x60, 0x50,0x00,0x01,0x10, 0x00,0x02,0x10,0x01, 0x00,0x00,0x00,0x0c, 0x01,0xa0,0x90,0x00, 0x09,0x00,0x09,0x00, 0x90,0x00,0x0d,0x99, 0x00,0x00,0x00,0xe0,
  0x00,0x00,0x00,0x00, 0x10,0x00,0x00,0x00, 0x01,0x00,0x06,0x00, 0x09,0x19,0x10,0x10, 0x90,0x00,0x00,0x09, 0x00,0xa0,0xde,0x90, 0x00,0x50,0x00,0x00, 0x00,0x00,0x00,0x00,
  0x00,0x30,0x04,0x60, 0x00,0x00,0x00,0x00, 0x10,0xc5,0x91,0x00, 0x00,0x00,0x02,0x01, 0xd0,0x09,0x00,0x00, 0x0a,0x00,0x01,0x09, 0x94,0x00,0x09,0x90, 0x00,0x00,0xc0,0xe0,
  0x00,0x40,0x04,0x06, 0x10,0x00,0x00,0x11, 0x01,0x00,0x00,0x00, 0x00,0x0b,0x00,0x00, 0x09,0x90,0x0a,0x20, 0x90,0x00,0x50,0x90, 0x00,0xd0,0x90,0xe0, 0x00,0x00,0x0c,0x00,
  0x00,0x00,0x40,0x60, 0x10,0x00,0x40,0x10, 0x00,0x03,0x00,0x21, 0x00,0x01,0x00,0x00, 0x00,0x19,0x01,0x95, 0x00,0x90,0x09,0x0a, 0x90,0x00,0x0c,0xe9, 0xc0,0xbd,0x00,0x00,
  0x42,0x05,0x00,0x00, 0x11,0x10,0x00,0xd0, 0x00,0x00,0x64,0x90, 0x00,0x31,0x00,0x00, 0x00,0x01,0x90,0x0a, 0x00,0x0b,0x00,0x03, 0x99,0x90,0x00,0x09, 0xca,0xb0,0x00,0xec,
  0x00,0x00,0x00,0x60, 0x00,0x00,0x00,0x01, 0x90,0x00,0x00,0x10, 0x00,0xb0,0x00,0x00, 0x00,0x00,0x09,0x00, 0x00,0x90,0xc9,0x00, 0x00,0x44,0x00,0x02, 0xc0,0x00,0x00,0xe0,
  0x00,0x00,0x00,0x60, 0x10,0x00,0x04,0x11, 0x00,0x00,0x00,0x09, 0x00,0x00,0x00,0x00, 0x00,0x30,0x4b,0xd0, 0x00,0x90,0x00,0x90, 0x95,0x00,0x00,0x00, 0xcc,0x00,0x00,0x0e,
  0xc0,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0xe0,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x60,0x00,0x00, 0x00,0x00,0x00,0x00, 0x10,0x00,0x00,0x00, 0x40,0x00,0x00,0x00,
  0x40,0x00,0x40,0x60, 0x00,0x00,0x01,0x11, 0x01,0x00,0x00,0x00, 0x39,0x01,0x00,0x00, 0x00,0x0a,0x20,0x00, 0x50,0x00,0xbd,0x09, 0x00,0x90,0x09,0x90, 0x00,0xc0,0x0e,0x0c,
  0x00,0x00,0x00,0x00, 0x11,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0xa0, 0x00,0x90,0x02,0x00, 0x09,0x06,0x00,0x00, 0x90,0x00,0x1e,0x09, 0x00,0x00,0x00,0x00,
  0x40,0x00,0x40,0x60, 0x11,0x00,0x01,0xb0, 0x00,0x01,0x00,0x10, 0x09,0x99,0x00,0x00, 0x90,0x00,0x10,0x00, 0x0d,0x00,0x92,0x91, 0x00,0xa0,0x59,0x09, 0x00,0x0c,0x0c,0x0e,
  0x40,0x02,0x00,0x06, 0x11,0x10,0x00,0x11, 0x00,0x00,0x00,0x00, 0x09,0x30,0x00,0x02, 0x00,0x00,0x90,0x05, 0x90,0x0a,0x00,0x00, 0x0b,0x0a,0xb4,0x99, 0xc0,0x0d,0xc0,0xe0,
  0x40,0x00,0x40,0x60, 0x01,0x00,0x01,0x00, 0x10,0x10,0x00,0x00, 0x50,0x00,0x00,0x00, 0x00,0x91,0x0d,0x90, 0x00,0x09,0x00,0x09, 0x99,0x00,0x09,0xb0, 0xc0,0x0e,0x30,0x0c,
  0x00,0x60,0x00,0x50, 0x11,0x20,0x00,0x01, 0x00,0x00,0x01,0x00, 0x00,0xd0,0x10,0x00, 0x00,0x00,0x00,0x40, 0x00,0x09,0x0a,0x01, 0x99,0x00,0x99,0x49, 0x00,0xc0,0x0c,0x0e,
  0x00,0x00,0x04,0x60, 0x03,0x00,0x01,0x11, 0x01,0x00,0x12,0x00, 0x00,0x00,0x00,0x00, 0x09,0xb0,0x09,0x09, 0x00,0x00,0x00,0x05, 0x0b,0x90,0x00,0xc9, 0x00,0x00,0xd0,0xce,
  0x03,0x00,0x00,0x00, 0x00,0x00,0x04,0x00, 0x00,0x01,0x10,0x00, 0x00,0x00,0x00,0x06, 0x00,0x10,0xe0,0x00, 0x00,0x00,0x99,0x00, 0x00,0x09,0x00,0x00, 0x00,0x00,0x00,0xd0,
  0x00,0x40,0x40,0x60, 0x10,0x50,0x01,0x11, 0x03,0x00,0x00,0x00, 0x00,0x01,0x00,0x00, 0x09,0x00,0x20,0x00, 0x90,0x0d,0x0a,0x00, 0x0b,0x00,0x09,0x99, 0xc0,0x00,0x0c,0xe0,
  0x00,0x00,0x6b,0xd0, 0x01,0x10,0x14,0x00, 0x00,0x00,0x00,0x00, 0x10,0x05,0x00,0xa0, 0x00,0x12,0x00,0x00, 0x00,0x00,0x00,0x00, 0x99,0x00,0x09,0x99, 0x00,0x00,0x0c,0xe0,
  0x00,0x00,0x40,0x06, 0x11,0x00,0x05,0x11, 0x00,0x00,0x00,0x43, 0x00,0x00,0x00,0x0d, 0x00,0x19,0x00,0x00, 0x92,0xa0,0x90,0x00, 0x09,0x0b,0x09,0xc9, 0x00,0x0c,0xe0,0x00,
  0x00,0x0c,0x00,0x40, 0x11,0x00,0x00,0x00, 0x00,0x60,0x00,0x00, 0x90,0x00,0x01,0x00, 0x00,0x90,0x00,0x02, 0x00,0x00,0x00,0x09, 0x09,0x00,0x04,0x00, 0x00,0x0c,0x0b,0x0e,
  0x40,0x00,0x40,0x60, 0x11,0x30,0x01,0x10, 0x00,0x10,0x05,0x01, 0x00,0x90,0x10,0x00, 0x09,0x01,0x90,0x02, 0x90,0x09,0x09,0x93, 0x00,0xda,0x0a,0x09, 0xc0,0xb0,0xc0,0xe0,
  0x00,0x00,0x00,0x06, 0x01,0x00,0x00,0x31, 0x10,0x20,0x00,0x10, 0x00,0x9a,0x01,0xd0, 0x09,0x00,0x00,0x00, 0x95,0x90,0xa0,0x00, 0x00,0x00,0x49,0x99, 0x00,0x0c,0x00,0xe0,
  0x00,0x00,0x00,0x60, 0x10,0x00,0x00,0x01, 0x30,0x00,0x10,0x1b, 0x00,0x91,0x00,0x00, 0x00,0x03,0x00,0x50, 0x00,0x02,0xc0,0xa0, 0x99,0x0d,0x00,0x99, 0x00,0x00,0x00,0x0e,
  0x00,0x00,0x00,0x40, 0x10,0x00,0x00,0x06, 0x01,0x0c,0x31,0x51, 0x00,0x10,0x10,0x00, 0x00,0x00,0x91,0x0d, 0x90,0x90,0x0a,0x09, 0x09,0xb0,0x09,0x40, 0xc0,0x00,0x00,0x0e,
  0x00,0x00,0x00,0x60, 0x10,0x30,0x00,0x11, 0x00,0x30,0x05,0x00, 0x00,0x91,0x00,0x00, 0x00,0x09,0x01,0x00, 0x94,0xbb,0x40,0x00, 0x00,0xe0,0x0d,0x99, 0xc0,0x00,0x00,0x0c,
  0x00,0x00,0x40,0x60, 0x11,0x10,0x01,0x11, 0x00,0x00,0x00,0x00, 0x00,0x30,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x09,0x0b,0x09, 0x99,0x9b,0x05,0x09, 0xc0,0x0d,0x00,0x0e,
  0x00,0x04,0x40,0x60, 0x11,0x10,0x01,0x00, 0x00,0x00,0x0d,0x10, 0x05,0x03,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x0c, 0x99,0xa0,0x00,0x99, 0x0e,0x00,0x0c,0x00,
  0x00,0x00,0x40,0x60, 0x11,0x00,0x01,0x01, 0x00,0x00,0x30,0x19, 0x00,0x00,0xd0,0x00, 0x99,0x50,0x10,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x09,0x90, 0x00,0x00,0x0c,0xe0,
  0x00,0x00,0x00,0x60, 0x00,0x00,0x01,0x11, 0x00,0x19,0x00,0x00, 0x00,0x00,0x90,0x00, 0x00,0xd9,0x00,0x00, 0x90,0x00,0x00,0x00, 0x04,0xc0,0xe9,0x00, 0x00,0x00,0x00,0x50,
  0x00,0x00,0x00,0x40, 0x00,0x00,0x06,0x00, 0x10,0x05,0x00,0x40, 0x00,0x03,0x01,0x00, 0x90,0xbd,0x00,0x09, 0x00,0x90,0x00,0x00, 0x09,0x00,0x00,0xc0, 0x00,0x00,0xc0,0x0e,
  0x00,0x04,0x00,0x60, 0x50,0x00,0x01,0x10, 0x00,0x02,0x10,0x01, 0x00,0x00,0x00,0x0c, 0x01,0xa0,0x90,0x00, 0x09,0x00,0x09,0x00, 0x90,0x00,0x0d,0x99, 0x00,0x00,0x00,0xe0,
  0x00,0x00,0x00,0x44, 0x11,0x36,0x00,0x00, 0x00,0x20,0x30,0x00, 0x00,0x90,0x51,0x00, 0x00,0x01,0x90,0x00, 0x90,0x00,0x0b,0x90, 0x00,0x9b,0x09,0x00, 0xca,0x0d,0x0c,0xe0,
  0x00,0x00,0x00,0x60, 0x11,0x00,0x00,0x11, 0x00,0x00,0x00,0x00, 0x00,0x50,0x01,0x00, 0x00,0x00,0x19,0x00, 0x00,0x04,0x90,0x90, 0x99,0x4c,0x00,0xe9, 0x00,0x0c,0xd0,0x00,
  0x00,0x00,0x00,0x00, 0xc0,0x00,0x00,0x16, 0x00,0x10,0x0d,0x01, 0x00,0x00,0x00,0x00, 0x00,0x09,0x00,0x9e, 0x90,0x00,0x00,0xb0, 0x00,0x00,0x00,0x59, 0x00,0x00,0x00,0x40,
  0x04,0x00,0x00,0x60, 0x00,0x00,0x01,0x00, 0x10,0x10,0x00,0x50, 0x90,0x99,0xc0,0x10, 0x04,0x02,0x00,0x00, 0x00,0xa0,0x00,0x99, 0xc0,0x0d,0x00,0xe0, 0x00,0x00,0x00,0x00,
  0x00,0x40,0x00,0x00, 0x10,0x00,0x36,0x00, 0x91,0x00,0x01,0x00, 0x00,0x00,0x00,0x10, 0x09,0x9a,0x91,0x90, 0x00,0x00,0x09,0x01, 0x00,0x00,0x00,0x09, 0x00,0x0c,0x00,0x0e,
  0x00,0x00,0x00,0x06, 0x01,0x10,0x00,0x11, 0x10,0x33,0x04,0x00, 0x00,0x00,0x01,0x05, 0x09,0x0a,0x40,0x00, 0x90,0x00,0x90,0x90, 0x00,0xd0,0xb9,0x09, 0x00,0x0c,0xc0,0xe0,
  0x00,0x00,0x00,0x0d, 0x00,0x01,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x10,0x00,0x90, 0x00,0x90,0xe0,0x69, 0x09,0x00,0x00,0x00, 0x00,0x05,0x00,0x00, 0x00,0x00,0x00,0x00,
  0x06,0x04,0x00,0x40, 0x11,0x10,0x01,0x01, 0x00,0x00,0x30,0x0d, 0x00,0x00,0x00,0x00, 0x50,0x09,0x00,0x00, 0xa0,0x29,0xb9,0x00, 0x09,0x00,0x00,0x99, 0x20,0xe0,0xcb,0x0c,
  0x00,0x30,0x04,0x60, 0x04,0x10,0x01,0x10, 0x10,0x10,0x00,0x00, 0xd0,0x09,0x00,0x05, 0x00,0x09,0x19,0x00, 0xa9,0xc2,0x90,0x91, 0x90,0x00,0x00,0x09, 0x00,0x00,0x0c,0xae,
  0x40,0x00,0x04,0x60, 0x01,0x00,0x50,0x11, 0x00,0x20,0x00,0x30, 0x1a,0x31,0x10,0x00, 0xd0,0x00,0x29,0x00, 0x90,0x90,0x0a,0x09, 0x09,0x00,0xb9,0x90, 0x00,0xbc,0x0c,0xe0,
};
const uint8_t m_figur[1732] PROGMEM = // 198 272 298 274 398 292
{ 0x3c,0x3c,0x3c,0x3c,0x3c, 0x3c,0x3c,0x3c,0x3c,0x3c, 0x3c,0x3c,0x3c,0x3c,0x3c, 0x1a,0x49,0x19,0x19,0x4b,
  0x18,0x18,0x4d,0x17,0x17, 0x4f,0x16,0x16,0x46,0x85, 0x46,0x15,0x15,0x46,0x87, 0x46,0x14,0x14,0x46,0x89,
  0x46,0x13,0x13,0x46,0x8b, 0x46,0x12,0x13,0x45,0x8d, 0x45,0x12,0x13,0x45,0x8d, 0x45,0x12,0x13,0x44,0x8f,
  0x44,0x12,0x13,0x45,0x8d, 0x45,0x12,0x13,0x45,0x8d, 0x45,0x12,0x13,0x46,0x8b, 0x46,0x12,0x14,0x46,0x89,
  0x46,0x13,0x15,0x46,0x87, 0x46,0x14,0x16,0x46,0x85, 0x46,0x15,0x17,0x46,0x83, 0x46,0x16,0x18,0x4d,0x17,
  0x18,0x4d,0x17,0x17,0x4f, 0x16,0x16,0x51,0x15,0x15, 0x46,0x87,0x46,0x14,0x14, 0x46,0x89,0x46,0x13,0x13,
  0x46,0x8b,0x46,0x12,0x12, 0x46,0x8d,0x46,0x11,0x11, 0x46,0x8f,0x46,0x10,0x10, 0x46,0x91,0x46,0x0f,0x0f,
  0x46,0x93,0x46,0x0e,0x0e, 0x46,0x95,0x46,0x0d,0x0d, 0x46,0x97,0x46,0x0c,0x0c, 0x46,0x99,0x46,0x0b,0x0b,
  0x67,0x0a,0x0a,0x69,0x09, 0x09,0x6b,0x08,0x09,0x6b, 0x08,0x09,0x44,0xa3,0x44, 0x08,0x09,0x44,0xa3,0x44,
  0x08,0x09,0x44,0xa3,0x44, 0x08,0x09,0x6b,0x08,0x09, 0x6b,0x08,0x09,0x6b,0x08, 0x09,0x6b,0x08,
  0x3c,0x3c,0x3c,0x3c,0x3c, 0x3c,0x3c,0x20,0x44,0x18, 0x1f,0x46,0x17,0x1e,0x4a, 0x14,0x1d,0x4c,0x13,0x1a,
  0x50,0x12,0x18,0x53,0x11, 0x17,0x49,0x86,0x46,0x10, 0x16,0x49,0x89,0x46,0x0f, 0x15,0x47,0x8d,0x46,0x0e,
  0x14,0x46,0x8f,0x46,0x0d, 0x13,0x46,0x91,0x46,0x0c, 0x12,0x46,0x93,0x46,0x0b, 0x10,0x47,0x94,0x46,0x0b,
  0x0f,0x47,0x96,0x45,0x0b, 0x0d,0x47,0x86,0x44,0x8e, 0x46,0x0a,0x0b,0x48,0x86, 0x46,0x8e,0x46,0x09,0x0a,
  0x48,0x87,0x46,0x8e,0x46, 0x09,0x09,0x48,0x89,0x44, 0x8f,0x46,0x09,0x08,0x48, 0x94,0x41,0x89,0x45,0x09,
  0x07,0x46,0x96,0x42,0x89, 0x45,0x09,0x06,0x45,0x98, 0x43,0x88,0x45,0x09,0x06, 0x46,0x96,0x45,0x87,0x46,
  0x08,0x06,0x47,0x94,0x46, 0x88,0x45,0x08,0x06,0x47, 0x93,0x47,0x88,0x45,0x08, 0x06,0x46,0x89,0x52,0x88,
  0x45,0x08,0x06,0x45,0x89, 0x52,0x89,0x46,0x07,0x06, 0x46,0x86,0x53,0x8b,0x45, 0x07,0x06,0x47,0x84,0x53,
  0x8c,0x45,0x07,0x07,0x51, 0x04,0x46,0x8e,0x45,0x07, 0x08,0x4f,0x04,0x46,0x8f, 0x45,0x07,0x09,0x4b,0x06,
  0x46,0x90,0x45,0x07,0x0a, 0x48,0x07,0x46,0x91,0x45, 0x07,0x0b,0x46,0x07,0x46, 0x92,0x45,0x07,0x15,0x48,
  0x93,0x45,0x07,0x13,0x48, 0x95,0x45,0x07,0x11,0x48, 0x97,0x45,0x07,0x10,0x47, 0x99,0x45,0x07,0x0f,0x46,
  0x9b,0x45,0x07,0x0e,0x46, 0x9c,0x45,0x07,0x0a,0x6b, 0x07,0x09,0x6d,0x06,0x08, 0x6f,0x05,0x08,0x6f,0x05,
  0x08,0x45,0xa5,0x45,0x05, 0x08,0x45,0xa5,0x45,0x05, 0x08,0x45,0xa5,0x45,0x05, 0x08,0x45,0xa5,0x45,0x05,
  0x08,0x6f,0x05,0x08,0x6f, 0x05,0x08,0x6f,0x05,0x08, 0x6f,0x05,
  0x3c,0x3c,0x3c,0x3c,0x1d, 0x43,0x1c,0x1c,0x45,0x1b, 0x1b,0x47,0x1a,0x1a,0x44, 0x81,0x44,0x19,0x19,0x44,
  0x83,0x44,0x18,0x19,0x44, 0x83,0x44,0x18,0x19,0x45, 0x81,0x45,0x18,0x1a,0x49, 0x19,0x19,0x4b,0x18,0x18,
  0x46,0x81,0x46,0x17,0x17, 0x46,0x83,0x46,0x16,0x16, 0x46,0x85,0x46,0x15,0x15, 0x46,0x87,0x46,0x14,0x14,
  0x46,0x89,0x46,0x13,0x13, 0x46,0x8b,0x45,0x13,0x12, 0x46,0x8b,0x45,0x02,0x41, 0x11,0x11,0x46,0x8b,0x45,
  0x02,0x43,0x10,0x10,0x46, 0x8b,0x45,0x02,0x45,0x0f, 0x10,0x45,0x8b,0x45,0x02, 0x46,0x0f,0x0f,0x45,0x8b,
  0x45,0x02,0x48,0x0e,0x0f, 0x44,0x8b,0x45,0x02,0x45, 0x81,0x43,0x0e,0x0e,0x44, 0x8b,0x45,0x02,0x45,0x82,
  0x44,0x0d,0x0e,0x44,0x8a, 0x45,0x02,0x45,0x83,0x44, 0x0d,0x0e,0x44,0x89,0x45, 0x02,0x45,0x84,0x44,0x0d,
  0x0e,0x44,0x88,0x45,0x02, 0x45,0x85,0x44,0x0d,0x0e, 0x44,0x87,0x45,0x02,0x45, 0x86,0x44,0x0d,0x0e,0x44,
  0x87,0x44,0x02,0x45,0x87, 0x44,0x0d,0x0e,0x44,0x87, 0x44,0x01,0x45,0x88,0x44, 0x0d,0x0e,0x44,0x87,0x49,
  0x89,0x44,0x0d,0x0e,0x44, 0x88,0x47,0x8a,0x44,0x0d, 0x0e,0x44,0x89,0x45,0x8b, 0x44,0x0d,0x0f,0x44,0x89,
  0x43,0x8b,0x44,0x0e,0x0f, 0x45,0x95,0x45,0x0e,0x10, 0x45,0x93,0x45,0x0f,0x10, 0x46,0x91,0x46,0x0f,0x11,
  0x46,0x8f,0x46,0x10,0x12, 0x46,0x8d,0x46,0x11,0x13, 0x46,0x8b,0x46,0x12,0x14, 0x46,0x89,0x46,0x13,0x15,
  0x46,0x87,0x46,0x14,0x16, 0x46,0x85,0x46,0x15,0x17, 0x46,0x83,0x46,0x16,0x0a, 0x69,0x09,0x09,0x6b,0x08,
  0x08,0x6d,0x07,0x08,0x6d, 0x07,0x08,0x44,0xa5,0x44, 0x07,0x08,0x44,0xa5,0x44, 0x07,0x08,0x44,0xa5,0x44,
  0x07,0x08,0x44,0xa5,0x44, 0x07,0x08,0x6d,0x07,0x08, 0x6d,0x07,0x08,0x6d,0x07, 0x08,0x6d,0x07,
  0x3c,0x3c,0x3c,0x3c,0x3c, 0x3c,0x3c,0x3c,0x3c,0x3c, 0x0a,0x4b,0x04,0x4b,0x04, 0x4b,0x09,0x0a,0x4c,0x02,
  0x4d,0x02,0x4c,0x09,0x0a, 0x4c,0x02,0x4d,0x02,0x4c, 0x09,0x0a,0x4c,0x02,0x4d, 0x02,0x4c,0x09,0x0a,0x44,
  0x84,0x44,0x02,0x44,0x85, 0x44,0x02,0x44,0x84,0x44, 0x09,0x0a,0x44,0x84,0x44, 0x02,0x44,0x85,0x44,0x02,
  0x44,0x84,0x44,0x09,0x0a, 0x44,0x84,0x44,0x02,0x44, 0x85,0x44,0x02,0x44,0x84, 0x44,0x09,0x0a,0x44,0x84,
  0x4a,0x85,0x4a,0x84,0x44, 0x09,0x0a,0x44,0x84,0x4a, 0x85,0x4a,0x84,0x44,0x09, 0x0a,0x44,0x84,0x4a,0x85,
  0x4a,0x84,0x44,0x09,0x0a, 0x44,0x84,0x4a,0x85,0x4a, 0x84,0x44,0x09,0x0a,0x44, 0xa1,0x44,0x09,0x0a,0x44,
  0xa1,0x44,0x09,0x0a,0x44, 0xa1,0x44,0x09,0x0a,0x44, 0xa1,0x44,0x09,0x0a,0x45, 0x9f,0x45,0x09,0x0a,0x69,
  0x09,0x0b,0x67,0x0a,0x0c, 0x65,0x0b,0x0d,0x63,0x0c, 0x12,0x44,0x91,0x44,0x11, 0x12,0x44,0x91,0x44,0x11,
  0x12,0x44,0x91,0x44,0x11, 0x12,0x44,0x91,0x44,0x11, 0x12,0x44,0x91,0x44,0x11, 0x12,0x44,0x91,0x44,0x11,
  0x12,0x44,0x91,0x44,0x11, 0x12,0x44,0x91,0x44,0x11, 0x12,0x44,0x91,0x44,0x11, 0x11,0x44,0x93,0x44,0x10,
  0x10,0x44,0x95,0x44,0x0f, 0x0f,0x44,0x97,0x44,0x0e, 0x0e,0x44,0x99,0x44,0x0d, 0x0d,0x44,0x9b,0x44,0x0c,
  0x0c,0x44,0x9d,0x44,0x0b, 0x0b,0x44,0x9f,0x44,0x0a, 0x0a,0x69,0x09,0x09,0x6b, 0x08,0x08,0x6d,0x07,0x08,
  0x6d,0x07,0x08,0x44,0xa5, 0x44,0x07,0x08,0x44,0xa5, 0x44,0x07,0x08,0x44,0xa5, 0x44,0x07,0x08,0x44,0xa5,
  0x44,0x07,0x08,0x6d,0x07, 0x08,0x6d,0x07,0x08,0x6d, 0x07,0x08,0x6d,0x07,
  0x1b,0x46,0x1b,0x1a,0x48, 0x1a,0x19,0x4a,0x19,0x18, 0x4c,0x18,0x17,0x45,0x84, 0x45,0x17,0x16,0x45,0x86,
  0x45,0x16,0x16,0x44,0x88, 0x44,0x16,0x16,0x44,0x88, 0x44,0x16,0x16,0x44,0x88, 0x44,0x16,0x17,0x44,0x86,
  0x44,0x17,0x05,0x46,0x0d, 0x44,0x84,0x44,0x0d,0x46, 0x05,0x04,0x48,0x0d,0x44, 0x83,0x43,0x0d,0x48,0x04,
  0x03,0x4a,0x0d,0x44,0x82, 0x42,0x0d,0x4a,0x03,0x02, 0x4c,0x0c,0x44,0x82,0x42, 0x0c,0x4c,0x02,0x01,0x45,
  0x84,0x45,0x0a,0x44,0x83, 0x43,0x0a,0x45,0x84,0x45, 0x01,0x45,0x86,0x45,0x09, 0x44,0x83,0x43,0x09,0x45,
  0x86,0x45,0x44,0x88,0x44, 0x08,0x44,0x84,0x44,0x08, 0x44,0x88,0x44,0x44,0x88, 0x44,0x08,0x44,0x84,0x44,
  0x08,0x44,0x88,0x44,0x44, 0x88,0x44,0x07,0x44,0x86, 0x44,0x07,0x44,0x88,0x44, 0x44,0x87,0x44,0x08,0x44,
  0x86,0x44,0x08,0x44,0x87, 0x44,0x45,0x85,0x44,0x08, 0x44,0x88,0x44,0x08,0x44, 0x85,0x45,0x01,0x45,0x84,
  0x44,0x08,0x44,0x88,0x44, 0x08,0x44,0x84,0x45,0x01, 0x02,0x45,0x84,0x44,0x06, 0x44,0x8a,0x44,0x06,0x44,
  0x84,0x45,0x02,0x03,0x44, 0x85,0x44,0x05,0x44,0x8a, 0x44,0x05,0x44,0x85,0x44, 0x03,0x04,0x44,0x85,0x44,
  0x03,0x44,0x8c,0x44,0x03, 0x44,0x85,0x44,0x04,0x04, 0x44,0x86,0x44,0x02,0x44, 0x8c,0x44,0x02,0x44,0x86,
  0x44,0x04,0x05,0x43,0x87, 0x48,0x8e,0x48,0x87,0x43, 0x05,0x05,0x44,0x87,0x47, 0x8e,0x47,0x87,0x44,0x05,
  0x05,0x44,0x88,0x45,0x90, 0x45,0x88,0x44,0x05,0x06, 0x43,0x89,0x43,0x92,0x43, 0x89,0x43,0x06,0x06,0x44,
  0xa8,0x44,0x06,0x06,0x44, 0xa8,0x44,0x06,0x07,0x43, 0xa8,0x43,0x07,0x07,0x44, 0xa6,0x44,0x07,0x07,0x44,
  0xa6,0x44,0x07,0x08,0x43, 0xa6,0x43,0x08,0x08,0x44, 0x88,0x54,0x88,0x44,0x08, 0x08,0x44,0x87,0x56,0x87,
  0x44,0x08,0x09,0x43,0x85, 0x5a,0x85,0x43,0x09,0x09, 0x44,0x83,0x5c,0x83,0x44, 0x09,0x09,0x4b,0x94,0x4b,
  0x09,0x0a,0x49,0x96,0x49, 0x0a,0x0a,0x48,0x98,0x48, 0x0a,0x0a,0x47,0x9a,0x47, 0x0a,0x0a,0x44,0xa0,0x44,
  0x0a,0x0a,0x44,0xa0,0x44, 0x0a,0x0a,0x44,0x84,0x58, 0x84,0x44,0x0a,0x0b,0x44, 0x82,0x5a,0x82,0x44,0x0b,
  0x0c,0x64,0x0c,0x0c,0x64, 0x0c,0x0c,0x48,0x94,0x48, 0x0c,0x0c,0x47,0x96,0x47, 0x0c,0x0c,0x44,0x9c,0x44,
  0x0c,0x0c,0x44,0x9c,0x44, 0x0c,0x0c,0x64,0x0c,0x0c, 0x64,0x0c,0x0d,0x62,0x0d, 0x0e,0x60,0x0e, 
  0x3c,0x3c,0x1c,0x44,0x1c, 0x1b,0x46,0x1b,0x1a,0x48, 0x1a,0x1a,0x48,0x1a,0x09, 0x48,0x09,0x48,0x09,0x48,
  0x09,0x08,0x4a,0x07,0x4a, 0x07,0x4a,0x08,0x07,0x54, 0x06,0x54,0x07,0x06,0x54, 0x08,0x54,0x06,0x05,0x45,
  0x86,0x4a,0x88,0x4a,0x86, 0x45,0x05,0x04,0x45,0x8a, 0x48,0x86,0x48,0x8a,0x45, 0x04,0x03,0x45,0x8e,0x50,
  0x8e,0x45,0x03,0x02,0x45, 0x90,0x4e,0x90,0x45,0x02, 0x01,0x45,0x92,0x4c,0x92, 0x45,0x01,0x45,0x94,0x4a,
  0x94,0x45,0x44,0x96,0x48, 0x96,0x44,0x44,0x96,0x48, 0x96,0x44,0x44,0x96,0x48, 0x96,0x44,0x44,0x97,0x46,
  0x97,0x44,0x44,0x98,0x44, 0x98,0x44,0x44,0x98,0x44, 0x98,0x44,0x44,0x98,0x44, 0x98,0x44,0x44,0x98,0x44,
  0x98,0x44,0x44,0x98,0x44, 0x98,0x44,0x44,0x98,0x44, 0x98,0x44,0x44,0x98,0x44, 0x98,0x44,0x45,0x97,0x44,
  0x97,0x45,0x46,0x95,0x46, 0x95,0x46,0x01,0x46,0x93, 0x48,0x93,0x46,0x01,0x02, 0x46,0x92,0x48,0x92,0x46,
  0x02,0x03,0x46,0x91,0x48, 0x91,0x46,0x03,0x04,0x46, 0x8f,0x4a,0x8f,0x46,0x04, 0x05,0x46,0x8d,0x4c,0x8d,
  0x46,0x05,0x06,0x46,0x8a, 0x50,0x8a,0x46,0x06,0x07, 0x46,0x87,0x54,0x87,0x46, 0x07,0x08,0x6c,0x08,0x09,
  0x6a,0x09,0x0a,0x68,0x0a, 0x0a,0x4b,0x92,0x4b,0x0a, 0x0a,0x4a,0x94,0x4a,0x0a, 0x0a,0x49,0x96,0x49,0x0a,
  0x0a,0x48,0x98,0x48,0x0a, 0x0a,0x47,0x9a,0x47,0x0a, 0x0a,0x44,0xa0,0x44,0x0a, 0x0a,0x44,0xa0,0x44,0x0a,
  0x0a,0x44,0x84,0x58,0x84, 0x44,0x0a,0x0a,0x44,0x83, 0x5a,0x83,0x44,0x0a,0x0a, 0x68,0x0a,0x0a,0x68,0x0a,
  0x0a,0x4a,0x94,0x4a,0x0a, 0x0a,0x49,0x96,0x49,0x0a, 0x0b,0x45,0x9c,0x45,0x0b, 0x0c,0x44,0x9c,0x44,0x0c,
  0x0c,0x64,0x0c,0x0c,0x64, 0x0c,0x0d,0x62,0x0d,0x0e, 0x60,0x0e,
};
const uint16_t m_fig_u[6] PROGMEM = { 0,198,470,768,1042,1440 };
             
uint8_t not_x = 1, not_y = 1, rb = 0, cod_col = 0, cod_cnt = 0 ;
uint8_t u_pozic = 0, col_fig = 6, col_fon = 1 ;
int smesh_d = 150, uk_mas = 0, uk_i = 0, uk_j = 0, uk_cnt = 0, m_poz_u =0 ;  

M5EPD_Canvas canvas(&M5.EPD);
M5EPD_Canvas canvas1(&M5.EPD);

void Out_Figur(uint8_t kod_fig){
 if ((kod_fig&8)==8) {
  col_fig = 0;} else {
  col_fig = 7;}
 if((not_x + not_y)&1==1){
  col_fon = 1;} else {
  col_fon = 0;}
 if (kod_fig==0) {
  uk_mas = 0;
 } else {
  uk_mas = m_fig_u[(kod_fig&7)-1];
 }
 for (uk_j = 0; uk_j < 58; uk_j++){
  uk_i = 0;
  while ( uk_i < 60){
   rb = m_figur[uk_mas]; uk_mas++;
   cod_col = (rb&0xc0) >> 6; cod_cnt = (rb & 0x3f);
   for (uk_cnt = 0; uk_cnt < cod_cnt; uk_cnt++){
    if (cod_col == 0) { canvas1.drawPixel(uk_i, uk_j, col_fon); uk_i++; };
    if (cod_col == 1) { canvas1.drawPixel(uk_i, uk_j, 15 ); uk_i++; };
    if (cod_col == 2) { canvas1.drawPixel(uk_i, uk_j, col_fig); uk_i++; }
   }
  }
 }
}

void Out_Board() {
 canvas.fillCanvas(0);
 canvas.fillRect(  1, smesh_d  , 540,   5, 4);
 canvas.fillRect(  1, smesh_d+5,   2, 536, 4);
 canvas.fillRect(539, smesh_d+5,   2, 536, 4);
 for (int32_t j = 0; j < 4; j++){
  for (int32_t i = 0; i < 4; i++){
   canvas.fillRect( 3+i*134, smesh_d+5+j*134,    67, 67, 0);
   canvas.fillRect(70+i*134, smesh_d+5+j*134,    67, 67, 1);
   canvas.fillRect( 3+i*134, smesh_d+5+67+j*134, 67, 67, 1);
   canvas.fillRect(70+i*134, smesh_d+5+67+j*134, 67, 67, 0);
  }
 }
 canvas.fillRect(1, smesh_d+541, 540, 5, 4);
 canvas.pushCanvas(0,0,UPDATE_MODE_GC16);
 m_poz_u = u_pozic*32;
 for (int8_t i = 0; i < 32; i++){
  int8_t fig_r = (m_pozic[m_poz_u]&0xf0)>>4;   
  not_x = (i&0x03)<<1;     not_y = (i&0x3c)>>2; 
  not_y = 7-not_y;  
  int8_t fig_o = (fig_r&7);
  if ((fig_r&8)==0) {fig_o=fig_o+8;};
  if (fig_r!=0){Out_Figur(fig_o);
  canvas1.pushCanvas((not_x)*67+6, 159+not_y*67,UPDATE_MODE_GC16);};
  fig_r = (m_pozic[m_poz_u]&0x0f);
  not_x = ((i&0x03)<<1)+1; not_y = (i&0x3c)>>2;
  not_y = 7-not_y;  
  fig_o = (fig_r&7);
  if ((fig_r&8)==0) {fig_o=fig_o+8;};
  if (fig_r!=0){Out_Figur(fig_o);
  canvas1.pushCanvas((not_x)*67+6, 159+not_y*67,UPDATE_MODE_GC16);};
  m_poz_u++;
 }
}

void setup(){
 M5.begin();
 M5.update();
 M5.EPD.SetRotation(90);
 M5.EPD.Clear(true);
 canvas.createCanvas(540, 960);
 canvas.fillCanvas(0);
 canvas.pushCanvas(0,0,UPDATE_MODE_GC16);
 canvas1.createCanvas(60, 58);
 canvas1.fillCanvas(0);
 Out_Board();
} 
void loop(){
}
 
