# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agallon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 14:57:56 by agallon           #+#    #+#              #
#    Updated: 2023/11/12 15:15:58 by agallon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CFLAGS	=	-Wall -Werror -Wextra

SRC		=	ft_atoi.c	ft_itoa.c	ft_memcmp.c	ft_split.c	ft_strmapi.c \
	ft_bzero.c	ft_memcpy.c	ft_strchr.c	ft_strncmp.c \
	ft_calloc.c	ft_memmove.c	ft_strdup.c	ft_strnstr.c \
	ft_isalnum.c	ft_memset.c	ft_striteri.c	ft_strrchr.c \
	ft_isalpha.c	ft_putchar_fd.c	ft_strjoin.c	ft_strtrim.c \
	ft_isascii.c	ft_putendl_fd.c	ft_strlcat.c	ft_substr.c \
	ft_isdigit.c	ft_putnbr_fd.c	ft_strlcpy.c	ft_tolower.c \
	ft_isprint.c	ft_memchr.c	ft_putstr_fd.c	ft_strlen.c	ft_toupper.c

BONUS	=	ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c	ft_lstadd_back.c \
	ft_lstiter.c	ft_lstdelone.c	ft_lstmap.c	ft_lstclear.c

OBJ	=	$(SRC:.c=.o)
BONUSOBJ = $(BONUS:.c=.o)


all: $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BONUSOBJ)

$(NAME):	$(OBJ)
		$(AR) -rcs $(NAME) $(OBJ)
		
bonus: $(OBJ) $(BONUSOBJ)
		$(AR) -rcs $(NAME) $(OBJ) $(BONUSOBJ)

clean:
		rm -f $(OBJ) $(BONUSOBJ)
fclean:	clean
		rm -f $(NAME)
re: fclean all

#re: fclean $(NAME)

# youpi.c foobar(c) => foobar(obj => pseudo compilation( pas linke entre les fichiers objs)) => youpi.o
#
#fichier1.o ... fichierN.o => tout linker => ton binaire
#
#fichier.o ... fichierN.o => tout link enssemble => juste deposer une interface
#
#.a ajouter a ta compilation ils sont ajout2 a ta stack => doit recopier la memoire pour chaque programe
#.so pas ajouter a ta stack  => permet a plusieur persone d'utiliser la meme lib

