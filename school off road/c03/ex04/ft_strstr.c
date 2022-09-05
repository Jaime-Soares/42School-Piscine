/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:54:51 by jaiperei          #+#    #+#             */
/*   Updated: 2022/09/05 16:54:54 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	pos;
	
	i = 0;
	pos = - 1;
	while (to_find[i])
	{
		j = 0;
		while (str[i + j])
		{
			if (str[i] == str[i + j] && pos == -1)
			{
				pos = i;
			}
			else
			{
				pos = -1;
				i = 0;
			}
			j++;
		}
		i++;
	}
	return (&str[pos]);
}

#include <stdio.h>
int	main(void)
{
	char	*str = "Ola tudo bem?";
	char	*to_find = "tudo";
	char	*res;
	
	res = ft_strstr(str, to_find);
	printf("String comum: %s", res);
}
