/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:32:00 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/23 18:32:35 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int *arr)
{
	write(1, &arr[0], 1);
	write(1, &arr[1], 1);
	write(1, " ", 1);
	write(1, &arr[2], 1);
	write(1, &arr[3], 1);
	if (!(arr[0] == '9' && arr[1] == '8' && arr[2] == '9' && arr[3] == '9'))
	{
		write(1, ", ", 2);
	}
}

void	change_previous(int *arr)
{
	arr[1]++;
	if (arr[1] > '9')
	{
		arr[0]++;
		arr[1] = arr[4];
	}
	arr[2] = arr[0];
	arr[3] = arr[1] + 1;
}

void	create_array(int *arr)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		arr[i] = '0';
		if (i == 4)
		{
			arr[i] = '0';
		}
		i++;
	}
}

void	ft_print_comb2(void)
{
	int	arr[5];

	create_array(arr);
	while (arr[0] <= '9')
	{
		while (arr[3] <= '9')
		{
			ft_write(arr);
			arr[3]++;
		}
		if (arr[3] > '9')
		{
			arr[2]++;
			arr[3] = arr[4];
		}
		if (arr[2] > '9')
		{
			change_previous(arr);
		}
	}
}
