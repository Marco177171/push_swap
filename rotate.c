/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:50:57 by masebast          #+#    #+#             */
/*   Updated: 2022/06/20 14:51:25 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(int *ar, int size)
{
	int	temp;
	int	i;

	if (size <= 1)
		ft_error();
	size -= 1;
	i = 0;
	temp = ar[0];
	while (i < size)
	{
		ar[i] = ar[i + 1];
		i++;
	}
	ar[size] = temp;
}

void	ft_rotate_a(t_struct *data)
{
	write(1, "ra\n", 3);
	ft_rotate(data->ar_a, data->size_a);
}

void	ft_rotate_b(t_struct *data)
{
	write(1, "rb\n", 3);
	ft_rotate(data->ar_b, data->size_b);
}

void	ft_rotate_r(t_struct *data)
{
	write(1, "rr\n", 3);
	ft_rotate(data->ar_a, data->size_a);
	ft_rotate(data->ar_b, data->size_b);
}
