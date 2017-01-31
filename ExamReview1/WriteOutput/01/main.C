/*  CSCE240 Supplimental Instruction Exam Review 1
        2017 - Section 001 Dr. Tang   
    ~Brady O'Leary
    
    Question 1: Print Stars
*/

#include <iostream>

using namespace std;

int main() {
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}