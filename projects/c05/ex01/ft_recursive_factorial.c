/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:29:58 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/29 13:30:14 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_factorial(int n)
{
	int result;
	
	if (n <= 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		result = n * (n - 1);
		n--;
		
		if (n > 2)
		{
			result *= ft_recursive_factorial(n - 1);
		}
		return (result);
	}
}


int main()
{
	int i;
	i = ft_recursive_factorial(4);
	printf("%d", i);
}
