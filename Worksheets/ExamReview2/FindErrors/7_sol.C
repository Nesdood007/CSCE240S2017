//uses Java style, no public is required
public void f1(int i) {
    i = 15;
}
//no public
public int f1(int i) {
    return (i = 16);
}
//no private
private char* f2(char* arr) {
    return *arr;
}