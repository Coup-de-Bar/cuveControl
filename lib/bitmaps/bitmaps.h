#ifndef BITMAPS
#define BITMAPS

#define tige_width 3
#define tige_height 30

static unsigned char tige_bitmap[] = {
   0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
   0x01, 0x01, 0x01, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
   0x01, 0x07, 0x01, 0x01, 0x01, 0x01 };


#define arrow1_width 8
#define arrow1_height 9

static unsigned char arrow1_bitmap[] = {
   0x0f, 0x1e, 0x3c, 0x78, 0xf0, 0x78, 0x3c, 0x1e, 0x0f };

#define arrow2_width 8
#define arrow2_height 9

static unsigned char arrow2_bitmap[] = {
   0x09, 0x12, 0x24, 0x48, 0x90, 0x48, 0x24, 0x12, 0x09 };

#define heating_width 18
#define heating_height 12

static unsigned char heating_bitmap[] = {
   0x04, 0x41, 0x00, 0x08, 0x82, 0x00, 0x08, 0x82, 0x00, 0x04, 0x41, 0x00,
   0x82, 0x20, 0x00, 0x41, 0x10, 0x00, 0x41, 0x10, 0x00, 0x82, 0x20, 0x00,
   0x04, 0x41, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x03, 0xff, 0xff, 0x03 };

static unsigned char heatingflipped_bitmap[] = {
   0x08, 0x82, 0x00, 0x04, 0x41, 0x00, 0x04, 0x41, 0x00, 0x08, 0x82, 0x00,
   0x10, 0x04, 0x01, 0x20, 0x08, 0x02, 0x20, 0x08, 0x02, 0x10, 0x04, 0x01,
   0x08, 0x82, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x03, 0xff, 0xff, 0x03 };

#define pump_width 18
#define pump_height 18
static unsigned char pump1_bitmap[] = {
   0xff, 0xff, 0x03, 0x07, 0x80, 0x03, 0xc3, 0x0f, 0x03, 0xc1, 0x0f, 0x02,
   0x81, 0x07, 0x02, 0x01, 0x03, 0x02, 0x0d, 0xc0, 0x02, 0x1d, 0xe3, 0x02,
   0xbd, 0xf7, 0x02, 0xbd, 0xf7, 0x02, 0x1d, 0xe3, 0x02, 0x0d, 0xc0, 0x02,
   0x01, 0x03, 0x02, 0x81, 0x07, 0x02, 0xc1, 0x0f, 0x02, 0xc3, 0x0f, 0x03,
   0x07, 0x80, 0x03, 0xff, 0xff, 0x03 };

static unsigned char pump2_bitmap[] = {
   0xff, 0xff, 0x03, 0x07, 0x80, 0x03, 0xe3, 0x00, 0x03, 0xf1, 0x19, 0x02,
   0xf9, 0x71, 0x02, 0xf9, 0xf0, 0x02, 0x09, 0xf0, 0x02, 0x01, 0xf3, 0x02,
   0x81, 0x67, 0x02, 0x99, 0x07, 0x02, 0x3d, 0x03, 0x02, 0x3d, 0x40, 0x02,
   0x3d, 0x7c, 0x02, 0x39, 0x3e, 0x02, 0x71, 0x3e, 0x02, 0x03, 0x1c, 0x03,
   0x07, 0x80, 0x03, 0xff, 0xff, 0x03 };

static unsigned char pump3_bitmap[] = {
   0xff, 0xff, 0x03, 0x07, 0x80, 0x03, 0x63, 0x18, 0x03, 0x71, 0x38, 0x02,
   0x79, 0x78, 0x02, 0x7d, 0xf8, 0x02, 0x3d, 0xf0, 0x02, 0x01, 0x03, 0x02,
   0x81, 0x07, 0x02, 0x81, 0x07, 0x02, 0x01, 0x03, 0x02, 0x3d, 0xf0, 0x02,
   0x7d, 0xf8, 0x02, 0x79, 0x78, 0x02, 0x71, 0x38, 0x02, 0x63, 0x18, 0x03,
   0x07, 0x80, 0x03, 0xff, 0xff, 0x03 };

#endif