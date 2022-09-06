/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:23:29 by maricard          #+#    #+#             */
/*   Updated: 2022/09/05 14:40:05 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	long int	i;
	long int	a;

	i = 0;
	a = 0;
	while (i * i <= nb && i * i < 2147483647)
	{
		a = i * i;
		if (a == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_sqrt(atoi(argv[1])));
	return 0;
}
*/
