/*  Exam Review 2 - Question WC-3: Complexity
 *      2017 - Brady O'Leary
 */
#include "class.h"

int main() {
    Complex a(1,0), b(1,1), c(0,2);
    Complex d(0,0);
    
    d = a + b;
    c += d;
    b = c - a;
    a -= c;
    cout << a << b << c << d << endl;
}