NAME = brainz

SRCS = ./src/main.cpp ./src/Zombie.cpp ./src/newZombie.cpp ./src/randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = g++ -std=c++98
CXXFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
