# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 15:18:43 by frromero          #+#    #+#              #
#    Updated: 2024/09/30 15:18:43 by frromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variables
FLAG = -Wall -Wextra -Werror
NAME = libft.a
CC = cc
RM = rm -f
AR = ar rcs

# mandatory files
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# bonus files
BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# objects
OBJ = ${SRC:.c=.o}
BONUS_OBJ = ${BONUS_SRC:.c=.o}

# rules ---------------------------------------------
all: ${NAME}

# create the library from object files
${NAME}: ${OBJ}
	@${AR} ${NAME} ${OBJ}
	@echo "\n✨ library libft created ✨\n"

# compile the bonus part
bonus: ${BONUS_OBJ}
	@${AR} ${NAME} ${BONUS_OBJ}

# compile source files into object files
%.o: %.c
	@${CC} ${FLAG} -c $< -o $@

# remove object files
clean:
	@${RM} ${OBJ} ${BONUS_OBJ}

# remove object files and the library
fclean: clean
	@${RM} ${NAME}

# rebuild everything (clean and then compile everything)
re: fclean all

# prevent conflicts with files named like them
.PHONY: all clean fclean re bonus
