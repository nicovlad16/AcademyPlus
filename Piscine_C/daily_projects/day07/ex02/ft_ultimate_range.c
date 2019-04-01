/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 19:51:52 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/14 20:04:34 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int val;
	int *str;

	str = NULL;
	*range = str;
	i = 0;
	if (min >= max)
		return (0);
	else
	{
		str = (int *)malloc(4 * (max - min));
		val = min;
		while (val < max)
		{
			str[i] = val;
			i++;
			val++;
		}
		*range = str;
		return (i);
	}
}
