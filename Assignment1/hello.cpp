#include <iostream>
#include "head.h"

using namespace std;

void greet(string name) {
    if (name.empty()) {
        cout << "Hello, world!" << endl;
    } else {
        cout << "Hello, " << name << "!" << endl;
    }
}