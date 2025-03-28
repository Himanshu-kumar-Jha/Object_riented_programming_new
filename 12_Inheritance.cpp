#include <iostream>
using namespace std;

//
// SINGLE INHERITANCE
//
class SingleBase {
public:
    void show() { cout << "SingleBase class\n"; }
};

class SingleDerived : public SingleBase {
public:
    void display() { cout << "SingleDerived class\n"; }
};

//
// MULTIPLE INHERITANCE
//
class MultipleBase1 {
public:
    void showA() { cout << "MultipleBase1 class\n"; }
};

class MultipleBase2 {
public:
    void showB() { cout << "MultipleBase2 class\n"; }
};

class MultipleDerived : public MultipleBase1, public MultipleBase2 {
public:
    void display() { cout << "MultipleDerived class\n"; }
};

//
// MULTILEVEL INHERITANCE
//
class MultilevelBase {
public:
    void showBase() { cout << "MultilevelBase class\n"; }
};

class MultilevelMid : public MultilevelBase {
public:
    void showMid() { cout << "MultilevelMid class\n"; }
};

class MultilevelDerived : public MultilevelMid {
public:
    void showDerived() { cout << "MultilevelDerived class\n"; }
};

//
// HIERARCHICAL INHERITANCE
//
class HierarchicalBase {
public:
    void showParent() { cout << "HierarchicalBase class\n"; }
};

class HierarchicalChild1 : public HierarchicalBase {
public:
    void showChild1() { cout << "HierarchicalChild1 class\n"; }
};

class HierarchicalChild2 : public HierarchicalBase {
public:
    void showChild2() { cout << "HierarchicalChild2 class\n"; }
};

//
// HYBRID INHERITANCE (DIAMOND PROBLEM SOLVED USING VIRTUAL INHERITANCE)
//
class HybridBase {
public:
    void show() { cout << "HybridBase class\n"; }
};

class HybridDerived1 : virtual public HybridBase {
public:
    void showB() { cout << "HybridDerived1 class\n"; }
};

class HybridDerived2 : virtual public HybridBase {
public:
    void showC() { cout << "HybridDerived2 class\n"; }
};

class HybridDerivedFinal : public HybridDerived1, public HybridDerived2 {
public:
    void showD() { cout << "HybridDerivedFinal class\n"; }
};

//
// MAIN FUNCTION
//
int main() {
    cout << "\n--- SINGLE INHERITANCE ---\n";
    SingleDerived obj1;
    obj1.show();
    obj1.display();

    cout << "\n--- MULTIPLE INHERITANCE ---\n";
    MultipleDerived obj2;
    obj2.showA();
    obj2.showB();
    obj2.display();

    cout << "\n--- MULTILEVEL INHERITANCE ---\n";
    MultilevelDerived obj3;
    obj3.showBase();
    obj3.showMid();
    obj3.showDerived();

    cout << "\n--- HIERARCHICAL INHERITANCE ---\n";
    HierarchicalChild1 obj4;
    obj4.showParent();
    obj4.showChild1();

    HierarchicalChild2 obj5;
    obj5.showParent();
    obj5.showChild2();

    cout << "\n--- HYBRID INHERITANCE ---\n";
    HybridDerivedFinal obj6;
    obj6.show();  // No ambiguity due to virtual inheritance
    obj6.showB();
    obj6.showC();
    obj6.showD();

    return 0;
}
