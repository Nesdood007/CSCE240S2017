/*  CSCE240 Supplimental Instruction Exam Review 1
        2017 - Section 001 Dr. Tang
    ~Brady O'Leary
    
    Question 6: ===> Pointers
*/

#include <iostream>

using namespace std;

int main() {
    
    int * a, * b;
    int N = 5;
    
    a = new int[N];

    b = a;
    
    for (int i = 0; i < N; i++) {
        a[i] = i * N;
    }
    cout << *++a << endl;
    
    delete [] b;
    return 0;
}
