/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmacedo- <gmacedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:14:02 by gmacedo-          #+#    #+#             */
/*   Updated: 2022/08/20 19:38:48 by gmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	printf("test");
	n >= 0 ? write(1, "P", 1) : write(1, "N", 1);
}

int main()
{

int n;

scanf("%d", &n);

ft_is_negative(n);

}

