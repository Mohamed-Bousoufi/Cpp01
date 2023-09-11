#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"
class HumanA 
{
    private :
        Weapon& Weapon;
        std::string name;

    public :
        HumanA(class Weapon &Weapon);
        HumanA(std::string name ,class Weapon &Weapon);
        HumanA();
        ~HumanA();
        void attack();

};
#endif