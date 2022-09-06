/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:11:35 by maricard          #+#    #+#             */
/*   Updated: 2022/09/04 11:45:12 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 1)
	{	
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

/*
int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_recursive_factorial(atoi(argv[1])));
	return 0;
}
*/
