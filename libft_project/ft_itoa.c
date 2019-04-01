/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 14:03:26 by nvlad             #+#    #+#             */
/*   Updated: 2017/12/28 19:05:39 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		lungime(int n)
{
	int i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
		i++;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char		*get_min_value(void)
{
	char *sir;

	sir = (char *)malloc(sizeof(char) * 11);
	sir[0] = '-';
	sir[1] = '2';
	sir[2] = '1';
	sir[3] = '4';
	sir[4] = '7';
	sir[5] = '4';
	sir[6] = '8';
	sir[7] = '3';
	sir[8] = '6';
	sir[9] = '4';
	sir[10] = '8';
	sir[11] = '\0';
	return (sir);
}

char			*ft_itoa(int n)
{
	char	*sir;
	int		i;
	int		sign;

	i = 0;
	sir = (char *)malloc(sizeof(char) * (lungime(n) + 1));
	if (sir == NULL)
		return (NULL);
	if (n == -2147483648)
		return (sir = get_min_value());
	if ((sign = n) < 0)
		n = -n;
	if (n == 0)
		sir[i++] = '0';
	while (n != 0)
	{
		sir[i++] = n % 10 + '0';
		n = n / 10;
	}
	if (sign < 0)
		sir[i++] = '-';
	sir[i] = '\0';
	sir = ft_reverse_string(sir);
	return (sir);
}
