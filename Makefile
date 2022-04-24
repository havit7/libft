# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/24 16:27:35 by javirodr          #+#    #+#              #
#    Updated: 2022/04/24 18:51:52 by javirodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_toupper.c \
ft_bzero.c ft_isascii.c	ft_strlen.c ft_isalnum.c \
ft_isdigit.c ft_memcpy.c ft_memset.c ft_tolower.c

CC = gcc
CCFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
RM = rm -f
TARGET = libft.a
INCLUDES = includes

BONUSSRCS =

BONUSOBJS = $(BONUSSRC:.c= .o)

all: $(TARGET)

${TARGET}: ${OBJS}
	ar rc ${TARGET} ${OBJS}

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean flean re
