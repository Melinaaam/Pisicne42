#include <unistd.h>

void ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '1';

	while (a <= '7')
	{
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write (1, &c, 1);
				c++;
				write (1, ", ", 2);
			}
		b++;
		}
	b = '2';
	a++;
	}
}

int	main()
{
	ft_print_comb();
	return(0);
}
