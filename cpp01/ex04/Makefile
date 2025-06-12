# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/12 11:04:06 by jazarago          #+#    #+#              #
#    Updated: 2025/06/12 13:34:11 by jazarago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re