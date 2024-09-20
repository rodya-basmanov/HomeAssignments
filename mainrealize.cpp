#include <iostream>
#include "head.h"

using namespace std;

int main() {
    greet();

    string input;

    while(true) {
        cout << "Введите имя (или 'exit' для выхода): ";
        cin >> input;
        if (input == "exit") {
            break;
        }
        greet(input);
    }
    return 0;
}