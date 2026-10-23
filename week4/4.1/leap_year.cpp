#include <iostream>

bool leap_year(int year){
    bool ly = false;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                ly = true;
            }
            else
            {
                ly = false;
            }
        }
        else
        {
            ly = true;
        }
    }
    else
    {
        ly = false;
    }

    return ly;
}

/*
For example, 1600 and 2000 were leap years, but 1700, 1800 and 1900 were not.

Similarly, 2100, 2200, 2300, 2500, 2600, 2700, 2900 and 3000 will not be leap years, but 2400 and 2800 will be.
*/

int main(){
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(1800) == false) << std::endl;
    std::cout << (leap_year(1900) == false) << std::endl;
    std::cout << (leap_year(2000) == true) << std::endl;
    std::cout << (leap_year(2100) == false) << std::endl;
    std::cout << (leap_year(2200) == false) << std::endl;
    std::cout << (leap_year(2300) == false) << std::endl;
    std::cout << (leap_year(2400) == true) << std::endl;
    std::cout << (leap_year(2500) == false) << std::endl;
    std::cout << (leap_year(2600) == false) << std::endl;
    std::cout << (leap_year(2700) == false) << std::endl;
    std::cout << (leap_year(2800) == true) << std::endl;
    std::cout << (leap_year(2900) == false) << std::endl;
    std::cout << (leap_year(3000) == false) << std::endl;
}
