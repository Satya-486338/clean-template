#include <gtest/gtest.h>
#include<VehicleCollectorTest.h>

std::numeric_limits<double>::quiet_NaN();
ASSERT_TRUE(std::isnan(no_value_float));



TEST(COLLECT, when_vehicle_reports_a_measurement_it_is-fetched_and_storted_with_vehicle-id){
  inventory i = telematics_to_inventory(telematic);
}

int main(int argc,char **argv){

  testing::InitGoogleTest(&argc, argv):
  return RUN_ALL_TESTS();
}
