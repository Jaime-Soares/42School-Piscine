/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovideir <tovideir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:10:37 by tovideir          #+#    #+#             */
/*   Updated: 2022/09/03 13:07:39 by tovideir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if(argc <= 1)
	{
		printf("erro nos argumentos\n");
		return 0;
	}
	else
	{
		printf("%s\n", ft_strlowcase(argv[1]));
		return 0;
	}	
}
*/