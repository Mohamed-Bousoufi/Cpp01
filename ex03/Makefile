Name = Violence

SRCS = HumanA.cpp Weapon.cpp HumanB.cpp main.cpp
HEADERS = HumanA.hpp Weapon.hpp HumanB.hpp


FLAGS =  -Wall -Wextra -Werror

all: $(Name)

$(Name): $(SRCS) $(HEADERS)
	c++ $(FLAGS) $(SRCS) -o $(Name)

clean:
	rm -f $(Name)

fclean: clean

re: fclean all

.PHONY: all clean fclean re