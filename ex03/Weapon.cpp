#include "Weapon.hpp"

Weapon :: Weapon()
{
    std :: cout << "call Weapon Constructor" << std :: endl;
}

Weapon :: Weapon(std :: string type)
{
    this->type = type;
}

Weapon :: ~Weapon()
{
    std :: cout << "call Weapon Destructor" << std :: endl;
}

const std :: string& Weapon :: getType()
{
    std :: string& ref = this->type;
    return(ref);
}

void Weapon :: setType(std :: string type)
{
    this->type = type;
}