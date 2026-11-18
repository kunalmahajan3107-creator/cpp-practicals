
#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {

    cout << "Name: Kunal Mahajan" << endl;
    cout << "URN: YOUR URN" << endl;
    cout << "--------------------------------" << endl;

    // Using unique_ptr
    cout << "\n1. UNIQUE POINTER" << endl;

    unique_ptr<Student> ptr1 =
        make_unique<Student>("Kunal");

    ptr1->display();

    cout << "Unique Pointer has single ownership."
         << endl;

    // Using shared_ptr
    cout << "\n2. SHARED POINTER" << endl;

    shared_ptr<Student> ptr2 =
        make_shared<Student>("Rahul");

    shared_ptr<Student> ptr3 = ptr2;

    ptr2->display();

    cout << "Reference Count: "
         << ptr2.use_count() << endl;

    cout << "Shared Pointer allows multiple ownership."
         << endl;

    cout << "\nMemory is automatically managed."
         << endl;

    return 0;
}
