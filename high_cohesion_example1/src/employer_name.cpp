///
/// @file
/// @brief Implementation of the EmployerName class
///

#include "../include/high_cohesion_example1.h"

std::string EmployerName::GetName()
{
  std::string get_name = name_; 
  return get_name; 
}

void EmployerName::SetName(const std::string& new_name)
{
    name_ = new_name;
}
