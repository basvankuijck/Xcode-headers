//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSCoding-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IBInsetWrapper : NSObject <NSCopying, NSCoding, IBBinaryArchiving>
{
    double _top;
    double _bottom;
    double _left;
    double _right;
}

+ (id)insetWrapperWithEdgeInsets:(struct NSEdgeInsets)arg1;
+ (id)insetWrapperWithIBInset:(CDStruct_d2b197d1)arg1;
+ (id)zeroInset;
@property(readonly, copy) NSString *description;
- (struct NSEdgeInsets)edgeInsetsValue;
- (CDStruct_d2b197d1)ibInsetValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTop:(double)arg1 bottom:(double)arg2 left:(double)arg3 right:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

