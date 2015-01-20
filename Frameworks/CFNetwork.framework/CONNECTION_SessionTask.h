/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableURLRequest, NSURLRequest, NSURLSession;

@interface CONNECTION_SessionTask : NSObject {
    struct __CFDictionary { } *_connectionProperties;
    struct _CFURLRequest { } *_currentRequest;
    Class _my_protocolForTask;
    NSMutableURLRequest *_nsCurrentRequest;
    NSURLRequest *_nsOriginalRequest;
    struct _CFURLRequest { } *_originalRequest;
    NSURLSession *_session;
    struct __CFDictionary { } *_socketProperties;
    bool_is_cellular;
}

- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache;
- (struct __CFDictionary { }*)_additionalHeaders;
- (unsigned long long)_allowedProtocolTypes;
- (id)_allowsCellular;
- (id)_backgroundTaskTimingData;
- (id)_boundInterfaceIdentifier;
- (int)_cachePolicy;
- (id)_cfCache;
- (id)_cfCookies;
- (id)_cfCreds;
- (id)_cfHSTS;
- (id)_connectionPropertyDuet;
- (id)_contentDispositionFallbackArray;
- (id)_cookieAcceptPolicy;
- (struct _CFURLRequest { }*)_copyCurrentCFURLRequest;
- (struct _CFHSTSPolicy { }*)_copyHSTSPolicy;
- (struct __CFHTTPMessage { }*)_copyHTTPMessage;
- (struct _CFURLRequest { }*)_copyOriginalCFURLRequest;
- (struct __CFDictionary { }*)_copySocketStreamProperties;
- (struct _CFURLRequest { }*)_currentCFURLRequest;
- (id)_disallowCellular;
- (id)_expectedWorkload;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (id)_networkServiceType;
- (id)_performanceTiming;
- (unsigned char)_preventsIdleSystemSleep;
- (id)_priorityValue;
- (id)_prohibitAuthUI;
- (id)_protocolForTask;
- (struct __CFDictionary { }*)_proxySettings;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (long long)_requestPriority;
- (void)_setConnectionIsCellular:(bool)arg1;
- (void)_setSocketProperties:(struct __CFDictionary { }*)arg1 connectionProperties:(struct __CFDictionary { }*)arg2;
- (id)_shouldHandleCookies;
- (unsigned char)_shouldPipelineHTTP;
- (unsigned char)_shouldSkipPipelineProbe;
- (bool)_shouldSkipPreferredClientCertificateLookup;
- (unsigned char)_shouldUsePipelineHeuristics;
- (struct __CFDictionary { }*)_sslSettings;
- (unsigned char)_strictContentLength;
- (long long)_suspensionThreshhold;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (id)_timeWindowDelay;
- (id)_timeWindowDuration;
- (double)_timeoutInterval;
- (void)cleanupAndBreakCycles;
- (id)countOfBytesExpectedToReceive;
- (id)countOfBytesExpectedToSend;
- (id)countOfBytesReceived;
- (id)countOfBytesSent;
- (id)currentRequest;
- (struct __CFURL { }*)currentRequest_URL;
- (void)dealloc;
- (id)error;
- (id)initWithRequest:(struct _CFURLRequest { }*)arg1 mutableCurrent:(struct _CFURLRequest { }*)arg2 connProps:(struct __CFDictionary { }*)arg3 sockProps:(struct __CFDictionary { }*)arg4 session:(id)arg5;
- (id)originalRequest;
- (struct __CFURL { }*)originalRequest_mainDocumentURL;
- (float)priority;
- (id)session;
- (void)set_protocolForTask:(id)arg1;
- (bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (id)startTime;
- (id)state;
- (id)taskIdentifier;
- (void)updateCurrentRequest:(id)arg1;
- (id)workQueue;

@end
