#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= n; y++)
        {
            std::cout << x * y << '\t';
        }

        std::cout << '\n';
    }
}