//
// RouteOptimizationAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Alamofire



public class RouteOptimizationAPI: APIBase {
    /**
     Return the solution associated to the jobId
     
     - parameter key: (query) your API key 
     - parameter jobId: (path) Request solution with jobId 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func getSolution(key key: String, jobId: String, completion: ((data: Response?, error: ErrorType?) -> Void)) {
        getSolutionWithRequestBuilder(key: key, jobId: jobId).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Return the solution associated to the jobId
     - GET /vrp/solution/{jobId}
     - This endpoint returns the solution of a large problems. You can fetch it with the job_id, you have been sent. 
     - examples: [{contentType=application/json, example={
  "processing_time" : 123456789,
  "solution" : {
    "costs" : 123,
    "routes" : [ {
      "completion_time" : 123456789,
      "distance" : 123456789,
      "transport_time" : 123456789,
      "waiting_time" : 123456789,
      "activities" : [ {
        "distance" : 123456789,
        "waiting_time" : 123456789,
        "driving_time" : 123456789,
        "end_time" : 123456789,
        "load_before" : [ 123 ],
        "arr_time" : 123456789,
        "id" : "aeiou",
        "type" : "aeiou",
        "location_id" : "aeiou",
        "load_after" : [ 123 ]
      } ],
      "vehicle_id" : "aeiou"
    } ],
    "distance" : 123,
    "transport_time" : 123456789,
    "waiting_time" : 123456789,
    "no_vehicles" : 123,
    "time" : 123456789,
    "no_unassigned" : 123,
    "unassigned" : {
      "services" : [ "aeiou" ],
      "shipments" : [ "aeiou" ]
    },
    "max_operation_time" : 123456789
  },
  "copyrights" : [ "aeiou" ],
  "job_id" : "aeiou",
  "waiting_in_queue" : 123456789,
  "status" : "aeiou"
}}]
     
     - parameter key: (query) your API key 
     - parameter jobId: (path) Request solution with jobId 

     - returns: RequestBuilder<Response> 
     */
    public class func getSolutionWithRequestBuilder(key key: String, jobId: String) -> RequestBuilder<Response> {
        var path = "/vrp/solution/{jobId}"
        path = path.stringByReplacingOccurrencesOfString("{jobId}", withString: "\(jobId)", options: .LiteralSearch, range: nil)
        let URLString = GraphHopperAPI.basePath + path

        let nillableParameters: [String:AnyObject?] = [
            "key": key
        ]
 
        let parameters = APIHelper.rejectNil(nillableParameters)
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<Response>.Type = GraphHopperAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

    /**
     Solves vehicle routing problems
     
     - parameter key: (query) your API key 
     - parameter body: (body) Request object that contains the problem to be solved 
     - parameter completion: completion handler to receive the data and the error objects
     */
    public class func postVrp(key key: String, body: Request, completion: ((data: JobId?, error: ErrorType?) -> Void)) {
        postVrpWithRequestBuilder(key: key, body: body).execute { (response, error) -> Void in
            completion(data: response?.body, error: error);
        }
    }


    /**
     Solves vehicle routing problems
     - POST /vrp/optimize
     - This endpoint for solving vehicle routing problems, i.e. traveling salesman or vehicle routing problems, and returns the solution.
     - examples: [{contentType=application/json, example={
  "job_id" : "aeiou"
}}]
     
     - parameter key: (query) your API key 
     - parameter body: (body) Request object that contains the problem to be solved 

     - returns: RequestBuilder<JobId> 
     */
    public class func postVrpWithRequestBuilder(key key: String, body: Request) -> RequestBuilder<JobId> {
        let path = "/vrp/optimize"
        let URLString = GraphHopperAPI.basePath + path
        let parameters = body.encodeToJSON() as? [String:AnyObject]
 
        let convertedParameters = APIHelper.convertBoolToString(parameters)
 
        let requestBuilder: RequestBuilder<JobId>.Type = GraphHopperAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "POST", URLString: URLString, parameters: convertedParameters, isBody: false)
    }

}
