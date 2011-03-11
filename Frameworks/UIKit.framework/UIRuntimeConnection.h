/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIRuntimeConnection : NSObject <NSCoding> {
    id source;
    id destination;
    NSString *label;
}


- (id)source;
- (id)destination;
- (id)label;
- (void)setSource:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)connect;
- (void)connectForSimulator;
- (void)setLabel:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end