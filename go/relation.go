/* 
 * GraphHopper Directions API
 *
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

package graphhopper

type Relation struct {

	// identifier of relation
	Type_ string `json:"type,omitempty"`

	// An array of ids that should be related
	Ids []string `json:"ids,omitempty"`

	// vehicle id
	VehicleId string `json:"vehicle_id,omitempty"`
}
