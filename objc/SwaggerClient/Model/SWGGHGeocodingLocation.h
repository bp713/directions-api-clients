#import <Foundation/Foundation.h>
#import "SWGObject.h"

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


#import "SWGGHGeocodingPoint.h"


@protocol SWGGHGeocodingLocation
@end

@interface SWGGHGeocodingLocation : SWGObject


@property(nonatomic) SWGGHGeocodingPoint* point;
/* OSM Id [optional]
 */
@property(nonatomic) NSString* osmId;
/* N = node, R = relation, W = way [optional]
 */
@property(nonatomic) NSString* osmType;

@property(nonatomic) NSString* name;

@property(nonatomic) NSString* country;

@property(nonatomic) NSString* city;

@property(nonatomic) NSString* state;

@property(nonatomic) NSString* street;

@property(nonatomic) NSString* housenumber;

@property(nonatomic) NSString* postcode;

@end
