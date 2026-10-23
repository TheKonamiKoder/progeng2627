#include <iostream>

double mypow(double base, int exponent)
{
    double result = 1;

    for (int i = 0; i < abs(exponent); i++)
    {
        result *= base;
    }

    if (exponent < 0)
    {
        result = 1 / result;
    }

    return result;
}

int sum_of_powers(int x, int n)
{
    int result = 0;

    for (int i = 1; i < n + 1; i++)
    {
        result += mypow(x, i);   
    }
    
    return result;
}

int main()
{
    int x, n;
    std::cin >> x >> n;

    std::cout << sum_of_powers(x, n) << std::endl;
}