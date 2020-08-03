#include <gtest/gtest.h>

TEST(COLLECT, when_vehicle_reports_a_measurement_it_is_fetched_and_storted_with_vehicle_id){
   telematics obj_telematics = {231,motor_temp,30};
   inventory obj_inventory   = telematics_to_inventory(&obj_telematics);
 
    ASSERT_EQ(inventory.motor_temp,30);
}

int main(int argc,char **argv){

  testing::InitGoogleTest(&argc, argv):
  return RUN_ALL_TESTS();
}
