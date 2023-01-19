# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adi-fort <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 14:28:07 by adi-fort          #+#    #+#              #
#    Updated: 2023/01/18 10:43:01 by adi-fort         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
FLAGS = -Werror -Wextra -Wall
SRCS = ft_isalpha.c ft_memmove.c ft_strlen.c ft_bzero.c   ft_isdigit.c ft_memset.c  ft_tolower.c ft_iascii.c  ft_isprint.c ft_toupper.c ft_isalnum.c ft_memcpy.c  ft_strlcpy.c
OBJECTS = ${SRCS:.c=.o}
CC = gcc ${FLAGS}
NAME = libft.a
HEADER = ${NAME:.a=.h}

.o:.c
	${CC} -c $< -o ${<:.c=.o}        # voglio scrivere istruzione per compilare il file .c(sorgente) in file .o(oggetto)
${NAME}:${OBJECTS}					 # voglio costruire la libreria tramite il comando shell ar rc
	ar rc ${NAME} ${OBJECTS}
	ranlib ${NAME}                   # sto indicizzando la libreria
all: ${NAME}	

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all
