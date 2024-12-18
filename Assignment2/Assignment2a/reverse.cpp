/*# Assignment 2
## Author
Basmanov Rodion Gennadievich B81-mm
## Contacts
st135699@student.spbu.ru
## Description
Home assingment 2a*/

#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>

namespace file_operations {

  off_t getFileSize(const char *filename) {
    struct stat fileInfo;
    if (stat(filename, &fileInfo) == 0) 
      return fileInfo.st_size;
    return -1;
  }

  void reverseFileContent(){
    std::string inputFile;
    std::cout << "Enter the file path: ";
    std::cin >> inputFile;

    off_t fileSize = getFileSize(inputFile.c_str());

    std::ifstream file(inputFile, std::ios::binary | std::ios::ate);
    if (!file) {
      std::cerr << "Failed to open file: " << inputFile << "\n";
      return;
    }

    char* dataBuffer = new char[fileSize];

    if (!file.read(dataBuffer, fileSize)) {
      std::cerr << "Error reading file: " << inputFile << "\n";
      delete[] dataBuffer;
      return;
    }
    file.close();

    for (std::streamsize i = 0; i < fileSize / 2; ++i) {
        std::swap(dataBuffer[i], dataBuffer[fileSize - 1 - i]);
    }

    std::string outputFile = "reversed_" + inputFile;

    std::ofstream outFile(outputFile, std::ios::binary);
    if (!outFile) {
      std::cerr << "Failed to create output file: " << outputFile << "\n";
      delete[] dataBuffer;
      return;
    }
    outFile.write(dataBuffer, fileSize);
    outFile.close();

    delete[] dataBuffer;

    std::cout << "File has been reversed successfully. Output file: " << outputFile << "\n";
  }
}