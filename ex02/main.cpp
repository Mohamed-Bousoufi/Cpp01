#include <iostream>


int main ()
{
    /*A string variable initialized to "HI THIS IS BRAIN*/
    std :: string string = "HI THIS IS BRAIN";

    /*stringPTR: A pointer to the string.*/
    std :: string *stringPTR = &string;

    /*stringREF: A reference to the string.*/
    std :: string &stringREF = string;

    /*• The memory address of the string variable.*/
    std :: cout << &string << std :: endl;

    /*The memory address held by stringPTR.*/
    std :: cout << stringPTR << std :: endl;

    /*The memory address held by stringREF.*/
    std :: cout << &stringREF << std :: endl;

    /*The value of the string variable*/
    std :: cout << string << std :: endl;

    /*The value pointed to by stringPTR*/
    std :: cout << *stringPTR << std :: endl;

    /*The value pointed to by stringREF*/
    std :: cout << stringREF << std :: endl;

}