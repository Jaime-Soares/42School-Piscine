/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:01:29 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/28 10:01:35 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	result;
	int	diff;
	char	upperch;
	
	result = 1;
	diff = 0;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			diff = 'z' - *str;
			upperch = 'Z' - diff;
			write(1, &upperch, 1);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
	return (str);
}

int	main(void)
{
	char 	str[11] = "sdhfk243/*";
	
	ft_strupcase(str);
}
