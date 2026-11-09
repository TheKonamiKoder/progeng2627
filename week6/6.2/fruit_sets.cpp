#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int search_vector(std::string s, const std::vector<std::string>& vin)
{
    for (int i = 0; i < vin.size(); i++)
    {
        if (vin[i] == s)
        {
            return i;
        }
    }

    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, 
    std::vector<std::string>& vout)
{
    for (int i = 0; i < vin1.size(); i++)
    {
        if (search_vector(vin1[i], vout) == -1)
        {
            vout.push_back(vin1[i]);
        }
    }

    for (int i = 0; i < vin2.size(); i++)
    {
        //std::cout << vin2[i] << std::endl;
        if (search_vector(vin2[i], vout) == -1)
        {
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, 
    std::vector<std::string>& vout)
{
    for (int i = 0; i < vin1.size(); i++)
    {
        if (search_vector(vin1[i], vin2) != -1)
        {
            vout.push_back(vin1[i]);
        }
    }
}


int read_file_to_vector(std::string filename, std::vector<std::string>& vout)
{
    std::ifstream infile;
    infile.open(filename);
    
    if(!infile.is_open())
    { 
        std::cout << "error opening file: " << filename << std::endl;
        return EXIT_FAILURE;
    }

    std::string word;
    while (infile >> word)
    {
        vout.push_back(word);
    }

    return 0;
}

int write_vector_to_file(std::string filename, const std::vector<std::string>& vin)
{
    std::ofstream outfile;
    outfile.open(filename);

    if (!outfile.is_open())
    {
        std::cout << "error opening file: " << filename << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < vin.size(); i++)
    {
        outfile << vin[i] << std::endl;
    }
    
    return 0;
}

int main()
{
    std::cout << "Enter filenames of two sets: ";
    std::string filename1, filename2;
    std::cin >> filename1 >> filename2;

    std::vector<std::string> fruits1, fruits2;
    
    if(read_file_to_vector(filename1, fruits1) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }
    
    if(read_file_to_vector(filename2, fruits2) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }

    std::vector<std::string> u_vector, i_vector;
    union_vector(fruits1, fruits2, u_vector);
    intersection_vector(fruits1, fruits2, i_vector);

    if (write_vector_to_file("union.txt", u_vector) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }

    if (write_vector_to_file("intersection.txt", i_vector) == EXIT_FAILURE)
    {
        return EXIT_FAILURE;
    }   
}