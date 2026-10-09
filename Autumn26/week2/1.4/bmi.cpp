#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter height" << std::endl;
    
    double height;
    std::cin >> height;

    std::cout << "Enter weight" << std::endl;
    
    double weight;
    std::cin >> weight;

    double BMI = weight / (height * height);
    std::cout << "BMI is " << BMI << std::endl;

    return 0;
}
