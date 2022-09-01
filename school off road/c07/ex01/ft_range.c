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

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	void 	*p;
	
	if (min < max)
	{
		arr = (int *) malloc(4 * (max - min));
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
		printf("%d\n", num[i]);
		i++;
	}
}
