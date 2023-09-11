#include "HumanA.hpp"

HumanA :: HumanA(class Weapon &Weapon) : Weapon(Weapon)
{
    this->Weapon = Weapon;
    std :: cout << "call HumanA Constructor";
}
HumanA :: HumanA(std :: string name,class Weapon &Weapon) : Weapon(Weapon)
{
    this->name = name;
    this->Weapon = Weapon;
}
void HumanA :: attack()
{
    std :: cout << this->name <<" attacks with their " << this->Weapon.getType()<< std :: endl;
}

HumanA :: ~HumanA ()
{
    std :: cout << "Call from HumanA Destructor" << std :: endl;
}