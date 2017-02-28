/*  Exam Review 2 - Question WC-2: Stacks
 *      2017 - Brady O'Leary
 */
#include "class.h"

int main() {
    Stack stk;
    for (int i = 0; i < 4; i++) {
        stk.push(i);
    }
    cout << stk.peek();
    
    while (!stk.isEmpty()) {
        cout << stk.pop() << endl;
    }
}