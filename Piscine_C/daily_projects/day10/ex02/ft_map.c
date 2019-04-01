/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:36:19 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/19 19:54:57 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, void (*f)(int))
{
	int i;
	int *tablou;

	i = 0;
	tablou = (int *)malloc(sizeof(int) * (length + 1));
	while (i < length)
	{
		f(tab[i]);
		tablou[i] = tab[i];
		i++;
	}
	return (tablou);
}
