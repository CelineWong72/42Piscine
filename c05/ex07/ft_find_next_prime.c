int	ft_is_prime(int nb)
{
	int	j;

	j = 2;
	if (nb <= 1)
		return (0);
	while (nb % j != 0)
	{
		j++;
	}
	if (nb == j)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (!(ft_is_prime(nb + i)))
	{
		i++;
	}
	return (nb + i);
}
