#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    private :
        std :: string name;

    public :
        Zombie();
        Zombie(std :: string name);
        void announce(void );
        void Set_name(std :: string name);
        std :: string Get_name();
        ~Zombie();

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif