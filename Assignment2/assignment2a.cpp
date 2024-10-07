#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{
    std::string inputFileName = "source.pdf";
    std::streampos fileSize = std::filesystem::file_size(inputFileName); 
}