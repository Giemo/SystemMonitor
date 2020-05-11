#include "processor.h"
#include "linux_parser.h"

#include <string>
#include <iostream>

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() 
{   
  float active = float(LinuxParser::ActiveJiffies());
  float total = float(LinuxParser::Jiffies());
  
  return active / total;
}