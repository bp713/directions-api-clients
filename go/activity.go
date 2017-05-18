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

type Activity struct {

	// type of activity
	Type_ string `json:"type,omitempty"`

	// id referring to the underlying service or shipment, i.e. the shipment or service this activity belongs to
	Id string `json:"id,omitempty"`

	// id that refers to address
	LocationId string `json:"location_id,omitempty"`

	// arrival time at this activity in ms
	ArrTime int64 `json:"arr_time,omitempty"`

	// end time of and thus departure time at this activity
	EndTime int64 `json:"end_time,omitempty"`

	// waiting time at this activity in ms
	WaitingTime int64 `json:"waiting_time,omitempty"`

	// cumulated distance from start to this activity in m
	Distance int64 `json:"distance,omitempty"`

	// driving time of driver in ms
	DrivingTime int64 `json:"driving_time,omitempty"`

	// Array with size/capacity dimensions before this activity
	LoadBefore []int32 `json:"load_before,omitempty"`

	// Array with size/capacity dimensions after this activity
	LoadAfter []int32 `json:"load_after,omitempty"`
}
