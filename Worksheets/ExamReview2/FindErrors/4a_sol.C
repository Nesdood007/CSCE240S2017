//*a and *b are of size 10
void copy(const int *a, int *b) {
    for (int i = 0; i < 10; i++) {
        a[i] = b[i];//cannot change a constant
    }
}