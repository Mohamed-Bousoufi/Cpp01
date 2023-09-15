Name = harlFilter

SRCS = main.cpp Harl.cpp 
HEADERS = Harl.hpp

CC = c++
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