#include<iostream>
using namespace std;
//Encapsulation is the bundling of data with the methods that operate on that data
class Encapsulation
{
    private:
    int x;
    public:
    void set(int a)
    {
        x = a;
    }
    int get()
    {
        return x;
    }
};

int main()
{
    return 0;
}