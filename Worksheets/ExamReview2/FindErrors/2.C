class A {
    int a = 0;
    public:
        A();
        void foo();
}

int main() {
    A a, *b;
    *b = a;
    b.foo();
}
