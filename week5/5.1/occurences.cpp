#include <iostream>
#include <vector>

int main()
{
    std::cout << "please enter n:" << std::endl;
    int n;
    std::cin >> n;

    std::vector<int> v;

    for (int i = 0; i < n; i++)
    {
        std::cout << "please enter a number:" << std::endl;
        int num;
        std::cin >> num;

        v.push_back(num);
    }

    std::cout << "please enter s:" << std::endl;
    int s;
    std::cin >> s;

    int occurences = 0;
    std::vector<int> indices;

    for (int i = 0; i < n; i++)
    {
        if (v.at(i) == s)
        {
            occurences += 1;
            indices.push_back(i);
        }
    }

    std::cout << "there are " << occurences << " occurences of " << s << "at indices:" << std::endl;

    for (int i = 0; i < occurences; i++)
    {
        std::cout << indices.at(i) << std::endl;
    }   
}