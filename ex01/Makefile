Name = Zombie

SRCS = Zombie.cpp ZombieHorde.cpp main.cpp 

HEADERS = Zombie.hpp

FLAGS =  -Wall -Wextra -Werror

all: $(Name)

$(Name): $(SRCS) $(HEADERS)
	c++ $(FLAGS) $(SRCS) -o $(Name)

clean:
	rm -f $(Name)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
