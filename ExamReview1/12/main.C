/*  CSCE240 Supplimental Instruction Exam Review 1
        2017 - Section 001 Dr. Tang
    ~Brady O'Leary
    
    Question 12: Conditionals
*/

#include <iostream>

using namespace std;

int main() {
    
    int a = 8;
    int b = 4;
    int c;
    
    if ((c = b) == 4) {
        cout << true << endl;
        c = a / 2;
    }
    
    if (c++ > ++b) {
        cout << "yes" << endl;
    } else {
        cout << c << endl;
    }
    
    while (++b < 10) {
        cout << b << endl;
        if (b > a) break;
    }
    
    return 0;
}