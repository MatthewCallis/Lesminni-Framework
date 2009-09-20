#import <Cocoa/Cocoa.h>

@interface RomFile : NSObject{
//	General
	NSString *fileCRC32;
	NSString *fileMD5;
	NSString *fileSHA1;
	NSString *determinedChecksum;
	NSString *headerCheck;
	NSString *headerChecksum;
	NSString *gameCode;
	NSString *internalTitle;
	NSString *preferredTitle;
	NSString *manufactureID;
	NSString *manufacture;
	NSString *romSize;
	NSString *determinedSize;
	NSString *saveSize;
	NSString *cartType;
	NSString *country;
	NSString *license;
	NSString *filename;
	NSString *fullPath;
	NSString *version;
	NSString *tvOutput;

//	Super Nintendo
	NSString *romMap;
	NSString *romSpeed;

//	Gameboy
	NSString *color;
	NSString *superGameboy;
	
//	Famicom Disk System
	NSString *diskCount;
	NSString *diskNumber;
	NSString *sideNumber;
	NSString *creationDate;
	NSString *permitDate;

//	Gameboy Advance
	NSString *unitCode;
	NSString *startOffset;
	NSString *logoCheck;
	NSString *fixedValue;

//	Nintendo
	NSString *PRGSize;
	NSString *CHRSize;
	NSString *mapper;
	NSString *videoMirror;
	NSString *trainer;
	NSString *vsSystem;

	NSInteger fileSize;
}

@property (copy) NSString *fileCRC32;			// File CRC32
@property (copy) NSString *fileMD5;				// File MD5
@property (copy) NSString *fileSHA1;			// File SHA1
@property (copy) NSString *determinedChecksum;	// Determined Checksum
@property (copy) NSString *headerChecksum;		// Header Checksum
@property (copy) NSString *headerCheck;			// Header Type
@property (copy) NSString *gameCode;			// Game Code
@property (copy) NSString *internalTitle;		// Internal Title
@property (copy) NSString *preferredTitle;		// Preferred Title
@property (copy) NSString *manufactureID;
@property (copy) NSString *manufacture;			// Manufacture
@property (copy) NSString *romSize;				// ROM Size
@property (copy) NSString *determinedSize;		// Determined Size
@property (copy) NSString *saveSize;			// Save Size (SRAM)
@property (copy) NSString *cartType;			// Cartridge Type
@property (copy) NSString *country;				// Country
@property (copy) NSString *license;				// License
@property (copy) NSString *filename;			// Filename
@property (copy) NSString *fullPath;			// Full Path
@property (copy) NSString *version;				// Version
@property (copy) NSString *tvOutput;			// Video System

//	Super Nintendo
@property (copy) NSString *romMap;				// ROM Map
@property (copy) NSString *romSpeed;

//	Gameboy
@property (copy) NSString *color;				// Color
@property (copy) NSString *superGameboy;

//	Famicom Disk System
@property (copy) NSString *diskCount;
@property (copy) NSString *diskNumber;
@property (copy) NSString *sideNumber;
@property (copy) NSString *creationDate;
@property (copy) NSString *permitDate;

//	Gameboy Advance
@property (copy) NSString *unitCode;
@property (copy) NSString *startOffset;
@property (copy) NSString *logoCheck;
@property (copy) NSString *fixedValue;

//	Nintendo
@property (copy) NSString *PRGSize;
@property (copy) NSString *CHRSize;
@property (copy) NSString *mapper;
@property (copy) NSString *videoMirror;
@property (copy) NSString *trainer;
@property (copy) NSString *vsSystem;

@property (assign) NSInteger fileSize;

+ (id) romFile;

- (NSComparisonResult) compareByValueDescending:(RomFile *)other;

@end
