#import "RomFile.h"

@implementation RomFile

@synthesize fileCRC32;
@synthesize fileMD5;
@synthesize fileSHA1;
@synthesize determinedChecksum;
@synthesize headerChecksum;
@synthesize headerCheck;
@synthesize gameCode;
@synthesize internalTitle;
@synthesize preferredTitle;
@synthesize manufactureID;
@synthesize manufacture;
@synthesize cartType;
@synthesize romSize;
@synthesize determinedSize;
@synthesize saveSize;
@synthesize country;
@synthesize license;
@synthesize fullPath;
@synthesize filename;
@synthesize version;
@synthesize tvOutput;

//	Super Nintendo
@synthesize romMap;
@synthesize romSpeed;

//	Gameboy
@synthesize color;
@synthesize superGameboy;

//	Famicom Disk System
@synthesize diskCount;
@synthesize diskNumber;
@synthesize sideNumber;
@synthesize creationDate;
@synthesize permitDate;

//	Gameboy Advance
@synthesize unitCode;
@synthesize startOffset;
@synthesize logoCheck;
@synthesize fixedValue;

//	Nintendo
@synthesize PRGSize;
@synthesize CHRSize;
@synthesize mapper;
@synthesize videoMirror;
@synthesize trainer;
@synthesize vsSystem;

@synthesize fileSize;

+ (id) romFile{
	return [[RomFile alloc] init];
}

- (NSComparisonResult) compareByValueDescending:(RomFile *)other{
	NSString* string1 = [self internalTitle];
	NSString* string2 = [other internalTitle];

	return [string1 localizedCaseInsensitiveCompare: string2];
/*
//	Sorts Wrong for strings due to not using string isEqualTo
	if([self name] == [other name]){ return NSOrderedSame; }
	else if([self name] < [other name]){ return NSOrderedDescending; }
	else{ return NSOrderedAscending; }
*/
}

@end
