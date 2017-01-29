/*  CSCE240 Supplimental Instruction Exam Review 1
        2017 - Section 001 Dr. Tang
    ~Brady O'Leary
    
    Question 13: CString 1
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    char a[] = "Dan the dude";
    char b[] = "Thank You MArio, but our princess is in another castle";
    char c[] = {'3','l','1','t','3'};
    char * d;
    char * e;
    
    int i = 0;
    
    while (( *d = *a) != '\0') {
        d++;
        a++;
    }
    
    cout << d << endl;
    
    d = new char[strlen(a)];
    strcpy(a,d);
    
    cout << strlen(d) << endl;
    
    
    while (b[i] != '\0' && c[i] != '\0') {
        cout << b[i] << c[i];
    }
    cout << endl;
    return 0;
}