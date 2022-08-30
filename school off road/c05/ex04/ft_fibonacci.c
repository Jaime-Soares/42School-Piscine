/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:21:27 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/29 17:21:34 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;
	
	if ( index == 0 )
	{
		result = 0;
	}
	else if ( index == 1 )
	{
		result = 1;
	}
	else
	{
		result = (ft_fibonacci(index-2) + ft_fibonacci(index-1));
	}

	return result;
}
	
int	main()
{
	int result;
	
	result = ft_fibonacci(7);
	printf("%d", result);
}
