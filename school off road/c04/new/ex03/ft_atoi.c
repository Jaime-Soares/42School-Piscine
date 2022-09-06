/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:17:33 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/30 12:17:36 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	signal;
	int	result;

	result = 0;
	signal = 1;
	while (*str)
	{
		if ((*str == ' ') || (*str == '\f') || (*str == '\n') \
		|| (*str == '\r') || (*str == '\t') || (*str == '\v'))
		{
		}
		else if (*str == '-')
			signal *= -1;
		else if (*str >= '0' && *str <= '9')
		{
			result *= 10;
			result += *str - '0';
			if (*(str + 1) < '0' || *(str + 1) > '9')
				return (result * signal);
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
    int res;
    
    res = ft_atoi(" --++--++--452188a1244");
	printf("%d\n", res);
}
*/
