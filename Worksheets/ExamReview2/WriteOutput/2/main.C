/*  Exam Review 2 - Question WO-0: Classes and Things
 *      Global Functions and Scope
 */
#include "class.h"
int main() {
    A a, b;
    b.foo();
    b = a;
    A c(b);
    f1(c, b);
    f1(a, c);
    cout << a << endl << b << endl << c << endl;
}
