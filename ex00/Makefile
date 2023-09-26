# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherbet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 20:34:13 by aherbet           #+#    #+#              #
#    Updated: 2023/05/17 20:34:19 by aherbet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		megaphone

SRC =		megaphone.cpp

OBJ =		$(SRC:.cpp=.o)

CFLAGS =	-Wall -Wextra -Werror -std=c++98

CC =		c++ $(CFLAGS)

RM =		rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $@
	@echo "[REPORT] $(NAME) assembled !"

%.o: %.cpp
	@$(CC) -c $< -o $@
	@echo "[REPORT] Object compiled !"

clean:
	@$(RM) $(OBJ)
	@echo "[INFO] Objects removed !"

fclean: clean
	@$(RM) $(NAME)
	@echo "[INFO] $(NAME) removed !"

re:	fclean all

.PHONY: all clean fclean re