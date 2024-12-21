#include<iostream>
//Playing with access modifiers and understanding them 
//Public access modifier

class Nation{
    private:
    int nuclearWarheads;
    int nuclearSubramines;

    public:
    std::string nameOfTheNation;
    std::string population;
    int gdpGrowth;
    
    //constructor
    Nation(std::string name , int nuclearSubmarines , int nuclearWarheads , std::string population , int gdpGrowth)
    {
        this->nameOfTheNation = name;
        this->nuclearWarheads = nuclearWarheads;
        this->nuclearSubramines = nuclearSubramines;
        this->population = population;
        this->gdpGrowth = gdpGrowth;
    }



};

int main()
{
    Nation India("India" , 2 , 120 , "1.5B", 7);
    std::cout<<"Population of India is "<<India.population;

    return 0;
}