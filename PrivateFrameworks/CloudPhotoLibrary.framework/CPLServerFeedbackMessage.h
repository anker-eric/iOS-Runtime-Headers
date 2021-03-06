/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLServerFeedbackMessage : PBCodable <NSCopying> {
    NSMutableArray * _keysAndValues;
}

@property (nonatomic, retain) NSMutableArray *keysAndValues;

- (void).cxx_destruct;
- (void)addKeysAndValues:(id)arg1;
- (void)clearKeysAndValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)keysAndValues;
- (id)keysAndValuesAtIndex:(unsigned int)arg1;
- (unsigned int)keysAndValuesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setKeysAndValues:(id)arg1;
- (void)writeTo:(id)arg1;

@end
