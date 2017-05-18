# coding: utf-8

"""
    GraphHopper Directions API

    You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.

    OpenAPI spec version: 1.0.0
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class GHGeocodingLocation(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, point=None, osm_id=None, osm_type=None, name=None, country=None, city=None, state=None, street=None, housenumber=None, postcode=None):
        """
        GHGeocodingLocation - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'point': 'GHGeocodingPoint',
            'osm_id': 'str',
            'osm_type': 'str',
            'name': 'str',
            'country': 'str',
            'city': 'str',
            'state': 'str',
            'street': 'str',
            'housenumber': 'str',
            'postcode': 'str'
        }

        self.attribute_map = {
            'point': 'point',
            'osm_id': 'osm_id',
            'osm_type': 'osm_type',
            'name': 'name',
            'country': 'country',
            'city': 'city',
            'state': 'state',
            'street': 'street',
            'housenumber': 'housenumber',
            'postcode': 'postcode'
        }

        self._point = point
        self._osm_id = osm_id
        self._osm_type = osm_type
        self._name = name
        self._country = country
        self._city = city
        self._state = state
        self._street = street
        self._housenumber = housenumber
        self._postcode = postcode

    @property
    def point(self):
        """
        Gets the point of this GHGeocodingLocation.

        :return: The point of this GHGeocodingLocation.
        :rtype: GHGeocodingPoint
        """
        return self._point

    @point.setter
    def point(self, point):
        """
        Sets the point of this GHGeocodingLocation.

        :param point: The point of this GHGeocodingLocation.
        :type: GHGeocodingPoint
        """

        self._point = point

    @property
    def osm_id(self):
        """
        Gets the osm_id of this GHGeocodingLocation.
        OSM Id

        :return: The osm_id of this GHGeocodingLocation.
        :rtype: str
        """
        return self._osm_id

    @osm_id.setter
    def osm_id(self, osm_id):
        """
        Sets the osm_id of this GHGeocodingLocation.
        OSM Id

        :param osm_id: The osm_id of this GHGeocodingLocation.
        :type: str
        """

        self._osm_id = osm_id

    @property
    def osm_type(self):
        """
        Gets the osm_type of this GHGeocodingLocation.
        N = node, R = relation, W = way

        :return: The osm_type of this GHGeocodingLocation.
        :rtype: str
        """
        return self._osm_type

    @osm_type.setter
    def osm_type(self, osm_type):
        """
        Sets the osm_type of this GHGeocodingLocation.
        N = node, R = relation, W = way

        :param osm_type: The osm_type of this GHGeocodingLocation.
        :type: str
        """

        self._osm_type = osm_type

    @property
    def name(self):
        """
        Gets the name of this GHGeocodingLocation.

        :return: The name of this GHGeocodingLocation.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this GHGeocodingLocation.

        :param name: The name of this GHGeocodingLocation.
        :type: str
        """

        self._name = name

    @property
    def country(self):
        """
        Gets the country of this GHGeocodingLocation.

        :return: The country of this GHGeocodingLocation.
        :rtype: str
        """
        return self._country

    @country.setter
    def country(self, country):
        """
        Sets the country of this GHGeocodingLocation.

        :param country: The country of this GHGeocodingLocation.
        :type: str
        """

        self._country = country

    @property
    def city(self):
        """
        Gets the city of this GHGeocodingLocation.

        :return: The city of this GHGeocodingLocation.
        :rtype: str
        """
        return self._city

    @city.setter
    def city(self, city):
        """
        Sets the city of this GHGeocodingLocation.

        :param city: The city of this GHGeocodingLocation.
        :type: str
        """

        self._city = city

    @property
    def state(self):
        """
        Gets the state of this GHGeocodingLocation.

        :return: The state of this GHGeocodingLocation.
        :rtype: str
        """
        return self._state

    @state.setter
    def state(self, state):
        """
        Sets the state of this GHGeocodingLocation.

        :param state: The state of this GHGeocodingLocation.
        :type: str
        """

        self._state = state

    @property
    def street(self):
        """
        Gets the street of this GHGeocodingLocation.

        :return: The street of this GHGeocodingLocation.
        :rtype: str
        """
        return self._street

    @street.setter
    def street(self, street):
        """
        Sets the street of this GHGeocodingLocation.

        :param street: The street of this GHGeocodingLocation.
        :type: str
        """

        self._street = street

    @property
    def housenumber(self):
        """
        Gets the housenumber of this GHGeocodingLocation.

        :return: The housenumber of this GHGeocodingLocation.
        :rtype: str
        """
        return self._housenumber

    @housenumber.setter
    def housenumber(self, housenumber):
        """
        Sets the housenumber of this GHGeocodingLocation.

        :param housenumber: The housenumber of this GHGeocodingLocation.
        :type: str
        """

        self._housenumber = housenumber

    @property
    def postcode(self):
        """
        Gets the postcode of this GHGeocodingLocation.

        :return: The postcode of this GHGeocodingLocation.
        :rtype: str
        """
        return self._postcode

    @postcode.setter
    def postcode(self, postcode):
        """
        Sets the postcode of this GHGeocodingLocation.

        :param postcode: The postcode of this GHGeocodingLocation.
        :type: str
        """

        self._postcode = postcode

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        if not isinstance(other, GHGeocodingLocation):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
