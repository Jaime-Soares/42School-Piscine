/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <gmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:14:11 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/08/25 09:06:07 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	long	i;
	long	size;

	i = 0;
	size = n;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}	

/*
int		main(void)
{
	char	dest[] = "                                   ";
	char	*src;
	int		size;

	size = 30;
	src = "Gabriel";
	printf(".%s.\n\n", ft_strncpy(dest, src, size));
	printf(".%s.\n\n", strncpy(dest, src, size));
}
*/
