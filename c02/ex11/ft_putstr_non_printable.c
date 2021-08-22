#include <unistd.h>

void	ft_hex(int s);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			ft_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

void	ft_hex(int s)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (s > 16)
	{
		ft_hex(s / 16);
		ft_hex(s % 16);
	}
	else
	{
		write(1, &hex[s], 1);
	}
}
