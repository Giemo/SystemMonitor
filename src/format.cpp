#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) 
{ 
  int sec = seconds % 60;
  int min = (seconds/60) % 60;
  int hours = seconds/60/60;
  
  std::string sec_string = sec > 9 ? std::to_string(sec) : "0" + std::to_string(sec);
  std::string min_string = min > 9 ? std::to_string(min) : "0" + std::to_string(min);
  std::string hours_string = hours > 9 ? std::to_string(sec) : "0" + std::to_string(hours);
  
  return hours_string + ":" + min_string + ":" + sec_string;
}