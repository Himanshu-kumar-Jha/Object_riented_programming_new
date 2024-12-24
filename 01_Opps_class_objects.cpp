#include<iostream>

namespace Creatures{
    
   class Lion{
    std::string name;
    int ageOfLion;
    int countryOfOrigin;
    int weightOfLion;
   };

}

// Playing with access modifiers and understanding it different behaviours

namespace SeaCreatures{

    class SeaLion{
    private:
    std::string location = "North of Atlantic";

    public:
     int weightOfSeaLionInKg = 122;
     bool healthy = true;

     std::string getSeaLionLocation()
     {
        return location;
     }

     void changeSeaLionLocation(std::string newLocation)
     {
        location = newLocation;
     }

    };    
}

int main()
{
    Creatures::Lion LionKing;      // Object being craeted from class Lion king 
    std::cout<<sizeof(LionKing);  // size of the object will be same as sum of sizes of it's data members only .
    std:: cout<< std::endl;

    /*************************************************************************************************************/

    SeaCreatures::SeaLion Doodle;
    std:: cout<< "Is Doodle Healthy : " <<Doodle.healthy << std:: endl;
    std:: cout<< "What is Doodle's Weight : "<< Doodle.weightOfSeaLionInKg << " Kgs"<<std::endl;

    Doodle.weightOfSeaLionInKg = 200;  //changing a public data member by accessing it directly , doing same with location will throw error  because it can't be changed as it is a private member.
    std:: cout<< "What is Doodle's new weight ? : "<< Doodle.weightOfSeaLionInKg <<" kgs"<<std::endl;
    std:: cout<< "What is Doodle's Location ? : "<< Doodle.getSeaLionLocation() <<std::endl;   //using a getter to access the private member.
    Doodle.changeSeaLionLocation("Antartica");    //using setter to change a private member.
    std::cout<<"What is the new location of seaLion "<<Doodle.getSeaLionLocation()<<std::endl;

    /*************************************************************************************************************/
    
















    return 0 ;
}
