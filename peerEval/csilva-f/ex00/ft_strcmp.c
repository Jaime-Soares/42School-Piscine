/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:16:52 by csilva-f          #+#    #+#             */
/*   Updated: 2022/08/24 20:18:30 by csilva-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (s1[i] != '\0')
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
	char	s1[] = "{123$a";
	char	s2[] = "{123$a";

	int x = ft_strcmp(s1, s2);
	printf("strcmp(str1, str2) = %d\n", x);
	return (0);
}
*/
