# coding: utf-8

"""
    GraphHopper Directions API

    You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.

    OpenAPI spec version: 1.0.0
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from __future__ import absolute_import

import os
import sys
import unittest

import swagger_client
from swagger_client.rest import ApiException
from swagger_client.apis.route_optimization_api import RouteOptimizationApi


class TestRouteOptimizationApi(unittest.TestCase):
    """ RouteOptimizationApi unit test stubs """

    def setUp(self):
        self.api = swagger_client.apis.route_optimization_api.RouteOptimizationApi()

    def tearDown(self):
        pass

    def test_get_solution(self):
        """
        Test case for get_solution

        Return the solution associated to the jobId
        """
        pass

    def test_post_vrp(self):
        """
        Test case for post_vrp

        Solves vehicle routing problems
        """
        pass


if __name__ == '__main__':
    unittest.main()
