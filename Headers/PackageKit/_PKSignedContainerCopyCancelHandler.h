//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, PKPayloadCopier;

@interface _PKSignedContainerCopyCancelHandler : NSObject
{
    PKPayloadCopier *_copier;	// 8 = 0x8
    BOOL _isCancelled;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_syncQueue;	// 24 = 0x18
}

- (void)cancel;	// IMP=0x000000000007c32b
- (void)setCopier:(id)arg1;	// IMP=0x000000000007c203
- (BOOL)isCancelled;	// IMP=0x000000000007c0c9
- (void)dealloc;	// IMP=0x000000000007c04d
- (id)init;	// IMP=0x000000000007bfdd

@end

