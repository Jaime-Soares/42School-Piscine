/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achien-k <achien-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:48:59 by achien-k          #+#    #+#             */
/*   Updated: 2022/09/02 14:07:21 by achien-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_is_n(char *str)
{
	int	i;
	int	is_n;

	i = 0;
	is_n = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			break ;
		else if (str[i] == '-')
			is_n *= -1;
		i++;
	}
	return (is_n);
}

int	ft_get_start(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isspace(str[i]) || str[i] == '+' || str[i] == '-')
		{
			if ((str[i] == '+' || str[i] == '-') && ft_isspace(str[i + 1]))
				break ;
		}
		else if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		else
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str)
{
	int	result;
	int	is_n;
	int	i;

	result = 0;
	is_n = ft_is_n(str);
	i = ft_get_start(str);
	if (i < 0)
		return (result);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result *= is_n);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Provide exactly one string, please.\n");
		return (-1);
	}
	printf("The number is %d.\n", ft_atoi(argv[1]));
	return (0);
}*/
