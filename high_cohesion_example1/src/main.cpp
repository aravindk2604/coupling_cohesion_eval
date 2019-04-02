///
/// @file
/// @brief Implementation of the main driver program
///

#include "../include/high_cohesion_example1.h"

int main()
{  
    EmployerName employer_name("Mentor");
    EmployerAge employer_age(37);
    EmployerContactNumber employer_num(1513456789);

    std::cout << "The Employer " << employer_name.GetName() << "'s details are as below: " << std::endl;
    std::cout << "Name: " << employer_name.GetName() << std::endl;
    std::cout << "Age: " << employer_age.GetAge() << std::endl;
    std::cout << "Contact number: " << employer_num.GetContactNumber() << std::endl;
    return 0;
}