/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIDSMessageCenter : NSObject <IDSServiceDelegate> {
    NSString *_cacheDirectoryPath;
    <HDIDSMessageCenterDelegate> *_delegate;
    NSMutableDictionary *_errorHandlers;
    NSObject<OS_dispatch_source> *_expireTimer;
    NSString *_launchNotification;
    NSDate *_nextExpireTimerFireDate;
    NSMutableDictionary *_pbMapping;
    HDIDSPersistentDictionary *_persistentContextStore;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_responseHandlers;
    IDSService *_service;
    NSString *_serviceIdentifier;
}

@property (nonatomic, readonly, copy) NSString *cacheDirectoryPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDIDSMessageCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) IDSService *idsService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_expireMessages;
- (void)_handleError:(id)arg1 context:(id)arg2;
- (id)_pbMappingForMessageID:(unsigned short)arg1;
- (id)_queue;
- (void)_sendResponse:(id)arg1;
- (void)_updateExpireTimerWithDate:(id)arg1;
- (void)addErrorHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)addRequestHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (void)addResponseHandler:(SEL)arg1 forMessageID:(unsigned short)arg2;
- (id)cacheDirectoryPath;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)idsService;
- (id)initWithIDSServiceIdentifier:(id)arg1 launchOnDemandNotification:(id)arg2 cacheDirectoryPath:(id)arg3;
- (void)mapPBRequest:(Class)arg1 toResponse:(Class)arg2 messageID:(unsigned short)arg3;
- (id)queue;
- (void)resume;
- (void)sendRequest:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;

@end