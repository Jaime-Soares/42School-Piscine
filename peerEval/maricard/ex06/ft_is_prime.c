/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:46:32 by maricard          #+#    #+#             */
/*   Updated: 2022/09/04 10:19:00 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	else
	{
		while (i > 1)
		{
			if (nb % i == 0)
				return (0);
			else
				i--;
		}
	}
	return (1);
}	

/*
int	main(int argc,char **argv)
{
	(void)argc;
	printf("%d", ft_is_prime(atoi(argv[1])));
	return 0;
}
*/
