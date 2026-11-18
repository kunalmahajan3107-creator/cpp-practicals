
#include <iostream>
using namespace std;

// Function Overloading
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

// Operator Overloading
class Complex {
private:
    int real, imag;

public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real,
                       imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {

    cout << "Name: Kunal Mahajan" << endl;
    cout << "URN: E25b000062" << endl;
    cout << "--------------------------------" << endl;

    // Function Overloading
    Calculator obj;

    cout << "\nFUNCTION OVERLOADING" << endl;
    cout << "Addition of Integers: "
         << obj.add(10, 20) << endl;

    cout << "Addition of Decimal Numbers: "
         << obj.add(5.5, 2.5) << endl;

    // Operator Overloading
    cout << "\nOPERATOR OVERLOADING" << endl;

    Complex c1(3, 4);
    Complex c2(2, 5);

    Complex c3 = c1 + c2;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition Result: ";
    c3.display();

    return 0;
}
