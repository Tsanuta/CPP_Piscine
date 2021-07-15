# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olidon <olidon@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/12 18:31:21 by olidon            #+#    #+#              #
#    Updated: 2021/01/05 14:36:26 by olidon           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

HEADER			=		iter.hpp

SRCS			=		main.cpp

OBJS			= 		${SRCS:.cpp=.o}

NAME			=		iter

FLAGS			+=		-Wall -Wextra -Werror -Wconversion -std=c++98

all				:		$(NAME)

%.o				:		%.cpp $(HEADER)
						clang++ $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME)			:		$(OBJS)
						clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean			:
						rm -f $(OBJS)

fclean			:		clean
						rm -f $(NAME)

re				:		fclean all

.PHONY			:		all clean fclean re
