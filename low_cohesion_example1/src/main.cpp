///
/// @file
/// @brief Implementation of the main driver program
///

#include "../include/low_cohesion_example1.h"

int main()
{
    Employer employer("Mentor", 37, 4915134567);

    std::cout << employer.GetName() << std::endl;
    std::cout << employer.GetAge() << std::endl;
    std::cout << employer.GetContactNumber() << std::endl;
    
}