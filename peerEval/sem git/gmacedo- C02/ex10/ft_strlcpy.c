/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <gmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:14:11 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/08/25 12:16:54 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<ctype.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	cont;

	i = 0;
	cont = 0;
	while (src[cont])
		cont++;
	if (size < 1)
		return (cont);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (cont);
}

/*
int		main(void)
{
	char	dest[20];
	char	*src;
	int		size;

	src = "I`ve passed at 42";
	size = 15;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
	//printf("%lu\n", strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
}
*/
