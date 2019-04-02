///
/// @file
/// @brief Implementation of the EmployerContactNumber class
///

#include "../include/high_cohesion_example1.h"

unsigned int EmployerContactNumber::GetContactNumber()
{
    unsigned int get_number = contact_num_; 
    return get_number; 
}

void EmployerContactNumber::SetContactNumber(unsigned int new_number)
{
    contact_num_ = new_number;
}
