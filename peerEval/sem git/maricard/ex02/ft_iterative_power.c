/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:32:04 by maricard          #+#    #+#             */
/*   Updated: 2022/09/04 11:52:20 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{		
	int	i;

	i = nb;
	if (power == 0)
		i = 1;
	if (power == 1)
		i = nb;
	if (power > 1)
	{
		while (power > 1)
		{
			i = i * nb;
			power--;
		}
	}
	return (i);
}

/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return 0;
}
*/
