/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRecursiveLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)lock;
- (void)finalize;
- (void)unlock;
- (void)setName:(id)arg1;
- (id)name;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)tryLock;
- (BOOL)isLocking;
- (BOOL)lockBeforeDate:(id)arg1;

@end