//Polymorphism Example
#include <iostream>
#include <string>

using namespace std;

//http://www.cplusplus.com/doc/tutorial/polymorphism/

class Shape {
    protected:
        int area, perimeter;
    public:
        Shape() {}
        virtual int Area() {return 0;}
        virtual int Perimeter() =0;
};

class Polygon : public Shape {
    protected:
        int length, width;
    public:
        Polygon() {}
        int Length() {return length;}
        int Width() {return width;}
};

class Square : public Polygon {
    public:
        Square(int a) {length = a; width = a;}
        int Area() {return length * length;}
        int Perimeter() {return length * 2;}
};

class Triangle : public Polygon {
    public:
        Triangle(int a, int b) {length = a; width = b;}
        int Area() {return length * width / 2;}
        int Perimeter() {return length * 2;}//Not correct
};

class Circle : public Shape {
    int radius;
    public:
        Circle(int a) {radius = a;}
        int Area() {return 3.14 * radius * radius;}
        int Perimeter() {return 3.14 * 2 * radius;}
        int Radius() {return radius;}
};


int main()
{
  Square a(5);
  cout << "Square: " << a.Length() << " " << a.Area() <<  " " << a.Perimeter() << endl;
  Triangle b(5, 3);
  cout << "Triangle: " << b.Length() << " " << b.Area() <<  " " << b.Perimeter() << endl;
  Circle c(5);
  cout << "Ciecle: " << c.Radius() << " " << c.Area() <<  " " << c.Perimeter() << endl;
  
}
