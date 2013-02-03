/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKQuadTrie : NSObject {
    struct { 
        double width; 
        double height; 
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    void *__root;
    } _initialRegion;
    unsigned int _maxItems;
    } _minSize;
}

- (id).cxx_construct;
- (id)allItems;
- (id)breadthFirstDescription;
- (void)clearAllItemsPerforming:(id)arg1;
- (BOOL)contains:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)depthFirstDescription;
- (id)description;
- (void)foreach:(id)arg1;
- (id)initWithInitialRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 minimumSize:(struct { double x1; double x2; })arg2 maximumItems:(unsigned int)arg3;
- (void)insert:(id)arg1;
- (id)itemDescriptions;
- (id)itemsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)remove:(id)arg1;

@end