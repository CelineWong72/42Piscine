#include <unistd.h>

void	print_char(int n);

void	ft_print_numbers(void)
{
	int	number;

	number = 0;
	while (number <= 9)
	{
		print_char(number);
		number++;
	}
}

void	print_char(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}
