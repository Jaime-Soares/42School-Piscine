/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achien-k <achien-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:18:47 by achien-k          #+#    #+#             */
/*   Updated: 2022/09/03 11:23:35 by achien-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int	ft_valid_bs(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[i])
		return (0);
	while (base[i])
	{
		if (base[i] < 32 || base[i] > 126 \
				|| base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i == 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	int			bs_len;

	if (!ft_valid_bs(base))
		return ;
	bs_len = ft_strlen(base);
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < bs_len)
		ft_putchar(base[nb]);
	else
	{
		ft_putnbr_base(nb / bs_len, base);
		ft_putnbr_base(nb % bs_len, base);
	}	
}

/*int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_putnbr_base(-12345, argv[1]);
	return (0);
}*/
