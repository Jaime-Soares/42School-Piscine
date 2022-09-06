/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tovideir <tovideir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:49:00 by tovideir          #+#    #+#             */
/*   Updated: 2022/09/03 13:06:30 by tovideir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (97 <= str[i] && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("%s\n", ft_strupcase(argv[1]));
	return 0;
}
*/