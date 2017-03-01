/*  Exam Review 2 - Question WC-1: Strings Class
 *      Brady O'Leary - 2017
 */
 
#include "class.h"

int main() {
    char a[] = "Hello", b[] = "world", c[] = "Hi";
    String sa(a), sb(b), sc(c);

    sc = sa + sb;
    cout << sc << endl;
    sc += sa;
    cout << sa << endl;
}
