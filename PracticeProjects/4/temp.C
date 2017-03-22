//This is a Temporary File containing the WIP of the project

#include <iostream>
using namespace std;

class Fraction {
    int denominator;
    int numerator;
    void simplify();
    public:
        Fraction(int num, int den);
        Fraction& operator+(const Fraction& a);
        Fraction& operator-(const Fraction& a);
        Fraction& operator%(const Fraction& a);
        Fraction& operator/(const Fraction& a);
        Fraction& operator*(const Fraction& a);
};
Fraction::Fraction(int num, int den) {
    if (den == 0) {
        cerr << "Cannot Divide By Zero";
        throw "Divide By Zero";
    }
    numerator = num;
    denominator = den;
}
Fraction& Fraction::operator+(const Fraction& a) {
    if (a.denominator == denominator) {
        numerator += a.numerator;
        return *this;
    } else {
        
    }
}
Fraction& Fraction::operator-(const Fraction& a) {
    numerator -= a.numerator;
    return *this;
}
Fraction& Fraction::operator%(const Fraction& a) {
    numerator %= a.numerator;
    return *this;
}
Fraction& Fraction::operator/(const Fraction& a) {
    numerator /= a.numerator;
    return *this;
}
Fraction& Fraction::operator*(const Fraction& a) {
    numerator *= a.numerator;
    return *this;
}
void Fraction::simplify() {
    if ()
    
}

int main() {
	Fraction()
	return 0;
}
