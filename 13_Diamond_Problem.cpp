#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "Class A\n"; }
};

class B : virtual public A {  // Virtual Inheritance
public:
    void showB() { cout << "Class B\n"; }
};

class C : virtual public A {  // Virtual Inheritance
public:
    void showC() { cout << "Class C\n"; }
};

class D : public B, public C {
public:
    void showD() { cout << "Class D\n"; }
};

int main() {
    D obj;

    obj.show();   // ✅ No ambiguity, single copy of A
    obj.showB();  
    obj.showC();  
    obj.showD();  

    return 0;
}
