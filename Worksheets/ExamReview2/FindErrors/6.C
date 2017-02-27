class A {
    int a, b;
    public:
        A();
        ~A();
        ostream& <<(ostream&);
}

ostream& A::<<(ostream& out) {
    cout << a << " " << b;
}