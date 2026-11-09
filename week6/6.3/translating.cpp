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

void format_dictionary(const std::vector<std::string>& dictionary_v, std::vector<std::string>& lookup_words, 
    std::vector<std::string>& meaning_words)
{
    for (int i = 0; i < dictionary_v.size(); i++)
    {
        if (i % 2 == 0)
        {
            lookup_words.push_back(dictionary_v[i]);
        }
        else
        {
            meaning_words.push_back(dictionary_v[i]);
        }
    }
}

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

void translate(const std::vector<std::string>& ad_v, const std::vector<std::string>& lookup_words, 
    const std::vector<std::string>& meaning_words, std::vector<std::string>& translated_ad_v)
{
    for (int i = 0; i < ad_v.size(); i++)
    {
        int search_indx = search_vector(ad_v[i], lookup_words);
        if (search_indx == -1)
        {
            translated_ad_v.push_back(ad_v[i]);
        }
        else
        {
            translated_ad_v.push_back(ad_v[search_indx]);
        }
    }
}

int main()
{
    std::cout << "Enter ad and dictionary filenames: ";
    std::string ad_filename, dictionary_filename;
    std::cin >> ad_filename >> dictionary_filename;

    std::vector<std::string> ad_v, dictionary_v;
    if (read_file_to_vector(ad_filename, ad_v) == EXIT_FAILURE)
        return EXIT_FAILURE;
    if (read_file_to_vector(dictionary_filename, dictionary_v) == EXIT_FAILURE)
        return EXIT_FAILURE;

    std::vector<std::string> lookup_words, meaning_words;
    format_dictionary(dictionary_v, lookup_words, meaning_words);
    
    std::vector<std::string> translated_ad_v;
    translate(ad_v, lookup_words, meaning_words, translated_ad_v);

    std::ofstream outfile;
    outfile.open("counting_occurences_output.txt");

    if (!outfile.is_open())
    {
        std::cout << "Error opening file " << "counting_occurences_output.txt" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < translated_ad_v.size(); i++)
    {
        outfile << translated_ad_v[i] << " ";
    }

    outfile.close(); 
}