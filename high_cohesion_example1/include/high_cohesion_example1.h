///
/// @file
/// @brief Declaration of HIGH COHESION EXAMPLE1
///

#ifndef HIGH_COHESION_EXAMPLE1_H
#define HIGH_COHESION_EXAMPLE1_H

#include <iostream>

class EmployerName
{
  public:
    EmployerName(const std::string& input_name) : name_(input_name) {};
    void SetName(const std::string& new_name);
    std::string GetName();

  private:
    std::string name_;
};

class EmployerAge
{
  public:
    EmployerAge(unsigned int input_age) : age_(input_age) {};
    void SetAge(unsigned int new_age);
    unsigned int GetAge();

  private:
    unsigned int age_;
};

class EmployerContactNumber
{  
  public:
    EmployerContactNumber(unsigned int input_number) : contact_num_(input_number) {};
    void SetContactNumber(unsigned int new_number);
    unsigned int GetContactNumber();

  private:
    unsigned int contact_num_;
};

#endif //HIGH_COHESION_EXAMPLE1_H