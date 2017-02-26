/*  Exam Review 2 - Question WO-1: Classes and Things
 *      
 */
#include "class.h"
int main() {
    Class a;
    
    f1(a);
    f2(a);
    Class b;
    b = f3(a);
    b = f4(b);
    delete a;
    Class c = f5(b);
}
