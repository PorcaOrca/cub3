# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 10:47:43 by lodovico          #+#    #+#              #
#    Updated: 2021/02/16 11:09:14 by lodovico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_color.c

NAME	=	cub3.a

CCFLAG	=	-Wall -Werror -Wextra

CC		=	gcc

OBJCS	=	$(SRCS:.c=.o)

$(NAME):	$(OBJCS)
			ar -rc $(NAME) $(OBJCS)
			ranlib $(NAME)

all:		$(NAME)

clean:
			rm -f $(OBJCS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re