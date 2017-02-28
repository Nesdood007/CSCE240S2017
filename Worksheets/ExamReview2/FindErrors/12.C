class A {
    int *a, a_size;
    public:
        A(int q) {a = new int[q]; a_size = q; for (int i = 0; i < q; i++){a[i] = q - i;}}
        ~A() {delete a;}
        ostream& operator<< (ostream&);
}

ostream& A::operator<< (ostream& out) {
    for (int i = 0; i < a_size; i++) {
        out << a[i];
    }
    return out;
}