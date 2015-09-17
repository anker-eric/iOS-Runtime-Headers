/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAppInstaller : NSObject {
    ACUIAppDescription *_app;
    BOOL _availableInStoreResult;
    BOOL _cachedReachabilityResult;
    NSDate *_dateOfLastInstallationCheck;
    NSDate *_dateOfLastReachabilityCheck;
    <ACUIAppInstallerDelegate> *_delegate;
    BOOL _needsAvailableInStoreCheck;
    NSURL *_publisherURL;
    BOOL _resultOfLastInstallationCheck;
}

@property (nonatomic) <ACUIAppInstallerDelegate> *delegate;
@property (nonatomic, readonly) BOOL isAvailableInStore;
@property (nonatomic, readonly) BOOL isDownloadable;
@property (nonatomic, readonly) BOOL isInstalled;
@property (nonatomic, retain) NSURL *publisherURL;
@property (nonatomic, readonly) BOOL requiresReachabilityCheckToDetermineDownloadability;

+ (id)currentStoreFront;

- (void).cxx_destruct;
- (BOOL)_isGreenTeaAvailable;
- (void)_performAvailabilityCheck:(id /* block */)arg1;
- (void)_performReachabilityCheck:(id /* block */)arg1;
- (BOOL)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(BOOL)arg1;
- (void)_setAvailableInStoreResult:(BOOL)arg1;
- (void)_setCachedReachabilityResult:(BOOL)arg1;
- (void)checkAvailabilityInStore:(id /* block */)arg1;
- (id)delegate;
- (void)fetchDownloadability:(id /* block */)arg1;
- (id)initForAppWithDescription:(id)arg1;
- (BOOL)isAvailableInStore;
- (BOOL)isDownloadable;
- (BOOL)isInstalled;
- (id)publisherURL;
- (BOOL)requiresReachabilityCheckToDetermineDownloadability;
- (void)setDelegate:(id)arg1;
- (void)setPublisherURL:(id)arg1;
- (void)start;

@end