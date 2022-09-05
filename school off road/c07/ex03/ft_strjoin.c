/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:12:48 by jaiperei          #+#    #+#             */
/*   Updated: 2022/09/04 12:12:52 by jaiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_count_lt(int size, char **strs)
{
    int i;
    int j;
    int cnt;
    
    cnt = 0;
    i = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
        {
            cnt++;
            j++;
        }
        i++;
    }
    return (cnt);
}

void    ft_fill_str(char *res_str, char **strs, char *sep, int str_num)
{
    int i;
    int j;
    int k;
    
    i = 0;
    k = 0;
    while (i < str_num)
    {
        j = 0;
        while (strs[i][j])
        {
            res_str[k] = strs[i][j];
            k++;
            j++;
        }
        if (i < str_num - 1)
        {
            res_str[k] = *sep;
            k++;
        }
        i++;
    }
    res_str[k] = '\0';
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char    *res_str;
    int str_cnt;
    
    str_cnt = ft_count_lt(size, strs);
    res_str = (char *) malloc(1 * (str_cnt + size));
    ft_fill_str(res_str, strs, sep, size);
    return(res_str);
}

int	main(void)
{
    char    *res_str;
	char	**strs;
	char	*str1 = "This is the first string";
	char	*str2 = "This is the second string";
	char	*str3 = "This is the third string";
	char	*str4 = "This is the fourth string";
	char    mchar = '-';
	char    *sep;
	
	sep = &mchar;
	int size = 4;
	strs = (char **) malloc(3 * sizeof(char *));
	int i;
    i = 0;
	while (i < 3)
	{
	    strs[i] = (char *) malloc(23 * sizeof(int));
	    i++;
	}
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	res_str = ft_strjoin(size, strs, sep);
	printf("String 1: %s", res_str);
}
