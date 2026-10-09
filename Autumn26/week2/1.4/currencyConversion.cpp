#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter amount in GBP" << std::endl;

    double gbp;
    std::cin >> gbp;

    std::cout << "Enter the exchange rate" << std::endl;
    
    double exchangeRate;
    std::cin >> exchangeRate;

    double euros = exchangeRate * gbp;

    std::cout << "Euros = " << euros << std::endl;
}
