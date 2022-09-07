/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:02:09 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/30 11:02:12 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	get_square(int sqr)
{
	return sqr * sqr;
}

int	ft_sqrt(int nb)
{
	int	sqr;
	
	sqr = 1;
	if (nb < sqr * sqr)
	{ 
		return (0);
	}
	while (nb > sqr * sqr)
	{
		sqr++;
		if (nb < sqr * sqr)
	    { 
		return (0);
	    }
	}
	return sqr;	
}

int	main()
{
	int	result;
	
	result = ft_sqrt(1);
	printf("%d", result);
}
	
