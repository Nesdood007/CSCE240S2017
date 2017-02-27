#ifndef CLASS_H
#define CLASS_H

#include <iostream>
using namespace std;

class A {
    int a, b;
    public:
        A();
        A(const A&);
        ~A();
        void foo();
        void bar();
        friend ostream& operator<<(ostream&, const A&);
};

A f1(A);
A f2(A&);
A& f3(A&);

#endif
