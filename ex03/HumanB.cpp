#include "HumanB.hpp"

HumanB :: HumanB()
{
    this->Weapon = nullptr;
    std :: cout << "Call from HumanB Constructor" << std :: endl;
} 

HumanB :: HumanB (std :: string name)
{
    this->name = name;
    this->Weapon = nullptr;
}

void HumanB:: attack()
{
        if(this->Weapon)
        {
            std :: cout << this->name <<" attacks with their " << this->Weapon->getType() << std :: endl;
        }
        else
            std :: cout << this->name <<" He has no weapon"<< std :: endl;
        
}
HumanB :: ~HumanB ()
{
    std :: cout << "Call from HumanB Destructor" << std :: endl;
}


void HumanB :: setWeapon( class Weapon &Weapon)
{
    this->Weapon = &Weapon;
}