#include <iostream>

int maximum_of_2(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b;
    std::cin >> a >> b;

    std::cout << "The max is " << maximum_of_2(a, b) << std::endl;
}