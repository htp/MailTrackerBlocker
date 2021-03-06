//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FilesystemEmailImporter.h"

#import "MFAddProgressMonitor-Protocol.h"

@class ImportItem, NSString;

@interface MailEmailImporter : FilesystemEmailImporter <MFAddProgressMonitor>
{
    ImportItem *_currentItem;	// 8 = 0x8
    unsigned long long _currentItemMessageIndex;	// 16 = 0x10
    unsigned long long _currentItemMessageCount;	// 24 = 0x18
    unsigned long long _currentBlockSize;	// 32 = 0x20
}

+ (id)explanatoryText;	// IMP=0x00000001001befe9
+ (id)name;	// IMP=0x00000001001bef7c
@property(nonatomic) unsigned long long currentBlockSize; // @synthesize currentBlockSize=_currentBlockSize;
@property(nonatomic) unsigned long long currentItemMessageCount; // @synthesize currentItemMessageCount=_currentItemMessageCount;
@property(nonatomic) unsigned long long currentItemMessageIndex; // @synthesize currentItemMessageIndex=_currentItemMessageIndex;
@property(nonatomic) __weak ImportItem *currentItem; // @synthesize currentItem=_currentItem;
// - (void).cxx_destruct;	// IMP=0x00000001001c10b2
- (void)setFractionDone:(double)arg1;	// IMP=0x00000001001c0f0a
- (id)pathExtensions;	// IMP=0x00000001001c0eac
- (id)mailboxNameForImportItem:(id)arg1;	// IMP=0x00000001001c0c5a
- (void)importMailbox:(id)arg1;	// IMP=0x00000001001bf357
- (BOOL)isValidMailbox:(id)arg1;	// IMP=0x00000001001bf2be
- (id)searchForValidItemsInsideDirectory:(id)arg1 limit:(unsigned long long)arg2 searchDepth:(long long)arg3 validityBlock:(id)arg4;	// IMP=0x00000001001bf0fe
- (void)prepareForImport;	// IMP=0x00000001001bf056

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

