/*  CSCE240 Supplimental Instruction Exam Review 1
        2017 - Section 001 Dr. Tang
    ~Brady O'Leary
    
    Question 7: Pointer Arrays
*/

#include <iostream>

using namespace std;

int main() {
    
    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int a_size = 10;
    int * p;
    int b = a_size - 1;
    
    p = a;
    
    while (b >= 0) {
        cout << p[b] << " ";
        b--;
    }
    cout << endl;    
    
    return 0;
}
