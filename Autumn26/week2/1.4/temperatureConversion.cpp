#include <iostream>

int main()
{
    std::cout << "enter the temperature in degrees celcius" << std::endl;
    double celsius;
    std::cin >> celsius;

    double farenheit = celsius * 1.8 + 32;

    std::cout << "temperature in farenheit is " << farenheit << std::endl;
}