/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 17:03:55 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/10 17:05:28 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb <= 1 || (nb % 2 == 0 && nb != 2))
		return (0);
	else
		while (i * i <= nb)
		{
			if (nb % i == 0)
				return (0);
			i += 2;
		}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int prim;

	prim = nb;
	while (ft_is_prime(prim) == 0)
	{
		prim++;
		ft_is_prime(prim);
	}
	return (prim);
}
