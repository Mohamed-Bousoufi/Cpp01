#include "HumanA.hpp"

HumanA :: HumanA(Weapon &weapon) : weapon(weapon)
{
    std :: cout << "call HumanA Constructor";
}
HumanA :: HumanA(std :: string name,class Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}
void HumanA :: attack()
{
    std :: cout << this->name <<" attacks with their " << this->weapon.getType()<< std :: endl;
}

HumanA :: ~HumanA ()
{
    std :: cout << "Call from HumanA Destructor" << std :: endl;
}