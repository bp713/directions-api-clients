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

/*
 * SWGRouting.h
 * 
 * 
 */

#ifndef SWGRouting_H_
#define SWGRouting_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace Swagger {

class SWGRouting: public SWGObject {
public:
    SWGRouting();
    SWGRouting(QString* json);
    virtual ~SWGRouting();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGRouting* fromJson(QString &jsonString);

    bool getCalcPoints();
    void setCalcPoints(bool calc_points);


private:
    bool calc_points;
};

} /* namespace Swagger */

#endif /* SWGRouting_H_ */
