# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luguilla <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 18:52:50 by luguilla          #+#    #+#              #
#    Updated: 2022/01/06 11:19:04 by luguilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= sources/ft_get_flags.c sources/ft_printf_utils.c sources/ft_puthex.c \
	  sources/ft_putptr.c sources/ft_putuint.c

OBJS = $(SRCS:.c=.o)

HEADER = ./

CC = gcc

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -o $@ -I $(HEADER) -c $<

$(NAME) : $(OBJS)
	ar rc $@ $^

bonus : $(OBJS) $(BOBJS)
	ar rc $(NAME) $^

clean :
	rm -rf $(OBJS) $(BOBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY:	all clean fclean re
