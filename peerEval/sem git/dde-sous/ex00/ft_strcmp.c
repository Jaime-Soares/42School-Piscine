/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-sous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:51:12 by dde-sous          #+#    #+#             */
/*   Updated: 2022/09/03 16:51:14 by dde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0' || s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int	main()
{
	char s1[] = "abc";
	char s2[] = "abd";
	
	printf("%d", strcmp(s1, s2));
	return(0);
}*/
