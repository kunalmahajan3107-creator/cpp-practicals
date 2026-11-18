
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class
class Student : public Person {
protected:
    int studentID;
    string course;

public:
    Student(string n, int a, int id, string c)
        : Person(n, a) {
        studentID = id;
        course = c;
    }

    void displayStudent() {
        displayPerson();
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
    }
};

// Multilevel Derived Class
class GraduateStudent : public Student {
private:
    string researchTopic;

public:
    GraduateStudent(string n, int a, int id,
                    string c, string topic)
        : Student(n, a, id, c) {
        researchTopic = topic;
    }

    void displayGraduate() {
        displayStudent();
        cout << "Research Topic: "
             << researchTopic << endl;
    }
};

int main() {

    cout << "Name: Kunal Mahajan" << endl;
    cout << "URN: E25b000062" << endl;
    cout << "--------------------------------" << endl;

    cout << "\nSTUDENT DETAILS" << endl;

    Student s1("Kunal", 20, 101, "CSE");
    s1.displayStudent();

    cout << "\nGRADUATE STUDENT DETAILS" << endl;

    GraduateStudent g1(
        "Rahul", 23, 102, "MCA",
        "Artificial Intelligence"
    );

    g1.displayGraduate();

    return 0;
}
