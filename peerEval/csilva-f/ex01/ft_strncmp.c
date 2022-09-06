/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:22:17 by csilva-f          #+#    #+#             */
/*   Updated: 2022/08/24 20:24:17 by csilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	while (s2[i] != '\0' && s1[i] != '\0' && i < n)
	{
		if (s2[i] == s1[i])
		{
			r = 0;
		}
		else
		{
			r = (s1[i] + '0') - (s2[i] + '0');
			return (r);
		}
		i++;
	}
	return (r);
}

/*int	main(void)
{
	char	s1[] = "{[123$a";
	char	s2[] = "{[123";

	int x = ft_strncmp(s1, s2, 5);
	printf("strncmp(str1, str2) = %d\n", x);
	return (0);
}
*/
