#include <iostream>
#include "A.h"

class A {
    protected:
        int z;
    public:
        A() : z(1) {}
        virtual void run() {}
        void peek() {cout << z << endl;}
};

class B : public A {
    int y;
    public:
        B(int a) : y(a - 1), z(a) {}
        void run() {cout << y << " " << z << endl;}
}

int main() {
    A a, *c;
    B b(14);
    c = static_cast<A*>(&b);
    c.peek();
    b.run();
}