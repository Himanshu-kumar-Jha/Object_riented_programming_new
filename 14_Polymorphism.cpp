#include<iostream>
using namespace std;
//Compile time polymorphism (static binding) by function overloading
class Calculation
{
    public:
    int add(int a, int b)
    {
        return a+b;
    }
    int add (int a , int b , int c)
    {
        return a+b+c;
    }
};
//Compiletime polymorphism by operator overloading
// we will overload + operator to do complex number addition
class Complex
{
    private:
    int r;
    int i;
    public:
    Complex(int real = 0 , int img = 0) : r(real), i(img) {}
    
    Complex operator+ (Complex &obj)
    {
        return Complex(r+obj.r , i+obj.i);
    }
    void Display()
    {
        cout<<r<<" + "<<i<<"i"<<endl;
    }

};

int main()
{
    Complex c1(2,5) , c2(4,8);
    Complex c3 = c1+c2;
    c3.Display();

    return 0;
}