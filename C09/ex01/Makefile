# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 21:24:53 by rade-sar          #+#    #+#              #
#    Updated: 2021/09/29 16:35:41 by rade-sar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_strlen.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_swap.c

OBJ = ${SRC:.c=.o}

NAME = libft.a

HEAD = includes

GCC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rc

RANLIB = ranlib

.c.o:
		${GCC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

${NAME}: ${OBJ}
	${AR} ${NAME} ${OBJ}
	${RANLIB} ${NAME}

all: ${NAME}

clean: 
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME} 

re:	fclean all

.PHONY: all fclean clean re
