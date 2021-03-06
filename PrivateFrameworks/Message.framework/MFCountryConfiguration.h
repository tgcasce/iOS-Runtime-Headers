/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFCountryConfiguration : NSObject {
    NSString *_countryCode;
    NSConditionLock *_generatorLock;
    NSString *_lastCountryCode;
    int _lock;
}

@property (nonatomic, readonly, copy) NSString *countryCode;

+ (id)sharedConfiguration;

- (id)_cellSimCountryCode;
- (id)_countryCodeWithGenerator:(id /* block */)arg1;
- (id)_networkCountryCode;
- (id)countryCode;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)updateCurrentCountry;

@end
