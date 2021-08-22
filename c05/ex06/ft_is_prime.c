int	ft_is_prime(int nb)
{
	unsigned int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= (unsigned int) nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
