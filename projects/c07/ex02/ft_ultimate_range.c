/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:03:26 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/31 13:03:29 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_fill_array(int *arr, int min, int max)
{
	int	i;
	
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
}

int ft_ultimate_range(int **range, int min, int max)
{
	int	n_int;
	int	*n_arr;
	int	*arr;
	int	size;
	int	int_size;

	if(min < max)
	{
		size = max - min;
		arr = (int *) malloc(int_size * size);
		ft_fill_array(arr, min, max);
		if (!arr)
		{
			return (-1);
		}
		range = &arr;
		return (size);
	}
	else
	{
		n_arr = (int *) NULL;
		range = &n_arr;
		return (0);
	}
}
/*
int	**ft_ultimate_range2(int **range, int min, int max)
{
	int	*n_arr;
	int	*arr;
	int	size;
	int	int_size;
	
	if(min < max)
	{
		size = max - min;
		arr = (int *) malloc(int_size * size);
		ft_fill_array(arr, min, max);
		range = &arr;
		return (range);
	}
}

#include <stdio.h>
int	main()
{
	int	size;
	int	**range;
	
    size = ft_ultimate_range(range, 10, 26);
	printf("Size: %d\n", size);
	range = ft_ultimate_range2(range, 10, 26);
	printf("Range[0]: %d\n", *range[0]);
	
}*/
