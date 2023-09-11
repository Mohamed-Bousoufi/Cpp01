#include "Zombie.hpp"


int main()
{
    Zombie *one = newZombie("New Zombie");
    randomChump("random");
    delete(one);
}