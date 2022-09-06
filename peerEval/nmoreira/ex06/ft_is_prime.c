/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmoreira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:45:44 by nmoreira          #+#    #+#             */
/*   Updated: 2022/09/06 12:54:48 by nmoreira         ###   ########.fr       */
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
		if ((nb % prime == 0) && prime)
			return (0);
		else
			prime++;
	}
	return (1);
}
