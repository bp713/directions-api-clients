#import <Foundation/Foundation.h>
#import "SWGGHError.h"
#import "SWGGHRouteResponse.h"
#import "SWGApi.h"

/**
* GraphHopper Directions API
* You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
*
* OpenAPI spec version: 1.0.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface SWGRoutingApi: NSObject <SWGApi>

extern NSString* kSWGRoutingApiErrorDomain;
extern NSInteger kSWGRoutingApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Routing Request
/// The GraphHopper Routing API allows to calculate route and implement navigation via the turn instructions
///
/// @param point Specify multiple points for which the route should be calculated. The order is important. Specify at least two points.
/// @param pointsEncoded IMPORTANT- TODO - currently you have to pass false for the swagger client - Have not found a way to force add a parameter. If &#x60;false&#x60; the coordinates in &#x60;point&#x60; and &#x60;snapped_waypoints&#x60; are returned as array using the order [lon,lat,elevation] for every point. If &#x60;true&#x60; the coordinates will be encoded as string leading to less bandwith usage. You&#39;ll need a special handling for the decoding of this string on the client-side. We provide open source code in [Java](https://github.com/graphhopper/graphhopper/blob/d70b63660ac5200b03c38ba3406b8f93976628a6/web/src/main/java/com/graphhopper/http/WebHelper.java#L43) and [JavaScript](https://github.com/graphhopper/graphhopper/blob/d70b63660ac5200b03c38ba3406b8f93976628a6/web/src/main/webapp/js/ghrequest.js#L139). It is especially important to use no 3rd party client if you set &#x60;elevation&#x3D;true&#x60;!
/// @param key Get your key at graphhopper.com
/// @param locale The locale of the resulting turn instructions. E.g. &#x60;pt_PT&#x60; for Portuguese or &#x60;de&#x60; for German (optional)
/// @param instructions If instruction should be calculated and returned (optional)
/// @param vehicle The vehicle for which the route should be calculated. Other vehicles are foot, bike, motorcycle, hike, ... (optional)
/// @param elevation If &#x60;true&#x60; a third dimension - the elevation - is included in the polyline or in the GeoJson. If enabled you have to use a modified version of the decoding method or set points_encoded to &#x60;false&#x60;. See the points_encoded attribute for more details. Additionally a request can fail if the vehicle does not support elevation. See the features object for every vehicle. (optional)
/// @param calcPoints If the points for the route should be calculated at all printing out only distance and time. (optional)
/// @param pointHint Optional parameter. Specifies a hint for each &#x60;point&#x60; parameter to prefer a certain street for the closest location lookup. E.g. if there is an address or house with two or more neighboring streets you can control for which street the closest location is looked up. (optional)
/// @param chDisable Use this parameter in combination with one or more parameters of this table (optional)
/// @param weighting Which kind of &#39;best&#39; route calculation you need. Other option is &#x60;shortest&#x60; (e.g. for &#x60;vehicle&#x3D;foot&#x60; or &#x60;bike&#x60;), &#x60;short_fastest&#x60; if time and distance is expensive (e.g. for &#x60;vehicle&#x3D;truck&#x60;) and &#x60;curvature&#x60; (only for &#x60;vehicle&#x3D;motorcycle&#x60;) (optional)
/// @param edgeTraversal Use &#x60;true&#x60; if you want to consider turn restrictions for bike and motor vehicles. Keep in mind that the response time is roughly 2 times slower. (optional)
/// @param algorithm The algorithm to calculate the route. Other options are &#x60;dijkstra&#x60;, &#x60;astar&#x60;, &#x60;astarbi&#x60;, &#x60;alternative_route&#x60; and &#x60;round_trip&#x60; (optional)
/// @param heading Favour a heading direction for a certain point. Specify either one heading for the start point or as many as there are points. In this case headings are associated by their order to the specific points. Headings are given as north based clockwise angle between 0 and 360 degree. This parameter also influences the tour generated with &#x60;algorithm&#x3D;round_trip&#x60; and force the initial direction. (optional)
/// @param headingPenalty Penalty for omitting a specified heading. The penalty corresponds to the accepted time delay in seconds in comparison to the route without a heading. (optional)
/// @param passThrough If &#x60;true&#x60; u-turns are avoided at via-points with regard to the &#x60;heading_penalty&#x60;. (optional)
/// @param roundTripDistance If &#x60;algorithm&#x3D;round_trip&#x60; this parameter configures approximative length of the resulting round trip (optional)
/// @param roundTripSeed If &#x60;algorithm&#x3D;round_trip&#x60; this parameter introduces randomness if e.g. the first try wasn&#39;t good. (optional)
/// @param alternativeRouteMaxPaths If &#x60;algorithm&#x3D;alternative_route&#x60; this parameter sets the number of maximum paths which should be calculated. Increasing can lead to worse alternatives. (optional)
/// @param alternativeRouteMaxWeightFactor If &#x60;algorithm&#x3D;alternative_route&#x60; this parameter sets the factor by which the alternatives routes can be longer than the optimal route. Increasing can lead to worse alternatives. (optional)
/// @param alternativeRouteMaxShareFactor If &#x60;algorithm&#x3D;alternative_route&#x60; this parameter specifies how much alternatives routes can have maximum in common with the optimal route. Increasing can lead to worse alternatives. (optional)
/// 
///  code:200 message:"Routing Result",
///  code:0 message:"Unexpected Error"
///
/// @return SWGGHRouteResponse*
-(NSURLSessionTask*) routeGetWithPoint: (NSArray<NSString*>*) point
    pointsEncoded: (NSNumber*) pointsEncoded
    key: (NSString*) key
    locale: (NSString*) locale
    instructions: (NSNumber*) instructions
    vehicle: (NSString*) vehicle
    elevation: (NSNumber*) elevation
    calcPoints: (NSNumber*) calcPoints
    pointHint: (NSArray<NSString*>*) pointHint
    chDisable: (NSNumber*) chDisable
    weighting: (NSString*) weighting
    edgeTraversal: (NSNumber*) edgeTraversal
    algorithm: (NSString*) algorithm
    heading: (NSNumber*) heading
    headingPenalty: (NSNumber*) headingPenalty
    passThrough: (NSNumber*) passThrough
    roundTripDistance: (NSNumber*) roundTripDistance
    roundTripSeed: (NSNumber*) roundTripSeed
    alternativeRouteMaxPaths: (NSNumber*) alternativeRouteMaxPaths
    alternativeRouteMaxWeightFactor: (NSNumber*) alternativeRouteMaxWeightFactor
    alternativeRouteMaxShareFactor: (NSNumber*) alternativeRouteMaxShareFactor
    completionHandler: (void (^)(SWGGHRouteResponse* output, NSError* error)) handler;



@end
