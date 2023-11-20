# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 11:44:03 by rofontai          #+#    #+#              #
#    Updated: 2023/11/20 10:42:00 by rofontai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ARGUMENTS--------------------------------------------------------------------

NAME	= 

CC		= g++
CFLAGS	= -g -Wall -Wextra -Werror -std=c++98

SRC		= $(wildcard *.cpp)

OBJ_DIR	= ./obj
OBJ		= $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

# COLORS-----------------------------------------------------------------------

R = $(shell tput -Txterm setaf 1)
G = $(shell tput -Txterm setaf 2)
W = $(shell tput -Txterm setaf 7)
C = $(shell tput -Txterm setaf 6)
Y = $(shell tput -Txterm setaf 3)
Z = $(shell tput -Txterm setaf 5)

# RULES------------------------------------------------------------------------

all	: $(NAME)
	@echo "\n$C$(NAME) ready$W\n";

$(OBJ_DIR)/%.o	: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$GCompilation : $Z $(notdir $<)"$W

$(NAME)	:  $(OBJ_DIR) $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)	:
	@mkdir -p $@

clean	:
	@echo "\n$RClean$W"
	@rm -rf $(OBJ_DIR)

fclean	: clean
	@rm -rf $(NAME)
	@echo "$RFclean$W\n"

re	: fclean all

leak	:
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

leaks	:
	@leaks --atExit -- ./$(NAME)

.PHONY	: all clean fclean re leaks leak
