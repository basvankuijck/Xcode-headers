//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface _TtC17XCSAdministration22ProcessExecutionResult : NSObject
{
    // Error parsing type: , name: statusCode
    // Error parsing type: , name: output
    // Error parsing type: , name: errorOutput
}

+ (id)success;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *errorString;
@property(nonatomic, readonly) NSString *outputString;
- (id)initWithStatusCode:(long long)arg1;
@property(nonatomic, copy) NSData *errorOutput; // @synthesize errorOutput;
@property(nonatomic, copy) NSData *output; // @synthesize output;
@property(nonatomic, readonly) long long statusCode; // @synthesize statusCode;

@end

