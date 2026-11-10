NAME		:= violence
C++			:= c++
C++FLAGS	:= -Wall -Wextra -Werror -std=c++98
RM			:= rm -f

SRCS		:=  main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS		:= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(C++FLAGS) $(OBJS) -o $(NAME)
	@echo "✓ $(NAME) compiled successfully!"

%.o: %.cpp
	$(C++) $(C++FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
