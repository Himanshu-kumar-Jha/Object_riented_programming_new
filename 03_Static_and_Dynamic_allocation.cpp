#include<iostream>
using namespace std;
class Nation{
    private:
    int nuclearWarheads;
    int nuclearSubramines;

    protected:
    std::string leaderName;

    public:
    std::string nameOfTheNation;
    std::string population;
    double gdpGrowth;
    //constructor
    Nation(std::string name , int nuclearSubmarines , int nuclearWarheads , std::string population , double gdpGrowth, std::string leaderName)
    {
        this->nameOfTheNation = name;              //this pointer is used to differentiate between the class member and the parameter passed to the constructor.
        this->nuclearWarheads = nuclearWarheads;  // here we are accessing a private member of the class using the constructor.
        this->nuclearSubramines = nuclearSubramines;
        this->population = population;
        this->gdpGrowth = gdpGrowth;
        this->leaderName = leaderName;
    }

    void updateNuclearWarheads(int newWarheads)   //function to update the number of nuclear warheads which is a private member also a setter function.
    {
        nuclearWarheads = newWarheads;
    }
    std::string showNameofNation(){
        return nameOfTheNation;
    }
};
int main(){
    //dynamic allocation of objects
    Nation *India = new Nation ("India" , 2 , 120 , "1.5B", 7 , "Narendra Modi");
    cout<<"Name of the nation is " <<(*India).showNameofNation();
    delete India;
    //or
    cout<<"Name of the nation is " <<India->showNameofNation();
    //static allocation of objects
    Nation USA("USA" , 5 , 200 , "0.5B", 5 , "Donald Trump");
    cout<<"Name of the nation is " <<USA.showNameofNation();
    
    return 0;
}