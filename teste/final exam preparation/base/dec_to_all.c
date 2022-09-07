#include <stdio.h>

int ft_base_count(char *base)
{
    int i;

    i = 0;
    while(base[i])
    {
        i++;
    }
    return (i);
}

char	ft_get_digit(int num, int size, char *base)
{
	int	dig;
	char	digit;
	
	dig = num % size;
	while (dig >= size)
	{
		dig /= size;
	}
	digit = base[dig];
	return (digit);
}

void    ft_rev_res(char *res)
{
    int i;
    int size;
    char aux;
    
    i = 0;
    while (res[i])
    {
        i++;   
    }
    
    size = i;
    i = 0;
    while (i < size / 2)
    {
        aux = res[i];
        res[i] = res[size - 1 -i];
        res[size - 1 -i] = aux;
        i++;
    }
}

char    *ft_base(int num, char *base, char *res)
{
	int size;
	int	i;

	// 1 - get the base size
	size = ft_base_count(base);
	
	// 2 - get the remainders of num and add to result array
	i = 0;
	while (num > 0 )
	{
		res[i] = ft_get_digit(num, size, base);
		num /= size;
		i++;
	}
	res[i] = '\0';
	
	// 3 - reverse the array
	ft_rev_res(res);
	return (res);
}

int main()
{
	char res[11];	
	int num = 100;
	char *base = "01234567";

	printf("My new number: %s", ft_base(num, base, res));
	return (0);
}
