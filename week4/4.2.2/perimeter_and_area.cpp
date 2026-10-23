#include <iostream>

void perimeter_and_area(double s1, double s2, double& area, double& perimeter)
{
    area = s1 * s2;
    perimeter = 2 * (s1 + s2);
}

int main()
{
    double s1, s2, area, perimeter;
    std::cin >> s1 >> s2;

    perimeter_and_area(s1, s2, area, perimeter);

    std::cout << area << ' ' << perimeter;
}