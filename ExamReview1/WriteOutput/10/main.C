/*  CSCE240 Supplimental Instruction Exam Review 1
        2017 - Section 001 Dr. Tang
    ~Brady O'Leary
    
    Question 10: C String
*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    char str1[] = "The Cake Is a Lie";
    
    char str2[] = "Wubba Lubba Dub Dub";
    
    char str3[] = {'s','t','a','y','i','n','g','\0','a','l','i','v','e','\0'};
    
    char * cat;
    
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    
    cat = new char[strlen(str1) + strlen(str2) + strlen(str3)];
    
    cout << str1 << endl << str2 << endl << str3 << endl;
    
    while (str1[a] != '\0' || str2[b] != '\0' || str3[c] != '\0') {
        if (str1[a] != '\0') {
            cat[d] = str1[a];
            d++;
            a++;
        }
        if (str2[b] != '\0') {
            cat[d] = str2[b];
            d++;
            b++;
        }
        if (str3[c] != '\0') {
            cat[d] = str3[c];
            d++;
            c++;
        }
    }
    
    for (int i = 0; i < strlen(cat); i++) {
        cout << cat[i];
    }
    cout << endl;
    
    return 0;
}
