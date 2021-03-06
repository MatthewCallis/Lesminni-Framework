#import "RomFileReader.h"

@interface FDSReader : RomFileReader{}

/*	BCD Date:
		A date given as six BCD digits (MMDDYY).
		The argument is the actual value, not a pointer to the value.
		For Example: Zelda no Densetsu (v1.1)
			611107 is 1986-11-07 (November 7th, 1986)
	Header:
		'FDS           '
		0x46,0x44,0x53,0x1A,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

There are actually two types of FDS file formats. One of which is the format used by
Famtasia Ver 4 and before, and the other format is used by FanWen's fwNES. The first
(Famtasia's) format uses files containing data of each side of a disk, while the
second (FanWen's) format is made so that the whole game data would be in a single file.
FanWen's FDS file contains 16-byte header information shown below, followed by the
block ID data explained in disk layout section (1).
*/

struct{
	char fds[4];			// 0x04:	ID:  "FDS^Z" / 0x46, 0x44, 0x53, 0x1A
	char diskCount;			// 0x01:	Number of Disks: 0x02 = 2
	char reserved[11];		// 0x0B:	Reserved: 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
} FanWenFDS;

struct{
	char byteOne;				// one byte, 0x01
	char diskHeader[14];		// FC Disk String  "**NINTENDO-HVC**"
	char makerCode;				// Manufacture Code
	char gameNameCode[4];		// Game Name Code
	char version;				// Game Version
	char sideNumber;			// Side Number: 0x00 = A, 0x01 = B
	char diskNumber;			// Disk Number
	char err9;					// Err.9  (Ext Disk Indicate No)
	char err10;					// Err.10 (Ext Disk Indicate No)
	char bootCode;				// Boot Read File Code (Specify ??? code read on boot)
	char unknown_1[5];			// Unknown
	char permitDate[3];			// Manufacture Permit Date (???), Recorded in BCD, in the year of "showa"(+1925)
	char unknown_2[10];			// Unknown
	char createdDate[3];		// Created Date (???), Recorded in BCD, in the year of "showa"(+1925)
	char unknown_3[9];			// Unknown
} FDSHeader;

@end
