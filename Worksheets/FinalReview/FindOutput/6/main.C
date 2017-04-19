#include <iostream>
#include "A.h"

class A {
    public:
        A() {cout << "Constructed" << endl;}
        ~A() {cout << "Destructed" << endl;}
}

int main() {
    A a, *b;
    for (int i = 0; i < 1; i++) {
        A c;
    }
}