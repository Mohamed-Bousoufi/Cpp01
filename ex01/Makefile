Name = ZombieHorde

SRCS = Zombie.cpp zombieHorde.cpp main.cpp 

HEADERS = Zombie.hpp

FLAGS =  -Wall -Wextra -Werror -std=c++98
CC = c++

OBJS =$(SRCS:.cpp=.o)

all: $(Name)



$(Name) : $(OBJS)
	$(CC) $(OBJS) -o $(Name)


%.o :%.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< 

clean:
	rm -f $(OBJS)

fclean: clean
	-rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re
