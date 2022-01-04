# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jylikarp <jylikarp@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 13:12:38 by jylikarp          #+#    #+#              #
#    Updated: 2022/01/03 20:41:36 by kone             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -f

FLAGS = -Wall -Wextra -Werror

AR = ar rcs

SRCS =	ft_bzero.c \
		ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_islower.c \
		ft_isupper.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memalloc.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memdel.c \
		ft_memmove.c \
		ft_memset.c \
		ft_nbramount.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strequ.c \
		ft_strjoin.c \
		ft_strnequ.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strncmp.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strcpy.c \
		ft_strnew.c \
		ft_strncpy.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strsub.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strsplit.c \
		ft_strtrim.c \
		ft_isspace.c \

OBJS = $(SRCS:.c =.o)

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(SRCS)
		$(AR) $(NAME) $(OBJS)

clean:
		$(RM) *.o 

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
