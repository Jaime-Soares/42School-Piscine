#include <stdio.h>

int	ft_str_size(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_base_pos(char c, char *base)
{
	int	i;
	
	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;	
	}
	return (-1);
}

int	ft_dec_value(char *num, char *srcbs)
{
	int	srcbs_sz;
	int	num_sz;
	int	mtply;
	int	dec;
	int	i;
	
	srcbs_sz = ft_str_size(srcbs);
	num_sz = ft_str_size(num);
	mtply = 1;
	dec = 0;
	
	i = num_sz - 1;
	while (num[i] && i >= 0)
	{
		dec += ft_base_pos(num[i], srcbs) * mtply;
		mtply *= srcbs_sz;
		i--;
	}
	return (dec);
}

int	ft_convert_base(char *num, char *srcbs)
{
	int dec;
	
	dec = ft_dec_value(num, srcbs);
	return (dec);
}

int	main(void)
{
	int	res;
	char	num[] = "64";
	char	srcbs[] = "0123456789ABCDEF";
	
	res = ft_convert_base(num, srcbs);
	printf("Result: %d", res);
}
