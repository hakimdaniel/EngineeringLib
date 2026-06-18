#include <iostream>
#include "Engineering.h"

using ohms = calc::Ohmslaw;

int main()
{
    // current = 2 Ampere
    // resistance = 100 Ohm
    std::cout << "Voltage: " << ohms::voltage(2,100) << " Volt" << std::endl;

    // voltage = 200 Volt
    // resistance = 100 Ohm
    std::cout << "Current: " << ohms::current(200,100) << " Ampere" << std::endl;

    // voltage = 200 Volt
    // current = 2 Ampere
    std::cout << "Resistance: " << ohms::resistance(200,2) << " Ohm" << std::endl;
    
    return 0;
}