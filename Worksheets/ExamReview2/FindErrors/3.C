class A {
    int a = 0;
    public:
        A();
        ~A();
        int foo();
}

int foo() {
    return a;
}