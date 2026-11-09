#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

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
    
    infile.close();

    return 0;
}

int occurences(std::string s, const std::vector<std::string>& v)
{
    int total = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == s)
        {
            total++;
        }
    }

    return total;
}

int main()
{
    std::vector<std::string> text, words;

    if (read_file_to_vector("text.txt", text) == EXIT_FAILURE)
        return EXIT_FAILURE;

    if (read_file_to_vector("words.txt", words) == EXIT_FAILURE)
        return EXIT_FAILURE;
    
    std::ofstream outfile;
    outfile.open("counting_occurences_output.txt");

    if (!outfile.is_open())
    {
        std::cout << "Error opening file " << "counting_occurences_output.txt" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < words.size(); i++)
    {
        outfile << words[i] << ": " << occurences(words[i], text) << std::endl;
    }

    outfile.close();
    
    
}

