#include "Zombie.hpp"

int main ()
{
    Zombie *z = zombieHorde(10,"tests");
    delete[] z;
}