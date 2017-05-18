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


#import "SWGCostMatrixData.h"


@protocol SWGCostMatrix
@end

@interface SWGCostMatrix : SWGObject

/* type of cost matrix, currently default or google are supported [optional]
 */
@property(nonatomic) NSString* type;
/* URL of matrix service [optional]
 */
@property(nonatomic) NSString* url;

@property(nonatomic) NSArray<NSString*>* locationIds;

@property(nonatomic) SWGCostMatrixData* data;
/* vehicle profile or empty if catch all fallback [optional]
 */
@property(nonatomic) NSString* profile;

@end
