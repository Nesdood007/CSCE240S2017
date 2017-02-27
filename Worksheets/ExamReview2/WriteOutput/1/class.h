#ifndef CLASS_H
#define CLASS_H

#include <iostream>
using namespace std;


class Class {
    int a;
    public:
        Class();
        Class(const Class&);
        ~Class();
        void foo();
};
void f1(Class a);
void f2(Class& a);
Class f3(Class a);
Class f4(Class a);
Class& f5(Class &a);
#endif
