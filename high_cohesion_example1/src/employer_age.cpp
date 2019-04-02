///
/// @file
/// @brief Implementation of the EmployerAge class
///

#include "../include/high_cohesion_example1.h"

unsigned int EmployerAge::GetAge()
{
    unsigned int get_age = age_; 
    return get_age; 
}

void EmployerAge::SetAge(unsigned int new_age)
{
    age_ = new_age;
}
