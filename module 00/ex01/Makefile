NAME = iDontKnow

SRCS = srcs/main.cpp \
	   srcs/Graph.cpp 

OBJ = $(SRCS:.cpp=.o)
CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

RED	=	\033[1;31m
YELLOW	=	\033[1;33m
RESET	=	\033[0m

all: $(NAME)

$(NAME): $(SRCS) $(OBJ)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "$(YELLOW)------done------$(RESET)"

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@


clean:
	
	rm -rf $(OBJ)
	@echo "$(YELLOW)Cleaned$(RESET)"

fclean: clean
	rm -rf $(NAME)

re: fclean all 

.PHONY:		all clean fclean re