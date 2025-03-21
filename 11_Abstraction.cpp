#include <iostream>
using namespace std;

// Abstract Class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function (forces abstraction)

    void areaMessage() { // Concrete method
        cout << "Calculating area..." << endl;
    }
};

// Concrete Class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    //Shape s; // ❌ Error: cannot instantiate abstract class

    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw();
    s1->areaMessage();

    s2->draw();
    s2->areaMessage();

    delete s1;
    delete s2;

    return 0;
}
