void f1(const int * a) {
    a++
    *a = 5;
}

void f2(int a) {
    a += 2;
}

void f3(const int &a) {
    a += 5;
}

int f4(int *a) {
    a += 5;
    return a
}