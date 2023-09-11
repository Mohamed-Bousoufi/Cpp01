Name = Sed

SRCS = main.cpp create_file.cpp replace.cpp
HEADERS = Sed.hpp


FLAGS =  -Wall -Wextra -Werror

all: $(Name)

$(Name): $(SRCS) $(HEADERS)
	c++ $(FLAGS) $(SRCS) -o $(Name)

clean:
	rm -f $(Name)

fclean: clean

re: fclean all

.PHONY: all clean fclean re