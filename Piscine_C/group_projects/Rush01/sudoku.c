/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caduma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 20:45:58 by caduma            #+#    #+#             */
/*   Updated: 2017/09/16 21:13:39 by caduma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	afisare(int s[9][9])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			c = s[i][j] + '0';
			write(1, &c, 1);
			c = ' ';
			write(1, &c, 1);
			j++;
		}
		c = '\n';
		write(1, &c, 1);
		i++;
	}
}

int		linii(int s[9][9], int nr, int col, int functie)
{
	int i;

	if (functie == 1)
	{
		i = 0;
		while (i < 9)
		{
			if (s[i][col] == nr)
				return (1);
			i++;
		}
		return (0);
	}
	else
	{
		i = 0;
		while (i < 9)
		{
			if (s[col][i] == nr)
				return (1);
			i++;
		}
		return (0);
	}
}

int		patrat(int s[9][9], int nr, int r, int c)
{
	int i;
	int j;
	int imax;
	int jmax;

	imax = 0;
	jmax = 0;
	if (r >= 0 && r <= 2)
		imax = 2;
	else if (r >= 3 && r <= 5)
		imax = 5;
	else if (r >= 6 && r <= 8)
		imax = 8;
	if (c >= 0 && c <= 2)
		jmax = 2;
	else if (c >= 3 && c <= 5)
		jmax = 5;
	else if (c >= 6 && c <= 8)
		jmax = 8;
	i = imax - 2;
	while (i <= imax)
	{
		j = jmax - 2;
		while (j <= jmax)
		{
			if (s[i][j] == nr)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	solve(int s[9][9], int r, int c, int *rezolvare)
{
	int i;

	i = 1;
	if(s[r][c] == 0)
	{
		while(i < 10)
		{
			if (!linii(s, i, r, 1) && !linii(s, i, c, 2) && !patrat(s, i, r, c))
			{
				s[r][c] = i;
				if(r == 8 && c == 8)
					{
						afisare(s);
						*rezolvare = 1;
					}
				else if(c == 8) 
					solve(s, r + 1, 0, rezolvare);
				else
					solve(s, r, c + 1, rezolvare);
			}
			i++;
		}
		s[r][c] = 0;
	}
	else if(r == 8 && c == 8)
	{	
		afisare(s);
		*rezolvare = 1;
	}
	else if(c == 8) 
		solve(s, r + 1, 0, rezolvare);
	else 
		solve(s, r, c + 1, rezolvare);	
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int s[9][9];
	int rez;

	//afisare(s);
	rez = 0;
	if (argc != 10)
	{
		write(1, &"Error\n", 6);
		return (0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] == '.')
					s[i - 1][j] = 0;
				else
					s[i - 1][j] = argv[i][j] - '0';
				j++;
				if (j > 9)
				{
					write(1, &"Error\n", 6);
					return (0);
				}
			}
		i++;
		}
	}
	solve(s, 0, 0, &rez);
	if (rez != 1)
		write(1, &"Error\n", 6);
	return (0);
}
