//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EAEmailAddressLists : NSObject
{
}

+ (id)addressDisplayStringWithMaxNumberOfAddresses:(unsigned long long)arg1 fromAddressList:(id)arg2;	// IMP=0x0000000000003fc2
+ (id)displayNameFromAddressList:(id)arg1;	// IMP=0x0000000000003d63
+ (id)rawAddressListFromFullAddressList:(id)arg1;	// IMP=0x0000000000001453
+ (id)addressStringFromAddressList:(id)arg1;	// IMP=0x00000000000025b7
+ (id)addressListFromAddressString:(id)arg1;	// IMP=0x0000000000003d37
+ (id)componentsSeparatedByCharactersRespectingQuotesAndParens:(id)arg1 forString:(id)arg2;	// IMP=0x0000000000003a3a
+ (id)componentsSeparatedByCommaRespectingQuotesAndParensForString:(id)arg1;	// IMP=0x0000000000003932
+ (id)addressListFromHeaderValue:(id)arg1;	// IMP=0x0000000000002c01

@end
