# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jramos-a <jramos-a@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/14 05:35:31 by jramos-a          #+#    #+#              #
#    Updated: 2025/07/14 05:35:31 by jramos-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
OBJS = $(SRCS:.cpp=.o)

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp \
		WrongAnimal.cpp WrongCat.cpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) -o $@ $^

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
