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


class CostMatrix(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, type=None, url=None, location_ids=None, data=None, profile=None):
        """
        CostMatrix - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'type': 'str',
            'url': 'str',
            'location_ids': 'list[str]',
            'data': 'CostMatrixData',
            'profile': 'str'
        }

        self.attribute_map = {
            'type': 'type',
            'url': 'url',
            'location_ids': 'location_ids',
            'data': 'data',
            'profile': 'profile'
        }

        self._type = type
        self._url = url
        self._location_ids = location_ids
        self._data = data
        self._profile = profile

    @property
    def type(self):
        """
        Gets the type of this CostMatrix.
        type of cost matrix, currently default or google are supported

        :return: The type of this CostMatrix.
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """
        Sets the type of this CostMatrix.
        type of cost matrix, currently default or google are supported

        :param type: The type of this CostMatrix.
        :type: str
        """
        allowed_values = ["default", "google"]
        if type not in allowed_values:
            raise ValueError(
                "Invalid value for `type` ({0}), must be one of {1}"
                .format(type, allowed_values)
            )

        self._type = type

    @property
    def url(self):
        """
        Gets the url of this CostMatrix.
        URL of matrix service

        :return: The url of this CostMatrix.
        :rtype: str
        """
        return self._url

    @url.setter
    def url(self, url):
        """
        Sets the url of this CostMatrix.
        URL of matrix service

        :param url: The url of this CostMatrix.
        :type: str
        """

        self._url = url

    @property
    def location_ids(self):
        """
        Gets the location_ids of this CostMatrix.

        :return: The location_ids of this CostMatrix.
        :rtype: list[str]
        """
        return self._location_ids

    @location_ids.setter
    def location_ids(self, location_ids):
        """
        Sets the location_ids of this CostMatrix.

        :param location_ids: The location_ids of this CostMatrix.
        :type: list[str]
        """

        self._location_ids = location_ids

    @property
    def data(self):
        """
        Gets the data of this CostMatrix.

        :return: The data of this CostMatrix.
        :rtype: CostMatrixData
        """
        return self._data

    @data.setter
    def data(self, data):
        """
        Sets the data of this CostMatrix.

        :param data: The data of this CostMatrix.
        :type: CostMatrixData
        """

        self._data = data

    @property
    def profile(self):
        """
        Gets the profile of this CostMatrix.
        vehicle profile or empty if catch all fallback

        :return: The profile of this CostMatrix.
        :rtype: str
        """
        return self._profile

    @profile.setter
    def profile(self, profile):
        """
        Sets the profile of this CostMatrix.
        vehicle profile or empty if catch all fallback

        :param profile: The profile of this CostMatrix.
        :type: str
        """

        self._profile = profile

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
        if not isinstance(other, CostMatrix):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
