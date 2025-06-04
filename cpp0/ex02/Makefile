# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jazarago <jazarago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/04 12:01:27 by jazarago          #+#    #+#              #
#    Updated: 2025/06/04 12:01:51 by jazarago         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = logs
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS = Account.cpp tests.cpp 
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