/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSURL, NSString, NSMutableData;

@interface AYFTPGet : AYOperation  {
    NSURL *_url;
    struct __CFReadStream { } *_readStream;
    struct { 
        int version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    } _clientContext;
    NSString *_username;
    NSString *_password;
    long long _ressourceSize;
    long long _readSize;
    NSMutableData *_readData;
}

+ (id)getRequestWithURL:(id)arg1 username:(id)arg2 password:(id)arg3;

- (id)initGetRequestWithURL:(id)arg1 username:(id)arg2 password:(id)arg3;
- (BOOL)isRunLoopBased;
- (void)_readStreamEvent:(unsigned long)arg1;
- (void)resetOperation;
- (void)endOperationWithError:(id)arg1;
- (long long)operationTotal;
- (void)finalize;
- (id)data;
- (void)dealloc;
- (void)dispatch;
- (long long)operationProgress;

@end