//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountStatusDataSourceDelegate-Protocol.h"

@class AccountStatusDataSource, ComposeViewController, ContentHuggingTextView, NSButton, NSError, NSPanel, NSString, NSTableView, NSTextField;

@interface DeliveryFailure : NSObject <AccountStatusDataSourceDelegate>
{
    NSPanel *_panel;	// 8 = 0x8
    NSTextField *_errorLabel;	// 16 = 0x10
    ContentHuggingTextView *_errorDescriptionLabel;	// 24 = 0x18
    NSTableView *_table;	// 32 = 0x20
    NSButton *_tryLaterButton;	// 40 = 0x28
    NSButton *_tryOtherButton;	// 48 = 0x30
    AccountStatusDataSource *_deliveryASDS;	// 56 = 0x38
    ComposeViewController *_composeViewController;	// 64 = 0x40
    NSError *_error;	// 72 = 0x48
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak ComposeViewController *composeViewController; // @synthesize composeViewController=_composeViewController;
@property(readonly, nonatomic) AccountStatusDataSource *deliveryASDS; // @synthesize deliveryASDS=_deliveryASDS;
@property(nonatomic) __weak NSButton *tryOtherButton; // @synthesize tryOtherButton=_tryOtherButton;
@property(nonatomic) __weak NSButton *tryLaterButton; // @synthesize tryLaterButton=_tryLaterButton;
@property(nonatomic) __weak NSTableView *table; // @synthesize table=_table;
@property(nonatomic) __weak ContentHuggingTextView *errorDescriptionLabel; // @synthesize errorDescriptionLabel=_errorDescriptionLabel;
@property(nonatomic) __weak NSTextField *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) NSPanel *panel; // @synthesize panel=_panel;
// - (void).cxx_destruct;	// IMP=0x000000010012eacc
- (void)_updateErrorMessage;	// IMP=0x000000010012e1ac
- (void)_postDeliveryFailureHappened;	// IMP=0x000000010012e152
- (void)_deliveryAccountsDidChange:(id)arg1;	// IMP=0x000000010012e070
- (void)_selectedAccountDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000010012defd
- (id)_setDynamicDeliveryAccountForAccount:(id)arg1;	// IMP=0x000000010012ddee
- (void)editServerList:(id)arg1;	// IMP=0x000000010012dd5a
- (void)tryOtherAccount:(id)arg1;	// IMP=0x000000010012dc9f
- (void)editMessage:(id)arg1;	// IMP=0x000000010012dbe4
- (void)sendLater:(id)arg1;	// IMP=0x000000010012db2c
- (void)runChooseAlternateDeliveryAccountSheet;	// IMP=0x000000010012d0ed
- (void)reportError:(id)arg1;	// IMP=0x000000010012c0dc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010012bf23
- (void)composeViewControllerWillClose;	// IMP=0x000000010012bebf
- (void)dealloc;	// IMP=0x000000010012be2d
- (void)awakeFromNib;	// IMP=0x000000010012bd7c
- (id)init;	// IMP=0x000000010012bcad
- (id)initWithComposeViewController:(id)arg1;	// IMP=0x000000010012bb3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
