/*  Exam Review 2 - Question WO-6: Math is more fun with Pointers
 *      
 */
#include "class.h"
int main() {
    int a* = 5, b* = 6, c*;
    *c = *a **b;
    cout << *c << endl;
}
