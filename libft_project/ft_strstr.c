/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 21:33:33 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/22 20:55:41 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t n;

	if (*little == '\0')
		return (char *)big;
	n = ft_strlen(little);
	while (*big)
		if (!ft_memcmp(big++, little, n))
			return (char *)(big - 1);
	return (NULL);
}
