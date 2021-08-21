#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n1;
	int	n2;

	n1 = *a;
	n2 = *b;
	if (n2 != 0)
	{
		*a = n1 / n2;
		*b = n1 % n2;
	}
}
