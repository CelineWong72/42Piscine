#include <unistd.h>

void	print_char(char c);
void	put_char(char f, char s, char t);

void	ft_print_comb(void)
{
	char	f_n;
	char	s_n;
	char	t_n;

	f_n = '0';
	while (f_n <= '9')
	{
		s_n = f_n + 1;
		while (s_n <= '9')
		{
			t_n = s_n + 1;
			while (t_n <= '9')
			{
				if ((f_n != s_n) && (s_n != t_n))
				{
					put_char(f_n, s_n, t_n);
					print_char(',');
					print_char(' ');
				}
				t_n++;
			}
			s_n++;
		}
		f_n++;
	}
}

void	put_char(char f, char s, char t)
{
	print_char(f);
	print_char(s);
	print_char(t);
}

void	print_char(char c)
{
	write(1, &c, 1);
}
