void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;

	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}

#include <stdio.h>
int	main()
{
	int	nb1;
	int	nb2;

	nb1 = 10;
	nb2 = 5;
	ft_ultimate_div_mod(&nb1, &nb2);
	printf("%d\n", nb1);
	printf("%d\n", nb2);
	return(0);
}
