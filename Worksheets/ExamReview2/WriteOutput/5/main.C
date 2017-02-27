/*  Exam Review 2 - Question WO-5: Created, Copied, and Destroyed
 *      
 */
#include "class.h"
int main() {
    A a, *b = new A();
    *b = f1(a);
    a = f2(*b);
    *b = f3(a);
    delete b;
    a.foo();
    cout << a << endl;
}
