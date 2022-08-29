/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 09:50:47 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/28 09:50:51 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	result;
	
	result = 1;
	while (*str)
	{
		if (!(*str >= 32 && *str <= 127))
		{
			result = 0;
		}
		str++;
	}
	return (result);
}

int	main(void)
{
	char 	str[11] = "sdhfk243/*";
	int 	result;
	
	result = ft_str_is_printable(str);
	result += '0';
	write(1, &result, 1); 
	
}
