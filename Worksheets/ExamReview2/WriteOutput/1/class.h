#ifndef CLASS_H
#define CLASS_H

#include <iostream>
using namespace std;


class A {
    int a;
    public:
        A();
        A(const A&);
        ~A();
        void foo();
};
void f1(A a);
void f2(A& a);
A f3(A a);
A f4(A a);
A& f5(A &a);
#endif
