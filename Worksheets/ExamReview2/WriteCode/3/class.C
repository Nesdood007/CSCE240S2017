#include "class.h"

Complex::Complex(int r, int i) {
    real = r;
    imag = i;
}
Complex::~Complex() {
    //Don't really need one
}
Complex&::Complex& operator+(const Complex& a) {
    Complex *toReturn = new Class(a.real + real, b.imag + imag);
    return *toReturn;
}
Complex&::Complex& operator-(const Complex& a) {
    Complex *toReturn = new Class(a.real - real, b.imag - imag);
    return *toReturn;
}
Complex&::Complex& operator+=(const Complex& a) {
    real += a.real;
    imag += a.imag;
    return *this;
}
Complex&::Complex& operator-=(const Complex& a) {
    real -= a.real;
    imag -= a.imag;
    return *this;
}
ostream& operator<<(ostream& out, const Complex& a) {
    out << "(" << real << " + " << imag << "i)";
    return out;
}