class A {
    int a;
    int b;
    public:
        A(int z, int x): a(z), b(x);
        A(const A&);
}

int main() {
    A a(1,5), b(4,9), c;
    c = a + b;
}