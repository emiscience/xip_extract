//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKInstallOperation.h>

@class PKPackageSpecifier;

@interface PKVerifyMASPayloadInstallOperation : PKInstallOperation
{
    PKPackageSpecifier *_currentPackageSpecifier;	// 80 = 0x50
    BOOL _appStoreStage;	// 88 = 0x58
    BOOL _atomicUpdate;	// 89 = 0x59
}

- (void)main;	// IMP=0x00000000000853d2
- (BOOL)_verifyCodeSignaturesForPackageSpecifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000084ca1
- (BOOL)_shouldSkipDRCheck;	// IMP=0x0000000000084c09
- (id)messageTracerComment;	// IMP=0x0000000000084bb4
- (id)messageTracerDomain;	// IMP=0x0000000000084ba7
- (id)currentPackageSpecifier;	// IMP=0x0000000000084b96
- (int)installState;	// IMP=0x0000000000084b8b
- (id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3;	// IMP=0x00000000000847d3

@end

