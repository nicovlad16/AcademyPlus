/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 16:11:53 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/22 19:57:10 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *sir;

	if (len == 0)
		return (b);
	sir = (unsigned char *)b;
	while (len)
	{
		*sir = (unsigned char)c;
		sir++;
		len--;
	}
	return (b);
}
