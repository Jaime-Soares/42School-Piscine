/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovideir <tovideir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 10:16:59 by tovideir          #+#    #+#             */
/*   Updated: 2022/09/04 20:00:39 by tovideir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

int	char_is_printable_ex_s(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}	

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_printable_ex_s(str[i]) == 1)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			c = str[i];
			ft_putchar("0123456789abcdef"[c / 16]);
			ft_putchar("0123456789abcdef"[c % 16]);
		}
		i++;
	}
}
/*
#include<stdio.h>
int	main(int argc, char **argv)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return 0;
}
*/