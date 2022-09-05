/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:05:01 by maricard          #+#    #+#             */
/*   Updated: 2022/09/04 11:26:23 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	a;

	i = 1;
	a = nb;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{	
		while (i < nb)
		{	
			a = a * (nb - i);
			i++;
		}
		return (a);
	}
	return (0);
}

/*
int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
	return 0;
}
*/
