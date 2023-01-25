# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 16:37:33 by lvignoli          #+#    #+#              #
#    Updated: 2023/01/18 19:03:23 by lvignoli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
FLAGS = -Wextra -Werror -Wall

NAME = libft.a

SRCS = ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_itoa.c ft_memcmp.c ft_memmove.c ft_split.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_strtrim.c ft_tolower.c ft_bzero.c \
	   ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strjoin.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_substr.c ft_toupper.c  ft_strmapi.c ft_striteri.c \
	   ft_putchar_fd.c ft_putstr_fd.c void	ft_putendl_fd.c ft_putnbr_fd.c \
	   
BONUS = \

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CC = gcc ${FLAGS}
RM = rm -f

.c.o:
	${CC} -g  -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}
	ranlib ${NAME}

bonus:	${OBJSBONUS}
		ar rcs ${NAME} ${OBJSBONUS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
re: fclean all
