require 'json'


MyApp.add_route('GET', '/api/1/matrix', {
  "resourcePath" => "/Matrix",
  "summary" => "Matrix API",
  "nickname" => "matrix_get", 
  "responseClass" => "MatrixResponse", 
  "endpoint" => "/matrix", 
  "notes" => "The Matrix API is part of the GraphHopper Directions API and with this API you can calculate many-to-many distances, times or routes a lot more efficient than calling the Routing API multiple times. In the Routing API we support multiple points, so called 'via points', which results in one route being calculated. The Matrix API results in NxM routes or more precise NxM weights, distances or times being calculated but is a lot faster compared to NxM single requests. The most simple example is a tourist trying to decide which pizza is close to him instead of using beeline distance she can calculate a 1x4 matrix. Or a delivery service in the need of often big NxN matrices to solve vehicle routing problems. E.g. the GraphHopper Route Optimization API uses the Matrix API under the hood to achieve this. ",
  "parameters" => [
    {
      "name" => "point",
      "description" => "Specifiy multiple points for which the weight-, route-, time- or distance-matrix should be calculated. In this case the starts are identical to the destinations. If there are N points, then NxN entries will be calculated. The order of the point parameter is important. Specify at least three points. Cannot be used together with from_point or to_point. Is a string with the format latitude,longitude.",
      "dataType" => "array[string]",
      "paramType" => "query",
      "collectionFormat" => "multi",
      "allowableValues" => "",
      
    },
    {
      "name" => "from_point",
      "description" => "The starting points for the routes. E.g. if you want to calculate the three routes A-&amp;gt;1, A-&amp;gt;2, A-&amp;gt;3 then you have one from_point parameter and three to_point parameters. Is a string with the format latitude,longitude.",
      "dataType" => "array[string]",
      "paramType" => "query",
      "collectionFormat" => "multi",
      "allowableValues" => "",
      
    },
    {
      "name" => "to_point",
      "description" => "The destination points for the routes. Is a string with the format latitude,longitude.",
      "dataType" => "array[string]",
      "paramType" => "query",
      "collectionFormat" => "multi",
      "allowableValues" => "",
      
    },
    {
      "name" => "point_hint",
      "description" => "Optional parameter. Specifies a hint for each &#x60;point&#x60; parameter to prefer a certain street for the closest location lookup. E.g. if there is an address or house with two or more neighboring streets you can control for which street the closest location is looked up.",
      "dataType" => "array[string]",
      "paramType" => "query",
      "collectionFormat" => "multi",
      "allowableValues" => "",
      
    },
    {
      "name" => "from_point_hint",
      "description" => "For the from_point parameter. See point_hint",
      "dataType" => "array[string]",
      "paramType" => "query",
      "collectionFormat" => "multi",
      "allowableValues" => "",
      
    },
    {
      "name" => "to_point_hint",
      "description" => "For the to_point parameter. See point_hint",
      "dataType" => "array[string]",
      "paramType" => "query",
      "collectionFormat" => "multi",
      "allowableValues" => "",
      
    },
    {
      "name" => "out_array",
      "description" => "Specifies which arrays should be included in the response. Specify one or more of the following options &#39;weights&#39;, &#39;times&#39;, &#39;distances&#39;. To specify more than one array use e.g. out_array&#x3D;times&amp;out_array&#x3D;distances. The units of the entries of distances are meters, of times are seconds and of weights is arbitrary and it can differ for different vehicles or versions of this API.",
      "dataType" => "array[string]",
      "paramType" => "query",
      "collectionFormat" => "multi",
      "allowableValues" => "",
      
    },
    {
      "name" => "vehicle",
      "description" => "The vehicle for which the route should be calculated. Other vehicles are foot, small_truck etc",
      "dataType" => "string",
      "paramType" => "query",
      
      "allowableValues" => "",
      "defaultValue" => "car"
    },
    {
      "name" => "key",
      "description" => "Get your key at graphhopper.com",
      "dataType" => "string",
      "paramType" => "query",
      
      "allowableValues" => "",
      
    },
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end


MyApp.add_route('POST', '/api/1/matrix', {
  "resourcePath" => "/Matrix",
  "summary" => "Matrix API Post",
  "nickname" => "matrix_post", 
  "responseClass" => "MatrixResponse", 
  "endpoint" => "/matrix", 
  "notes" => "The GET request has an URL length limitation, which hurts for many locations per request. In those cases use a HTTP POST request with JSON data as input. The only parameter in the URL will be the key which stays in the URL. Both request scenarios are identically except that all singular parameter names are named as their plural for a POST request. ",
  "parameters" => [
    {
      "name" => "key",
      "description" => "Get your key at graphhopper.com",
      "dataType" => "string",
      "paramType" => "query",
      
      "allowableValues" => "",
      
    },
    {
      "name" => "body",
      "description" => "",
      "dataType" => "MatrixRequest",
      "paramType" => "body",
    }
    ]}) do
  cross_origin
  # the guts live here

  {"message" => "yes, it worked"}.to_json
end

