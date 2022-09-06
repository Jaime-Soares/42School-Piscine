/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:18:57 by csilva-f          #+#    #+#             */
/*   Updated: 2022/08/24 22:19:40 by csilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0' && i < nb)
	{
		if (dest[j] == '\0')
		{
			dest[j] = src[i];
			dest[j + 1] = '\0';
			i++;
		}
		j++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[30] = "{[123$a";
	char	src[] = "{[1234567890";

	ft_strncat(dest, src, 3);
	printf("ft_strcat(str1) = %s\n", dest);
	return (0);
}
*/
