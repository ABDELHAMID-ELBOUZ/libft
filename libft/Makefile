# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 11:19:35 by aelbouz           #+#    #+#              #
#    Updated: 2024/11/16 12:19:18 by aelbouz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

SRCS =  ft_isalnum.c ft_isalpha.c ft_isprint.c ft_isdigit.c ft_memcpy.c ft_putendl_fd.c ft_strdup.c ft_strlen.c ft_strtrim.c ft_atoi.c ft_itoa.c \
ft_memmove.c ft_putnbr_fd.c ft_strjoin.c ft_strncmp.c ft_substr.c ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c \
ft_strlcat.c ft_strnstr.c ft_tolower.c ft_calloc.c ft_memcmp.c ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c \
ft_toupper.c ft_striteri.c ft_strmapi.c ft_split.c \

BONUS_SRCS = ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstnew_bonus.c \
ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c \

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)
<<<<<<< HEAD
	
bonus :  $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)
	
=======

bonus : $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

>>>>>>> 3758e9e3bbb2a08fdd38ee5f5b7a626af320fdfb
%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all