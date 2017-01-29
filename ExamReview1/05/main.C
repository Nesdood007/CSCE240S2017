/*  CSCE240 Supplimental Instruction Exam Review 1
        2017 - Section 001 Dr. Tang
    ~Brady O'Leary
    
    Question 5: Print array 2
*/

#include <iostream>

using namespace std;

int main() {
    
    int a[][] = new int[5][5];
    int a_width = 5;
    int a_height = 5;
    
    for (int i = 0; i < a_width; i++) {
        for (int j = 0; j < a_height; j++) {
            a[i][j] = (i * j) + 1;
        }
    }
    
    for (int i = 0; i < a_width; i++) {
        for (int j = 0; j < a_height; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}