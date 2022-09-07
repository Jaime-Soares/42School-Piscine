/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:25:37 by jaiperei          #+#    #+#             */
/*   Updated: 2022/08/31 17:25:41 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef enum { false = 0, true = !false } t_bool;
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define TRUE 1
#define FALSE 0
#define SUCCESS 0

#include <unistd.h>

int	EVEN(int nbr)
{
	if(nbr%2 == 0)
	{
		return (1);
	}
	return (0);
}


