#include<iostream>
using namespace std;
//using const for object creation 
class Nation
{
    public:
    int population;
    int numberOfRivers = 100;
    Nation()
    {
        population = 1000;
    }
    ~Nation()
    {
        cout<<"Nation is destroyed"<<endl;
    }
};

class Nature{
    public :
    int x;
    Nature()
    {
        x = 10;
    }
    //using const with methods
    void show() const
    {
        cout<<"Hello Nature"<<endl;

    }
};

//using const with function arguments
void showData(const string& str) {  // Passing `const` reference
    cout << str << endl;
}

//mutable keyword is used to modify const data members
class Animal
{
    public:
    mutable int age;
    Animal()
    {
        age = 10;
    }
    void show() const
    {
        age = 20; // mutable data members can be modified in const functions
        cout<<"Age is "<<age<<endl;
    }
};
// using const cast to modify const objects
class Test {
public:
    int x;
    Test(int val) : x(val) {}
};

int main()
{
    const Nation India; 
    //India.numberOfRivers = 200; // Error: assignment of member 'Nation::numberOfRivers' in read-only object you can't modify const object data members

    //using const with methods
    const Nature wildlife;
     // wildlife.show(); once a function is declared const , you can only call methods which has const in them
     wildlife.show(); // thsi will work

     //using const with function arguments
    string text = "Hello";
    showData(text);  // ✅ No copy is created

    /*Why use const string& instead of string?
     Passing by reference (&) avoids copying, improving performance.
     Using const ensures the function cannot modify the original value.
    */

   //mutable keyword is used to modify const data members
    Animal Lion;
    Lion.show();
    Lion.age = 30;
    cout<<"Age is "<<Lion.age<<endl;

    //suing const cast to modify const objects
    const Test obj(10);
    Test* ptr = const_cast<Test*>(&obj);  
    ptr->x = 20;  // ⚠️ Undefined behavior if `obj` was originally declared `const`
    
    cout << obj.x << endl;  // Output: 20 (but this is unsafe)

    return 0 ;
}