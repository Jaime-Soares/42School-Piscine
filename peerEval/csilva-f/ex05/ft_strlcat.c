/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:45:43 by csilva-f          #+#    #+#             */
/*   Updated: 2022/08/27 11:02:51 by csilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	n;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	n = i;
	j = 0;
	while (src[j] != '\0' && i < (size - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (n + j + 1);
}

/*int	main(void)
{
	char	dest[] = "abcdef";
	char	src[] = "12345678";
	unsigned int	siz = 10;
	unsigned int	n;

	n = ft_strlcat(dest, src, siz);
	printf("size = %d\n", n);
	printf("ft_strlcat(str) = %s\n", dest);
	return (0);
}
*/
