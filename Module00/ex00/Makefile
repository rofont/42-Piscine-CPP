# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 12:20:13 by rofontai          #+#    #+#              #
#    Updated: 2023/10/25 12:38:29 by rofontai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ARGUMENTS--------------------------------------------------------------------

NAME	= megaphone

CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= megaphone.cpp \

OBJ_DIR	= ./obj
OBJ		= $(SRC:.c=.o)

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

/%.o	: /%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$G Compilation : $Z $(notdir $<)"$W

$(NAME)	: $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(DIR_OBJ)	:
	@mkdir -p $@

clean	:
	@echo $RCLEAN	DONE$W
#	@echo rm -rf $(OBJ_DIR)

fclean	: clean
	@rm -rf $(NAME)
	@echo $RFCLEAN	DONE$W

re	: flcean all

.PHONY	: all clean fclean re