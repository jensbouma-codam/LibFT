# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jbouma <jbouma@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/10 14:09:40 by jbouma        #+#    #+#                  #
#    Updated: 2022/11/21 17:45:56 by jbouma        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#	Output
NAME 		= 	libft.a

# Compiler setup
CC 			= gcc
FLAGS 		= -Werror -Wall -Wextra

# Files to include
INC			=	./libft.h

OBJDIR		=	./obj/

# Sources
BASE_SRC	=	ft_isalpha.c	\
				ft_isdigit.c	\
				ft_isalnum.c	\
				ft_isascii.c	\
				ft_isprint.c	\
				ft_strlen.c		\
				ft_memset.c		\
				ft_bzero.c		\
				ft_memcpy.c		\
				ft_memmove.c	\
				ft_strlcpy.c	\
				ft_strlcat.c	\
				ft_toupper.c	\
				ft_tolower.c	\
				ft_strchr.c		\
				ft_strrchr.c	\
				ft_strncmp.c	\
				ft_memchr.c		\
				ft_memcmp.c		\
				ft_strnstr.c	\
				ft_atoi.c		\
				ft_calloc.c		\
				ft_strdup.c		\
				ft_substr.c		\
				ft_strjoin.c	\
				ft_strtrim.c	\
				ft_split.c		\
				ft_itoa.c		\
				ft_strmapi.c	\
				ft_striteri.c	\
				ft_putchar_fd.c \
				ft_putstr_fd.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c	\

# Bonus Sources
BONUSSRC	=	ft_lstnew_bonus.c		\
				ft_lstadd_front_bonus.c	\
				ft_lstsize_bonus.c		\
				ft_lstlast_bonus.c		\
				ft_lstadd_back_bonus.c	\
				ft_lstdelone_bonus.c	\
				ft_lstclear_bonus.c		\
				ft_lstiter_bonus.c		\
				ft_lstmap_bonus.c		\

ifdef WITH_BONUS
	SRC		= 	$(BASE_SRC) $(BONUSSRC)
else
	SRC		= 	$(BASE_SRC)
endif

OBJ			=	$(SRC:%.c=$(OBJDIR)%.o)

$(NAME): $(OBJ)
	@ar -rcs $@ $^
	@echo "Update > $@"

all:
	@$(MAKE) WITH_BONUS=1 $(NAME)

bonus: all

norm: $(SRC)$(BONUSSRC)
	@norminette $^

clean:
	@rm -rf $(OBJDIR)
	@echo "Force removed $(OBJDIR)"

fclean:
	@rm -rf $(OBJDIR)
	@rm -rf $(NAME)
	@echo "Force removed $(NAME) and $(OBJDIR)"

re: fclean all

$(OBJDIR)%.o:%.c
	@mkdir -p $(dir $@)
	@echo "Compile $<"
	@$(CC) $(FLAGS) -I $(INC) -c $< -o $@
