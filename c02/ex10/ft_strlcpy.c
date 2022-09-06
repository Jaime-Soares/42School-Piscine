/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:43:56 by jaiperei          #+#    #+#             */
/*   Updated: 2022/09/04 16:44:02 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
	{
		j++;
	}
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
/*
#include <stdio.h>
int	main()
{
	char	src[] = "Ola tudo bem?";
	char	dest[20];
	unsigned int size;
	unsigned int res;
	
	size = 7;
	res = ft_strlcpy(dest, src, size);
	printf("New string: %s\n", dest);
	printf("strlcpy returns: %d", res);
}
*/
