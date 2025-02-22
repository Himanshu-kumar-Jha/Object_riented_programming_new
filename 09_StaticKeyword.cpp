#include<iostream>
using namespace std;
//Static keyword is used to define class level variables
class Example
{
    public:
    static int x;
    Example()
    {
        x++;
    }
    static void show()
    {
        cout<<"Value of x is "<<x<<endl;
    }
};
int Example::x = 5;  //Static variable initialization
int main()
{
cout<<"Value of x is "<<Example::x<<endl;
Example::show();
    return 0;
}