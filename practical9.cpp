
#include <iostream>
#include <stack>
#include <string>
using namespace std;

template <class T>
class GenericStack {
private:
    stack<T> s;

public:
    void push(T value) {
        s.push(value);
    }

    void pop() {
        if (s.empty()) {
            cout << "Stack is empty. Cannot pop." << endl;
        } else {
            cout << "Popped element: " << s.top() << endl;
            s.pop();
        }
    }

    void displayTop() {
        if (s.empty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top element: " << s.top() << endl;
        }
    }

    bool isEmpty() {
        return s.empty();
    }
};

int main() {
    cout << "Name: Kunal Mahajan" << endl;
    cout << "URN: E25b000062" << endl;
    cout << "--------------------------------" << endl;

    cout << "\nINTEGER STACK" << endl;
    GenericStack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.displayTop();
    intStack.pop();

    cout << "\nFLOAT STACK" << endl;
    GenericStack<float> floatStack;
    floatStack.push(1.5);
    floatStack.push(2.5);
    floatStack.displayTop();
    floatStack.pop();

    cout << "\nSTRING STACK" << endl;
    GenericStack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("C++");
    stringStack.displayTop();
    stringStack.pop();

    cout << "\nEMPTY STACK CHECK" << endl;
    GenericStack<int> emptyStack;
    emptyStack.pop();

    return 0;
}
