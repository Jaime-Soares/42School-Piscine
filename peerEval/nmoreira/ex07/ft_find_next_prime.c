/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:56:43 by nmoreira          #+#    #+#             */
/*   Updated: 2022/09/06 14:21:29 by nmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	prime;

	prime = 1;
	if (nb <= 1)
		return (0);
	while (prime <= nb / prime)
	{
		if ((nb % prime == 0) && prime != 1)
			return (0);
		else
			prime++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (2);
	while (!ft_is_prime(i))
		i++;
	return (i);
}
