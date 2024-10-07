#include <iostream>
#include <fstream>
#include <filesystem>

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

}