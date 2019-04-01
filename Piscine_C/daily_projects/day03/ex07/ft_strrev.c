/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 11:05:49 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/09 12:11:55 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	*ft_strrev(char *str)
{
	int i;
	int p;
	char string[p];

	i = '\0';
	p = 0;
	while (i != *str)
	{
		string[p] = str[i];

		p++;
		i--;
		ft_putchar(p);
	}
	return (string);
}

int main()
{
	char st[5] =  "hello";
	ft_strrev(st);
	return (0);
}




