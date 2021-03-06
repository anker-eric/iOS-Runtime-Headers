/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbFileManager : NSObject <PLThumbPersistenceManager> {
    int  _entryLength;
    NSString * _filename;
    int  _format;
    int  _imageLength;
    int  _imageRowBytes;
    NSString * _path;
    BOOL  _readOnly;
    struct CGSize { 
        float width; 
        float height; 
    }  _thumbnailSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int imageFormat;
@property (nonatomic, readonly) int imageHeight;
@property (nonatomic, readonly) int imageLength;
@property (nonatomic, readonly) int imageRowBytes;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } imageSize;
@property (nonatomic, readonly) int imageWidth;
@property (nonatomic, readonly) BOOL isReadOnly;
@property (nonatomic, readonly) NSString *path;
@property (readonly) Class superclass;

+ (BOOL)_deviceShouldUseLowPerformancePixelFormat;
+ (id)baseSessionOptions;
+ (struct __CFDictionary { }*)decodeSessionOptions;
+ (void)deleteAllEntriesWithIdentifier:(id)arg1 basePath:(id)arg2;

- (id)_debugDescription;
- (void)_writeData:(id)arg1 forThumbIdentifier:(id)arg2;
- (void)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (BOOL)copyEntryFromOriginalAsset:(id)arg1 toAsset:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
- (int)imageFormat;
- (int)imageHeight;
- (int)imageLength;
- (int)imageRowBytes;
- (struct CGSize { float x1; float x2; })imageSize;
- (int)imageWidth;
- (id)imageWithIdentifier:(id)arg1;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2;
- (id)initWithPath:(id)arg1 imageFormat:(int)arg2 readOnly:(BOOL)arg3;
- (BOOL)isReadOnly;
- (id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize { float x1; float x2; })arg2 options:(unsigned int)arg3;
- (id)path;
- (id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize { float x1; float x2; })arg3 options:(unsigned int)arg4;
- (void)setImageDataForEntry:(const void*)arg1 withIdentifier:(id)arg2 orIndex:(unsigned int)arg3 asset:(id)arg4;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned int)arg3 videoDuration:(id)arg4 photoUUID:(id)arg5;
- (id)thumbnailForImage:(id)arg1 videoDuration:(id)arg2;
- (id)thumbnailPathForThumbIdentifier:(id)arg1;
- (BOOL)usesThumbIdentifiers;

@end
