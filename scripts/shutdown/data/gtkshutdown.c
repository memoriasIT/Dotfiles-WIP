#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.gtkshutdown"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[2296]; const double alignment; void * const ptr;}  gtkshutdown_resource_data = { {
  0x47, 0x56, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x05, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x05, 0x00, 0x00, 0x00, 0x28, 0x64, 0x37, 0x32, 
  0x04, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 
  0x11, 0x00, 0x76, 0x00, 0xc0, 0x00, 0x00, 0x00, 
  0xcf, 0x08, 0x00, 0x00, 0xd4, 0xb5, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xcf, 0x08, 0x00, 0x00, 
  0x01, 0x00, 0x4c, 0x00, 0xd0, 0x08, 0x00, 0x00, 
  0xd4, 0x08, 0x00, 0x00, 0x4b, 0x50, 0x90, 0x0b, 
  0x01, 0x00, 0x00, 0x00, 0xd4, 0x08, 0x00, 0x00, 
  0x04, 0x00, 0x4c, 0x00, 0xd8, 0x08, 0x00, 0x00, 
  0xdc, 0x08, 0x00, 0x00, 0xb0, 0xb7, 0x24, 0x30, 
  0x02, 0x00, 0x00, 0x00, 0xdc, 0x08, 0x00, 0x00, 
  0x06, 0x00, 0x4c, 0x00, 0xe4, 0x08, 0x00, 0x00, 
  0xe8, 0x08, 0x00, 0x00, 0x01, 0x01, 0x87, 0x6a, 
  0x03, 0x00, 0x00, 0x00, 0xe8, 0x08, 0x00, 0x00, 
  0x0c, 0x00, 0x4c, 0x00, 0xf4, 0x08, 0x00, 0x00, 
  0xf8, 0x08, 0x00, 0x00, 0x77, 0x69, 0x6e, 0x64, 
  0x6f, 0x77, 0x5f, 0x6d, 0x61, 0x69, 0x6e, 0x2e, 
  0x67, 0x6c, 0x61, 0x64, 0x65, 0x00, 0x00, 0x00, 
  0x32, 0x36, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xed, 0x5b, 0x5d, 0x73, 0xa3, 0x36, 
  0x14, 0x7d, 0xdf, 0x5f, 0xa1, 0xea, 0xb5, 0xe3, 
  0x38, 0xb6, 0xb3, 0x3b, 0xed, 0x8e, 0xcd, 0xce, 
  0xb6, 0x33, 0x9b, 0xe9, 0xcc, 0x76, 0xda, 0xd9, 
  0x8f, 0xe9, 0x23, 0x23, 0xc3, 0x35, 0x68, 0x2d, 
  0x24, 0x2a, 0x89, 0x38, 0xe9, 0xaf, 0xaf, 0x00, 
  0x13, 0x70, 0x02, 0x06, 0xe1, 0x24, 0x36, 0x49, 
  0xde, 0x1c, 0xc3, 0x11, 0xf7, 0xeb, 0x1c, 0xdd, 
  0x8b, 0x95, 0xf9, 0x87, 0xeb, 0x88, 0xa1, 0x2b, 
  0x90, 0x8a, 0x0a, 0xbe, 0xc0, 0x93, 0xb3, 0x73, 
  0x8c, 0x80, 0x7b, 0xc2, 0xa7, 0x3c, 0x58, 0xe0, 
  0xef, 0xdf, 0x3e, 0x8d, 0x7e, 0xc1, 0x1f, 0x9c, 
  0x37, 0xf3, 0x9f, 0x46, 0x23, 0x74, 0x09, 0x1c, 
  0x24, 0xd1, 0xe0, 0xa3, 0x0d, 0xd5, 0x21, 0x0a, 
  0x18, 0xf1, 0x01, 0xcd, 0xce, 0xa6, 0xe7, 0x67, 
  0x17, 0x68, 0x34, 0x32, 0x37, 0x51, 0xae, 0x41, 
  0xae, 0x88, 0x07, 0xce, 0x1b, 0x84, 0xe6, 0x12, 
  0xfe, 0x4d, 0xa8, 0x04, 0x85, 0x18, 0x5d, 0x2e, 
  0x70, 0xa0, 0xd7, 0x3f, 0xe3, 0xf2, 0x41, 0x29, 
  0x0c, 0x8f, 0xb3, 0xfb, 0xc4, 0xf2, 0x07, 0x78, 
  0x1a, 0x79, 0x8c, 0x28, 0xb5, 0xc0, 0x97, 0x7a, 
  0xfd, 0xd1, 0xff, 0x91, 0x28, 0x1d, 0x01, 0xd7, 
  0x18, 0x51, 0x7f, 0x81, 0x43, 0x91, 0x48, 0x35, 
  0x31, 0xf7, 0xa7, 0xb7, 0x1b, 0x40, 0x2c, 0x45, 
  0x0c, 0x52, 0xdf, 0x20, 0x4e, 0x22, 0x58, 0xe0, 
  0x24, 0x36, 0x7f, 0x61, 0xc7, 0xdc, 0x30, 0x1f, 
  0x17, 0x97, 0xea, 0xef, 0x54, 0x1a, 0x62, 0x97, 
  0x72, 0x4f, 0x42, 0xb6, 0xb8, 0x33, 0x69, 0x03, 
  0xc4, 0x24, 0x80, 0x1d, 0xc0, 0x9d, 0x47, 0xcc, 
  0xc7, 0xb9, 0xf1, 0x16, 0x7e, 0x4c, 0x67, 0xfb, 
  0xdd, 0x98, 0xce, 0x4e, 0xcc, 0x8b, 0x3f, 0x22, 
  0x03, 0xcf, 0x1d, 0x60, 0x22, 0x10, 0x89, 0x76, 
  0x69, 0x14, 0x34, 0xf8, 0x70, 0x45, 0x15, 0x5d, 
  0x32, 0xc0, 0xce, 0x37, 0x99, 0x40, 0x9b, 0x59, 
  0x1e, 0xe1, 0xee, 0x4a, 0x78, 0x89, 0xc2, 0xce, 
  0x27, 0xc2, 0x14, 0xb4, 0xfb, 0x2d, 0xbc, 0x35, 
  0x76, 0x4c, 0x21, 0x8d, 0x12, 0xee, 0x8b, 0xb6, 
  0xdb, 0xa9, 0x27, 0xb8, 0xab, 0xe8, 0x7f, 0xc6, 
  0x9a, 0x77, 0x87, 0x64, 0x2d, 0xa2, 0x3c, 0xd1, 
  0xa0, 0x5c, 0xa2, 0xf7, 0x27, 0xee, 0xed, 0xaf, 
  0x27, 0x5e, 0x7e, 0x85, 0x23, 0x94, 0x0f, 0xcc, 
  0x91, 0x4a, 0x05, 0x1a, 0x39, 0xd1, 0x44, 0x9e, 
  0x42, 0x09, 0x4a, 0x58, 0x19, 0x63, 0xc2, 0xc7, 
  0xaa, 0xc2, 0x8a, 0xcf, 0x2a, 0x4c, 0xb4, 0x2f, 
  0x36, 0xfc, 0x04, 0x9c, 0x36, 0x82, 0xae, 0x1f, 
  0xcb, 0xe3, 0x7f, 0xa8, 0x21, 0xf5, 0x26, 0x77, 
  0x79, 0x93, 0x7d, 0x76, 0x23, 0xd2, 0x58, 0xab, 
  0xb6, 0x4e, 0x68, 0xaa, 0x4d, 0x7c, 0x90, 0x96, 
  0x84, 0x2b, 0x46, 0x34, 0x31, 0xd1, 0x5a, 0xe0, 
  0x1b, 0x30, 0xf0, 0xaf, 0xdb, 0xf0, 0xa2, 0x3f, 
  0x09, 0x37, 0x31, 0x97, 0x6d, 0x2b, 0xf9, 0xb0, 
  0x22, 0x09, 0xd3, 0xee, 0x86, 0xfa, 0x3a, 0xc4, 
  0xce, 0xc5, 0xf9, 0x79, 0x57, 0x44, 0x08, 0x34, 
  0x08, 0xd3, 0xea, 0x7f, 0xd7, 0x01, 0xa2, 0xb4, 
  0x14, 0x37, 0x6e, 0xba, 0xd1, 0xba, 0x31, 0x91, 
  0x19, 0x6b, 0xba, 0x24, 0x37, 0x8b, 0x7e, 0xfa, 
  0x11, 0x3b, 0x24, 0x8e, 0x19, 0xf5, 0x88, 0x36, 
  0xfb, 0xed, 0x08, 0xae, 0x6b, 0x12, 0xa7, 0x68, 
  0xc0, 0x09, 0xdb, 0x7d, 0x22, 0x46, 0x21, 0xe1, 
  0x3e, 0x03, 0xb9, 0xc0, 0x66, 0xa1, 0x4a, 0x1e, 
  0xdc, 0xdb, 0x1b, 0xd4, 0xc6, 0xac, 0x0c, 0x26, 
  0x4b, 0x5c, 0xe4, 0x3b, 0xb8, 0x59, 0xca, 0x0b, 
  0x29, 0xf3, 0xf3, 0xcf, 0x75, 0xb9, 0xfd, 0x4d, 
  0x5c, 0xe3, 0xe2, 0xaa, 0x65, 0xf5, 0xf6, 0x49, 
  0x7e, 0x1d, 0x46, 0x48, 0x6a, 0x82, 0x98, 0x45, 
  0x03, 0x3b, 0xa6, 0x0d, 0xd1, 0x26, 0x34, 0xac, 
  0x16, 0xb8, 0xe3, 0x4b, 0x17, 0x7f, 0x7a, 0xf9, 
  0xd4, 0xd7, 0xaf, 0x7a, 0x13, 0x1b, 0xcc, 0x4c, 
  0xb4, 0x36, 0xee, 0x56, 0xf6, 0x6e, 0x7c, 0x17, 
  0x74, 0xdf, 0x08, 0x46, 0x96, 0xc0, 0x6a, 0x99, 
  0xf2, 0x39, 0x5b, 0xa2, 0xc9, 0xa8, 0xde, 0x51, 
  0x68, 0x89, 0x84, 0x2d, 0x54, 0x82, 0x07, 0xf4, 
  0xca, 0xec, 0x73, 0x5b, 0xda, 0xd9, 0xaf, 0x40, 
  0x33, 0xed, 0x75, 0xca, 0x6e, 0xc7, 0x1a, 0xec, 
  0xc6, 0x42, 0xd1, 0xbc, 0xd4, 0xb4, 0x88, 0x6d, 
  0xe0, 0x84, 0x6d, 0xc8, 0x8d, 0x72, 0x55, 0x68, 
  0x68, 0xb7, 0xb5, 0xa3, 0xd5, 0xfc, 0x1d, 0x1e, 
  0x7b, 0x86, 0xf3, 0x6b, 0xf0, 0x2b, 0x3c, 0xde, 
  0xfa, 0xb1, 0xbd, 0xe0, 0x7a, 0xcb, 0x5a, 0x0a, 
  0x57, 0xd6, 0xab, 0xc8, 0xf4, 0xae, 0xa9, 0xc4, 
  0x5b, 0x9b, 0xb1, 0xa0, 0xdd, 0x09, 0xb8, 0x8e, 
  0xcd, 0xc3, 0xed, 0x03, 0xbf, 0xa2, 0x8c, 0xd9, 
  0xa3, 0xca, 0x58, 0x9f, 0x37, 0xc3, 0xcc, 0x95, 
  0x3a, 0xeb, 0xe7, 0xe3, 0x1a, 0x2a, 0xf5, 0xa1, 
  0xd7, 0xb6, 0x31, 0x39, 0x88, 0x5f, 0x5f, 0xf2, 
  0x35, 0x5e, 0x0c, 0xc1, 0x2a, 0xcd, 0xdc, 0xb0, 
  0x19, 0x56, 0x38, 0x52, 0xa5, 0x58, 0x5e, 0x2d, 
  0x69, 0xe3, 0x11, 0x81, 0x74, 0x97, 0x66, 0xc3, 
  0x78, 0xae, 0xac, 0x9b, 0x1c, 0x8f, 0x75, 0x45, 
  0x6b, 0x7c, 0x10, 0xed, 0xfe, 0x16, 0x1b, 0x90, 
  0xe8, 0xaf, 0xd5, 0xea, 0xc5, 0x10, 0xaf, 0x3a, 
  0x51, 0x0c, 0x9b, 0x79, 0xb7, 0x9e, 0xbc, 0x4c, 
  0xea, 0x4d, 0x1f, 0x82, 0x7a, 0x75, 0xee, 0xd7, 
  0xbb, 0xde, 0xe4, 0xf6, 0xfe, 0x66, 0xd5, 0xda, 
  0xe7, 0xfb, 0x6f, 0x0f, 0xfc, 0xf4, 0x75, 0x24, 
  0x76, 0xde, 0x76, 0x46, 0xb4, 0xb5, 0x04, 0x35, 
  0xd1, 0xb9, 0x17, 0x99, 0xae, 0x83, 0x40, 0xa6, 
  0x44, 0x65, 0xad, 0x1d, 0x73, 0x2e, 0xb8, 0x83, 
  0x8b, 0x88, 0x0c, 0xcc, 0xe4, 0xc6, 0x60, 0x65, 
  0xb4, 0xe2, 0xc2, 0x12, 0x25, 0xf3, 0x61, 0xb5, 
  0x33, 0xac, 0xf3, 0x80, 0x65, 0x23, 0xf6, 0xbf, 
  0x87, 0xe0, 0xed, 0x28, 0x7e, 0x16, 0xe7, 0x83, 
  0xe4, 0xfe, 0xbb, 0x02, 0x94, 0xad, 0x62, 0x43, 
  0xb9, 0x7c, 0xa2, 0xb6, 0x86, 0x9d, 0xc6, 0x2e, 
  0xb1, 0xb7, 0x66, 0x6a, 0xdf, 0x3e, 0x48, 0x62, 
  0x14, 0x9a, 0xfb, 0xe9, 0xdb, 0x03, 0x21, 0x6d, 
  0x55, 0x5a, 0x8b, 0x20, 0x60, 0x3b, 0x2a, 0x0d, 
  0x3c, 0x8d, 0xbf, 0x2b, 0xe2, 0xb4, 0x38, 0xd4, 
  0x5d, 0x81, 0xbe, 0xfd, 0xfa, 0x89, 0x44, 0xda, 
  0x3a, 0x1c, 0x03, 0x1b, 0x4b, 0x2e, 0x25, 0xf5, 
  0xab, 0xa2, 0x54, 0xc4, 0xd7, 0xaa, 0xca, 0x0b, 
  0xd4, 0x93, 0x54, 0xbb, 0x02, 0x9e, 0xc6, 0xea, 
  0x0a, 0x7a, 0x24, 0xa7, 0xab, 0x36, 0x36, 0x47, 
  0xb0, 0x3e, 0x8a, 0x5f, 0x88, 0x4f, 0xc5, 0xce, 
  0x84, 0x97, 0x7e, 0x51, 0xbe, 0x3c, 0xef, 0x2f, 
  0x40, 0x94, 0xa3, 0x7d, 0x46, 0x36, 0x27, 0xa6, 
  0xb0, 0xc0, 0x16, 0xdd, 0x39, 0x2f, 0x07, 0x2a, 
  0xd1, 0x03, 0xa9, 0x51, 0x6d, 0xeb, 0xe8, 0xe5, 
  0xe5, 0xd1, 0xc7, 0x04, 0x5b, 0x35, 0xab, 0x5b, 
  0x23, 0x90, 0x22, 0x89, 0x8b, 0x0c, 0x10, 0xbd, 
  0x1f, 0xde, 0x24, 0x55, 0xfb, 0xe5, 0xaa, 0xb6, 
  0x88, 0xcc, 0xce, 0x6d, 0x1e, 0xa7, 0x89, 0x17, 
  0xee, 0x95, 0x91, 0x7a, 0xb4, 0x69, 0xcf, 0xbb, 
  0x82, 0x1b, 0x74, 0xa8, 0x51, 0x8b, 0x1e, 0x88, 
  0x4d, 0x44, 0x1f, 0xcc, 0x26, 0xa2, 0x0f, 0x62, 
  0x53, 0x5b, 0x2e, 0x9f, 0x25, 0x9b, 0x1e, 0x9c, 
  0x11, 0x6d, 0x9a, 0x74, 0x8a, 0x8c, 0x98, 0x1c, 
  0x97, 0x11, 0x9f, 0xb3, 0x8a, 0x7e, 0xda, 0x92, 
  0xeb, 0x55, 0x2c, 0xcd, 0xd4, 0x43, 0xef, 0xd1, 
  0x51, 0xd2, 0x3e, 0x7d, 0x4d, 0xfb, 0x51, 0xd3, 
  0xbe, 0x92, 0x22, 0x42, 0x5c, 0x6c, 0xce, 0x8e, 
  0x92, 0xfd, 0x8b, 0x01, 0x6f, 0x83, 0xcf, 0x21, 
  0xfb, 0x4c, 0x98, 0xb9, 0x3e, 0x9b, 0xa0, 0x07, 
  0x98, 0xff, 0x23, 0xb3, 0xff, 0x6b, 0x4c, 0x79, 
  0xb5, 0x0b, 0xa2, 0xdc, 0xcd, 0x0e, 0x85, 0x61, 
  0x9b, 0xc6, 0xa5, 0x00, 0x0d, 0xa9, 0x71, 0x21, 
  0xe5, 0x59, 0x24, 0xa7, 0x38, 0xce, 0x67, 0xdd, 
  0xb6, 0x25, 0x66, 0x2e, 0xa5, 0x5e, 0x17, 0x03, 
  0x1e, 0xa9, 0xf4, 0x26, 0x03, 0x96, 0x9e, 0x9a, 
  0xd2, 0xdb, 0x1e, 0x08, 0xb3, 0x2d, 0xbe, 0x2d, 
  0x6c, 0x48, 0xe5, 0x17, 0x12, 0x46, 0x03, 0x33, 
  0xb9, 0x7b, 0x90, 0x9e, 0x50, 0xb5, 0x45, 0x47, 
  0xe4, 0xda, 0x65, 0xc0, 0x03, 0xdd, 0xa7, 0xf7, 
  0xa0, 0x3c, 0x4e, 0xb4, 0x1b, 0x27, 0x32, 0x16, 
  0xca, 0x38, 0x6f, 0x8a, 0x78, 0x69, 0x6f, 0x41, 
  0x95, 0x3e, 0xe5, 0x31, 0xbe, 0xe1, 0x11, 0x68, 
  0xf6, 0x8c, 0x08, 0x44, 0x74, 0x0f, 0xed, 0x2e, 
  0x40, 0x83, 0xd6, 0xee, 0xe9, 0x6c, 0x78, 0xea, 
  0x3b, 0x39, 0xb9, 0xe2, 0xe9, 0xa3, 0xbe, 0x25, 
  0x6c, 0xa8, 0x05, 0x54, 0x9e, 0xa6, 0x1e, 0x9e, 
  0x00, 0xbd, 0x8e, 0x8e, 0x2f, 0xf2, 0x8d, 0xc1, 
  0x83, 0xef, 0x3b, 0x03, 0xfe, 0x29, 0x6b, 0xf2, 
  0x7a, 0xe0, 0xa0, 0x5f, 0x84, 0x7a, 0x1e, 0x38, 
  0x88, 0x19, 0xf1, 0x20, 0x14, 0xcc, 0x07, 0x39, 
  0x6e, 0x44, 0xee, 0xc6, 0x73, 0xe7, 0x62, 0xbe, 
  0x24, 0xd2, 0x37, 0x71, 0x71, 0x06, 0x7e, 0x49, 
  0xca, 0x9f, 0xcf, 0x6b, 0x96, 0xaf, 0xa0, 0xcb, 
  0x65, 0xe7, 0xe3, 0xca, 0x7f, 0x76, 0xfd, 0x0f, 
  0xa5, 0x22, 0x9f, 0xc1, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x2f, 
  0x02, 0x00, 0x00, 0x00, 0x6f, 0x72, 0x67, 0x2f, 
  0x03, 0x00, 0x00, 0x00, 0x67, 0x6e, 0x6f, 0x6d, 
  0x65, 0x2f, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x67, 0x74, 0x6b, 0x73, 0x68, 0x75, 0x74, 0x64, 
  0x6f, 0x77, 0x6e, 0x2f, 0x00, 0x00, 0x00, 0x00
} };

static GStaticResource static_resource = { gtkshutdown_resource_data.data, sizeof (gtkshutdown_resource_data.data), NULL, NULL, NULL };
extern GResource *gtkshutdown_get_resource (void);
GResource *gtkshutdown_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a sane way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for Win32 (x86) and x64 programs, as symbols on Win32 are prefixed
 * with an underscore but symbols on x64 are not.
 */
#ifdef _WIN64
#define G_MSVC_SYMBOL_PREFIX ""
#else
#define G_MSVC_SYMBOL_PREFIX "_"
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}