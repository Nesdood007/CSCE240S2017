/*  This section will have you write some c++ code to do something
    
    Question #2: Write a program that prints, given some user input 'n', the following pattern
        a. There are n lines total
        b. Every other line starting from the first line has the string "()" n times
        c. Every other line starting from the second has "(" n times followed by ")" n times
        
        Example if n = 4:
            ()()()()
            (((())))
            ()()()()
            (((())))
*/
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    int n = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            for (int j = 0; j < n; j++) {
                cout << "()";
            }
        } else {
            for (int j = 0; j < n * 2; j++) {
                if (j - n < 0) {
                    cout << "(";
                } else {
                    cout << ")";
                }
            }
        }
        cout << endl;
    }
    
    return 0;
}