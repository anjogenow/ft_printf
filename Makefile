# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agenow <agenow@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 13:00:59 by agenow            #+#    #+#              #
#    Updated: 2024/05/11 13:29:13 by agenow           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= $(wildcard *.c)
OBJS            = $(SRCS:.c=.o)
CC		= cc
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror
NAME		= libftprintf.a
all: $(NAME)
	$(CC) $(CFLAGS) $(SRS) -o $(NAME)
clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
