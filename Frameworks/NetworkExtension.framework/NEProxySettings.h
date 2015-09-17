/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProxySettings : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    BOOL _FTPEnabled;
    NEProxyServer *_FTPServer;
    BOOL _HTTPEnabled;
    BOOL _HTTPSEnabled;
    NEProxyServer *_HTTPSServer;
    NEProxyServer *_HTTPServer;
    BOOL _RTSPEnabled;
    NEProxyServer *_RTSPServer;
    BOOL _SOCKSEnabled;
    NEProxyServer *_SOCKSServer;
    BOOL _autoProxyConfigurationEnabled;
    BOOL _autoProxyDiscovery;
    NSArray *_exceptionList;
    BOOL _excludeSimpleHostnames;
    BOOL _gopherEnabled;
    NEProxyServer *_gopherServer;
    NSString *_proxyAutoConfigJavaScript;
    NSURL *_proxyAutoConfigURL;
    NSArray *_supplementalMatchDomains;
    NSArray *_supplementalMatchOrders;
    BOOL _usePassiveFTP;
}

@property BOOL FTPEnabled;
@property (copy) NEProxyServer *FTPServer;
@property BOOL HTTPEnabled;
@property BOOL HTTPSEnabled;
@property (copy) NEProxyServer *HTTPSServer;
@property (copy) NEProxyServer *HTTPServer;
@property BOOL RTSPEnabled;
@property (copy) NEProxyServer *RTSPServer;
@property BOOL SOCKSEnabled;
@property (copy) NEProxyServer *SOCKSServer;
@property BOOL autoProxyConfigurationEnabled;
@property BOOL autoProxyDiscovery;
@property (copy) NSArray *exceptionList;
@property BOOL excludeSimpleHostnames;
@property BOOL gopherEnabled;
@property (copy) NEProxyServer *gopherServer;
@property (copy) NSArray *matchDomains;
@property (copy) NSString *proxyAutoConfigJavaScript;
@property (copy) NSURL *proxyAutoConfigURL;
@property (copy) NSString *proxyAutoConfigurationJavaScript;
@property (copy) NSURL *proxyAutoConfigurationURL;
@property (copy) NSArray *supplementalMatchDomains;
@property (copy) NSArray *supplementalMatchOrders;
@property BOOL usePassiveFTP;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)FTPEnabled;
- (id)FTPServer;
- (BOOL)HTTPEnabled;
- (BOOL)HTTPSEnabled;
- (id)HTTPSServer;
- (id)HTTPServer;
- (BOOL)RTSPEnabled;
- (id)RTSPServer;
- (BOOL)SOCKSEnabled;
- (id)SOCKSServer;
- (BOOL)autoProxyConfigurationEnabled;
- (BOOL)autoProxyDiscovery;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (void)copyPasswordsFromKeychain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)exceptionList;
- (BOOL)excludeSimpleHostnames;
- (BOOL)gopherEnabled;
- (id)gopherServer;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)matchDomains;
- (id)proxyAutoConfigJavaScript;
- (id)proxyAutoConfigURL;
- (id)proxyAutoConfigurationJavaScript;
- (id)proxyAutoConfigurationURL;
- (void)removeKeychainItems;
- (void)setAutoProxyConfigurationEnabled:(BOOL)arg1;
- (void)setAutoProxyDiscovery:(BOOL)arg1;
- (void)setExceptionList:(id)arg1;
- (void)setExcludeSimpleHostnames:(BOOL)arg1;
- (void)setFTPEnabled:(BOOL)arg1;
- (void)setFTPServer:(id)arg1;
- (void)setGopherEnabled:(BOOL)arg1;
- (void)setGopherServer:(id)arg1;
- (void)setHTTPEnabled:(BOOL)arg1;
- (void)setHTTPSEnabled:(BOOL)arg1;
- (void)setHTTPSServer:(id)arg1;
- (void)setHTTPServer:(id)arg1;
- (void)setMatchDomains:(id)arg1;
- (void)setProxyAutoConfigJavaScript:(id)arg1;
- (void)setProxyAutoConfigURL:(id)arg1;
- (void)setProxyAutoConfigurationJavaScript:(id)arg1;
- (void)setProxyAutoConfigurationURL:(id)arg1;
- (void)setRTSPEnabled:(BOOL)arg1;
- (void)setRTSPServer:(id)arg1;
- (void)setSOCKSEnabled:(BOOL)arg1;
- (void)setSOCKSServer:(id)arg1;
- (void)setSupplementalMatchDomains:(id)arg1;
- (void)setSupplementalMatchOrders:(id)arg1;
- (void)setUsePassiveFTP:(BOOL)arg1;
- (id)supplementalMatchDomains;
- (id)supplementalMatchOrders;
- (void)syncWithKeychain;
- (BOOL)usePassiveFTP;

@end