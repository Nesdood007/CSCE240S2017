/*  CSCE240 Supplimental Instruction Exam Review 1
        2017 - Section 001 Dr. Tang
    ~Brady O'Leary
    
    Question 4: Show output of array a
    
    Note: This is an implementation of insertionsort using an array.
*/

#include <iostream>

using namespace std;

int main() {
    
    int a[] = {2,5,4,3,1,0,6,2};
    int a_size = 8;
    int b = 0;
    
    for (int i = 0; i < a_size; i++) {
        for (int j = i; j > 0; j--) {
            if (a[j] < a[j - 1]) {
                b = a[j];
                a[j] = a[j - 1];
                a[j - 1] = b;
            }
        }
    }
    
    b = a_size - 1;
    
    do {
        cout << a[b] << " ";
    } while (b-- > 0);
    
    cout << endl;

    return 0;
}
