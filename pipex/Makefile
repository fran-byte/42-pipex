# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frromero <frromero@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 21:12:48 by frromero          #+#    #+#              #
#    Updated: 2024/12/22 12:22:05 by frromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME = pipex

# Define source files
SRCS = ./src/pipex.c ./src/utils.c ./src/get_path.c

LIB = libft/libft.a

# Define the compiler
CC = cc

# Enable common and extra compiler warnings and treat them as errors
CFLAGS = -Wall -Wextra -Werror -I inc -I libft

# Define object files
OBJS = $(SRCS:./src/%.c=./src/%.o)

# Define the include directory for header files
INCLUDE = ./inc/pipex.h

# Default rule to build the program
all: ${NAME}

# Links the object files and creates the executable
${NAME}: ${OBJS}
	@$(MAKE) -C libft  -s
	@${CC} ${CFLAGS} ${OBJS} $(LIB) -o ${NAME}  # Crear ejecutable
	@echo "\n✨ Created $(NAME) ✨\n"

# Compile .c files into .o files
./src/%.o: ./src/%.c
	@echo "◎ Compiling 👽 → $<"
	@${CC} ${CFLAGS} -c $< -o $@

# Clean up object files
clean:
	@${RM} ${OBJS}
	@echo "\n✨ All objects cleaned successfully 🚀 ✨\n"

# Clean up object files, dependencies, and the executable
fclean: clean
	@$(MAKE) -C libft fclean -s
	@${RM} ${NAME}
	@echo "\n✨ 🚀 Objects and executables cleaned ✨\n"

# Rebuild the program from scratch
re: fclean all

# Mark rules as not corresponding to real files
.PHONY: all clean fclean re
