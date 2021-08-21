#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	f;
	int	l;
	int	swap;

	f = 0;
	l = size - 1;
	while (f < (size / 2))
	{
		swap = tab[f];
		tab[f] = tab[l];
		tab[l] = swap;
		f++;
		l--;
	}
}
