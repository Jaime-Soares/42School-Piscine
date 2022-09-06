/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:45:51 by jaiperei          #+#    #+#             */
/*   Updated: 2022/09/04 15:45:54 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	upcase;
	int	i;

	i = 0;
	upcase = 1;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || \
		(str[i] >= 'A' && str[i] <= 'Z') || \
		(str[i] >= '0' && str[i] <= '9')))
			upcase = 1;
		else if (upcase)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = 'Z' - ('z' - str[i]);
			upcase = 0;
		}
		else if (!upcase && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'z' - ('Z' - str[i]);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char 	str[] = "oLA, tudo bem? QuE diZES+tu?maluco22a";

	ft_strcapitalize(str);
	printf("Result: %s", str);
	return (0);
}
*/
