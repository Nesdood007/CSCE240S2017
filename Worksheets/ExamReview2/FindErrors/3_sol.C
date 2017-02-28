class A {
    int a = 0;
    public:
        A();
        ~A();
        int foo();
}
//Not a member function because no A::
int foo() {
    return a;
}