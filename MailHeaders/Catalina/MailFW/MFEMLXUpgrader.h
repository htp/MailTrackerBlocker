//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBackgroundActivityScheduler;

@interface MFEMLXUpgrader : NSObject
{
    NSBackgroundActivityScheduler *_mimeSnipActivityScheduler;	// 8 = 0x8
    CDUnknownBlockType _mimeSnipActivityCompletionHandler;	// 16 = 0x10
    NSBackgroundActivityScheduler *_libraryCompressionActivityScheduler;	// 24 = 0x18
    CDUnknownBlockType _libraryCompressionCompletionHandler;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType libraryCompressionCompletionHandler; // @synthesize libraryCompressionCompletionHandler=_libraryCompressionCompletionHandler;
@property(retain, nonatomic) NSBackgroundActivityScheduler *libraryCompressionActivityScheduler; // @synthesize libraryCompressionActivityScheduler=_libraryCompressionActivityScheduler;
@property(copy, nonatomic) CDUnknownBlockType mimeSnipActivityCompletionHandler; // @synthesize mimeSnipActivityCompletionHandler=_mimeSnipActivityCompletionHandler;
@property(retain, nonatomic) NSBackgroundActivityScheduler *mimeSnipActivityScheduler; // @synthesize mimeSnipActivityScheduler=_mimeSnipActivityScheduler;
// - (void).cxx_destruct;	// IMP=0x0000000000058cc5
- (BOOL)_libraryCompressionComplete;	// IMP=0x0000000000058b66
- (BOOL)_mimeSnipUpgraderComplete;	// IMP=0x0000000000058a7d
- (void)_cleanupMessageXAttrsInAccountDirectories:(id)arg1;	// IMP=0x0000000000058333
- (id)_checkMIMEInEMLXFile:(id)arg1;	// IMP=0x00000000000579c7
- (void)_snipAttachmentMIMEInAccountDirectories:(id)arg1;	// IMP=0x0000000000056f41
- (void)_cleanupSpotlightIndexForMailboxDirectory:(id)arg1;	// IMP=0x0000000000056bd5
- (BOOL)_compressionNeededForMailbox:(id)arg1;	// IMP=0x0000000000056a5e
- (void)_compressLibraryDirectories:(id)arg1;	// IMP=0x0000000000056097
- (void)_runLibraryCompressionIfNeeded;	// IMP=0x0000000000055bbe
- (void)_runMIMESnipUpradesIfNeeded;	// IMP=0x0000000000055719
- (void)runIfNeeded;	// IMP=0x00000000000556eb
- (void)dealloc;	// IMP=0x0000000000055690

@end
