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
 * SWGAlgorithm.h
 * 
 * 
 */

#ifndef SWGAlgorithm_H_
#define SWGAlgorithm_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGAlgorithm: public SWGObject {
public:
    SWGAlgorithm();
    SWGAlgorithm(QString* json);
    virtual ~SWGAlgorithm();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAlgorithm* fromJson(QString &jsonString);

    QString* getProblemType();
    void setProblemType(QString* problem_type);

    QString* getObjective();
    void setObjective(QString* objective);


private:
    QString* problem_type;
    QString* objective;
};

} /* namespace Swagger */

#endif /* SWGAlgorithm_H_ */
