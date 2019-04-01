/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 16:51:53 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/28 19:12:30 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	int		i;

	len_little = ft_strlen(little);
	if (len_little == '\0')
		return (char *)big;
	i = 0;
	while (big[i] != '\0' && i <= (int)(len - len_little))
	{
		if (big[i] == little[0])
			if (!ft_strncmp(big + i, little, len_little))
				return (char *)(big + i);
		i++;
	}
	return (NULL);
}
