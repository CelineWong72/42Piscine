#include <unistd.h>

void	ft_print(char c);
void	ft_put(int n, int arr[], int option);
void	ft_increment(int n, int a[]);

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	ft_put(n, arr, 0);
	while (arr[0] != 10 - n || arr[n - 1] != 9)
	{
		if (arr[n - 1] != 9)
		{
			arr[n - 1] += 1;
		}
		else
		{
			ft_increment(n, arr);
		}
		ft_put(n, arr, 1);
	}
}

void	ft_put(int n, int arr[], int option)
{
	int	i;

	if (option == 1)
	{
		ft_print(',');
		ft_print(' ');
	}
	i = 0;
	while (i < n)
	{
		ft_print(arr[i] + '0');
		i++;
	}
}

void	ft_increment(int n, int a[])
{
	int	s_n;
	int	e_n;

	s_n = n - 1;
	e_n = 9;
	while (a[s_n] == e_n)
	{
		s_n -= 1;
		e_n -= 1;
	}
	a[s_n] += 1;
	while (s_n < n)
	{
		a[s_n + 1] = a[s_n] + 1;
		s_n += 1;
	}
}

void	ft_print(char c)
{
	write(1, &c, 1);
}
