# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plagache <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/20 11:38:02 by plagache          #+#    #+#              #
#    Updated: 2019/05/23 16:42:35 by plagache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strlen.c \
	  ft_strdup.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_islower.c \
	  ft_isupper.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_memalloc.c \
	  ft_memdel.c \
	  ft_strnew.c \
	  ft_strdel.c \
	  ft_strclr.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_strsub.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_strsplit.c \
	  ft_itoa.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putendl.c \
	  ft_putnbr.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_lstnew.c \
	  ft_lstdelone.c \
	  ft_lstdel.c \
	  ft_lstadd.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_2lstnew.c \
	  ft_2lstaddstrt.c \
	  ft_2lstaddend.c \
	  ft_2lstdelone.c \
	  get_next_line.c \

SRCS = $(addprefix srcs/,$(SRC))

OBJECT = $(addprefix out/,$(SRC:.c=.o))

HEADER = includes/libft.h

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJECT)
	@ar rcs $(NAME) $(OBJECT)
	@echo "\033[35mmake done\033[0m"

out/%.o : srcs/%.c
	@mkdir -p out
	@gcc -I includes -o $@ -c $<

clean :
	@rm -rf out
	@echo "\033[35mclean done\033[0m"

fclean :clean
	@rm -f $(NAME)
	@echo "\033[35mfclean done\033[0m"

re : fclean all
	@echo "\033[35mre done\033[0m"

.PHONY : all clean fclean re
