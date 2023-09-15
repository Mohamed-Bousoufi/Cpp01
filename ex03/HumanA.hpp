#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"
class HumanA 
{
    private :
        Weapon& weapon;
        std::string name;

    public :
        HumanA(Weapon &weapon);
        HumanA(std::string name ,Weapon &Weapon);
        ~HumanA();
        void attack();

};
#endif