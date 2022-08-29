/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:16:58 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/28 10:17:02 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_find_diff(char *s1, char *s2)
{
	int 	result;
	
	result = 0;
	if (*s1 > *s2)
	{
		result = 1;
	}
	else if (*s1 < *s2)
	{
		result = -1;
	}
	else if ((*(s1 + 1) || *(s2 + 1)) && result == 0)
	{
		s1++;
		s2++;
		result = ft_find_diff(s1, s2);
	}
	return (result);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	
	result = ft_find_diff(s1, s2);
	return (result);
}

int	main()
{
	int	result;
	char	s1[] = "Hell";
	char	s2[] = "Hello";
	
	result = ft_strcmp(s1, s2);
	printf("My result is: %d", result);

}

