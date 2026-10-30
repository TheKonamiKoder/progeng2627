#include <iostream>
#include <vector>
#include <limits>

int min_vector_element(const std::vector<double>& vin)
{
    if (vin.size() == 0)
    {
        return -1;
    }

    double min = std::numeric_limits<double>::max();
    double min_index;

    for (int i = 0; i < vin.size(); i++)
    {
        if (vin.at(i) < min)
        {
            min = vin.at(i);
            min_index = i;
        }
    }
    
    return min_index;
}

int main()
{
    std::cout << (min_vector_element({1, 2, 3, 4, 5}) == 0) << std::endl;
    std::cout << (min_vector_element({2, 1, 3, 4, 5}) == 1) << std::endl;
    std::cout << (min_vector_element({2, 3, 1, 1, 4}) == 2) << std::endl;
    std::cout << (min_vector_element({}) == -1)             << std::endl;
}
