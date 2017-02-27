#include "class.h"
int f1(int & a) {
    return a++;
}
int f2(int a) {
    return a *= 2;
}
int f3(int* a) {
    return *a += 3;
}