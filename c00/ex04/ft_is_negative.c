#include <unistd.h>

void	ft_is_negative(int x)
{
	char	p;
	char	n;

	p = 'P';
	n = 'N';
	if (x >= 0)
	{
		write(1, &p, 1);
	}
	else
	{
		write(1, &n, 1);
	}
}
