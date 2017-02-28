#ifndef CLASS_H
#define CLASS_H

#include <iostream>
using namespace std;

class Complex {
    int real, imag;
    public:
        Complex(int,int);
        ~Complex();
        Complex& operator+(const Complex&);
        Complex& operator-(const Complex&);
        Complex& operator+=(const Complex&);
        Complex& operator-=(const Complex&);
        friend ostream& operator<<(ostream&, const Complex&);
}
#endif