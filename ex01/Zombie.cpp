#include "Zombie.hpp"

void Zombie :: announce (void)
{
    std :: cout << this->name << std :: endl;
}

// Setter

void Zombie :: Set_name(std :: string name)
{
    this->name = name;
}

// Constructors

Zombie :: Zombie ()
{
    std :: cout << "Constructor is called!" << std :: endl;
}

Zombie :: Zombie(std :: string name)
{
    Zombie :: Set_name(name);
}

// Destructor

Zombie :: ~Zombie()
{
    std :: cout << "Destructor is called!" << std :: endl;
}



