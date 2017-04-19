//Don't even attempt to compile this: It won't work!

class A{
    int a = 0;
    public:
        A() {}
}

class B {
    int b = 1;
    public:
        A() {}
}

int main() {
    A *a;
    B b;
    a = &b;
}