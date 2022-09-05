/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:05:43 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/25 12:07:30 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rebuild_array(int index, int n, int *arr)
{
	int	k;

	k = index;
	while (k < n)
	{
		arr[k] = arr[k - 1] + 1;
		k++;
	}
}

void	ft_change_array(int n, int *arr)
{
	int	j;
	int	k;
	int	changed;

	j = 0;
	changed = 0;
	while (j < n && !changed)
	{
		if (arr[n - 1 - j] < 9 - j)
		{
			arr[n - 1 - j] += 1;
			changed = 1;
		}
		else if ((arr[n - 1 - j] == 9 - j) && \
		(arr[n - 2 - j] < 9 - j - 1) && (j < n - 1))
		{
			k = n - 1 - j;
			arr[k - 1] += 1;
			ft_rebuild_array(k, n, arr);
			changed = 1;
		}
		j++;
	}
}

int	ft_last_number(int n, int *arr)
{
	int	max;
	int	act;
	int	l;
	int	last;

	l = 0;
	max = 0;
	act = 0;
	while (l < n)
	{
		max += 9 - l;
		act += arr[n - 1 - l];
		l++;
	}
	if (act == max)
	{
		last = 1;
	}
	else
	{
		last = 0;
	}
	return (last);
}

void	ft_write_num(int n, int *arr, int last)
{
	int	digit;
	int	i;

	i = 0;
	while (i < n)
	{
		digit = arr[i] + '0';
		write (1, &digit, 1);
		i++;
	}
	if (!last)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];
	int	last;
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	last = ft_last_number(n, arr);
	ft_write_num(n, arr, last);
	while (!last)
	{
		ft_change_array(n, arr);
		last = ft_last_number(n, arr);
		ft_write_num(n, arr, last);
	}
}
