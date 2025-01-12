//boiler plate
#include <iostream>
class House{
private:
    std::string LandLordName;
    int AreaSquareFeet;
public:
    std::string HouseName;
    std::string HouseLocation;
    House(){
        std::cout<<"Default constructor called"<<std::endl;
        std::cout<<"The address of the object is "<<this<<std::endl;
    }
    //Prarameterized constructor
    House(std::string LandLordName , int AreaSquareFeet , std::string HouseName , std::string HouseLocation)
    {
        this->LandLordName = LandLordName;
        this->AreaSquareFeet = AreaSquareFeet;
        this->HouseName = HouseName;
        this->HouseLocation = HouseLocation;
    }

};
int main() {
    House House1("Rajesh" , 2000 , "Rajesh Villa" , "Bangalore");
    House House2;
    std::cout<<"The address of the object is "<<&House2<<std::endl;

    return 0;
}