# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masebast <masebast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 16:35:31 by masebast          #+#    #+#              #
#    Updated: 2022/06/20 14:51:19 by masebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS = checker
SRC = check.c main.c swap.c push.c rotate.c rev_rotate.c utility.c find.c findcomb.c movecount.c initializer.c
SRC_CHECK = check.c checker.c swap.c push.c rotate.c rev_rotate.c utility.c initializer.c
FLAG = -Wall -Wextra -Werror
LIBFT = libft/libft.a

$(NAME):
		make re -C libft
		gcc $(FLAG) -o $(NAME) $(SRC) $(LIBFT)

bonus:
		make re -C libft
		gcc $(FLAG) -o $(BONUS) $(SRC_CHECK) $(LIBFT)

all:	$(NAME) bonus

clean:
		rm -f $(NAME) $(BONUS) $(LIBFT)

fclean:	clean
		make fclean -C libft

re:		fclean all

.PHONY:	all clean fclean re