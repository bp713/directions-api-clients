/* 
 * GraphHopper Directions API
 *
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;

namespace IO.Swagger.Model
{
    /// <summary>
    /// Shipment
    /// </summary>
    [DataContract]
    public partial class Shipment :  IEquatable<Shipment>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Shipment" /> class.
        /// </summary>
        /// <param name="Id">Unique identifier of service.</param>
        /// <param name="Name">name of shipment.</param>
        /// <param name="Priority">priority of service, i.e. 1 &#x3D; high, 2 &#x3D; normal, 3 &#x3D; low. default is 2..</param>
        /// <param name="Pickup">Pickup.</param>
        /// <param name="Delivery">Delivery.</param>
        /// <param name="Size">array of capacity dimensions.</param>
        /// <param name="RequiredSkills">array of required skills.</param>
        /// <param name="AllowedVehicles">array of allowed vehicle ids.</param>
        public Shipment(string Id = default(string), string Name = default(string), int? Priority = default(int?), Stop Pickup = default(Stop), Stop Delivery = default(Stop), List<int?> Size = default(List<int?>), List<string> RequiredSkills = default(List<string>), List<string> AllowedVehicles = default(List<string>))
        {
            this.Id = Id;
            this.Name = Name;
            this.Priority = Priority;
            this.Pickup = Pickup;
            this.Delivery = Delivery;
            this.Size = Size;
            this.RequiredSkills = RequiredSkills;
            this.AllowedVehicles = AllowedVehicles;
        }
        
        /// <summary>
        /// Unique identifier of service
        /// </summary>
        /// <value>Unique identifier of service</value>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }
        /// <summary>
        /// name of shipment
        /// </summary>
        /// <value>name of shipment</value>
        [DataMember(Name="name", EmitDefaultValue=false)]
        public string Name { get; set; }
        /// <summary>
        /// priority of service, i.e. 1 &#x3D; high, 2 &#x3D; normal, 3 &#x3D; low. default is 2.
        /// </summary>
        /// <value>priority of service, i.e. 1 &#x3D; high, 2 &#x3D; normal, 3 &#x3D; low. default is 2.</value>
        [DataMember(Name="priority", EmitDefaultValue=false)]
        public int? Priority { get; set; }
        /// <summary>
        /// Gets or Sets Pickup
        /// </summary>
        [DataMember(Name="pickup", EmitDefaultValue=false)]
        public Stop Pickup { get; set; }
        /// <summary>
        /// Gets or Sets Delivery
        /// </summary>
        [DataMember(Name="delivery", EmitDefaultValue=false)]
        public Stop Delivery { get; set; }
        /// <summary>
        /// array of capacity dimensions
        /// </summary>
        /// <value>array of capacity dimensions</value>
        [DataMember(Name="size", EmitDefaultValue=false)]
        public List<int?> Size { get; set; }
        /// <summary>
        /// array of required skills
        /// </summary>
        /// <value>array of required skills</value>
        [DataMember(Name="required_skills", EmitDefaultValue=false)]
        public List<string> RequiredSkills { get; set; }
        /// <summary>
        /// array of allowed vehicle ids
        /// </summary>
        /// <value>array of allowed vehicle ids</value>
        [DataMember(Name="allowed_vehicles", EmitDefaultValue=false)]
        public List<string> AllowedVehicles { get; set; }
        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Shipment {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Priority: ").Append(Priority).Append("\n");
            sb.Append("  Pickup: ").Append(Pickup).Append("\n");
            sb.Append("  Delivery: ").Append(Delivery).Append("\n");
            sb.Append("  Size: ").Append(Size).Append("\n");
            sb.Append("  RequiredSkills: ").Append(RequiredSkills).Append("\n");
            sb.Append("  AllowedVehicles: ").Append(AllowedVehicles).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            return this.Equals(obj as Shipment);
        }

        /// <summary>
        /// Returns true if Shipment instances are equal
        /// </summary>
        /// <param name="other">Instance of Shipment to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Shipment other)
        {
            // credit: http://stackoverflow.com/a/10454552/677735
            if (other == null)
                return false;

            return 
                (
                    this.Id == other.Id ||
                    this.Id != null &&
                    this.Id.Equals(other.Id)
                ) && 
                (
                    this.Name == other.Name ||
                    this.Name != null &&
                    this.Name.Equals(other.Name)
                ) && 
                (
                    this.Priority == other.Priority ||
                    this.Priority != null &&
                    this.Priority.Equals(other.Priority)
                ) && 
                (
                    this.Pickup == other.Pickup ||
                    this.Pickup != null &&
                    this.Pickup.Equals(other.Pickup)
                ) && 
                (
                    this.Delivery == other.Delivery ||
                    this.Delivery != null &&
                    this.Delivery.Equals(other.Delivery)
                ) && 
                (
                    this.Size == other.Size ||
                    this.Size != null &&
                    this.Size.SequenceEqual(other.Size)
                ) && 
                (
                    this.RequiredSkills == other.RequiredSkills ||
                    this.RequiredSkills != null &&
                    this.RequiredSkills.SequenceEqual(other.RequiredSkills)
                ) && 
                (
                    this.AllowedVehicles == other.AllowedVehicles ||
                    this.AllowedVehicles != null &&
                    this.AllowedVehicles.SequenceEqual(other.AllowedVehicles)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            // credit: http://stackoverflow.com/a/263416/677735
            unchecked // Overflow is fine, just wrap
            {
                int hash = 41;
                // Suitable nullity checks etc, of course :)
                if (this.Id != null)
                    hash = hash * 59 + this.Id.GetHashCode();
                if (this.Name != null)
                    hash = hash * 59 + this.Name.GetHashCode();
                if (this.Priority != null)
                    hash = hash * 59 + this.Priority.GetHashCode();
                if (this.Pickup != null)
                    hash = hash * 59 + this.Pickup.GetHashCode();
                if (this.Delivery != null)
                    hash = hash * 59 + this.Delivery.GetHashCode();
                if (this.Size != null)
                    hash = hash * 59 + this.Size.GetHashCode();
                if (this.RequiredSkills != null)
                    hash = hash * 59 + this.RequiredSkills.GetHashCode();
                if (this.AllowedVehicles != null)
                    hash = hash * 59 + this.AllowedVehicles.GetHashCode();
                return hash;
            }
        }

        public IEnumerable<ValidationResult> Validate(ValidationContext validationContext)
        { 
            yield break;
        }
    }

}
