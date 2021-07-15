# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/12 18:31:21 by Tsanuta           #+#    #+#              #
#    Updated: 2020/10/21 15:23:13 by user42           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS			=		megaphone.cpp

OBJS			= 		${SRCS:.cpp=.o}

NAME			=		megaphone

FLAGS			+=		-Wall -Wextra -Werror -Wconversion -std=c++98 -fsanitize=address

all				:		$(NAME)

%.o				:		%.cpp
						clang++ $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME)			:		$(OBJS)
						clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean			:
						rm -f $(OBJS)

fclean			:		clean
						rm -f $(NAME)

re				:		fclean all

.PHONY			:		all clean fclean re
