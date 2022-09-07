/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:53:42 by jaiperei          #+#    #+#             */
/*   Updated: 2022/09/01 15:53:46 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*mystrct;
	char	mstr[ac] = {'a', 'b', 'c', 'd'};
	char	cstr[ac] = {'a', 'b', 'c', 'd'};
	
	mystrct->size = ac;
	mystrct->str = mstr;
	mystrct->copy = cstr;
	
	return (mystrct);
	
}

int 	main()
{	
	t_stock_str	*mystrct;
	char	matrix[2][2];
	int	size;
	char	**mtrx;
	mtrx[0] = matrix[0];
	mtrx[1] = matrix[1];
	
	
	matrix[0][0] = 'a';
	matrix[0][1] = 'b';
	matrix[1][0] = 'c';
	matrix[1][1] = 'd';
	size = 4;
	mystrct = ft_strs_to_tab(size, mtrx);
	printf("Size: %d", mystrct->size);
	printf("Size: %s", mystrct->str);
	printf("Copy: %s", mystrct->copy);	
}
