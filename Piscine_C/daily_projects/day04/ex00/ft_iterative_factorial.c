/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 10:33:03 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/10 11:36:23 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	i = 1;
	fact = 1;
	if (nb < 0 || nb > 12)
		fact = 0;
	else
		while (i <= nb)
		{
			fact = i * fact;
			i++;
		}
	return (fact);
}
