/*  Exam Review 2 - Question WO-3: Classes and Things
 *      Overloading Functions
 */
#include "class.h"
int main() {
    int a[] = {0,1,2,3,4,5};
    
    for (int i = 0; i < 6; i++) {
        a[i] = f1(a[i]);
    }
    for (int i = 0; i < 5; i++) {
        a[i] = f1(a[i], a[i + 1]);
    }
    for (int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
