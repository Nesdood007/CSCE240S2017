/*  Exam Review 2 - Question WO-4: Reference the Dereferencers
 *      Brady O'Leary - 2017
 */
#include "class.h"
int main() {
    int a = 5, b = 6, *c = 7;
    int d, e, f;
    d = f1(a);
    e = f2(b);
    f = f3(c);
    cout << a << " " << b << " " << c << " " << d << " " 
      << e << " " << f << endl;
}
