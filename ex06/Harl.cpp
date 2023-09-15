#include "Harl.hpp"

void Harl :: debug( void )
{
	std :: cout << "[ DEBUG ]" << std :: endl;
	std :: cout << "I love having extra bacon for my";
	std :: cout <<"7XL-double-cheese-triple-pickle-specialketchup burger";
	std :: cout <<". I really do!" << std :: endl<< std :: endl;
}

void Harl :: info( void )
{
	std :: cout << "[ INFO ]" << std :: endl;
	std :: cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
	std :: cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std :: cout << std ::endl;
	std :: cout << std ::endl;
}

void Harl :: warning( void )
{
	std :: cout << "[ WARNING ]" << std :: endl;
	std :: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
	std :: cout << "years whereas you started working here since last month." << std :: endl<< std :: endl;
}

void Harl :: error( void )
{
	std :: cout << "[ ERROR ]" << std :: endl;
	std :: cout << "This is unacceptable! I want to speak to the manager now." << std :: endl<< std :: endl;
}

 void Harl :: complain(std :: string level)
 {
	int i = 0;
	std :: string ptr[4] = {"DEBUG","INFO","WARNING","ERROR"};
	while(ptr[i].c_str())
	{
		if(level == ptr[i])
			break;
		i++;
	}
	switch (i)
	{
	case 0:
			Harl :: debug();
	case 1:
			Harl :: info();
	case 2:
			Harl :: warning();
	case 3:
			Harl :: error();
			break;
	
	default:
			std :: cout << "[ Probably complaining about insignificant problems ]" << std :: endl;
		break;
	}
 }