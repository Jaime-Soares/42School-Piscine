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

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*n = NULL;
	int	*p;
	int	i;
	int	size;
	
	range = &p;
	if(min < max)
	{
		p = malloc(4 * (max - min);
		range = &p;
		i = 0;
		size = 0;
		while (min < max)
		{
			p[i] = min;
			min++;
			i++;
			size++;
		}
		return (size);
	}
	else
	{
		range = &n;
		return (0);
	}
}

int	main()
{
	int	size;
	int	**range;
	
	size = ft_ultimate_range(range, 10, 26);
	printf("%d", size);
}
