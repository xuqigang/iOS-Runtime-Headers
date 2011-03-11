/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLConnectionInternal;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLConnectionInternal *_internal;
}

+ (id)connectionWithRequest:(id)arg1 delegate:(id)arg2;
+ (BOOL)canHandleRequest:(id)arg1;
+ (unsigned int)_sweeperInterval;
+ (void)_setSweeperInterval:(unsigned int)arg1;
+ (void)_setLoaderThreadPriority:(int)arg1;
+ (void)_setMIMETypesWithNoSizeLimit:(id)arg1;
+ (void)_resourceLoadLoop:(id)arg1;
+ (struct __CFRunLoop { }*)resourceLoaderRunLoop;
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3;

- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (BOOL)defersCallbacks;
- (void)setDefersCallbacks:(BOOL)arg1;
- (void)start;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (void)releaseDelegate;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 priority:(float)arg3 usesCache:(BOOL)arg4;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 priority:(float)arg3;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)cleanupChallenges;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3;
- (struct _CFURLConnection { }*)_CFURLConnection;
- (void)_setShouldSkipCancelOnRelease:(bool)arg1;
- (id)_delegate;
- (BOOL)_connectionActive;
- (void)_dontCountTowardsOriginLoadLimit;
- (struct _CFURLRequest { }*)sendWillSendRequest:(struct _CFURLRequest { }*)arg1 redirectResponse:(struct _CFURLResponse { }*)arg2;
- (void)sendDidReceiveResponse:(struct _CFURLResponse { }*)arg1;
- (void)sendDidReceiveData:(struct __CFData { }*)arg1 originalLength:(long)arg2;
- (void)sendDidFinishLoading;
- (void)sendDidFail:(struct __CFError { }*)arg1;
- (struct _CFCachedURLResponse { }*)sendWillCacheResponse:(struct _CFCachedURLResponse { }*)arg1;
- (void)sendDidReceiveChallenge:(struct _CFURLAuthChallenge { }*)arg1;
- (void)sendDidSendBodyData:(long)arg1 totalBytesWritten:(long)arg2 totalBytesExpectedToWrite:(long)arg3;
- (unsigned char)sendConnectionShouldUseCredentialStorage;
- (struct __CFReadStream { }*)sendNeedNewBodyStream:(struct _CFURLRequest { }*)arg1;
- (bool)sendCanAuthenticateAgainstProtectionSpace:(struct _CFURLProtectionSpace { }*)arg1;
- (void)_suspendLoading;
- (void)_resumeLoading;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

@end