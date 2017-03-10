#define Frack_width 116
#define Frack_height 64
const char Frack_bits[] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x08, 0x00, 0x00, 0x40, 0x03, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0x01, 0x00, 0x00, 0x00,
   0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xfc, 0x7f, 0x00,
   0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e,
   0x7e, 0x0f, 0x00, 0x00, 0x00, 0xe8, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xc0, 0x3f, 0x2c, 0x00, 0x00, 0x00, 0x80, 0x7f, 0xfc, 0xff, 0x00,
   0x00, 0x00, 0x00, 0x00, 0xf8, 0x0f, 0x00, 0x00, 0x80, 0xf6, 0xe3, 0x7f,
   0xf9, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x03, 0x00, 0x00, 0xf0,
   0x8f, 0xff, 0x7f, 0xfc, 0xff, 0x01, 0x00, 0x00, 0x00, 0xc0, 0x7f, 0x00,
   0x00, 0x00, 0xfe, 0x2f, 0xff, 0x3f, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
   0xf8, 0x3f, 0x00, 0x00, 0xc0, 0xf8, 0x8f, 0xff, 0xdf, 0xff, 0xff, 0x03,
   0x00, 0x00, 0x00, 0xfc, 0x03, 0x00, 0x00, 0xf0, 0x7a, 0x42, 0x02, 0x00,
   0xfe, 0xfb, 0x03, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x74, 0xb8,
   0x54, 0x05, 0xd4, 0x6c, 0xf1, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
   0x00, 0x63, 0xdf, 0xff, 0x7f, 0xff, 0x03, 0xf0, 0x03, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0xe0, 0x4b, 0xc7, 0xff, 0xff, 0xff, 0xf7, 0xfb, 0x03,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x67, 0xf6, 0xff, 0xf3, 0xff,
   0xe7, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x67, 0xf6,
   0xff, 0xf1, 0xff, 0xcf, 0xff, 0x03, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x80,
   0xff, 0x67, 0xf3, 0xff, 0xf1, 0xff, 0x83, 0xff, 0x03, 0x00, 0x00, 0xfc,
   0x00, 0x00, 0x80, 0xff, 0x03, 0xc0, 0xff, 0xfd, 0xff, 0x29, 0xfe, 0x03,
   0x00, 0x00, 0x1e, 0x00, 0x00, 0x40, 0xff, 0x05, 0xc0, 0x7f, 0xfe, 0x7f,
   0xee, 0xfd, 0x03, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x20, 0x08, 0xa8, 0x1a,
   0x20, 0xff, 0x7f, 0xcf, 0xfb, 0x03, 0x00, 0x80, 0x03, 0x00, 0x00, 0xb0,
   0x2a, 0x00, 0x40, 0xd6, 0xff, 0x3f, 0xef, 0xf3, 0x03, 0x00, 0xc0, 0x01,
   0x00, 0x00, 0x78, 0xfe, 0x09, 0xc0, 0xff, 0x43, 0x3e, 0xcf, 0xf3, 0x03,
   0x00, 0xe0, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x01, 0x80, 0xff, 0x91, 0x1e,
   0xcf, 0xe3, 0x03, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xfe, 0x1f, 0x08, 0x00,
   0x00, 0x00, 0xc0, 0xdf, 0xef, 0x03, 0x00, 0x20, 0x00, 0x00, 0x00, 0xff,
   0x4f, 0x01, 0x40, 0xfe, 0x51, 0x5e, 0xef, 0xeb, 0x03, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0xe7, 0x09, 0xc0, 0xff, 0x01, 0x1e, 0xcf, 0xc3, 0x03,
   0x00, 0x1c, 0x00, 0x00, 0x80, 0xff, 0xf3, 0x01, 0x80, 0xff, 0xff, 0x3f,
   0xcf, 0x13, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0xff, 0x09, 0x08, 0x08,
   0xc0, 0xff, 0x7f, 0x84, 0xf8, 0x03, 0x00, 0x1e, 0x00, 0x00, 0x80, 0xff,
   0x64, 0x21, 0x51, 0x9f, 0xff, 0xff, 0x00, 0xfd, 0x03, 0x00, 0x3f, 0x00,
   0x00, 0x80, 0x01, 0xf6, 0x05, 0xa0, 0x3f, 0xff, 0xff, 0xef, 0xff, 0x03,
   0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfb, 0xab, 0xd5, 0x3f, 0xff, 0xff,
   0xc7, 0xff, 0x03, 0x80, 0x3f, 0x00, 0x00, 0x00, 0xca, 0xfb, 0x67, 0xf6,
   0xbf, 0xfc, 0xff, 0xdb, 0xff, 0x03, 0x80, 0x3f, 0x00, 0x00, 0x00, 0xff,
   0xfb, 0x67, 0xf3, 0x9f, 0xfd, 0xff, 0xcd, 0xff, 0x03, 0xc0, 0x3f, 0x00,
   0x00, 0x40, 0xff, 0xfb, 0x67, 0xf7, 0xcf, 0xe3, 0xff, 0xdc, 0xff, 0x03,
   0xe0, 0x3f, 0x00, 0x00, 0x90, 0xff, 0xfb, 0x77, 0xf3, 0xe3, 0xc7, 0x7f,
   0xcf, 0xff, 0x03, 0xe0, 0x3f, 0x00, 0x00, 0x84, 0xff, 0xe3, 0x77, 0xf7,
   0xf5, 0xd7, 0x3f, 0xdf, 0xff, 0x03, 0xf0, 0x1f, 0x00, 0x00, 0x82, 0xff,
   0x88, 0x67, 0xf3, 0xf1, 0xef, 0xdf, 0xcf, 0xff, 0x03, 0xf0, 0x1f, 0x00,
   0x00, 0x81, 0x7f, 0x3a, 0x77, 0xf7, 0xfb, 0xff, 0xef, 0xdf, 0xff, 0x03,
   0xf8, 0x1f, 0x00, 0x40, 0x00, 0x7f, 0x7b, 0x76, 0xf3, 0xff, 0xff, 0xf7,
   0xcf, 0xff, 0x03, 0xf8, 0x0f, 0x00, 0x20, 0x00, 0x7f, 0xfb, 0x62, 0xf6,
   0xff, 0xff, 0x33, 0xdf, 0xff, 0x03, 0xf8, 0x03, 0x00, 0x10, 0x00, 0x7f,
   0x10, 0xf0, 0xe5, 0xff, 0xff, 0x41, 0xcf, 0xff, 0x03, 0xf0, 0x01, 0x00,
   0x08, 0x00, 0x7e, 0x14, 0xf4, 0xcb, 0xff, 0xff, 0x1e, 0xdf, 0xff, 0x03,
   0x70, 0x00, 0x00, 0x04, 0x00, 0x7e, 0x99, 0xe6, 0x93, 0xff, 0x7f, 0xff,
   0xcf, 0xff, 0x03, 0xe0, 0x00, 0x00, 0x02, 0x00, 0x7f, 0xff, 0xf6, 0x2f,
   0xff, 0x3f, 0xff, 0xdf, 0xff, 0x03, 0x00, 0x00, 0x80, 0x01, 0x00, 0x7f,
   0x7f, 0xe7, 0xcf, 0x00, 0xc0, 0xff, 0xcf, 0xff, 0x03, 0xe0, 0x07, 0x40,
   0x00, 0x00, 0x7f, 0x1c, 0xc7, 0x9f, 0xfc, 0xfb, 0xff, 0xdf, 0xff, 0x03,
   0xe0, 0x07, 0x20, 0x00, 0x80, 0xff, 0xc1, 0xb7, 0x7f, 0xf9, 0xf3, 0xff,
   0x8f, 0xff, 0x03, 0xe0, 0x03, 0x3c, 0x00, 0x00, 0xff, 0xff, 0x67, 0xff,
   0xfa, 0xe7, 0xff, 0x1f, 0xff, 0x03, 0xf0, 0x07, 0x7e, 0x00, 0x00, 0xff,
   0xff, 0x77, 0x78, 0xfb, 0xdf, 0xff, 0x4f, 0xfe, 0x03, 0xf0, 0x0f, 0x7f,
   0x00, 0xc0, 0xff, 0xff, 0xf7, 0x7a, 0xfa, 0xbf, 0xff, 0xdf, 0xf8, 0x03,
   0xf0, 0xff, 0xff, 0x00, 0xc0, 0xff, 0xff, 0xe7, 0xfc, 0xf2, 0x39, 0xff,
   0xcf, 0xf2, 0x03, 0xf0, 0xff, 0xff, 0x01, 0xc0, 0xff, 0xff, 0xf7, 0xff,
   0x04, 0x72, 0xfe, 0xe7, 0xf9, 0x03, 0xf0, 0xff, 0xff, 0x01, 0x80, 0xff,
   0xff, 0xf7, 0xff, 0xc9, 0xf8, 0xfe, 0xf3, 0xff, 0x03, 0xf0, 0xff, 0xff,
   0x03, 0x00, 0xfa, 0xe3, 0xf7, 0xff, 0x93, 0xff, 0xfe, 0xf9, 0xff, 0x03,
   0xf0, 0xff, 0xff, 0x03, 0x00, 0xc0, 0xe0, 0xfb, 0xfb, 0x23, 0xff, 0xfe,
   0xfc, 0xff, 0x03, 0xf8, 0xff, 0xff, 0x03, 0x00, 0x00, 0xf0, 0x00, 0xf0,
   0x4b, 0x7e, 0x7c, 0xff, 0xff, 0x03, 0xf8, 0xff, 0xff, 0x01, 0x00, 0x00,
   0xf8, 0xb4, 0xf4, 0x59, 0x7f, 0x3d, 0xff, 0xff, 0x03, 0xf8, 0xff, 0xff,
   0x03, 0x00, 0x00, 0x38, 0xff, 0xf9, 0x5c, 0x7e, 0x9c, 0xff, 0xff, 0x03,
   0xf8, 0xff, 0xff, 0x01, 0x00, 0x00, 0xbc, 0xff, 0x1f, 0x5e, 0xff, 0xef,
   0xff, 0xff, 0x03, 0xfc, 0xff, 0xff, 0x03, 0x00, 0x00, 0xdc, 0xff, 0x9f,
   0x5e, 0xfe, 0xef, 0xff, 0xff, 0x03, 0xfc, 0xff, 0xff, 0x03, 0x00, 0x00,
   0x9e, 0xff, 0x3f, 0x5f, 0xff, 0xef, 0xff, 0xff, 0x03, 0xfc, 0xff, 0xff,
   0x01, 0x00, 0x00, 0x9e, 0xff, 0xff, 0x5f, 0xfe, 0xcf, 0xff, 0xff, 0x03 };