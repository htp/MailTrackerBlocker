//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (MailCoreAdditions)
- (id)fileModificationDateAtPath:(id)arg1 traverseLink:(BOOL)arg2;	// IMP=0x0000000000087985
- (long long)fileSizeAtPath:(id)arg1 traverseLink:(BOOL)arg2;	// IMP=0x000000000008778a
- (id)createUniqueDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002ab60
@end
