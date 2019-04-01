/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 21:17:18 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/28 17:31:06 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t stop;

	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	stop = i;
	while (src[i - stop] != 0 && i < size - 1)
	{
		dst[i] = src[i - stop];
		i++;
	}
	if (stop < size)
		dst[i] = '\0';
	return (stop + ft_strlen(src));
}
