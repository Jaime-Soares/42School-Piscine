/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:20:52 by maricard          #+#    #+#             */
/*   Updated: 2022/09/05 14:44:46 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	i = nb - 1;
	while (i >= 2)
	{
		if (nb % i == 0)
			return (0);
		else
			i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647)
	{
		if (ft_is_prime(nb) == 0)
			nb++;
		else if (ft_is_prime(nb) == 2)
			return (2);
		else
			break ;
	}
	return (nb);
}

/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_find_next_prime(atoi(argv[1])));
	return 0;
}
*/
