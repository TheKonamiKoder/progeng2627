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

int maximum_of_3(int a, int b, int c)
{
    return maximum_of_2(maximum_of_2(a, b), c);
}

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << "The max is " << maximum_of_3(a, b, c) << std::endl;
}