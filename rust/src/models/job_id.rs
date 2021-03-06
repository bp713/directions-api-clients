/* 
 * GraphHopper Directions API
 *
 * You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
 *
 * OpenAPI spec version: 1.0.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct JobId {
  /// unique id for your job/request with which you can fetch your solution
  #[serde(rename = "job_id")]
  job_id: Option<String>
}

impl JobId {
  pub fn new() -> JobId {
    JobId {
      job_id: None
    }
  }

  pub fn set_job_id(&mut self, job_id: String) {
    self.job_id = Some(job_id);
  }

  pub fn with_job_id(mut self, job_id: String) -> JobId {
    self.job_id = Some(job_id);
    self
  }

  pub fn job_id(&self) -> Option<&String> {
    self.job_id.as_ref()
  }

  pub fn reset_job_id(&mut self) {
    self.job_id = None;
  }

}



