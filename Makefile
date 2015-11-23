# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msinca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 14:38:21 by msinca            #+#    #+#              #
#    Updated: 2015/11/23 14:44:33 by msinca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = *.c

OBJECTS = *.o

all :
		$(NAME)

$(NAME)
		gcc -c -wall -Werror -Wextra $(SOURCES)
		ar rvc $(NAME) $(OBJECTS)
		ranlib $(NAME)

clean :
		rm -f $(OBJECTS)

fclean :
		clean
		rm -f $(NAME)

re :
		fclean all
