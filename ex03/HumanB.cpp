#include "HumanB.hpp"

HumanB :: HumanB()
{
    std :: cout << "Call from HumanB Constructor" << std :: endl;
} 

HumanB :: HumanB (std :: string name)
{
    this->name = name;
}

void HumanB:: attack()
{
    std :: cout << this->name <<" attacks with their " << this->Weapon->getType()<< std :: endl;
}
HumanB :: ~HumanB ()
{
    std :: cout << "Call from HumanB Destructor" << std :: endl;
}


void HumanB :: setWeapon( class Weapon Weapon)
{
    this->Weapon = &Weapon;
}