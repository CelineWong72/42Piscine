#include <unistd.h>

void	ft_print(unsigned int n);

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		write(1, "-", 1);
		n = nb * -1;
	}
	else
	{
		n = nb;
	}
	ft_print(n);
}

void	ft_print(unsigned int n)
{
	char	c;

	if (n >= 10)
	{
		ft_print(n / 10);
		ft_print(n % 10);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}
