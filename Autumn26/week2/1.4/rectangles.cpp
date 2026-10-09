#include <iostream>

int main()
{
    double s1, s2;

    std::cout << "please enter the length of one side" << std::endl;
    std::cin >> s1;

    std::cout << "please enter the length of the other side" << std::endl;
    std::cin >> s2;


    double area = s1 * s2;
    double perimeter = 2 * (s1 + s2);

    std::cout << "area = " << area << std::endl;

    std::cout << "perimeter = " << perimeter << std::endl;
}