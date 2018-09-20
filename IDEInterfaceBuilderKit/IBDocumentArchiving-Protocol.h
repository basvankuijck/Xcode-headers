//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBDocumentArchiver, IBDocumentUnarchiver;

@protocol IBDocumentArchiving <NSObject>
- (void)unarchiveWithDocumentUnarchiver:(IBDocumentUnarchiver *)arg1;
- (void)archiveWithDocumentArchiver:(IBDocumentArchiver *)arg1;

@optional
+ (id)instantiateWithDocumentUnarchiver:(IBDocumentUnarchiver *)arg1;
- (void)awakeAfterUsingDocumentUnarchiver:(IBDocumentUnarchiver *)arg1;
- (Class)classForDocumentArchiver:(IBDocumentArchiver *)arg1;
@end

