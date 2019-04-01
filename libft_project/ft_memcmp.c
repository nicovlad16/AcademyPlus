/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 14:53:50 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/16 17:35:07 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1;
	const unsigned char *p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		else
		{
			p1++;
			p2++;
		}
		n--;
	}
	return (0);
}
