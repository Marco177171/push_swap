/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:20:17 by masebast          #+#    #+#             */
/*   Updated: 2022/06/20 14:51:16 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_min(int *array, int size)
{
	int	min;
	int	i;

	min = array[0];
	i = 1;
	while (i < size)
	{
		if (array[i] < min)
			min = array[i];
		i++;
	}
	return (min);
}

int	ft_findind(int nb, int *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (array[i] == nb)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_findindmin(int *array, int size)
{
	return (ft_findind(ft_min(array, size), array, size));
}
