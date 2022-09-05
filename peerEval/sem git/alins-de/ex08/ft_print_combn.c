/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alins-de <alins-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:00:28 by alins-de          #+#    #+#             */
/*   Updated: 2022/08/23 12:44:27 by alins-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}	

void	ft_print(int *num, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(num[i] + '0');
		i++;
	}
}

void	ft_increment(int *num, int n, int idx)
{
	int	i;

	num[idx]++;
	i = idx + 1;
	while (i < n)
	{
		num[i] = num[i - 1] + 1;
		i++;
	}
}

int	ft_get_index(int *num, int n)
{
	int	i;
	int	max;

	i = 0;
	max = 10 - n;
	while (i < n)
	{
		if (num[i] == max)
		{
			return (i - 1);
		}
		if (i == n - 1)
		{
			return (i);
		}
		i++;
		max++;
	}
	return (-1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	idx;
	int	num[9];

	i = 0;
	while (i < n)
	{
		num[i] = i;
		i++;
	}
	while (ft_get_index(num, n) != -1)
	{
		ft_print(num, n);
		ft_putchar(',');
		ft_putchar(' ');
		idx = ft_get_index(num, n);
		ft_increment(num, n, idx);
	}
	ft_print(num, n);
}
