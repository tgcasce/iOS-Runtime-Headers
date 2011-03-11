/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray;

@interface UIKBKeylistReference : NSObject <NSCoding, NSCopying> {
    NSString *m_name;
    id m_value;
    NSArray *m_nameElements;
    int m_startKeyIndex;
    int m_endKeyIndex;
    unsigned int m_flags;
}

@property(readonly) NSString * keylistName;
@property(readonly) NSString * keyName;
@property(readonly) BOOL isKeysetReference;
@property(readonly) BOOL isKeylistReference;
@property(readonly) BOOL isKeysReference;
@property(readonly) BOOL isNamedKeyReference;
@property(readonly) BOOL isKeyIndexReference;
@property(readonly) BOOL isKeyIndexRangeReference;
@property(readonly) BOOL isGeometryReference;
@property(readonly) BOOL isAttributesReference;
@property(readonly) int endKeyIndex;
@property(readonly) int startKeyIndex;
@property(readonly) NSArray * nameElements;
@property(readonly) unsigned int flags;
@property(retain) id value;
@property(retain) NSString * name;

+ (id)referenceWithName:(id)arg1 value:(id)arg2 flags:(unsigned int)arg3;

- (BOOL)isAttributesReference;
- (BOOL)isGeometryReference;
- (id)keylistName;
- (id)initWithName:(id)arg1 value:(id)arg2 flags:(unsigned int)arg3;
- (id)keyName;
- (BOOL)isKeysetReference;
- (BOOL)isKeylistReference;
- (BOOL)isKeysReference;
- (BOOL)isNamedKeyReference;
- (BOOL)isKeyIndexReference;
- (BOOL)isKeyIndexRangeReference;
- (unsigned int)startIndexForListCount:(unsigned int)arg1;
- (unsigned int)endIndexForListCount:(unsigned int)arg1;
- (void)setFlags:(unsigned int)arg1 setStartKeyIndex:(int)arg2 setEndKeyIndex:(int)arg3;
- (void)setNameElements:(id)arg1;
- (int)endKeyIndex;
- (int)startKeyIndex;
- (id)nameElements;
- (unsigned int)flags;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end