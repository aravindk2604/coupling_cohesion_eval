///
/// @file
/// @brief Implementation of Employer header file
///

#ifndef LOW_COHESION_EXAMPLE1
#define LOW_COHESION_EXAMPLE1

#include <iostream>

class Employer
{
  public:
    Employer(std::string input_name, unsigned int input_age, unsigned int input_num)
            : name_(input_name), age_(input_age), contact_num_(input_num) {}
    void SetName(const std::string& new_name);
    std::string GetName();
    void SetAge(unsigned int new_age);
    unsigned int GetAge();
    void SetContactNumber(unsigned int new_num);
    unsigned int GetContactNumber();

  private:
    std::string name_;
    unsigned int age_;
    unsigned int contact_num_;
};

#endif //LOW_COHESION_EXAMPLE1