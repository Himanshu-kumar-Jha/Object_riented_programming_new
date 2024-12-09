#include<iostream>

namespace Creatures{
    
   class Lion{
    std::string name;
    int ageOfLion;
    int countryOfOrigin;
    int weightOfLion;
   };

}

namespace SeaCreatures{
    class SeaLion{
     std::string location;
     int weightOfSeaLion;
     bool healthy;
    };
}

int main()
{
    Creatures::Lion LionKing;

    return 0 ;
}
