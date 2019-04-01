/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 15:30:29 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/12 18:47:27 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cautare(char *str, char *to_find, int j)
{
	int k;
	int x;

	k = 0;
	while (str[j] != '\0')
	{
		if (str[j] == to_find[0])
		{
			x = 1;
			while (to_find[k] != '\0' && x != 0)
			{
				if (str[j + k] == to_find[k])
					k++;
				else
					x = 0;
			}
			if (to_find[k] == '\0' && x == 1)
				return (1);
		}
		j++;
	}
	return (-1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;
	char	*c;

	i = 0;
	j = 0;
	k = 0;
	while (to_find[k] != '\0')
		k++;
	if (k == 0)
		return (str);
	if (k == 1 && str[0] == to_find[0])
		return (&str[0]);
	j = cautare(str, to_find, 0);
	if (j != -1)
	{
		c = &str[j];
		return (c);
	}
	else
		return (0);
}
