/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achien-k <achien-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:48:59 by achien-k          #+#    #+#             */
/*   Updated: 2022/09/02 14:06:34 by achien-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_valid_bs(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[i])
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] < 32 || base[i] > 126 \
					|| base[i] == '-' || base[i] == '+')
				return (0);
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

int	ft_isbase(char c, char *base, int bs_len)
{
	int	i;

	i = 0;
	while (i < bs_len)
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_get_start(char *str, char *base, int bs_len)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 32 || (str[i] > 10 && str[i] < 14)
			|| str[i] == '+' || str[i] == '-')
		{
			if ((str[i] == '+' || str[i] == '-') && (str[i + 1] == 32 \
				|| (str[i + 1] > 10 && str[i + 1] < 14)))
				break ;
		}
		else if (ft_isbase(str[i], base, bs_len) < 0)
			break ;
		else
			return (i);
		i++;
	}
	return (-1);
}

int	ft_basetoi(char *str, char *base, int bs_len, int i)
{
	int	result;
	int	value;
	int	j;
	int	mult;

	result = 0;
	j = i;
	while (str[j + 1] && ft_isbase(str[j + 1], base, bs_len) >= 0)
		j++;
	mult = 1;
	while (j >= i)
	{
		value = ft_isbase(str[j], base, bs_len);
		result += value * mult;
		mult *= bs_len;
		j--;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	bs_len;
	int	result;
	int	i;
	int	is_n;

	if (!ft_valid_bs(base))
		return (0);
	bs_len = 0;
	while (base[bs_len])
		bs_len++;
	is_n = 1;
	result = 0;
	i = 0;
	while (str[i] && ft_isbase(str[i], base, bs_len) < 0)
	{	
		if (str[i] == '-')
			is_n *= -1;
		i++;
	}
	i = ft_get_start(str, base, bs_len);
	if (i < 0)
		return (result);
	result = ft_basetoi(str, base, bs_len, i);
	return (result * is_n);
}

#include <stdio.h>
int	main()
{
	char	*str = " +---01010lA";
	char	*base = "01";

	printf("The string is %s\nThe base is %s\n", str, base);
	printf("The number is %d.\n", ft_atoi_base(str, base));
	return (0);
}
