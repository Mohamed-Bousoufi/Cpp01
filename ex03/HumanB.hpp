#ifndef HUMAN_B
#define HUMAN_B

#include "Weapon.hpp"
class HumanB
{
    private :
        Weapon *Weapon;
        std::string name;

    public :
        HumanB();
        HumanB(std::string name);
        void setWeapon(class Weapon &weapon);
        ~HumanB();
        void attack();

};
#endif