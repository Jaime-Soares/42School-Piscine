/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: disantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:59:09 by disantos          #+#    #+#             */
/*   Updated: 2022/09/02 12:21:34 by disantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char **argv, int size, int s)
{
	int	i;

	while (s < size)
	{
		i = 0;
		while (argv[s][i])
			i++;
		write(1, argv[s], i);
		write(1, "\n", 1);
		s++;
	}
}

void	ft_swap(char **s1, char **s2)
{
	char	*a;

	a = *s1;
	*s1 = *s2;
	*s2 = a;
}

int	main(int size, char **argv)
{
	int	i;
	int	s;

	s = 1;
	if (size < 2)
		return (0);
	while (s < size - 1)
	{
		i = 0;
		if (argv[s][i] == argv[s + 1][i])
		{
			while ((argv[s][i] || argv[s + 1][i])
			&& (argv[s][i] == argv[s + 1][i]))
				i++;
		}
		if (argv[s][i] > argv[s + 1][i])
		{
			ft_swap(&argv[s], &argv[s + 1]);
			s = 0;
		}
		s++;
	}
	ft_putchar(argv, size, 1);
}
