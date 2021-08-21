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
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_string(argv[i]);
		ft_print('\n');
		i++;
	}
	return (0);
}
