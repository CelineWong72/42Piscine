#include <unistd.h>

void	ft_print(char c);

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_print((char) n1 / 10 + '0');
			ft_print((char) n1 % 10 + '0');
			ft_print(' ');
			ft_print((char) n2 / 10 + '0');
			ft_print((char) n2 % 10 + '0');
			if (n1 != 98)
			{
				ft_print(',');
				ft_print(' ');
			}
			n2++;
		}
		n1++;
	}
}

void	ft_print(char c)
{
	write(1, &c, 1);
}
