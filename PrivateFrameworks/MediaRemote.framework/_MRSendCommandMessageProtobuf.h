/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSendCommandMessageProtobuf : PBCodable <NSCopying> {
    int  _command;
    struct { 
        unsigned int command : 1; 
    }  _has;
    _MRCommandOptionsProtobuf * _options;
}

@property (nonatomic) int command;
@property (nonatomic) bool hasCommand;
@property (nonatomic, readonly) bool hasOptions;
@property (nonatomic, retain) _MRCommandOptionsProtobuf *options;

- (int)StringAsCommand:(id)arg1;
- (int)command;
- (id)commandAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCommand;
- (bool)hasOptions;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)options;
- (bool)readFrom:(id)arg1;
- (void)setCommand:(int)arg1;
- (void)setHasCommand:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)writeTo:(id)arg1;

@end