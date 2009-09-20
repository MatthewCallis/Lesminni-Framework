#import <Cocoa/Cocoa.h>

@interface ParseRomDelegate : NSObject{
	NSString *currentDir;
	NSMutableArray *romsArray;

	NSMutableArray *gameFileExtensions;
	NSMutableArray *archiveTypes;
}

- (NSArray*)listDirectory:(NSString *)dirPath;
- (NSArray*)listFiles:(NSArray *)selectedFiles;

- (BOOL)directoryEmpty:(NSDirectoryEnumerator *) dEnum;

@end
