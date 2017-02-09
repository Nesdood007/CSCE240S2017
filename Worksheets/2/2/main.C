/*  Session 8 Worksheet
        Question 2: Array fun
        
        This example uses a .h file
*/

#include "prob.h"

int main() {
    int a[] = {0,1,2,3,4};
    int a_size = 5;
    int b[] = {5,6,7,8,9};
    int b_size = 5;
    int * c;
    
    c = sumArray(a, a_size, b, b_size);
    cout << "Array C: "; 
    
    if (c != NULL) {
        for (int i = 0; i < a_size; i++) {
            cout << c[i] << " ";
        }
    }
    
    cout << endl;
    
    cout << arraySum(a, a_size) << endl;
    
    //For the Solutions:
    
    jumbleArrays(a, a_size, b, b_size);
    
    cout << "Array A: ";
    for (int i = 0; i < a_size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Array B: ";
    for (int i = 0; i < b_size; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    
    cout << "Largest Number: " << largestNumber(a, a_size) << endl;
    cout << "Smallest Number: " << smallestNumber(a, a_size) << endl;
    cout << "Array Sum of B: " << arraySum(b, b_size) << endl;   
}
