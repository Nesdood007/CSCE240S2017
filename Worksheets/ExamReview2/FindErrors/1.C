class A {
    int a = 0, b = 1;
    public:
        A();
        friend class B;
}

class B {
    int a, b;
    public:
        B();
}