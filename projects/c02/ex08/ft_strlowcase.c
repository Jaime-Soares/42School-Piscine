/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:12:28 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/28 10:12:34 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	result;
	int	diff;
	char	lowerch;
	
	result = 1;
	diff = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			diff = 'Z' - *str;
			upperch = 'z' - diff;
			write(1, &lowerch, 1);
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
	char 	str[11] = "sdhFK243/*";
	
	ft_strlowcase(str);
}
