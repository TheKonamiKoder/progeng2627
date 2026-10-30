#include <iostream>
#include <vector>

int main()
{
    int n, t;
    std::cin >> n >> t;

    std::vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;

        v.push_back(num);
    }

    for (int i = 0; i < n; i++)
    {
        if (v.at(i) < t)
        {
            std::cout << v.at(i) << std::endl;
        }
    }
}