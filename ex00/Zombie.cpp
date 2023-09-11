#include "Zombie.hpp"

void Zombie :: announce (void)
{
    std :: cout << name << ": BraiiiiiiinnnzzzZ..." << std :: endl;
}

// Setter

void Zombie :: Set_name(std :: string n)
{
    name = n;
}

// Getter

std :: string Zombie :: Get_name()
{
    return(name);
}

// Constructors

Zombie :: Zombie ()
{
    name = "Zombie";
    announce();
}

Zombie :: Zombie(std :: string name)
{
    Zombie :: Set_name(name);
    announce();
}

// Destructor

Zombie :: ~Zombie()
{
    std :: cout << name << std :: endl;
}