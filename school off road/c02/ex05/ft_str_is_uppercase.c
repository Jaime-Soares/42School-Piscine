/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 09:45:56 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/28 09:46:16 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	result;
	
	result = 1;
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
	
	result = ft_str_is_uppercase(str);
	result += '0';
	write(1, &result, 1); 
	
}
