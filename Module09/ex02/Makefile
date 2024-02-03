# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romain <romain@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 11:44:03 by rofontai          #+#    #+#              #
#    Updated: 2024/02/03 14:52:10 by romain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ARGUMENTS--------------------------------------------------------------------

NAME	= PmergeMe

CC		= c++
CFLAGS	= -g -Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp		\

HEADER	=	PmergeMe.hpp	\
			PmergeMe.tpp	\

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

$(NAME)	:  $(OBJ_DIR) $(OBJ) $(HEADER)
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

#leak	: all
#	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

#leaks	: all
#	@leaks --atExit -- ./$(NAME)

.PHONY	: all clean fclean re #leaks leak

# https://rpn.startkoden.com/
