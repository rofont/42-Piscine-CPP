# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romain <romain@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 12:20:13 by rofontai          #+#    #+#              #
#    Updated: 2023/10/26 19:07:55 by romain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ARGUMENTS--------------------------------------------------------------------

NAME	= megaphone

CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

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
	@echo $RClean$W
	@rm -rf $(OBJ_DIR)

fclean	: clean
	@rm -rf $(NAME)
	@echo $RFclean$W

re	: fclean all

.PHONY	: all clean fclean re