#include <iostream>

void divmod(int a, int b, int& quotient, int& remainder)
{
    quotient = a / b;
    remainder = a % b;
}

int main()
{
    int a, b, quotient, remainder;
    std::cin >> a >> b;

    divmod(a, b, quotient, remainder);

    std::cout << quotient << ' ' << remainder << std::endl;
}