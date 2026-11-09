#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl;
}

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged)
{
    int v1i = 0, v2i = 0;

    while ((v1i < v1.size()) || (v2i < v2.size()))
    {
        if ((v1i < v1.size()) && (v2i < v2.size()))
        {
            if (v1[v1i] < v2[v2i])
            {
                merged.push_back(v1[v1i]);
                v1i++;
            }
            else
            {
                merged.push_back(v2[v2i]);
                v2i++;
            }
        }
        else if (v1i < v1.size())
        {
            merged.push_back(v1[v1i]);
            v1i++;
        }
        else if (v2i < v2.size())
        {
            merged.push_back(v2[v2i]);
            v2i++;
        }
    }
    
    //std::cout << v1i << v2i << std::endl;
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    //print_vector(out);
    

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}