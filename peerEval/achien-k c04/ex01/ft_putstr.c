/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achien-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:35:06 by achien-k          #+#    #+#             */
/*   Updated: 2022/08/29 10:30:06 by achien-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		ft_putchar(str[size]);
		size++;
	}
}

/* int main()
{
	char	str[] = "Test string.\n";
	ft_putstr(str);
	return 0;
} */
