# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 14:28:07 by adi-fort          #+#    #+#              #
#    Updated: 2023/01/27 15:46:09 by adi-fort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
FLAGS = -Werror -Wextra -Wall
SRCS = ft_isalpha.c ft_memmove.c ft_strlen.c ft_bzero.c ft_isdigit.c ft_memset.c ft_tolower.c ft_isascii.c  ft_isprint.c ft_toupper.c ft_isalnum.c ft_memcpy.c  ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c
OBJECTS = ${SRCS:.c=.o}
CC = gcc ${FLAGS}
NAME = libft.a
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BOBJECT = ${BONUS:.c=.o}
HEADER = ${NAME:.a=.h}

.o:.c
	${CC} -c $< -o ${<:.c=.o}

${NAME}:${OBJECTS}
	ar rc ${NAME} ${OBJECTS}
	ranlib ${NAME}

all: ${NAME}

bonus: ${BOBJECT}
	ar rc ${NAME} ${BOBJECT}
	ranlib ${NAME}

clean:
	rm -f ${OBJECTS} 
	rm -f ${BOBJECT}

fclean: clean
	rm -f ${NAME}

re: fclean all
