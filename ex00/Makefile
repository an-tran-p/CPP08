# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atran <atran@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/09 11:16:10 by atran             #+#    #+#              #
#    Updated: 2026/02/18 11:05:53 by atran            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++11

RM = rm -rf

all: $(NAME)

$(OBJS): %.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
