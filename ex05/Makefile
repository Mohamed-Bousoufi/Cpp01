Name = Harl

SRCS = main.cpp Harl.cpp 
HEADERS = Harl.hpp


FLAGS =  -Wall -Wextra -Werror -std=c++98

all: $(Name)

$(Name): $(SRCS) $(HEADERS)
	c++ $(FLAGS) $(SRCS) -o $(Name)

clean:
	rm -f $(Name)

fclean: clean

re: fclean all

.PHONY: all clean fclean re