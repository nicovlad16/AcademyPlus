/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 12:53:37 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/29 12:21:27 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_reverse_string(char *sir)
{
	int		i;
	char	*rev;
	int		len;

	len = ft_strlen(sir);
	i = 0;
	rev = (char *)malloc(sizeof(char) * (len + 1));
	while (len > 0)
	{
		rev[i] = sir[len - 1];
		i++;
		len--;
	}
	rev[i] = '\0';
	return (rev);
}
