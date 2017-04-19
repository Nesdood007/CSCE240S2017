#include <iostream>
#include "A.h"

class A {
    int a,b;
    public:
        A(int z, int x) : a(z), b(x) {
            if (x == 0) {
                throw "X is Zero";
            }
        }
}

int main() {
    int a = 500;
    int b = 0;
    try {
        A c(a, b);
    } catch (char* e) {
        cout << e << endl;
    }
}