//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountInfoTabOwner-Protocol.h"
#import "MailTableViewDelegate-Protocol.h"

@class MFSizeEngine, MailTableView, NSProgressIndicator, NSString, NSTextField, NSTimer, NSView;

@interface Quota : NSObject <AccountInfoTabOwner, MailTableViewDelegate>
{
    MailTableView *_quotaTable;	// 8 = 0x8
    NSTextField *_usageField;	// 16 = 0x10
    MFSizeEngine *_sizeEngine;	// 24 = 0x18
    id _compareUsingDescriptors;	// 32 = 0x20
    NSTimer *_statusTimer;	// 40 = 0x28
    NSView *_view;	// 48 = 0x30
    NSProgressIndicator *_progressIndicator;	// 56 = 0x38
    NSTextField *_progressField;	// 64 = 0x40
}

+ (id)quotaForMailAccount:(id)arg1;	// IMP=0x000000010025d57a
@property(nonatomic) __weak NSTextField *progressField; // @synthesize progressField=_progressField;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer=_statusTimer;
@property(readonly, copy, nonatomic) id compareUsingDescriptors; // @synthesize compareUsingDescriptors=_compareUsingDescriptors;
@property(retain, nonatomic) MFSizeEngine *sizeEngine; // @synthesize sizeEngine=_sizeEngine;
@property(nonatomic) __weak NSTextField *usageField; // @synthesize usageField=_usageField;
@property(nonatomic) __weak MailTableView *quotaTable; // @synthesize quotaTable=_quotaTable;
// - (void).cxx_destruct;	// IMP=0x000000010025dda0
- (void)accountInfoWillShowView:(id)arg1;	// IMP=0x000000010025dc65
- (void)accountInfoWillHideView:(id)arg1;	// IMP=0x000000010025dc28
- (const struct QuotaSimpleSortDescriptor *)sortDescriptorAtIndex:(unsigned long long)arg1;	// IMP=0x000000010025dc20
@property(readonly, nonatomic) unsigned long long numberOfSortDescriptors;
- (void)engineUpdated:(id)arg1;	// IMP=0x000000010025da4a
- (void)_stopProgress:(id)arg1;	// IMP=0x000000010025d8ec
- (void)_updateProgress:(id)arg1;	// IMP=0x000000010025d89d
- (void)updateProgress:(id)arg1;	// IMP=0x000000010025d81e
- (void)engineDidFinish;	// IMP=0x000000010025d78a
- (void)engineDidStart;	// IMP=0x000000010025d70d
- (void)_accountOfflineStatusDidChange:(id)arg1;	// IMP=0x000000010025d6d0
- (void)dealloc;	// IMP=0x000000010025d4d2
- (id)init;	// IMP=0x000000010025d403
- (id)initWithSizeEngine:(id)arg1;	// IMP=0x000000010025d092

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
