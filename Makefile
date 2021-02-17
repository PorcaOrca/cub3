# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lodovico <lodovico@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/16 10:47:43 by lodovico          #+#    #+#              #
#    Updated: 2021/02/17 08:59:15 by lodovico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	$(CM)/ft_color.c\
			$(CM)/ft_shade.c\
			$(CM)/ft_get_r.c\
			$(CM)/ft_get_g.c\
			$(CM)/ft_get_b.c\
			$(CM)/ft_invert.c\
			$(IM)/ft_img_init.c\
			$(IM)/ft_img_pixel_put.c

CM		=	color_manage

IM		=	img_manage

NAME	=	cub3.a

CCFLAG	=	-Wall -Werror -Wextra

CC		=	gcc

OBJCS	=	$(SRCS:%.c=%.o)

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