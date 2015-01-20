/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOClientCapabilities, GEODirectionsRequestFeedback, GEOLocation, GEOMapRegion, GEOOriginalRoute, GEORouteAttributes, NSData, NSMutableArray;

@interface GEODirectionsRequest : PBRequest <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        unsigned int sessionID : 1; 
        unsigned int maxDecoderVersion : 1; 
        unsigned int maxGraphVersion : 1; 
        unsigned int sharedLibraryVersion : 1; 
        unsigned int departureTime : 1; 
        unsigned int mainTransportTypeMaxRouteCount : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int timeSinceLastRerouteRequest : 1; 
        unsigned int getRouteForZilchPoints : 1; 
    GEOClientCapabilities *_clientCapabilities;
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    int _departureTime;
    GEODirectionsRequestFeedback *_feedback;
    } _has;
    unsigned int _mainTransportTypeMaxRouteCount;
    unsigned long long _maxDecoderVersion;
    unsigned long long _maxGraphVersion;
    NSData *_originalDirectionsResponseID;
    GEOOriginalRoute *_originalRoute;
    NSData *_originalRouteID;
    NSData *_originalRouteZilchPoints;
    GEORouteAttributes *_routeAttributes;
    unsigned int _sequenceNumber;
    NSMutableArray *_serviceTags;
    } _sessionID;
    unsigned long long _sharedLibraryVersion;
    unsigned int _timeSinceLastRerouteRequest;
    NSMutableArray *_waypointTypeds;
    bool_getRouteForZilchPoints;
}

@property(retain) GEOClientCapabilities * clientCapabilities;
@property(retain) GEOMapRegion * currentMapRegion;
@property(retain) GEOLocation * currentUserLocation;
@property int departureTime;
@property(retain) GEODirectionsRequestFeedback * feedback;
@property bool getRouteForZilchPoints;
@property(readonly) bool hasClientCapabilities;
@property(readonly) bool hasCurrentMapRegion;
@property(readonly) bool hasCurrentUserLocation;
@property bool hasDepartureTime;
@property(readonly) bool hasFeedback;
@property bool hasGetRouteForZilchPoints;
@property bool hasMainTransportTypeMaxRouteCount;
@property bool hasMaxDecoderVersion;
@property bool hasMaxGraphVersion;
@property(readonly) bool hasOriginalDirectionsResponseID;
@property(readonly) bool hasOriginalRoute;
@property(readonly) bool hasOriginalRouteID;
@property(readonly) bool hasOriginalRouteZilchPoints;
@property(readonly) bool hasRouteAttributes;
@property bool hasSequenceNumber;
@property bool hasSessionID;
@property bool hasSharedLibraryVersion;
@property bool hasTimeSinceLastRerouteRequest;
@property unsigned int mainTransportTypeMaxRouteCount;
@property unsigned long long maxDecoderVersion;
@property unsigned long long maxGraphVersion;
@property(retain) NSData * originalDirectionsResponseID;
@property(retain) GEOOriginalRoute * originalRoute;
@property(retain) NSData * originalRouteID;
@property(retain) NSData * originalRouteZilchPoints;
@property(retain) GEORouteAttributes * routeAttributes;
@property unsigned int sequenceNumber;
@property(retain) NSMutableArray * serviceTags;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property unsigned long long sharedLibraryVersion;
@property unsigned int timeSinceLastRerouteRequest;
@property(retain) NSMutableArray * waypointTypeds;

- (void)addServiceTag:(id)arg1;
- (void)addWaypointTyped:(id)arg1;
- (void)clearServiceTags;
- (void)clearWaypointTypeds;
- (id)clientCapabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentMapRegion;
- (id)currentUserLocation;
- (void)dealloc;
- (int)departureTime;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedback;
- (bool)getRouteForZilchPoints;
- (bool)hasClientCapabilities;
- (bool)hasCurrentMapRegion;
- (bool)hasCurrentUserLocation;
- (bool)hasDepartureTime;
- (bool)hasFeedback;
- (bool)hasGetRouteForZilchPoints;
- (bool)hasMainTransportTypeMaxRouteCount;
- (bool)hasMaxDecoderVersion;
- (bool)hasMaxGraphVersion;
- (bool)hasOriginalDirectionsResponseID;
- (bool)hasOriginalRoute;
- (bool)hasOriginalRouteID;
- (bool)hasOriginalRouteZilchPoints;
- (bool)hasRouteAttributes;
- (bool)hasSequenceNumber;
- (bool)hasSessionID;
- (bool)hasSharedLibraryVersion;
- (bool)hasTimeSinceLastRerouteRequest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)mainTransportTypeMaxRouteCount;
- (unsigned long long)maxDecoderVersion;
- (unsigned long long)maxGraphVersion;
- (void)mergeFrom:(id)arg1;
- (id)originalDirectionsResponseID;
- (id)originalRoute;
- (id)originalRouteID;
- (id)originalRouteZilchPoints;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)routeAttributes;
- (unsigned int)sequenceNumber;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (id)serviceTags;
- (unsigned long long)serviceTagsCount;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setClientCapabilities:(id)arg1;
- (void)setCurrentMapRegion:(id)arg1;
- (void)setCurrentUserLocation:(id)arg1;
- (void)setDepartureTime:(int)arg1;
- (void)setFeedback:(id)arg1;
- (void)setGetRouteForZilchPoints:(bool)arg1;
- (void)setHasDepartureTime:(bool)arg1;
- (void)setHasGetRouteForZilchPoints:(bool)arg1;
- (void)setHasMainTransportTypeMaxRouteCount:(bool)arg1;
- (void)setHasMaxDecoderVersion:(bool)arg1;
- (void)setHasMaxGraphVersion:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasSharedLibraryVersion:(bool)arg1;
- (void)setHasTimeSinceLastRerouteRequest:(bool)arg1;
- (void)setMainTransportTypeMaxRouteCount:(unsigned int)arg1;
- (void)setMaxDecoderVersion:(unsigned long long)arg1;
- (void)setMaxGraphVersion:(unsigned long long)arg1;
- (void)setOriginalDirectionsResponseID:(id)arg1;
- (void)setOriginalRoute:(id)arg1;
- (void)setOriginalRouteID:(id)arg1;
- (void)setOriginalRouteZilchPoints:(id)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSharedLibraryVersion:(unsigned long long)arg1;
- (void)setTimeSinceLastRerouteRequest:(unsigned int)arg1;
- (void)setWaypointTypeds:(id)arg1;
- (unsigned long long)sharedLibraryVersion;
- (unsigned int)timeSinceLastRerouteRequest;
- (id)waypointTypedAtIndex:(unsigned long long)arg1;
- (id)waypointTypeds;
- (unsigned long long)waypointTypedsCount;
- (void)writeTo:(id)arg1;

@end
