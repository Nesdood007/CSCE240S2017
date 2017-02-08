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
    
    if (c != NULL) {
        for (int i = 0; i < a_size; i++) {
            cout << c[i] << endl;
        }
    }
    
    cout << arraySum(a, a_size, b, b_size) << endl;
    
    //For Later problems:
    /*
    jumbleArrays(a, b);
    cout << largestNumber(a, a_size, b, b_size) << endl;
    cout << smallestNumber(a, a_size, b, b_size) << endl;
    cout << arraySum(a, a_size, b, b_size) << endl;
    */
    
    