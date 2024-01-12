#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

const unsigned char sensor_model[] DATA_ALIGN_ATTRIBUTE = {
  0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00,
  0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x8c, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 0xfc, 0x03, 0x00, 0x00,
  0x0c, 0x04, 0x00, 0x00, 0x70, 0x09, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xb6, 0xfb, 0xff, 0xff,
  0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f,
  0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x90, 0xff, 0xff, 0xff, 0x09, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73,
  0x65, 0x5f, 0x31, 0x35, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x8a, 0xfc, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x66, 0x6c, 0x61, 0x74, 0x74, 0x65, 0x6e, 0x5f,
  0x34, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xdc, 0xff, 0xff, 0xff,
  0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x4d,
  0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00, 0x08, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f,
  0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73,
  0x69, 0x6f, 0x6e, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x14, 0x03, 0x00, 0x00,
  0x0c, 0x03, 0x00, 0x00, 0xf8, 0x02, 0x00, 0x00, 0x60, 0x02, 0x00, 0x00,
  0x48, 0x02, 0x00, 0x00, 0x38, 0x01, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00,
  0xa0, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
  0x88, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x3a, 0xfd, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x35, 0x2e, 0x30, 0x00, 0x00,
  0x9a, 0xfd, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x31, 0x2e, 0x31, 0x34, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x58, 0xf8, 0xff, 0xff, 0x5c, 0xf8, 0xff, 0xff,
  0x60, 0xf8, 0xff, 0xff, 0x64, 0xf8, 0xff, 0xff, 0xc6, 0xfd, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x31, 0x65, 0x86, 0xbe,
  0x54, 0x42, 0xc8, 0x3e, 0xce, 0x2d, 0xfc, 0x3e, 0x3e, 0xc3, 0xbd, 0x3e,
  0x5d, 0x5a, 0xfd, 0x3e, 0x58, 0x60, 0x3c, 0xbe, 0x64, 0x93, 0x68, 0x3e,
  0x54, 0x86, 0xbf, 0xbe, 0xe0, 0x29, 0x73, 0xbc, 0x0a, 0x98, 0xc8, 0x3f,
  0x80, 0x3f, 0xbe, 0x3b, 0xd0, 0x2b, 0x86, 0x3f, 0x34, 0xbf, 0x8b, 0x3e,
  0xa2, 0xfc, 0x6b, 0xbe, 0x74, 0x17, 0xa3, 0x3f, 0xc8, 0x95, 0x90, 0x3d,
  0x6e, 0xcf, 0xbc, 0xbe, 0x3a, 0x4b, 0xb9, 0x3e, 0xca, 0x15, 0x13, 0x3f,
  0xe1, 0x7c, 0x07, 0xbf, 0x9c, 0xcb, 0xd4, 0xbe, 0x41, 0x0d, 0x2f, 0x3f,
  0x96, 0x9d, 0x9e, 0x3e, 0x0b, 0x8f, 0x0b, 0x3e, 0x60, 0x92, 0x53, 0xbd,
  0x09, 0xbf, 0xed, 0x3e, 0x48, 0xe0, 0x28, 0x3f, 0x6e, 0xe1, 0x71, 0xbe,
  0x1a, 0x6d, 0xd8, 0xbe, 0x13, 0x00, 0xb6, 0x3e, 0x5c, 0x07, 0x94, 0xbe,
  0x6d, 0xef, 0x1d, 0xbe, 0x52, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x00, 0x00, 0x24, 0xd1, 0x93, 0x3e, 0x1c, 0x19, 0x6a, 0x3e,
  0x70, 0x24, 0xa8, 0xbd, 0x00, 0x75, 0x95, 0xba, 0x75, 0x3e, 0x50, 0xbe,
  0x7d, 0x5b, 0x9c, 0x3e, 0x9f, 0xce, 0x8c, 0x3e, 0x73, 0x3f, 0x94, 0xbe,
  0x4d, 0xcd, 0x3a, 0x3e, 0x23, 0xb8, 0x42, 0xbf, 0x66, 0xc5, 0x52, 0xbe,
  0xde, 0x82, 0xf3, 0x3e, 0x2a, 0x9c, 0x78, 0x3e, 0x28, 0x45, 0x49, 0x3e,
  0xc2, 0x83, 0x55, 0xbe, 0x86, 0x15, 0x13, 0xbe, 0xd8, 0x17, 0x56, 0xbd,
  0x0c, 0xe1, 0x08, 0xbe, 0x19, 0xb9, 0xbc, 0xbe, 0x8c, 0xfd, 0x00, 0x3f,
  0x18, 0xe4, 0xdc, 0xbd, 0x84, 0x28, 0x25, 0xbe, 0x5d, 0x69, 0x31, 0xbf,
  0x72, 0xe8, 0x55, 0x3f, 0x0e, 0x5c, 0x7a, 0x3e, 0x1e, 0xe5, 0x9a, 0xbe,
  0xf4, 0x6a, 0xc2, 0xbe, 0x62, 0x5b, 0x4e, 0x3d, 0x06, 0x11, 0x1e, 0xbf,
  0xea, 0xdd, 0x36, 0x3f, 0x83, 0x04, 0x86, 0xbe, 0x50, 0x1c, 0xc1, 0xbc,
  0x06, 0x3f, 0x1d, 0xbe, 0x96, 0x69, 0xb4, 0xbe, 0xe0, 0xc9, 0xe1, 0xbd,
  0x94, 0xa3, 0xec, 0xbd, 0xde, 0xff, 0x3f, 0x3e, 0x56, 0x8f, 0x46, 0xbf,
  0x78, 0x78, 0xe7, 0x3d, 0x39, 0xc7, 0xec, 0x3e, 0x75, 0x41, 0xae, 0xbe,
  0x88, 0xdb, 0x06, 0xbe, 0x82, 0xd2, 0x62, 0xbe, 0xbc, 0x1c, 0xa5, 0x3e,
  0xb0, 0x9a, 0x8c, 0xbd, 0x5c, 0x13, 0x78, 0xbe, 0x24, 0xc7, 0xb5, 0x3c,
  0x2f, 0xbb, 0x56, 0x3c, 0xcf, 0x91, 0xb3, 0xbe, 0xc0, 0xc4, 0x2b, 0xbc,
  0x08, 0x4d, 0x5b, 0x3e, 0x88, 0x4b, 0x1d, 0xbf, 0x62, 0x22, 0xb6, 0xbe,
  0xa7, 0x36, 0x04, 0x3f, 0xb1, 0xb3, 0x95, 0x3e, 0x1d, 0x73, 0xd9, 0xbd,
  0xa8, 0xd1, 0xb1, 0x3e, 0x9c, 0x27, 0xa3, 0x3e, 0xdb, 0xb5, 0xcb, 0x3e,
  0x00, 0x51, 0xec, 0xbe, 0xa8, 0x10, 0x64, 0xbd, 0x57, 0xf4, 0x78, 0xbe,
  0x19, 0x38, 0x8a, 0xbe, 0xd5, 0x8a, 0xb6, 0x3d, 0x5e, 0xff, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x02, 0x00, 0x00, 0x00, 0x72, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x80, 0x00, 0x00, 0x00, 0x42, 0xba, 0x2a, 0x3e, 0x00, 0x00, 0x00, 0x00,
  0x1e, 0x43, 0x83, 0xbd, 0x76, 0xe4, 0x2e, 0xbc, 0x9f, 0x38, 0x7f, 0x3d,
  0x79, 0x95, 0x12, 0x3e, 0x20, 0x97, 0x86, 0xbc, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x9e, 0x34, 0xa4, 0xbd, 0x00, 0x00, 0x00, 0x00,
  0xa0, 0xeb, 0x6e, 0xbd, 0x25, 0x24, 0xda, 0x3c, 0x42, 0x9f, 0x64, 0xbd,
  0x91, 0x7e, 0xeb, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe3, 0x13, 0x81, 0x3d, 0x3c, 0xde, 0x21, 0x3e,
  0x00, 0x00, 0x00, 0x00, 0xc6, 0x0f, 0x7e, 0xbd, 0x00, 0x00, 0x00, 0x00,
  0x05, 0xa6, 0x3d, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x18, 0xf6, 0x42, 0x3d,
  0xbd, 0x4c, 0xcb, 0xbd, 0xc1, 0x34, 0x42, 0x3e, 0x1e, 0x58, 0x1d, 0x3e,
  0x43, 0xb6, 0x9c, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x56, 0xb4, 0xbd,
  0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x96, 0x83, 0x13, 0xbe,
  0xb8, 0xfa, 0xff, 0xff, 0xbc, 0xfa, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00,
  0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74,
  0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00,
  0x10, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e,
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00,
  0x7c, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xca, 0xff, 0xff, 0xff,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x68, 0xfb, 0xff, 0xff,
  0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0e, 0x00, 0x1a, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x08, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0xc4, 0x03, 0x00, 0x00, 0x50, 0x03, 0x00, 0x00, 0xdc, 0x02, 0x00, 0x00,
  0x8c, 0x02, 0x00, 0x00, 0x24, 0x02, 0x00, 0x00, 0xd4, 0x01, 0x00, 0x00,
  0x74, 0x01, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x7a, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x64, 0xfc, 0xff, 0xff,
  0x19, 0x00, 0x00, 0x00, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c,
  0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43,
  0x61, 0x6c, 0x6c, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xd2, 0xfc, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0xbc, 0xfc, 0xff, 0xff, 0x3a, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x5f, 0x31, 0x35, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c,
  0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f,
  0x34, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x35, 0x2f, 0x42,
  0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4a, 0xfd, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x20, 0x00, 0x00, 0x00,
  0x34, 0xfd, 0xff, 0xff, 0x55, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x5f, 0x31, 0x34, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c,
  0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f,
  0x34, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x34, 0x2f, 0x52,
  0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x34, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31,
  0x34, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0xde, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x02, 0x00, 0x00, 0x00, 0xc8, 0xfd, 0xff, 0xff, 0x1e, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34,
  0x2f, 0x66, 0x6c, 0x61, 0x74, 0x74, 0x65, 0x6e, 0x5f, 0x34, 0x2f, 0x52,
  0x65, 0x73, 0x68, 0x61, 0x70, 0x65, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xaa, 0xfe, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x14, 0xfe, 0xff, 0xff,
  0x1c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x34, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31,
  0x35, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0xf6, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00,
  0x60, 0xfe, 0xff, 0xff, 0x1c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x5f, 0x31, 0x34, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x1c, 0x00, 0x18, 0x00,
  0x17, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x02, 0x2c, 0x00, 0x00, 0x00, 0xc8, 0xfe, 0xff, 0xff,
  0x1c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x34, 0x2f, 0x66, 0x6c, 0x61, 0x74, 0x74, 0x65, 0x6e,
  0x5f, 0x34, 0x2f, 0x43, 0x6f, 0x6e, 0x73, 0x74, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa6, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x10, 0xff, 0xff, 0xff,
  0x2c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x34, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31,
  0x34, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65,
  0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x16, 0x00, 0x18, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00,
  0x0c, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
  0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x80, 0xff, 0xff, 0xff, 0x2c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x34, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x5f, 0x31, 0x35, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64,
  0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62,
  0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x1c, 0x00, 0x18, 0x00,
  0x00, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76,
  0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x5f,
  0x66, 0x6c, 0x61, 0x74, 0x74, 0x65, 0x6e, 0x5f, 0x34, 0x5f, 0x69, 0x6e,
  0x70, 0x75, 0x74, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xe8, 0xff, 0xff, 0xff, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e,
  0xf4, 0xff, 0xff, 0xff, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
  0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16
};
unsigned int sensor_model_len = 2532;
