/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:51:07 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/09/05 16:20:45 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*myarray;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	myarray = (int *)malloc(sizeof(int) * size);
	while (min < max)
	{
		myarray[i] = min;
		min++;
		i++;
	}
	return (myarray);
}
/*
int	main (void)
{
	int *dest;
	int i = 0;
	int max = 20;
	int min = 222;
	int size = max - min;
	dest = ft_range(min,max);
	

	while (i < size)
	{
		printf("%i", dest[i]);
		i++;
	}
	free(dest);
}*/
