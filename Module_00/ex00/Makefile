NAME = megaphone

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = megaphone.cpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	clear
	@echo "./megaphone is ready!"

clean:
	@$(RM) $(OBJS)
	clear

fclean: clean
	@$(RM) $(NAME)
	clear
	@echo "All clean!"

re: fclean all
