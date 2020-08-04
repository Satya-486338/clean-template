#include <limits>
#include<cmath>


enum measure
{
  motor_temp,
  battery_pc,
  battery_temp
};
struct telematics
{
 int vehicle_id;
 measure type;
 float measurement;
};
struct inventory
{
 int vehicle_id;
 float motor_temp;
 float battery_pc;
 float battery_temp;
};
inventory telematics_to_inventory(const telematics& obj_telematics);
