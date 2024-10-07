/*# Assignment 2
## Author
Basmanov Rodion Gennadievich B81-mm
## Contacts
st135699@student.spbu.ru
## Description
Home assingment 2a*/


#include <iostream>
#include <fstream>
#include <filesystem>
#include <algorithm>

int main()
{
    std::string inputFileName = "source.pdf";
    std::streampos fileSize = std::filesystem::file_size(inputFileName); 

    std::ifstream openFile;
    openFile.open(inputFileName, std::ios::binary | std::ios::in);
    if (!openFile.is_open())
    {
        std::cout << "Error file" << std::endl;
    }

    char* buffer = new char[fileSize];

    openFile.read(buffer, fileSize);
    openFile.close();

    for (std::streampos i = 0; i < fileSize / 2; ++i) 
    { 
        std::swap(buffer[i], buffer[fileSize - 1 - i]);
    }
    std::ofstream outputFile;
    std::string outputFileName = "output.pdf";
    outputFile.open(outputFileName, std::ios::binary | std::ios::out);
    outputFile.write(buffer, fileSize);
    outfile.close();
    delete[] buffer;
    return 0;
}