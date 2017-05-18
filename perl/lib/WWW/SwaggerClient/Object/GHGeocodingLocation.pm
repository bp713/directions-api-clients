=begin comment

GraphHopper Directions API

You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.

OpenAPI spec version: 1.0.0

Generated by: https://github.com/swagger-api/swagger-codegen.git

=end comment

=cut

#
# NOTE: This class is auto generated by the swagger code generator program. 
# Do not edit the class manually.
# Ref: https://github.com/swagger-api/swagger-codegen
#
package WWW::SwaggerClient::Object::GHGeocodingLocation;

require 5.6.0;
use strict;
use warnings;
use utf8;
use JSON qw(decode_json);
use Data::Dumper;
use Module::Runtime qw(use_module);
use Log::Any qw($log);
use Date::Parse;
use DateTime;

use base ("Class::Accessor", "Class::Data::Inheritable");


#
#
#
# NOTE: This class is auto generated by the swagger code generator program. Do not edit the class manually.
# REF: https://github.com/swagger-api/swagger-codegen
#

=begin comment

GraphHopper Directions API

You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.

OpenAPI spec version: 1.0.0

Generated by: https://github.com/swagger-api/swagger-codegen.git

=end comment

=cut

#
# NOTE: This class is auto generated by the swagger code generator program. 
# Do not edit the class manually.
# Ref: https://github.com/swagger-api/swagger-codegen
#
__PACKAGE__->mk_classdata('attribute_map' => {});
__PACKAGE__->mk_classdata('swagger_types' => {});
__PACKAGE__->mk_classdata('method_documentation' => {}); 
__PACKAGE__->mk_classdata('class_documentation' => {});

# new object
sub new { 
    my ($class, %args) = @_; 

	my $self = bless {}, $class;
	
	foreach my $attribute (keys %{$class->attribute_map}) {
		my $args_key = $class->attribute_map->{$attribute};
		$self->$attribute( $args{ $args_key } );
	}
	
	return $self;
}  

# return perl hash
sub to_hash {
    return decode_json(JSON->new->convert_blessed->encode( shift ));
}

# used by JSON for serialization
sub TO_JSON { 
    my $self = shift;
    my $_data = {};
    foreach my $_key (keys %{$self->attribute_map}) {
        if (defined $self->{$_key}) {
            $_data->{$self->attribute_map->{$_key}} = $self->{$_key};
        }
    }
    return $_data;
}

# from Perl hashref
sub from_hash {
    my ($self, $hash) = @_;

    # loop through attributes and use swagger_types to deserialize the data
    while ( my ($_key, $_type) = each %{$self->swagger_types} ) {
    	my $_json_attribute = $self->attribute_map->{$_key}; 
        if ($_type =~ /^array\[/i) { # array
            my $_subclass = substr($_type, 6, -1);
            my @_array = ();
            foreach my $_element (@{$hash->{$_json_attribute}}) {
                push @_array, $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \@_array;
        } elsif (exists $hash->{$_json_attribute}) { #hash(model), primitive, datetime
            $self->{$_key} = $self->_deserialize($_type, $hash->{$_json_attribute});
        } else {
        	$log->debugf("Warning: %s (%s) does not exist in input hash\n", $_key, $_json_attribute);
        }
    }
  
    return $self;
}

# deserialize non-array data
sub _deserialize {
    my ($self, $type, $data) = @_;
    $log->debugf("deserializing %s with %s",Dumper($data), $type);
        
    if ($type eq 'DateTime') {
        return DateTime->from_epoch(epoch => str2time($data));
    } elsif ( grep( /^$type$/, ('int', 'double', 'string', 'boolean'))) {
        return $data;
    } else { # hash(model)
        my $_instance = eval "WWW::SwaggerClient::Object::$type->new()";
        return $_instance->from_hash($data);
    }
}



__PACKAGE__->class_documentation({description => '',
                                  class => 'GHGeocodingLocation',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'point' => {
    	datatype => 'GHGeocodingPoint',
    	base_name => 'point',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'osm_id' => {
    	datatype => 'string',
    	base_name => 'osm_id',
    	description => 'OSM Id',
    	format => '',
    	read_only => '',
    		},
    'osm_type' => {
    	datatype => 'string',
    	base_name => 'osm_type',
    	description => 'N &#x3D; node, R &#x3D; relation, W &#x3D; way',
    	format => '',
    	read_only => '',
    		},
    'name' => {
    	datatype => 'string',
    	base_name => 'name',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'country' => {
    	datatype => 'string',
    	base_name => 'country',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'city' => {
    	datatype => 'string',
    	base_name => 'city',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'state' => {
    	datatype => 'string',
    	base_name => 'state',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'street' => {
    	datatype => 'string',
    	base_name => 'street',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'housenumber' => {
    	datatype => 'string',
    	base_name => 'housenumber',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'postcode' => {
    	datatype => 'string',
    	base_name => 'postcode',
    	description => '',
    	format => '',
    	read_only => '',
    		},
});

__PACKAGE__->swagger_types( {
    'point' => 'GHGeocodingPoint',
    'osm_id' => 'string',
    'osm_type' => 'string',
    'name' => 'string',
    'country' => 'string',
    'city' => 'string',
    'state' => 'string',
    'street' => 'string',
    'housenumber' => 'string',
    'postcode' => 'string'
} );

__PACKAGE__->attribute_map( {
    'point' => 'point',
    'osm_id' => 'osm_id',
    'osm_type' => 'osm_type',
    'name' => 'name',
    'country' => 'country',
    'city' => 'city',
    'state' => 'state',
    'street' => 'street',
    'housenumber' => 'housenumber',
    'postcode' => 'postcode'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
