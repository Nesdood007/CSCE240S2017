class A {
    int a = 0, b = 1;
    public:
        A();
        friend class B; //compiler doesn't know what B is yet, as it reads file from top to bottom
}

class B {
    int a, b;
    public:
        B();
}