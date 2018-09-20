//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _dnt_SQLiteWrapper : NSObject
{
}

+ (id)textColumnValueAtIndex:(int)arg1 inExecutedStatement:(struct _dnt_sqlite_statement_handle *)arg2;
+ (id)blobColumnValueAtIndex:(int)arg1 inExecutedStatement:(struct _dnt_sqlite_statement_handle *)arg2;
+ (double)doubleColumnValueAtIndex:(int)arg1 inExecutedStatement:(struct _dnt_sqlite_statement_handle *)arg2;
+ (int)intColumnValueAtIndex:(int)arg1 inExecutedStatement:(struct _dnt_sqlite_statement_handle *)arg2;
+ (int)columnTypeAtIndex:(int)arg1 inExecutedStatement:(struct _dnt_sqlite_statement_handle *)arg2;
+ (id)columnNameAtIndex:(int)arg1 inExecutedStatement:(struct _dnt_sqlite_statement_handle *)arg2;
+ (int)numberOfColumnsInExecutedStatement:(struct _dnt_sqlite_statement_handle *)arg1;
+ (BOOL)finalizePreparedStatement:(struct _dnt_sqlite_statement_handle *)arg1 error:(id *)arg2;
+ (BOOL)resetPreparedStatement:(struct _dnt_sqlite_statement_handle *)arg1 error:(id *)arg2;
+ (BOOL)stepPreparedStatement:(struct _dnt_sqlite_statement_handle *)arg1 resultCode:(int *)arg2 error:(id *)arg3;
+ (BOOL)bindText:(id)arg1 toColumn:(int)arg2 inPreparedStatement:(struct _dnt_sqlite_statement_handle *)arg3 error:(id *)arg4;
+ (BOOL)bindNullToColumn:(int)arg1 inPreparedStatement:(struct _dnt_sqlite_statement_handle *)arg2 error:(id *)arg3;
+ (BOOL)bindInt:(int)arg1 toColumn:(int)arg2 inPreparedStatement:(struct _dnt_sqlite_statement_handle *)arg3 error:(id *)arg4;
+ (BOOL)bindDouble:(double)arg1 toColumn:(int)arg2 inPreparedStatement:(struct _dnt_sqlite_statement_handle *)arg3 error:(id *)arg4;
+ (BOOL)bindBlob:(id)arg1 toColumn:(int)arg2 inPreparedStatement:(struct _dnt_sqlite_statement_handle *)arg3 error:(id *)arg4;
+ (int)lastInsertRowID:(struct _dnt_sqlite_database_handle *)arg1;
+ (BOOL)prepareStatement:(id)arg1 forDatabase:(struct _dnt_sqlite_database_handle *)arg2 handle:(struct _dnt_sqlite_statement_handle **)arg3 error:(id *)arg4;
+ (BOOL)executeSQL:(id)arg1 onDatabase:(struct _dnt_sqlite_database_handle *)arg2 error:(id *)arg3;
+ (BOOL)closeDatabase:(struct _dnt_sqlite_database_handle *)arg1 error:(id *)arg2;
+ (BOOL)openDatabaseAtFileURL:(id)arg1 readOnly:(BOOL)arg2 outDatabase:(struct _dnt_sqlite_database_handle **)arg3 error:(id *)arg4;
+ (id)errorForMessage:(char *)arg1;
+ (id)errorForCode:(int)arg1;
+ (id)errorForLastOperationOnDatabase:(struct _dnt_sqlite_database_handle *)arg1;
+ (id)descriptionForErrorCode:(int)arg1;
+ (id)errorMessageForLastOperationOnDatabase:(struct _dnt_sqlite_database_handle *)arg1;
+ (BOOL)isSuccessCode:(int)arg1;

@end

