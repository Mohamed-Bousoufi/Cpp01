Name = Zombie

SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp 
CC = c++
HEADERS = Zombie.hpp
FLAGS =  -Wall -Wextra -Werror -std=c++98


OBJS =$(SRCS:.cpp=.o)

all: $(Name)



$(Name) : $(OBJS)
	$(CC) $(OBJS) -o $(Name)


%.o :%.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	-rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re
