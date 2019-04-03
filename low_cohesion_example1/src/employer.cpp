///
/// @file
/// @brief Implementation of the Employer class
///

#include "../include/low_cohesion_example1.h"

void Employer::SetName(const std::string& new_name)
{
    name_ = new_name;    
}

std::string Employer::GetName()
{
    std::string get_name = name_;
    return get_name;
}

void Employer::SetAge(unsigned int new_age)
{
    age_ = new_age;    
}

unsigned int Employer::GetAge()
{
    unsigned int get_age = age_;
    return get_age;
}

void Employer::SetContactNumber(unsigned int new_num)
{
    contact_num_ = new_num;    
}

unsigned int Employer::GetContactNumber()
{
    unsigned int get_num = contact_num_;
    return get_num;
}