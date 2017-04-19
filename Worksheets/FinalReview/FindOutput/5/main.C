#include <iostream>
#include "A.h"

class A {
    int z;
    public:
        A(int a): z(a) {}
        &A operator+(const &A ref) {
            this.z += ref.z;
            return *this;
        }
        ~A() {
            cout << z << endl;
        }
} foo(12);

int main() {
    A b(23);
    b + foo;
}