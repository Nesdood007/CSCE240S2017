/*  Session 7 Example: adding arrays
        This example does not need a .h file

*/
#include <iostream>

using namespace std;

//Given Int arrays a and b, return the sum of the two arrays in one array. Returns NULL if the array sizes are not the same
int* sumArray (const int * a, const int a_size, const int * b, const int b_size) {
    int * toReturn;
    
    if (a_size != b_size) {
        return NULL;
    }
    
    toReturn = new int[a_size];
    
    for (int i = 0; i < a_size; i++) {
        toReturn[i] = a[i] + b[i];
    }
    
    return toReturn;
}

//Give int arrays a and b, return the sum of the indicies in each array.
int arraySum (const int * a, const int a_size, const int * b, const int b_size) {
    int sum = 0;
    for (int i = 0; i < a_size; i++) {
        sum += a[i];
    }
    
    for (int i = 0; i < b_size; i++) {
        sum += b[i];
    }
    
    return sum;
}

int main() {
    int a[] = {0, 1, 2, 3};
    int a_size = 4;
    int b[] = {9, 8, 7, 6};
    int b_size = 4;
    
    int * sum = sumArray(a, a_size, b, b_size);
    
    if (sum == NULL) {
        cout << "Arrays not Same Length" << endl;
    } else {
        for (int i = 0; i < a_size; i++) {
            cout << sum[i] << " ";
        }
    
        cout << endl;
    }
    cout << "Sum is: " << arraySum(a, a_size, b, b_size) << endl;
    
    return 0;
}
