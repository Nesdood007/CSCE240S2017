/*  Exam Review 2 - Question WO-7: A Deep and Shallow Hole
 *      
 */
#include "class.h"
int main() {
    Hole a, b, c;
    b = a;
    cout << b;
    a.fill(0);
    b.foo();
    cout << a;
    b.fill(0);
    f(b,c);
    c.fill(5);
    b.foo();
    cout << c;
}
