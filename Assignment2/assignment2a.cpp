/*# Assignment 2
## Author
Basmanov Rodion Gennadievich B81-mm
## Contacts
st135699@student.spbu.ru
## Description
Home assingment 2a*/

#include <iostream>
#include <fstream>

int main()
{
    std::string inputFileName = "source.txt";

    int count;
    std::cout << "Введите количество чисел: ";
    std::cin >> count;

    if (count <= 0) {
        std::cout << "Количество должно быть положительным." << std::endl;
        return 1;
    }

    std::ofstream openFile(inputFileName);
    if (!openFile.is_open())
    {
        std::cout << "Ошибка при открытии файла" << std::endl;
        return 1;
    }

    std::cout << "Введите " << count << " чисел:" << std::endl;
    for (int i = 0; i < count; ++i)
    {
        int number;
        std::cin >> number;
        openFile << number << " ";
    }
    openFile.close();

    std::ifstream readFile(inputFileName);
    if (!readFile.is_open())
    {
        std::cout << "Ошибка при открытии файла" << std::endl;
        return 1;
    }

    int* numbers = new int[count];
    for (int i = 0; i < count; i++)
    {
        readFile >> numbers[i];
    }
    readFile.close();

    int* result = new int[count];
    for (int i = 0; i < count; ++i)
    {
        result[i] = numbers[count - 1 - i];
    }

    std::ofstream outputFile("output.txt");
    for (int i = 0; i < count; ++i)
    {
        outputFile << result[i] << " ";
    }
    outputFile.close();

    delete[] numbers;
    delete[] result;

    return 0;
}