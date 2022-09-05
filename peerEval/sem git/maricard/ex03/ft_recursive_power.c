/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:04:22 by maricard          #+#    #+#             */
/*   Updated: 2022/09/03 19:40:42 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (nb == 0 && power == 0)
		i = 1;
	if (power == 1)
		i = nb;
	if (power == 0 && nb != 0)
		i = 1;
	if (power > 1)
		i = i * ft_recursive_power(nb, --power);
	return (i);
}

/*
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return 0;
}
*/
