#ifndef CLASS_H
#define CLASS_H

#include <iostream>
using namespacce std;

void f1(const A&, const A&);

class A {
    int a;
    int b;
    public:
        A();
        A(const A&);
        void foo();
        int bar();
        ostream& operator<<(ostream&);
};

#endif