# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macastan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 11:38:29 by macastan          #+#    #+#              #
#    Updated: 2024/01/15 11:38:31 by macastan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = 	main.cpp \
		ClapTrap.cpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	clear
	@echo "./fixed is ready!"

clean:
	@$(RM) $(OBJS)
	clear

fclean: clean
	@$(RM) $(NAME)
	clear
	@echo "All clean!"

re: fclean all
