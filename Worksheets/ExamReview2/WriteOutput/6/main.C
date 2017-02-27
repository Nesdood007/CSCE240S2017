/*  Exam Review 2 - Question WO-6: Math is more fun with Pointers
 *      
 */
#include "class.h"
int main() {
    int *a = new int(5), *b = new int(6), *c = new int(0);
    *c = *a **b;
    cout << *c << endl;
}
