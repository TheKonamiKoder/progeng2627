#include <iostream>
#include <fstream>

int main()
{
    std::ifstream infile; 
    infile.open("input.txt");

    int total = 0; 

    if(infile.is_open())
    {
        int tmp;

        while(infile >> tmp){
            std::cout << tmp << std::endl;
            total += tmp;
        }

        infile.close(); 

    }
    else{
        std::cout << "error opening file" << std::endl;
    }

    std::cout << "The total is " << total;
}