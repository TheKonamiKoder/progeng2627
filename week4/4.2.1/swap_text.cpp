#include <iostream>

void swap_strings(std::string& a, std::string& b)
{
    std::string tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    std::string a = "Hello";
    std::string b = "World";

    std::cout << a << ' ' << b << std::endl;

    swap_strings(a, b);

    std::cout << a << ' ' << b << std::endl;
}