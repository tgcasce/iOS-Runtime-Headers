/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCompanionSyncErrorEvent : PBCodable <NSCopying> {
    int _error;
    struct { 
        unsigned int sequenceNumber : 1; 
        unsigned int timestamp : 1; 
        unsigned int error : 1; 
    } _has;
    unsigned long long _sequenceNumber;
    NSString *_service;
    unsigned long long _timestamp;
}

@property (nonatomic) int error;
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic, readonly) BOOL hasService;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)error;
- (BOOL)hasError;
- (BOOL)hasSequenceNumber;
- (BOOL)hasService;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)sequenceNumber;
- (id)service;
- (void)setError:(int)arg1;
- (void)setHasError:(BOOL)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
