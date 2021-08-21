#include <unistd.h>

void	ft_print(int num);

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
	{
		ft_print(nb);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_print(nb % 10);
	}
}

void	ft_print(int num)
{
	char	c;

	c = num + '0';
	write(1, &c, 1);
}
