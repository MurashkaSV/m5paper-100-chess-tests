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
const uint16_t m_otv_u[101] PROGMEM = { 0,  3,  6, 13, 16, 27, 30, 33, 36, 39,
                                       44, 51, 56, 61, 68, 73, 78, 83, 86, 93,
                                       96,103,110,115,120,127,130,135,138,143,
                                      148,157,162,169,174,177,182,187,190,195,
                                      200,205,208,211,216,221,226,229,232,237,
                                      240,243,246,249,252,255,258,263,270,273,
                                      276,281,284,289,294,301,306,309,314,317,
                                      322,327,330,335,340,345,350,355,360,365,
                                      372,375,380,383,388,391,394,399,402,415,
                                      418,425,428,431,434,439,444,447,450,453,
                                      456};
const uint16_t m_otvet[456] PROGMEM = {
      0xc241,0x51c1,0xd036,
      0xdcb3,0x579d,0xdce5,
      0xd54e,0x250e,0xa2d5,0x63c7,0x914e,0x61ce,0xc006,
      0xdc77,0x4bf7,0xa92e,
      0xdf3d,0x6dbd,0xaeec,0x37ac,0xacac,0x6f7c,0xcaba,0x2d7b,0xcebb,0x6f35,0xcefd,
      0xc6de,0x459e,0xb8d5,
      0xc61f,0x335f,0xd567,
      0xc006,0x41c6,0x9556,
      0xd824,0x3764,0xc9ef,
      0xb4ee,0x6dee,0xc396,0x5496,0xdf7e,
      0xdcde,0x47de,0xc827,0x6dfe,0xb723,0x1db5,0xc61e,
      0xc65b,0x479b,0xc824,0x6b33,0x9e7a,
      0xdb5f,0x69df,0xa6d5,0x67e7,0xc61f,
      0xdaad,0x4ff7,0xb4ee,0x57ae,0xdb5f,0x5ba7,0xd7e7,
      0xd497,0x6dfe,0xd5e5,0x1ba5,0x9b6e,
      0xd02d,0x1dad,0xc8f3,0x6dff,0xbc55,
      0xc827,0x47e7,0xdf76,0x6bf6,0xaba7,
      0xd91d,0x555d,0xc827,
      0xb52f,0x47ef,0xc79a,0x3120,0xc6ba,0x383b,0xcebb,
      0xc61e,0x47de,0xd157,
      0xbca4,0x4864,0xa767,0x29ac,0xa9ed,0x6fbf,0xdbb7,
      0x9b2d,0x6db7,0xce3f,0x6dff,0xdd3d,0x6ff7,0xdf76,
      0xa4a3,0x5823,0xdbaf,0x49ef,0xca2f,
      0xc241,0x60cb,0x9452,0x62d2,0xc079,
      0xb2ae,0x6dee,0xa6e5,0x6ba5,0xd61c,0x696d,0xd72c,
      0xd8d5,0x1395,0xc61f,
      0xc77d,0x6fbd,0xd9b4,0x6f7e,0xdd3c,
      0xc51c,0x56dc,0xd9ad,
      0xc608,0x23de,0xd51b,0x535b,0xc20e,
      0xbafd,0x6bb7,0xcaaf,0x6dfe,0xcbff,
      0xa8ac,0x35ec,0x98ec,0x1d6c,0xcaba,0x29ed,0x9d2d,0x25a7,0xdf7e,
      0xb4ee,0x4bee,0xd6ff,0x6dff,0xa76e,
      0xd65e,0x35de,0xa8ed,0x6def,0xb894,0x49e6,0xad3e,
      0xa757,0x2794,0xd094,0x5594,0xc61f,
      0xc923,0x1723,0xb6a3,
      0xda7b,0x39bb,0xb936,0x6f7c,0x9c73,
      0xce30,0x58db,0xd49b,0x3d9b,0xcc37,
      0xa2dc,0x44c3,0xa726,
      0xdd36,0x3b76,0xb4b6,0x6ff7,0xbdad,
      0xa72d,0x6dee,0xdcf6,0x6bb6,0xab67,
      0xa96f,0x49ef,0xcc77,0x4bf7,0xd76d,
      0xa716,0x3756,0xb84c,
      0xc98e,0x27ce,0xa505,
      0x92cc,0x389b,0xd69b,0x48db,0x930d,
      0xd0af,0x6def,0xb67d,0x6bf7,0xc827,
      0xbacf,0x41cf,0xd28c,0x35de,0xd304,
      0xd737,0x4bf7,0xad2e,
      0x9b6e,0x4bee,0xdf3f,
      0xcbab,0x6cfc,0xcafb,0x1d3b,0x9cb3,
      0xd865,0x1ba5,0xb6b5,
      0xc966,0x57a6,0xda9c,
      0xc20f,0x57cf,0xda7b,
      0xc61f,0x69df,0xd0d5,
      0xc71d,0x159d,0xd50d,
      0xcfcf,0x538f,0xa915,
      0xdd67,0x47e7,0xb8dc,
      0xdb7f,0x6dff,0xb9ad,0x6ff7,0xc867,
      0xb8fe,0x39ad,0xb92d,0x49e6,0xd475,0x2bf5,0x9f35,
      0xa6a4,0x5b81,0xc61f,
      0x9cf4,0x6b74,0xd5ab,
      0xd6b5,0x1bb5,0x9b6e,0x6def,0xaaf5,
      0xd96c,0x4bec,0xad25,
      0xc867,0x57de,0xdf34,0x1b74,0xacbc,
      0xcaaf,0x376f,0x971d,0x35e5,0xb4e5,
      0xc7b6,0x6dff,0xafaf,0x41ef,0xcdbe,0x6ff7,0xc5b6,
      0xc927,0x43e7,0xb51b,0x6ff7,0xd3b6,
      0xc1d7,0x4006,0xe50d,
      0xa91e,0x395e,0xd157,0x3797,0xc827,
      0xab3d,0x2cfd,0xe75e,
      0xab67,0x4be7,0xd9ad,0x6ff7,0xdb76,
      0xcbaf,0x6def,0xaef5,0x1fb5,0xdf3f,
      0xc825,0x1ba5,0xd0de,
      0xcd14,0x45d4,0xcdbe,0x6ffe,0xdc36,
      0xaab4,0x59f5,0xdf7e,0x5d7e,0xad2e,
      0xca6c,0x196c,0x969b,0x6925,0xb201,
      0xa92e,0x4bee,0xb2ae,0x6dee,0xd456,
      0xa726,0x6dff,0xca6e,0x5c1b,0xcbaf,
      0xccb6,0x5ee9,0xcdb7,0x69e6,0xa35c,
      0xcbbe,0x6ffe,0xaf2d,0x6fbf,0xcc37,
      0xdaad,0x27ad,0xaf2d,0x6dff,0xbf76,0x6ff6,0xab67,
      0xd35f,0x295f,0xc9a7,
      0xdd1f,0x579f,0xa76e,0x6ff7,0xab9f,
      0xcdbe,0x6ffe,0xdcb6,
      0xc355,0x6595,0xda9c,0x655c,0xb463,
      0xc827,0x57e7,0xdbad,
      0xd2ef,0x5aaf,0xb6f6,
      0xd52f,0x6def,0xb894,0x6bf7,0xc823,
      0xddd7,0x699d,0xd5df,
      0xd6be,0x6ffe,0xccb6,0x6fbf,0xcdb7,0x6ffe,0xcc36,0x6fbd,0xcdb5,0x6f7e,0xcdf6,0x6fbf,0xcd7d,
      0xa6a4,0x5b81,0xc61f,
      0xcc35,0x1bb5,0xd8f5,0x3b76,0xce3f,0x6dff,0xdd7e,
      0xc75e,0x47de,0xd4cc,
      0xddb5,0x1fb5,0xcdff,
      0xa72d,0x6dad,0xdcaa,
      0xc418,0x47de,0xb84c,0x479f,0xb313,
      0xdefe,0x6dfe,0xc93c,0x6fb7,0xcf3f,
      0x965b,0x151b,0xd7a6,
      0xd116,0x2156,0xa1cd,
      0xdedf,0x4bdf,0xa76e,
      0xb4ee,0x4bee,0xa913,
      };                        
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
void Out_Anime() {
 for (int32_t i_otv = m_otv_u[u_pozic]; i_otv < m_otv_u[u_pozic+1]; i_otv++){
  int8_t fig_r = (m_otvet[i_otv]&0xf000)>>12;
  not_x = (m_otvet[i_otv]&0x0e00)>>9;
  not_y = 7-((m_otvet[i_otv]&0x01c0)>>6);
  if((not_x + not_y)&1==1){col_fon = 1;} else {col_fon = 0;}
  Out_Figur(fig_r);   
  canvas1.pushCanvas(not_x*67+6, smesh_d+9+not_y*67,UPDATE_MODE_GC16);
  delay(1000);
  for (int32_t i = 0; i < 60; i++){
   for (int32_t j = 0; j < 58; j++){
    canvas1.drawPixel(i,j,col_fon);
   }
  }
  canvas1.pushCanvas(not_x*67+6, smesh_d+9+not_y*67,UPDATE_MODE_GC16);
  delay(600);
  not_x = (m_otvet[i_otv]&0x0038)>>3;
  not_y = 7-(m_otvet[i_otv]&0x0007);
  if((not_x + not_y)&1==1){col_fon = 1;} else {col_fon = 0;}
  Out_Figur(fig_r);   
  canvas1.pushCanvas(not_x*67+6, smesh_d+9+not_y*67,UPDATE_MODE_GC16);
  delay(1000);
  for (int32_t i = 0; i < 60; i++){
   for (int32_t j = 0; j < 58; j++){
    canvas1.drawPixel(i,j,col_fon);
   }
  }
  canvas1.pushCanvas(not_x*67+6, smesh_d+9+not_y*67,UPDATE_MODE_GC16);
  delay(600);
  Out_Figur(fig_r);   
  canvas1.pushCanvas(not_x*67+6, smesh_d+9+not_y*67,UPDATE_MODE_GC16);
  delay(1000);
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
 delay(3000);
 Out_Anime();
} 
void loop(){
}
