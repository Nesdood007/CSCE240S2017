void f1(const int * a) {
    a++ //forgot ; but a++ is legal
    *a = 5;//BAD
}

void f2(int a) {
    a += 2;//Will compile, but it won't really do anything
}

void f3(const int &a) {
    a += 5;//Bad, cannot modify a const
}

int f4(int *a) {
    a += 5;//did not dereference a, so it will change the memory address
    return a
}