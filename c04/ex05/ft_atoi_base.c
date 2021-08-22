int	ft_length(char *base)
{
	int	n;

	n = 0;
	while (base[n])
	{
		n++;
	}
	return (n);
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
		if (b[i] == ' ' || b[i] == '\t' || b[i] == '\n'
			|| b[i] == '\v' || b[i] == '\f' || b[i] == '\r')
			return (0);
		if (b[i] == '+' || b[i] == '-' || b[i] < 32 || b[i] > 126)
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

int	get_num(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	num;
	int	b;

	sign = 1;
	num = 0;
	b = 0;
	if (!(ft_checkarg(base)))
		return (0);
	b = ft_length(base);
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (get_num(*str, base) != -1)
	{
		num = num * b + get_num(*str, base);
		str++;
	}
	return (sign * num);
}
