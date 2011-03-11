/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface SFUCryptoKey : NSObject  {
    unsigned int mIterationCount;
}


- (int)keyType;
- (unsigned int)iterationCount;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;

@end