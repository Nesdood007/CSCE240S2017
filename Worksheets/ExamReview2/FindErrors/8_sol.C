void f1(int a&) {
    a++;
}
//both functions are named f1 and take same parameters. You cannot do this.
int f1(int a&) {
    a += 2;
    return a;
}