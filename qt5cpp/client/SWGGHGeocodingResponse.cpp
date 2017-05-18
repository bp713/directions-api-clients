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


#include "SWGGHGeocodingResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGGHGeocodingResponse::SWGGHGeocodingResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGGHGeocodingResponse::SWGGHGeocodingResponse() {
    init();
}

SWGGHGeocodingResponse::~SWGGHGeocodingResponse() {
    this->cleanup();
}

void
SWGGHGeocodingResponse::init() {
    hits = new QList<SWGGHGeocodingLocation*>();
    locale = new QString("");
}

void
SWGGHGeocodingResponse::cleanup() {
    
    if(hits != nullptr) {
        QList<SWGGHGeocodingLocation*>* arr = hits;
        foreach(SWGGHGeocodingLocation* o, *arr) {
            delete o;
        }
        delete hits;
    }

    if(locale != nullptr) {
        delete locale;
    }
}

SWGGHGeocodingResponse*
SWGGHGeocodingResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGHGeocodingResponse::fromJsonObject(QJsonObject &pJson) {
    
    ::Swagger::setValue(&hits, pJson["hits"], "QList", "SWGGHGeocodingLocation");
    
    ::Swagger::setValue(&locale, pJson["locale"], "QString", "QString");
}

QString
SWGGHGeocodingResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGGHGeocodingResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    QJsonArray hitsJsonArray;
    toJsonArray((QList<void*>*)hits, &hitsJsonArray, "hits", "SWGGHGeocodingLocation");
    obj->insert("hits", hitsJsonArray);

    toJsonValue(QString("locale"), locale, obj, QString("QString"));

    return obj;
}

QList<SWGGHGeocodingLocation*>*
SWGGHGeocodingResponse::getHits() {
    return hits;
}
void
SWGGHGeocodingResponse::setHits(QList<SWGGHGeocodingLocation*>* hits) {
    this->hits = hits;
}

QString*
SWGGHGeocodingResponse::getLocale() {
    return locale;
}
void
SWGGHGeocodingResponse::setLocale(QString* locale) {
    this->locale = locale;
}



} /* namespace Swagger */

