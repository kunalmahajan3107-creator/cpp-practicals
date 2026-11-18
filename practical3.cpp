
#include <iostream>
using namespace std;

class Array
{
private:
    int* data;
    int size;

public:

    // Default Constructor
    Array()
    {
        size = 0;
        data = nullptr;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Array(int s)
    {
        size = s;
        data = new int[size];

        for (int i = 0; i < size; i++)
        {
            data[i] = (i + 1) * 10;
        }

        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor (Deep Copy)
    Array(const Array& other)
    {
        size = other.size;
        data = new int[size];

        for (int i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }

        cout << "Copy Constructor Called" << endl;
    }

    // Copy Assignment Operator
    Array& operator=(const Array& other)
    {
        if (this != &other)
        {
            delete[] data;

            size = other.size;
            data = new int[size];

            for (int i = 0; i < size; i++)
            {
                data[i] = other.data[i];
            }
        }

        cout << "Copy Assignment Called" << endl;
        return *this;
    }

    // Move Constructor
    Array(Array&& other) noexcept
    {
        size = other.size;
        data = other.data;

        other.size = 0;
        other.data = nullptr;

        cout << "Move Constructor Called" << endl;
    }

    // Move Assignment Operator
    Array& operator=(Array&& other) noexcept
    {
        if (this != &other)
        {
            delete[] data;

            size = other.size;
            data = other.data;

            other.size = 0;
            other.data = nullptr;
        }

        cout << "Move Assignment Called" << endl;
        return *this;
    }

    // Display Function
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << " ";
        }

        cout << endl;
    }

    // Destructor
    ~Array()
    {
        delete[] data;
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    cout << "Student Name: Kunal Mahajan" << endl;
    cout << "URN: E25B000062" << endl;
    cout << "----------------------------" << endl;

    Array a1;
    Array a2(3);

    cout << "\nOriginal Array: ";
    a2.display();

    Array a3 = a2;

    cout << "Copied Array: ";
    a3.display();

    Array a4;
    a4 = a2;

    cout << "Copy Assigned Array: ";
    a4.display();

    Array a5 = move(a2);

    cout << "Moved Array: ";
    a5.display();

    Array a6;
    a6 = move(a3);

    cout << "Move Assigned Array: ";
    a6.display();

    return 0;
}
