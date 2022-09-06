/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:06:36 by hmaciel-          #+#    #+#             */
/*   Updated: 2022/09/05 19:08:19 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*myarray;

	if (max - min <= 0)
	{
		*range = 0;
		return (0);
	}
	myarray = (int *)malloc(sizeof(int) * (max - min));
	if (!myarray)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		myarray[i] = min;
		i++;
		min++;
	}
	*range = myarray;
	return (max - min);
}
/*
int main ()
{
	int	*dest;

	printf("%i\n", ft_ultimate_range(&dest, 2, 4));
	int i = 0;
	while (i < 2)
	{
		printf("%i\n", dest[i]);
		i++;
	}
}*/
