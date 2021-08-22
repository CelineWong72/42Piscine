#include <unistd.h>

unsigned int	ft_len(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	j;

	d = ft_len(dest);
	s = ft_len(src);
	j = 0;
	if (size < d)
	{
		return (s + size);
	}
	else
	{
		while (src[j] != '\0' && j < size - d - 1)
		{
			dest[d + j] = src[j];
			j++;
		}
		dest[d + j] = '\0';
		return (d + s);
	}
}

unsigned int	ft_len(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
