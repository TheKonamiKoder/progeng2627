#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    double temperature_in, temperature_out;
    std::string unit_in, unit_out;
    bool valid_unit = true;

    std::cout << "Enter temperature" << std::endl;
    std::cin >> temperature_in >> unit_in;

    if ((unit_in == "C") || (unit_in == "c"))
    {
        unit_out = "F";
        temperature_out = temperature_in * 1.8 + 32;
    }
    else if ((unit_in == "F") || (unit_in == "f"))
    {
        unit_out = "C";
        temperature_out = (temperature_in - 32) / 1.8;
    }
    else
    {
        valid_unit = false;
    }
    
    if (valid_unit)
    {
        std::cout << temperature_out << " " << unit_out << std::endl;
    }
    else
    {
        std::cout << "error, unit not recognised" << std::endl;
    }
    
    return 0;
}
