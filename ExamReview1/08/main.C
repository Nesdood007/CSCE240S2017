/*  CSCE240 Supplimental Instruction Exam Review 1
        2017 - Section 001 Dr. Tang
    ~Brady O'Leary
    
    Question 8: Pre and Post Increment with added Arrays
*/

#include <iostream>

using namespace std;

int main() {
    
    int a[] = {0,1,2,3,6,5,4,9,7};
    int b = 1;
    
    cout << (b += 30) << endl;//31
    cout << (b -= 21) << endl;//10
    cout << (b %= 4) << endl;
    
    cout << a[b] << endl;
    
    return 0;
}