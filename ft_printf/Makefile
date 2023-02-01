# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvignoli <lvignoli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 15:36:54 by lvignoli          #+#    #+#              #
#    Updated: 2023/02/01 16:00:38 by lvignoli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wextra -Werror -Wall

NAME = libftprintf.a

SRCS = ft_puuts.c ft_puutxp.c ft_printf.c

OBJS = ${SRCS:.c=.o}

CC = gcc ${FLAGS}
RM = rm -f

.c.o:
	${CC} -g  -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} 
re: fclean all