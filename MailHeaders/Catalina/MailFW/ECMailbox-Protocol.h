//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/NSCopying-Protocol.h>
#import <MailFW/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol ECMailbox <NSCopying, NSObject>
@property(readonly, nonatomic) NSURL *URL;
@property(readonly) long long type;
@property(readonly, copy) NSString *name;
@property(readonly, copy, nonatomic) NSString *persistentID;
@end

