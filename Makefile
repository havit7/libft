# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/24 16:27:35 by javirodr          #+#    #+#              #
#    Updated: 2022/06/20 20:48:22 by javirodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_toupper.c \
ft_bzero.c ft_isascii.c	ft_strlen.c ft_isalnum.c \
ft_isdigit.c ft_memcpy.c ft_memset.c ft_tolower.c ft_memccpy.c \
ft_memmove.c ft_memchr.c ft_memcmp.c ft_strncmp.c ft_strlcpy.c \
ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_split.c ft_strlcat.c ft_itoa.c ft_putchar_fd.c ft_putnbr_fd.c \
ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putstr_fd.c ft_putendl_fd.c \
ft_lstmap.c

BONUSSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

OBJS = $(SRCS:.c=.o)

BONUSOBJS = $(BONUSSRCS:.c=.o)

all: $(NAME)

%.o: %.c
		$(CC) $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)
		rm -f $(BONUSOBJS)

fclean: clean
		rm -f libft.a

re: fclean all

bonus: $(NAME) $(BONUSOBJS)
		ar rcs $(NAME) $(BONUSOBJS)


.PHONY: all clean flean re
