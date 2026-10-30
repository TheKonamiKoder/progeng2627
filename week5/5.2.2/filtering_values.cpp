#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout)
{
    vout.clear();

    for (int i = 0; i < vin.size(); i++)
    {
        if (vin.at(i) < t)
        {
            vout.push_back(vin.at(i));
        }
    }
}

int main()
{
    std::vector<double> vin = {1, 2, 3, 4, 5, 6};
    std::vector<double> vout;

    filter_v(vin, 4, vout);

    for (int i = 0; i < vout.size(); i++)
    {
        std::cout << vout.at(i) << ' ';
    }
}