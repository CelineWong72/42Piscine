#include <unistd.h>

void	ft_print(unsigned int n, char *base)
{
	unsigned int	length;

	length = 0;
	while (base[length])
	{
		length++;
	}
	if (n >= length)
	{
		ft_print((n / length), base);
		ft_print((n % length), base);
	}
	else
	{
		write(1, &base[n], 1);
	}
}

int	ft_checkarg(char *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (b[0] == '\0' || b[1] == '\0')
		return (0);
	while (b[i])
	{
		j = i + 1;
		if (b[i] == '+' || b[i] == '-')
			return (0);
		if (b[i] < 32 || b[i] > 126)
			return (0);
		while (b[j])
		{
			if (b[i] == b[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;

	n = 0;
	if (ft_checkarg(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			n = nbr * -1;
		}
		else
			n = nbr;
		ft_print(n, base);
	}
}
