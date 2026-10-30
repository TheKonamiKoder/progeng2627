#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin)
{
    if (vin.size() == 0)
    {
        return -1;
    }
    
    for (int i = 0; i < vin.size(); i++)
    {
        if (vin.at(i) == n)
        {
            return i;
        }
    }
    
    return -1;
}

int main()
{
    std::cout << (search_vector(1, {1, 2, 3, 4, 5}) == 0)   << std::endl;
    std::cout << (search_vector(4, {2, 1, 3, 4, 5}) == 3)   << std::endl;
    std::cout << (search_vector(1, {2, 3, 1, 1, 4}) == 2)   << std::endl;
    std::cout << (search_vector(5, {2, 3, 1, 1, 4}) == -1)  << std::endl;
    std::cout << (search_vector(5, {}) == -1)               << std::endl;
}