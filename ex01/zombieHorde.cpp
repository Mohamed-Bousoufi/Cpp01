#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N > 0 && name.c_str())
    {
        Zombie *z = new Zombie[N];

        for(int i = 0 ; i < N ; i++)
                z[i].Set_name(name);
        return(z);
    }
    else
        return(nullptr);
}