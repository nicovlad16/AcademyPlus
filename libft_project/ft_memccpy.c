/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 16:57:55 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/22 19:15:30 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dp;
	unsigned char	*sp;
	size_t			i;
	unsigned char	x;

	dp = (unsigned char *)dest;
	sp = (unsigned char *)src;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((*dp++ = *sp++) == x)
			return (dp);
		i++;
	}
	return (NULL);
}
