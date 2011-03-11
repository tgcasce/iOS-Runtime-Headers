/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGGeocodeRequest, LBSGCellularProfile, LBSGLocation;

@interface LBSGLocRequestElement : PBRequest  {
    LBSGCellularProfile *_cellularProfile;
    LBSGLocation *_location;
    LBSGGeocodeRequest *_geocode;
}

@property(readonly) BOOL hasCellularProfile;
@property(readonly) BOOL hasLocation;
@property(readonly) BOOL hasGeocode;
@property(retain) LBSGGeocodeRequest * geocode;
@property(retain) LBSGLocation * location;
@property(retain) LBSGCellularProfile * cellularProfile;


- (id)dictionaryRepresentation;
- (void)setLocation:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)location;
- (BOOL)hasCellularProfile;
- (void)setCellularProfile:(id)arg1;
- (id)cellularProfile;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)geocode;
- (BOOL)hasGeocode;
- (void)setGeocode:(id)arg1;
- (BOOL)hasLocation;

@end