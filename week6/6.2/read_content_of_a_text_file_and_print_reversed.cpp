#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp);
    }

    infile.close(); 

    std::ofstream outfile;
    // outfile is not a special name

    outfile.open("input_reversed.txt");
    // this will associate outfile to a file called output.txt
    // if the file doesn't exist it is created
    // if the file already exists it will be overwritten!

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        outfile << v[i] << std::endl;
    }

    outfile.close();

    // TODO: print the content of v in reversed order
    // onto a different text file

}