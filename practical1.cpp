#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Student Name: Kunal Mahajan" << endl;
    cout << "URN: E25B000062" << endl;

    string name;
    int mark1, mark2, mark3, total;
    const int passing_marks = 40;

    cout << "\nEnter your name: ";
    cin >> name;

    cout << "Enter marks of Subject 1: ";
    cin >> mark1;

    cout << "Enter marks of Subject 2: ";
    cin >> mark2;

    cout << "Enter marks of Subject 3: ";
    cin >> mark3;

    total = mark1 + mark2 + mark3;

    float average = total / 3.0;

    cout << "\nStudent Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average: " << average << endl;

    if (average >= passing_marks)
    {
        cout << "Result: Pass" << endl;
    }
    else
    {
        cout << "Result: Fail" << endl;
    }

    return 0;
}