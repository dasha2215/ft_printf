#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		count++;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (count + 1);
}
