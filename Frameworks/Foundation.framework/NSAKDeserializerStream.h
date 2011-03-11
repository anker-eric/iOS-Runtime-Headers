/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {
    void *memory;
    char *current;
    unsigned int left;
    unsigned int max;
    BOOL freeWhenDone;
}


- (void)finalize;
- (void)dealloc;
- (id)initFromPath:(id)arg1;
- (int)readInt;
- (unsigned int)readAlignedDataSize;
- (void)readData:(void*)arg1 length:(unsigned int)arg2;
- (id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;

@end