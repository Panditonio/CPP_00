# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherbet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 20:19:34 by aherbet           #+#    #+#              #
#    Updated: 2023/05/24 20:19:41 by aherbet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		account

SRCS =		Account.cpp tests.cpp

OBJS =		$(SRCS:.cpp=.o)

CFLAGS =	-Wall -Wextra -Werror -std=c++98

CC =		c++ $(CFLAGS)

RM =		rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $@
	@echo "[REPORT] $(NAME) assembled !"

%.o: %.cpp
	@$(CC) -c $< -o $@
	@echo "[REPORT] Object compiled !"

clean:
	@$(RM) $(OBJS)
	@echo "[REPORT] Objects cleaned !"

fclean: clean
	@$(RM) $(NAME)
	@echo "[REPORT] $(NAME) cleaned !"

re:	fclean all

.PHONY: all clean fclean re