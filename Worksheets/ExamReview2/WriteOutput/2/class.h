#ifndef CLASS_H
#define CLASS_H

#include <iostream>
using namespace std;


class A {
    int a;
    int b;
    public:
        A();
        A(const A&);
        void foo();
        void bar();
        friend ostream& operator<<(ostream&, const A&);
};
void f1(A&, A&);
#endif
