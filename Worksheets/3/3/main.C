/*  Session 8 Worksheet
        Question 1
        
        This example uses a .h file
*/

#include "prob.h"

int main() {
    int a = 10;
    int b = 10;
    
    cout << max(a++, ++b) << endl;
    cout << min(a -= 2, b *= 2) << endl;
}

