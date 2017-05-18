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


#include "SWGGHError.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGGHError::SWGGHError(QString* json) {
    init();
    this->fromJson(*json);
}

SWGGHError::SWGGHError() {
    init();
}

SWGGHError::~SWGGHError() {
    this->cleanup();
}

void
SWGGHError::init() {
    code = 0;
    message = new QString("");
    hints = new QList<SWGGHError_hints*>();
}

void
SWGGHError::cleanup() {
    

    if(message != nullptr) {
        delete message;
    }

    if(hints != nullptr) {
        QList<SWGGHError_hints*>* arr = hints;
        foreach(SWGGHError_hints* o, *arr) {
            delete o;
        }
        delete hints;
    }
}

SWGGHError*
SWGGHError::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGGHError::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&code, pJson["code"], "qint32", "");
    ::Swagger::setValue(&message, pJson["message"], "QString", "QString");
    
    ::Swagger::setValue(&hints, pJson["hints"], "QList", "SWGGHError_hints");
    
}

QString
SWGGHError::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGGHError::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("code", QJsonValue(code));

    toJsonValue(QString("message"), message, obj, QString("QString"));

    QJsonArray hintsJsonArray;
    toJsonArray((QList<void*>*)hints, &hintsJsonArray, "hints", "SWGGHError_hints");
    obj->insert("hints", hintsJsonArray);

    return obj;
}

qint32
SWGGHError::getCode() {
    return code;
}
void
SWGGHError::setCode(qint32 code) {
    this->code = code;
}

QString*
SWGGHError::getMessage() {
    return message;
}
void
SWGGHError::setMessage(QString* message) {
    this->message = message;
}

QList<SWGGHError_hints*>*
SWGGHError::getHints() {
    return hints;
}
void
SWGGHError::setHints(QList<SWGGHError_hints*>* hints) {
    this->hints = hints;
}



} /* namespace Swagger */

