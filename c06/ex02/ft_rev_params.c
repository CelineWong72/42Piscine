#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_string(char *str)
{
	while (*str != '\0')
	{
		ft_print(*str);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	s;
	int	l;

	s = 0;
	l = argc - 1;
	while (l > s)
	{
		ft_string(argv[l]);
		ft_print('\n');
		l--;
	}
	return (0);
}
