# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lvelimir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 18:33:22 by lvelimir          #+#    #+#              #
#    Updated: 2019/04/11 18:33:49 by lvelimir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ME = libft.a

SRC = ft_*.c

OBJECTS = ft_*.o

HEADERS = libft.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	    gcc $(FLAGS) -c $(SRC) -I $(HEADERS)
		ar -rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

clean:
	    rm -f ft_*.o

fclean: clean
	    rm -f $(NAME)

re: fclean all
