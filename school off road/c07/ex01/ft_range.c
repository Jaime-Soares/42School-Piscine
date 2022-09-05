/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:32:02 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/31 12:32:05 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	*p;
	int	int_size;
	int	arr_size;
	int	i;

	i = 0;
	p = NULL; 
	int_size = 4;
	arr_size = max - min;
	if (min < max)
	{
		arr = (int *) malloc(int_size * arr_size);
		i = 0;
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
		return (arr);
	}
	else
	{
		return (p);
	} 
}
/*
#include <stdio.h>
int	main()
{	
	int	*num;
	int	i;
	int	min;
	int	max;

	min = 10;
	max = 26;
	num = ft_range(min, max);
	i = 0;
	while (num[i])
	{
		printf("%d, ", num[i]);
		i++;
	}
}
*/
