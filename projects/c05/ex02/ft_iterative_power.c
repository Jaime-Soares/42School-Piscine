/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:07:39 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/29 14:07:49 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int result;
	
	result = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		while (power > 1)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}

int	main()
{
	int result;
	
	result = ft_iterative_power(4, 2);
	printf("%d", result);
}
