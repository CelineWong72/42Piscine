int	ft_sqrt(int nb)
{
	int	sq;

	sq = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	while (sq <= nb)
	{
		if (sq * sq == nb)
			return (sq);
		sq++;
	}
	return (0);
}
