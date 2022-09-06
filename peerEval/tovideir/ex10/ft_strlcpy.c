/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovideir <tovideir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:11:30 by tovideir          #+#    #+#             */
/*   Updated: 2022/09/04 10:32:21 by tovideir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[l] != 0)
		l++;
	if (size != 0)
	{
		while ((src[i] != 0) && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (l);
}
/*
#include<stdio.h>
int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		printf("erro de argumentos\n");
		return 0;
	}
	else
	{
		printf("%d", ft_strlcpy(argv[1], argv[2], 5));
	}
}
*/