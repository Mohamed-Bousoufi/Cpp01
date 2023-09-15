#include "Zombie.hpp"

void Zombie :: announce (void)
{
    std :: cout << this->name << ": BraiiiiiiinnnzzzZ..." << std :: endl;
}

// Setter

void Zombie :: Set_name(std :: string n)
{
    this->name = n;

    
}

// Getter

std :: string Zombie :: Get_name()
{
    return(this->name);
}

// Constructors

Zombie :: Zombie ()
{

}

Zombie :: Zombie(std :: string name)
{
    this->Set_name(name);
}

// Destructor

Zombie :: ~Zombie()
{
    
}