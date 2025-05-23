# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migusant <migusant@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/10 18:13:33 by migusant          #+#    #+#              #
#    Updated: 2025/05/13 16:10:59 by migusant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES = ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strdup.c ft_strlen.c\
	ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_memcmp.c ft_memcpy.c\
	ft_memmove.c ft_memset.c ft_memchr.c ft_bzero.c ft_atoi.c\
	ft_calloc.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	ft_isprint.c ft_toupper.c ft_tolower.c ft_substr.c ft_strjoin.c\
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OFILES = $(CFILES:.c=.o)

BCFILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BOFILES = $(BCFILES:.c=.o)

CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OFILES)
	$(AR) $(NAME) $(OFILES)

bonus: $(NAME) $(BOFILES)
	$(AR) $(NAME) $(BOFILES)

$(OFILES): $(CFILES)
	$(CC) $(FLAGS) -c $^

$(BOFILES): $(BCFILES)
	$(CC) $(FLAGS) -c $^

clean:
	$(RM) $(OFILES) $(BOFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
