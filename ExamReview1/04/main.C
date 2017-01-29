/*  CSCE240 Supplimental Instruction Exam Review 1
        2017 - Section 001 Dr. Tang
    ~Brady O'Leary
    
    Question 4: Show output of array a
    
    Note: This is an implementation of bubblesort using an array.
*/

#include <iostream>

using namespace std;

int main() {
    
    int a[] = {2,5,4,3,1,0,6,2};
    int a_size = 6;
    int b = 0;
    
    for (int i = 0; i < a_size; i++) {
        for (int j = i; j < a_size; j++) {
            if (a[i] > a[j]) {
                b = a[i];
                a[i] = a[j];
                a[i] = b;
            }
        }
    }
    
    b = a_size - 1;
    
    do {
        cout << a[b] << " ";
    } while (b > 0)
    
    return 0;
}