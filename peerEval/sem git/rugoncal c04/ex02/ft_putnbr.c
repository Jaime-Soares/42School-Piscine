/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:17:41 by rugoncal          #+#    #+#             */
/*   Updated: 2022/09/01 20:17:43 by rugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= INT_MIN && nb <= INT_MAX)
	{	
		if (nb == INT_MIN)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			if (nb < 0 && nb > INT_MIN)
			{
				ft_putchar('-');
				nb = -1 * nb;
			}
			if (nb >= 10)
			{
				ft_putnbr(nb / 10);
				ft_putnbr(nb % 10);
			}
			else
			{
				ft_putchar(nb + '0');
			}
		}
	}
}
/*int	main(void)
{
	int	i;

	i = -2147483648;
	ft_putnbr (i);
	return (0);
}*/
