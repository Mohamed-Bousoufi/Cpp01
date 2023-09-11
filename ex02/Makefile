Name = Brain

SRCS = main.cpp 


FLAGS =  -Wall -Wextra -Werror

all: $(Name)

$(Name): $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $(Name)

clean:
	rm -f $(Name)

fclean: clean

re: fclean all

.PHONY: all clean fclean re