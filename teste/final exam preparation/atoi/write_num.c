#include <unistd.h>

int	ft_power(long int num)
{
	int	pwr;
	
	pwr = 1;
	while (num >= 10 )
	{
		pwr *= 10;
		num /= 10;
	}
	return (pwr);
}

void	ft_write(int num)
{
	long int	nbr;
	char	dig;
	int	pwr;
	
	nbr = (long int) num;
	if (nbr < 0)
	{
		write(1, "-", 1); 
		nbr *= -1;
	}
	if (nbr < 10)
	{
		dig = nbr + '0';
		write (1, &dig, 1);
	}
	else
	{
		pwr = ft_power(nbr);
		while (pwr >= 1)
		{
			if (nbr > pwr)
			{
				dig = nbr / pwr + '0';
				write(1, &dig, 1);
				nbr %= pwr;
			}
			else
			{
				write(1, "0", 1);
			}
			pwr /= 10;
		}
	}
}

int	main()
{
	int	num;
	
	num = -2147483648;
	ft_write(num);
}
