//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoggingSupportHost/OSLogEventProvider-Protocol.h>

@class NSDate, NSString, NSTimeZone, NSUUID, OSLogEventBacktrace, OSLogEventDecomposedMessage;

@interface OSLogEventProxy : NSObject <OSLogEventProvider>
{
    struct {
        unsigned long long type;
        int pid;
        unsigned long long proc_id;
        unsigned int pidversion;
        char *proc_imageuuid;
        char *proc_imagepath;
        unsigned long long activity_id;
        unsigned long long parent_id;
        struct {
            unsigned long long trace_id;
            unsigned long long timestamp;
            unsigned long long thread;
            struct mach_timebase_info timebase;
            char *dsc_uuid;
            char *image_uuid;
            char *image_path;
            struct timeval tv_gmt;
            struct timezone tz;
            unsigned int offset;
            unsigned int opaque_flags;
            char *message;
            unsigned long long sz;
        } common;
        union {
            struct {
                unsigned long long creator_aid;
                unsigned long long unique_pid;
            } activity_create;
            struct {
                unsigned long long transition_id;
            } activity_transition;
            struct {
                char *buffer;
                unsigned long long buffer_sz;
                struct os_log_fmt_hdr_s *hdr;
                void *pubdata;
                unsigned short pubdata_sz;
                char *privdata;
                unsigned long long privdata_sz;
                char *subsystem;
                char *category;
                unsigned int oversize_id;
                unsigned char ttl;
                _Bool persisted;
                unsigned char signpost_scope;
                unsigned char signpost_type;
                unsigned long long signpost_id;
                unsigned int signpost_name_offset;
                char *signpost_name;
                struct os_trace_context_data_s *ctxdata;
                unsigned long long ctxdata_sz;
            } log_message;
            struct {
                char *action;
                _Bool persisted;
            } useraction;
            struct {
                unsigned char boot_uuid[16];
                unsigned long long flags;
                unsigned long long continuous_time;
                unsigned long long wallclock_nsec;
                unsigned char ttl;
            } timesync;
            struct {
                CDStruct_69b3e0b9 start;
                CDStruct_69b3e0b9 end;
                unsigned int count;
            } loss;
        } ;
        struct {
            unsigned long long message_size;
            unsigned char ttl;
        } statedump;
    } _eint;
    struct os_activity_map_s *_aid_map;
    CDStruct_c6d697a1 *_event;
    unsigned long long _efv;
    struct _os_timesync_db_s *_tsdb;
    int _uuiddbfd;
    struct timezone _tz;
    _Bool _sensitive;
    _Bool _trackActivities;
    unsigned long long _thread;
    unsigned long long _retainCount;
    NSString *_processImagePath;
    NSString *_senderImagePath;
    OSLogEventBacktrace *_backtrace;
    NSString *_logMessage;
    OSLogEventDecomposedMessage *_decomposedMessage;
    unsigned long long _uuidi;
}

+ (id)_make;
@property(nonatomic) unsigned long long _timesyncRangeUUIDIndex; // @synthesize _timesyncRangeUUIDIndex=_uuidi;
@property(readonly, nonatomic) CDStruct_b08cb064 lossCount;
@property(readonly, nonatomic) struct timezone *lossEndUnixTimeZone;
@property(readonly, nonatomic) struct timeval *lossEndUnixDate;
@property(readonly, nonatomic) unsigned long long lossEndMachContinuousTimestamp;
@property(readonly, nonatomic) struct timezone *lossStartUnixTimeZone;
@property(readonly, nonatomic) struct timeval *lossStartUnixDate;
@property(readonly, nonatomic) unsigned long long lossStartMachContinuousTimestamp;
@property(readonly, nonatomic) unsigned long long creatorProcessUniqueIdentifier;
@property(readonly, nonatomic) unsigned long long creatorActivityIdentifier;
- (id)formatArguments;
@property(readonly, nonatomic) NSString *formatString;
@property(readonly, nonatomic) NSString *signpostName;
@property(readonly, nonatomic) unsigned long long signpostScope;
@property(readonly, nonatomic) unsigned long long signpostType;
@property(readonly, nonatomic) unsigned long long signpostIdentifier;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *subsystem;
@property(readonly, nonatomic) OSLogEventBacktrace *backtrace;
@property(readonly, nonatomic) unsigned long long senderImageOffset;
@property(readonly, nonatomic) NSString *sender;
@property(readonly, nonatomic) NSString *senderImagePath;
@property(readonly, nonatomic) const char *senderImageUUIDBytes;
@property(readonly, nonatomic) NSUUID *senderImageUUID;
@property(readonly, nonatomic) NSString *process;
@property(readonly, nonatomic) NSString *processImagePath;
@property(readonly, nonatomic) const char *processImageUUIDBytes;
@property(readonly, nonatomic) NSUUID *processImageUUID;
- (unsigned long long)processUniqueIdentifier;
@property(readonly, nonatomic) unsigned long long machContinuousTimestamp;
@property(readonly, nonatomic) unsigned long long continuousNanosecondsSinceBoot;
@property(readonly, nonatomic) NSUUID *bootUUID;
@property(readonly, nonatomic) unsigned long long transitionActivityIdentifier;
@property(readonly, nonatomic) unsigned long long parentActivityIdentifier;
@property(readonly, nonatomic) unsigned long long activityIdentifier;
- (unsigned int)processIdentifierVersion;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, nonatomic) struct timezone *unixTimeZone;
@property(readonly, nonatomic) struct timeval *unixDate;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) unsigned long long timeToLive;
@property(readonly, nonatomic) unsigned long long threadIdentifier;
@property(readonly, nonatomic) unsigned long long traceIdentifier;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) unsigned long long logType;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) OSLogEventDecomposedMessage *decomposedMessage;
@property(readonly, nonatomic) NSString *composedMessage;
@property(readonly, nonatomic) unsigned int _oversizeIdentifier;
- (id)description;
- (void)_fillFromXPCEventObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)_setLogEvent:(CDStruct_c6d697a1 *)arg1 rangeUUIDIndex:(unsigned long long)arg2 machTimebase:(struct mach_timebase_info *)arg3;
- (void)_setBuffer:(const void *)arg1 size:(unsigned long long)arg2 privateBuffer:(const void *)arg3 privateSize:(unsigned long long)arg4;
- (void)_setDoNotTrackActivites:(BOOL)arg1;
- (void)_setFallbackTimezone;
- (void)_setUUIDDBFileDescriptor:(int)arg1;
- (void)_setTimesyncDatabase:(struct _os_timesync_db_s *)arg1;
- (void)_setIncludeSensitive:(BOOL)arg1;
- (void)_setThreadCrumb;
- (void)_assertBalanced;
- (oneway void)release;
- (id)retain;
- (id)init;
- (oneway void)_unmake;

@end

