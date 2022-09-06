/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 00:27:44 by csilva-f          #+#    #+#             */
/*   Updated: 2022/08/25 00:30:06 by csilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	while (s2[i] != '\0' && s1[i] != '\0')
	{
		if (s2[i] != s1[i])
		{
			r = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (r);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		x = ft_strcmp(&str[i], to_find);
		if (!x)
		{
			break ;
		}
		i++;
	}
	return (&str[i]);
}

/*int	main(void)
{
	char	str[] = "abcdefghijklm";
	char	to_find[] = "fghif";

	printf("ft_strcat(str) = %s\n",ft_strstr(str, to_find));
	return (0);
}
*/
