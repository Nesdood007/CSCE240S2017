#include "class.h"

int f1() {
    return 5;
}
int f1(int a) {
    return a*2;
}
int f1(int a, int b, int c = 5) {
    return a + b + c;
}
void f1(char a) {
    cout << a << endl;
}