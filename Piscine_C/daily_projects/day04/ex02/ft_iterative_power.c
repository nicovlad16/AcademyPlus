/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 11:38:10 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/10 13:02:22 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int number;

	number = 1;
	if (power < 0)
		number = 0;
	else if (power == 0)
		number = 1;
	else
		while (power > 0)
		{
			number = number * nb;
			power = power - 1;
		}
	return (number);
}
