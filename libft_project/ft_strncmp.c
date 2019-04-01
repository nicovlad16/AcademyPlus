/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 20:53:44 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/28 19:12:54 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while (s3[i] == s4[i] && s3[i] != '\0' && s4[i] != '\0' && i < n)
		i++;
	if (i == n)
		return (0);
	return (s3[i] - s4[i]);
}
