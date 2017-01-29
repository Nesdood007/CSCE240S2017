/*  CSCE240 Supplimental Instruction Exam Review 1
        2017 - Section 001 Dr. Tang
    ~Brady O'Leary
    
    Question 14: Pointer referencing and dereferencing
*/

#include <iostream>

using namespace std;

int main() {
    
    int a[] = {0,1,2,3,4};
    int * b;
    
    b = &a[2];
    
    cout << b << endl;
    return 0;
}