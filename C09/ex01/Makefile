# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdazero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/05 12:05:08 by abdazero          #+#    #+#              #
#    Updated: 2025/08/05 12:45:52 by abdazero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror 
AR = ar
ARFLAGS = rcs

SRCDIR = srcs
INCDIR = includes

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJ = $(addprefix $(SRCDIR)/, $(SRC:.c=.o))


NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/ft.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
