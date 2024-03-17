NAME = divideAndConquer

BONUS_SRCS = srcs/Bank_bonus.cpp \
			 srcs/main_bonus.cpp

SRCS = srcs/main.cpp \
	   srcs/Bank.cpp \
	   srcs/Account.cpp

OBJ = $(SRCS:.cpp=.o)
OBJ_BONUS = $(BONUS_SRCS:.cpp=.o)
CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

RED	=	\033[1;31m
YELLOW	=	\033[1;33m
RESET	=	\033[0m

all: $(NAME)

$(NAME): $(SRCS) $(OBJ)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "$(YELLOW)------done------$(RESET)"

bonus: $(OBJ_BONUS)
	$(CC) $(FLAGS) $(OBJ_BONUS) -o $(NAME)_bonus
	@echo "$(YELLOW)------bonus done------$(RESET)"

%.o: %.cpp
	$(CC) -c $(FLAGS) $< -o $@

clean_bonus:
	rm -rf $(OBJ_BONUS)
	@echo "$(YELLOW)Cleaned bonus$(RESET)"

clean:
	
	rm -rf $(OBJ) 
	@echo "$(YELLOW)Cleaned$(RESET)"

fclean: clean
	rm -rf $(NAME)

re: fclean all 

.PHONY:		all clean fclean re bonus clean_bonus