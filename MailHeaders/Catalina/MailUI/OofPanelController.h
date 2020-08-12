//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountInfoTabOwner-Protocol.h"
#import "NSDatePickerCellDelegate-Protocol.h"

@class ColorBackgroundView, EditingMessageWebView, EditingWebMessageController, MFEWSAccount, NSButton, NSDate, NSDatePicker, NSPopUpButton, NSProgressIndicator, NSString, NSView;

@interface OofPanelController : NSObject <AccountInfoTabOwner, NSDatePickerCellDelegate>
{
    NSView *_view;	// 8 = 0x8
    NSButton *_oofEnabledCheckbox;	// 16 = 0x10
    NSProgressIndicator *_getOofSettingsIndicator;	// 24 = 0x18
    NSPopUpButton *_scheduleMenu;	// 32 = 0x20
    NSDatePicker *_startTimePicker;	// 40 = 0x28
    NSDatePicker *_endTimePicker;	// 48 = 0x30
    ColorBackgroundView *_internalWebViewBackground;	// 56 = 0x38
    ColorBackgroundView *_externalWebViewBackground;	// 64 = 0x40
    EditingMessageWebView *_internalWebView;	// 72 = 0x48
    EditingMessageWebView *_externalWebView;	// 80 = 0x50
    MFEWSAccount *_account;	// 88 = 0x58
    NSDate *_startTime;	// 96 = 0x60
    NSDate *_endTime;	// 104 = 0x68
    EditingWebMessageController *_internalController;	// 112 = 0x70
    EditingWebMessageController *_externalController;	// 120 = 0x78
}

@property(retain, nonatomic) EditingWebMessageController *externalController; // @synthesize externalController=_externalController;
@property(retain, nonatomic) EditingWebMessageController *internalController; // @synthesize internalController=_internalController;
@property(retain) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain) MFEWSAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak EditingMessageWebView *externalWebView; // @synthesize externalWebView=_externalWebView;
@property(nonatomic) __weak EditingMessageWebView *internalWebView; // @synthesize internalWebView=_internalWebView;
@property(nonatomic) __weak ColorBackgroundView *externalWebViewBackground; // @synthesize externalWebViewBackground=_externalWebViewBackground;
@property(nonatomic) __weak ColorBackgroundView *internalWebViewBackground; // @synthesize internalWebViewBackground=_internalWebViewBackground;
@property(nonatomic) __weak NSDatePicker *endTimePicker; // @synthesize endTimePicker=_endTimePicker;
@property(nonatomic) __weak NSDatePicker *startTimePicker; // @synthesize startTimePicker=_startTimePicker;
@property(nonatomic) __weak NSPopUpButton *scheduleMenu; // @synthesize scheduleMenu=_scheduleMenu;
@property(nonatomic) __weak NSProgressIndicator *getOofSettingsIndicator; // @synthesize getOofSettingsIndicator=_getOofSettingsIndicator;
@property(nonatomic) __weak NSButton *oofEnabledCheckbox; // @synthesize oofEnabledCheckbox=_oofEnabledCheckbox;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
// - (void).cxx_destruct;	// IMP=0x000000010024856c
- (void)datePickerCell:(id)arg1 validateProposedDateValue:(id *)arg2 timeInterval:(double *)arg3;	// IMP=0x0000000100248132
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000001002480f4
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000001002480b6
- (void)accountInfoWillShowView:(id)arg1;	// IMP=0x00000001002480a4
- (void)accountInfoWillHideView:(id)arg1;	// IMP=0x0000000100247d52
- (void)_updateWebView:(id)arg1 content:(id)arg2;	// IMP=0x0000000100247780
- (void)_setEnabledForInterfaceElements:(BOOL)arg1;	// IMP=0x000000010024760e
- (void)_handleOutOfOfficeSettings:(id)arg1;	// IMP=0x0000000100247252
- (void)showOutOfOfficeSettings;	// IMP=0x000000010024716a
- (void)scheduleMenuChanged:(id)arg1;	// IMP=0x0000000100247074
- (void)toggleOofEnabled:(id)arg1;	// IMP=0x000000010024703a
- (void)dealloc;	// IMP=0x0000000100246eca
- (void)awakeFromNib;	// IMP=0x0000000100246d8b
- (id)init;	// IMP=0x0000000100246cbc
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000100246be0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
