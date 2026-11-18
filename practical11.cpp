
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    cout << "Name: Kunal Mahajan" << endl;
    cout << "URN: E25b000062" << endl;
    cout << "--------------------------------" << endl;

    ofstream file("students.csv");

    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    file << "RollNo,Name,Course,Marks" << endl;
    file << "101,Kunal,CSE,85" << endl;
    file << "102,Rahul,CSE,90" << endl;
    file << "103,Amit,CSE,88" << endl;

    file.close();

    cout << "\nStudent Records Written Successfully!" << endl;

    ifstream readFile("students.csv");

    if (!readFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;

    cout << "\nSTUDENT RECORDS" << endl;

    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}
