#include<iostream>
//Playing with access modifiers and understanding them 
//Public access modifier

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
};

class State : public Nation {
    public:
    std::string stateName;

    // Constructor
    State(std::string nationName, int nuclearSubmarines, int nuclearWarheads, std::string population, double gdpGrowth, std::string leaderName, std::string stateName)
        : Nation(nationName, nuclearSubmarines, nuclearWarheads, population, gdpGrowth, leaderName) {
        this->stateName = stateName;
    }

    void displayLeaderName() {  // getter function to access the protected member.
        std::cout << "Leader of the nation is " << leaderName << std::endl; // accessing protected member
    }
};

int main()
{
    Nation India("India" , 2 , 120 , "1.5B", 7 , "Narendra Modi");
    State Maharashtra("India", 2, 145, "1.3B", 9, "Devendra Fadnavis", "Maharashtra");
    std::cout<<"Population of India is "<<India.population; //public members are accessed by objects directly
    // if we do India.nuclearWarheads it will throw an error as it is a private member.
    Maharashtra.displayLeaderName(); // accessing protected member using a public function.
    return 0;
}