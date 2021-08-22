#include <unistd.h>

char	*ft_lowercase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	j;

	j = 0;
	ft_lowercase(str);
	if (str[j] != '\0' && str[j] >= 'a' && str[j] <= 'z')
	{
		str[j] -= 32;
		j++;
	}
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z'
			&& ((str[j - 1] >= 0 && str[j - 1] <= 47)
				|| (str[j - 1] >= 58 && str[j - 1] <= 64)
				|| (str[j - 1] >= 91 && str[j - 1] <= 96)
				|| (str[j - 1] >= 123 && str[j - 1] <= 127)))
		{
			str[j] -= 32;
		}
		j++;
	}
	return (str);
}

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
