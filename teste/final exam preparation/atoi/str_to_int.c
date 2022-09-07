#include <stdio.h>

int	main()
{
	char	num[] = "-3456002";
	int	res;
	int	i;
	int	sig;
	
	sig = 1;
	i = 0;
	if (num[i] == '-')
	{
		sig = -1;
		i = 1;
	}
	res = 0;
	while (num[i])
	{
		res += (num[i] - '0');
		if (num[i + 1])
			res *= 10;
		i++;
	}
	res *= sig;
	printf("My int: %d", res);
}
