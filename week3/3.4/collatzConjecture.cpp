#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int steps = 0;
    int maximum = n;

    while (n != 1)
    {
        std::cout << n << ' ';

        if (n > maximum)
        {
            maximum = n;
        }
        
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }

        steps += 1;
    }

    std::cout << n << std::endl;
    std::cout << "Steps: " << steps << std::endl;
    std::cout << "Maximum: " << maximum << std::endl;
}