#include <iostream>
using namespace std;

class Example {
public:
    int* data;

    // Constructor
    Example(int val) {
        data = new int(val);
    }

    // Copy Constructor (Deep Copy)
    Example(const Example& other) {
        data = new int(*(other.data));
    }

    // Copy Assignment Operator (Deep Copy)
    Example& operator=(const Example& other) {
        if (this != &other) { // Prevent self-assignment
            delete data; // Free old memory
            data = new int(*(other.data)); // Allocate new memory and copy value
        }
        return *this; // Return current object reference
    }

    // Destructor
    ~Example() {
        delete data;
    }

    void display() {
        cout << "Value: " << *data << endl;
    }
};

int main() {
    Example obj1(10);  // Calls constructor
    Example obj2(20);  // Calls constructor

    obj2 = obj1;  // Calls copy assignment operator
    obj2.display();  // Should print 10

    Example obj3 = obj1; // Calls copy constructor
    obj3.display();  // Should print 10

    return 0;
}
