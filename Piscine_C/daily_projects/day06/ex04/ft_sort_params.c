/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 18:38:33 by nvlad             #+#    #+#             */
/*   Updated: 2017/09/13 20:50:14 by nvlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_compar(char *s1, char *s2)
{
	int				i;
	unsigned char	*s3;
	unsigned char	*s4;

	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	i = 0;
	while (s3[i] == s4[i] && s3[i] != '\0' && s4[i] != '\0')
		i++;
	return (s3[i] - s4[i]);
}

void	ft_afisare(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*copy;

	copy = "";
	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_compar(argv[i], argv[j]) > 0)
			{
				copy = argv[i];
				argv[i] = argv[j];
				argv[j] = copy;
			}
			j++;
		}
		i++;
	}
	ft_afisare(argc, argv);
	return (0);
}
