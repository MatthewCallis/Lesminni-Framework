#import "RomFileReader.h"

@interface GameBoyReader : RomFileReader{}

struct{
	unsigned char GameTitle[15];
	unsigned char Color;
	unsigned char Manufacture[2];
	unsigned char SuperGameBoy;
	unsigned char CartType;
	unsigned char Sizefh;
	unsigned char SRAMSize;
	unsigned char Country;
	unsigned char License;
	unsigned char Version;
	unsigned char HChecksum;
	unsigned char checksumByte[2];
} GBROMHeader;

@end
