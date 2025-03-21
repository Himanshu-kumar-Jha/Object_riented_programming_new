#include<iostream>
using namespace std;
//User defined Destructor
class Animal
{
    public:
    Animal()
    {
        cout<<" Animal Constructor Called"<<endl;
    }
    ~Animal()
    {
        cout<<"Animal Destructor Called"<<endl;
    }
};

//Virtual Destructor
class Base
{
    public:
    Base()
    {
        cout<<"Base Constructor Called"<<endl;
    }
    virtual ~Base()
    {
        cout<<"Base Destructor Called"<<endl;
    }
};

class Derived:public Base
{
    public:
    Derived()
    {
        cout<<"Derived Constructor Called"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived Destructor Called"<<endl;
    }
};


int main()
{
    Base* obj = new Derived();
    delete obj;  // Only Base destructor is called! (Memory leak) if there is no keyword virtual in front of Base destructor
                // if there is virtual keyword in front of Base destructor then both Base and Derived destructors are called

    Animal Lion ; // Destructor is called when the object goes out of scope
    Animal * Tiger = new Animal(); // Destructor is called when delete is called
    delete Tiger;    // for dynamically allocated objects

    return 0 ;
}