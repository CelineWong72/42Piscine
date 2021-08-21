#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0' && argc)
	{
		ft_print(argv[0][i]);
		i++;
	}
	ft_print('\n');
	return (0);
}
