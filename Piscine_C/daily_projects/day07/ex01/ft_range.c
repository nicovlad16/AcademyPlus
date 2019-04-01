/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 16:20:10 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/14 19:44:55 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *a;

	i = 0;
	if (min >= max)
	{
		a = malloc(1);
		a[0] = '\0';
		return (a);
	}
	a = malloc(max - min);
	while (i < max - min)
	{
		a[i] = min + i;
		i++;
	}
	a[i] = '\0';
	return (a);
}
