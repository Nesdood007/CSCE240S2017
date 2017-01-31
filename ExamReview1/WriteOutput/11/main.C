/*  CSCE240 Supplimental Instruction Exam Review 1
        2017 - Section 001 Dr. Tang
    ~Brady O'Leary
    
    Question 11: Switches
*/

#include <iostream>

using namespace std;

int main() {
    
    int x = 2;
    switch (x) {
        case 1:
            cout << "Case " << 1 << endl;
        case 2:
            cout << "Case " << 2 << endl;
        case 3:
            cout << "Case " << 3 << endl;
            break;
        case 4:
            cout << "Case " << 4 << endl;
        default:
            cout << "Default Case" << endl;
    }
    
    return 0;
}