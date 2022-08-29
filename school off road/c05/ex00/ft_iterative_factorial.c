/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:34:39 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/29 11:34:41 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	control;
	
	if (nb > 0)
	{
		control = nb;
		while (control > 1)
		{
			nb *= --control;
		}
		return (nb);
	}
	else
	{
		return (0);
	}
}

int	main()
{
    int result;
    
    result = ft_iterative_factorial(4);
	printf("%d", result);
}


