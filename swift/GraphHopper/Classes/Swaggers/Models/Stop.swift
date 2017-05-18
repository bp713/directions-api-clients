//
// Stop.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class Stop: JSONEncodable {
    public var address: Address?
    /** duration of stop, i.e. time in ms the corresponding activity takes */
    public var duration: Int64?
    /** preparation time of service, e.g. search for a parking space. it only falls due if the location of previous activity differs from this location */
    public var preparationTime: Int64?
    /** array of time windows. currently, only a single time window is allowed */
    public var timeWindows: [TimeWindow]?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["address"] = self.address?.encodeToJSON()
        nillableDictionary["duration"] = self.duration?.encodeToJSON()
        nillableDictionary["preparation_time"] = self.preparationTime?.encodeToJSON()
        nillableDictionary["time_windows"] = self.timeWindows?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
