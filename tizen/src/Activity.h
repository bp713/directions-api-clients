/*
 * Activity.h
 *
 * 
 */

#ifndef _Activity_H_
#define _Activity_H_


#include <string>
#include "Address.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Activity : public Object {
public:
	/*! \brief Constructor.
	 */
	Activity();
	Activity(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Activity();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get type of activity
	 */
	std::string getType();

	/*! \brief Set type of activity
	 */
	void setType(std::string  type);
	/*! \brief Get id referring to the underlying service or shipment, i.e. the shipment or service this activity belongs to
	 */
	std::string getId();

	/*! \brief Set id referring to the underlying service or shipment, i.e. the shipment or service this activity belongs to
	 */
	void setId(std::string  id);
	/*! \brief Get id that refers to address
	 */
	std::string getLocationId();

	/*! \brief Set id that refers to address
	 */
	void setLocationId(std::string  location_id);
	/*! \brief Get address of activity
	 */
	Address getAddress();

	/*! \brief Set address of activity
	 */
	void setAddress(Address  address);
	/*! \brief Get arrival time at this activity in seconds
	 */
	long long getArrTime();

	/*! \brief Set arrival time at this activity in seconds
	 */
	void setArrTime(long long  arr_time);
	/*! \brief Get end time of and thus departure time at this activity
	 */
	long long getEndTime();

	/*! \brief Set end time of and thus departure time at this activity
	 */
	void setEndTime(long long  end_time);
	/*! \brief Get end date time with offset like this 1970-01-01T01:00+01:00
	 */
	std::string getEndDateTime();

	/*! \brief Set end date time with offset like this 1970-01-01T01:00+01:00
	 */
	void setEndDateTime(std::string  end_date_time);
	/*! \brief Get arrival date time with offset like this 1970-01-01T01:00+01:00
	 */
	std::string getArrDateTime();

	/*! \brief Set arrival date time with offset like this 1970-01-01T01:00+01:00
	 */
	void setArrDateTime(std::string  arr_date_time);
	/*! \brief Get waiting time at this activity in seconds
	 */
	long long getWaitingTime();

	/*! \brief Set waiting time at this activity in seconds
	 */
	void setWaitingTime(long long  waiting_time);
	/*! \brief Get preparation time at this activity in seconds
	 */
	long long getPreparationTime();

	/*! \brief Set preparation time at this activity in seconds
	 */
	void setPreparationTime(long long  preparation_time);
	/*! \brief Get cumulated distance from start to this activity in m
	 */
	long long getDistance();

	/*! \brief Set cumulated distance from start to this activity in m
	 */
	void setDistance(long long  distance);
	/*! \brief Get driving time of driver in seconds
	 */
	long long getDrivingTime();

	/*! \brief Set driving time of driver in seconds
	 */
	void setDrivingTime(long long  driving_time);
	/*! \brief Get Array with size/capacity dimensions before this activity
	 */
	std::list<int> getLoadBefore();

	/*! \brief Set Array with size/capacity dimensions before this activity
	 */
	void setLoadBefore(std::list <int> load_before);
	/*! \brief Get Array with size/capacity dimensions after this activity
	 */
	std::list<int> getLoadAfter();

	/*! \brief Set Array with size/capacity dimensions after this activity
	 */
	void setLoadAfter(std::list <int> load_after);

private:
	std::string type;
	std::string id;
	std::string location_id;
	Address address;
	long long arr_time;
	long long end_time;
	std::string end_date_time;
	std::string arr_date_time;
	long long waiting_time;
	long long preparation_time;
	long long distance;
	long long driving_time;
	std::list <int>load_before;
	std::list <int>load_after;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Activity_H_ */
