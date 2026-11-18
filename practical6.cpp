
#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    virtual double area() = 0;

    virtual ~Shape() {}
};

// Circle Class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() override {
        return 3.14 * radius * radius;
    }
};

// Rectangle Class
class Rectangle : public Shape {
private:
    double length, breadth;

public:
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double area() override {
        return length * breadth;
    }
};

// Triangle Class
class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double area() override {
        return 0.5 * base * height;
    }
};

int main() {

    cout << "Name: Kunal Mahajan" << endl;
    cout << "URN: E25b000062" << endl;
    cout << "--------------------------------" << endl;

    Circle c(5);
    Rectangle r(10, 5);
    Triangle t(10, 6);

    Shape *s;

    cout << "\nAREA OF DIFFERENT SHAPES" << endl;

    s = &c;
    cout << "Area of Circle: " << s->area() << endl;

    s = &r;
    cout << "Area of Rectangle: " << s->area() << endl;

    s = &t;
    cout << "Area of Triangle: " << s->area() << endl;

    return 0;
}
