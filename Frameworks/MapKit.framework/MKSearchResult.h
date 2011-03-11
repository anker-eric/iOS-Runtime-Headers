/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, MKAddressBookAddress, NSString, UIImage, MKSearchResult;

@interface MKSearchResult : MKSearchResultRepr <NSCopying, MKLocatableObject, MKAnnotation> {
    NSString *_singleLineAddress;
    NSString *_singleLineAddressWithHomeCountry;
    BOOL _hasMergedFormattedAddress;
    NSString *_resultIdentifier;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    CLLocation *_location;
    BOOL _originatedFromHistory;
    MKAddressBookAddress *_address;
    UIImage *_adIcon;
    NSString *_routeDistanceSummary;
    MKSearchResult *_representedSearchResult;
}

@property(retain) MKAddressBookAddress * address;
@property(readonly) NSString * resultIdentifier;
@property(readonly) BOOL isAd;
@property(readonly) NSString * adLine1;
@property(readonly) NSString * adLine2;
@property(readonly) BOOL needsReverseGeocodeCheck;
@property(readonly) BOOL performsReverseGeocodeCheck;
@property(readonly) BOOL isDynamicCurrentLocation;
@property(readonly) BOOL canUseNameAsOrg;
@property(readonly) NSString * displayTitle;
@property(readonly) NSString * infoCardTitle;
@property(readonly) NSString * locationTitle;
@property(readonly) NSString * defaultName;
@property(readonly) NSString * debugDescription;
@property(readonly) CLLocation * location;
@property(readonly) BOOL requiresPanoramaIDCheck;
@property(retain) NSString * panoramaID;
@property(retain) MKSearchResult * representedSearchResult;
@property(retain) NSString * routeDistanceSummary;
@property(getter=isReverseGeocoded) BOOL reverseGeocoded;
@property(readonly) BOOL hasStructuredAddress;
@property(retain) NSString * author;
@property(getter=isUserCreated,readonly) BOOL userCreated;
@property(readonly) UIImage * adIcon;
@property BOOL originatedFromHistory;
@property struct { double latitude; double longitude; } coordinate;

+ (id)currentLocationSearchResultName;
+ (id)customLocationSearchResultName;
+ (id)defaultNameForType:(int)arg1;
+ (id)formatStringForMapsURLWithName;
+ (id)formatStringForMapsURLWithLatLon;
+ (id)searchResultWithDictionaryRepresentation:(id)arg1 fileVersion:(int)arg2;
+ (id)searchResultWithDictionaryRepresentation:(id)arg1;
+ (id)currentLocationSearchResult;
+ (id)customSearchResultWithCoordinate:(struct { double x1; double x2; })arg1;
+ (int)_indexToInsertResultWithDistance:(double)arg1 distanceDictionary:(id)arg2 sortedArray:(id)arg3;
+ (id)distanceSortedResults:(id)arg1 fromPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (id)keyPathsForValuesAffectingDisplayTitle;
+ (id)keyPathsForValuesAffectingLocationTitle;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingHasStructuredAddress;
+ (id)keyPathsForValuesAffectingAddressDictionary;
+ (id)keyPathsForValuesAffectingSingleLineAddress;
+ (id)keyPathsForValuesAffectingSingleLineAddressWithHomeCountry;
+ (id)keyPathsForValuesAffectingRouteLocation;
+ (id)keyPathsForValuesAffectingLocation;
+ (id)keyPathsForValuesAffectingIsValid;
+ (id)keyPathsForValuesAffectingLooksLikeBusiness;
+ (id)keyPathsForValuesAffectingReverseGeocoded;
+ (id)keyPathsForValuesAffectingAuthor;

- (BOOL)isValid;
- (id)initWithType:(int)arg1;
- (id)mapsURL;
- (id)subtitle;
- (int)color;
- (void)setName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)title;
- (id)name;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)location;
- (BOOL)readFrom:(id)arg1;
- (id)author;
- (BOOL)isAd;
- (void)writeTo:(id)arg1;
- (id)copyWithType:(int)arg1;
- (void)setRepresentedSearchResult:(id)arg1;
- (id)initWithSearchResult:(id)arg1;
- (id)initWithSearchResult:(id)arg1 address:(id)arg2;
- (id)initWithSearchResultStrippingName:(id)arg1 address:(id)arg2;
- (void)setAddress:(id)arg1;
- (BOOL)isAddressBookResult;
- (BOOL)hasStructuredAddress;
- (id)routeDistanceSummary;
- (id)defaultName;
- (id)infoCardTitle;
- (BOOL)isDynamicCurrentLocation;
- (BOOL)performsReverseGeocodeCheck;
- (id)initWithSearchResult:(id)arg1 includeStreetView:(BOOL)arg2 includeAddress:(BOOL)arg3;
- (id)initWithGMMSearchResult:(id)arg1 type:(int)arg2 originalQuery:(id)arg3;
- (id)initWithSearchResult:(id)arg1 type:(int)arg2;
- (BOOL)isLocationEqual:(id)arg1 withinDistance:(double)arg2;
- (id)copyWithType:(int)arg1 name:(id)arg2 mapType:(unsigned int)arg3 zoomLevel:(unsigned int)arg4;
- (id)copyWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)copyWithLongLat:(struct CGPoint { float x1; float x2; })arg1 includeStreetView:(BOOL)arg2 includeAddress:(BOOL)arg3;
- (void)didUpdateAddress;
- (id)_formattedAddress;
- (id)copyWithLongLat:(struct CGPoint { float x1; float x2; })arg1;
- (id)resultIdentifier;
- (BOOL)canUseNameAsOrg;
- (void)clearLocationInformation;
- (void)setCoordinate:(struct { double x1; double x2; })arg1 preserveLocationInfo:(BOOL)arg2;
- (void)setAddressFromSearchResult:(id)arg1;
- (void)setAddressFromPlacemark:(id)arg1;
- (void)becomeDefaultTypeIfCustomType;
- (void)_parseAndMergeFormattedAddress;
- (id)_formattedAddressDictionary;
- (id)_structuredAddressDictionaryWithHomeCounty:(BOOL)arg1;
- (id)_addressWithHomeCountry:(BOOL)arg1;
- (id)addressDictionary;
- (id)singleLineAddress;
- (BOOL)hasAccurateAddress;
- (id)_longLatString;
- (id)routeLocation;
- (BOOL)isInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)looksLikeBusiness;
- (void)resetMetadata;
- (id)adLine1;
- (id)adLine2;
- (BOOL)isUserCreated;
- (BOOL)isReverseGeocoded;
- (void)setReverseGeocoded:(BOOL)arg1;
- (void)becomeDefaultTypeIfAdType;
- (void)setRouteDistanceSummary:(id)arg1;
- (id)representedSearchResult;
- (id)adIcon;
- (BOOL)originatedFromHistory;
- (void)setOriginatedFromHistory:(BOOL)arg1;
- (BOOL)needsReverseGeocodeCheck;
- (BOOL)requiresPanoramaIDCheck;
- (id)locationTitle;
- (id)singleLineAddressWithHomeCountry;
- (id)displayTitle;
- (id)address;
- (id)debugDescription;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })coordinate;

@end