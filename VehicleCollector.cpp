inventory telematics_to_inventory(telematics* obj_telematics)
{
  inventory inventory;
  
  inventory.vehicle_id = obj_telematics->vehicle_id;
  
  switch(obj_telematics->type)
  {
    case motor_temp:
      inventory.motor_temp = obj_telematics->measurement;
      break;
    case battery_pc:
      inventory.battery_pc = obj_telematics->measurement;
      break;
    case battery_temp:
      inventory.battery_temp = obj_telematics->measurement;
      break;
    default:break;
  }
  
  return inventory;
}
