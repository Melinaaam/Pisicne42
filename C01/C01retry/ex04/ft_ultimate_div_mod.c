void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ulti_a;
	int	ulti_b;
	ulti_a = *a;
	ulti_b = *b;

	*a = ulti_a / ulti_b;
	*b = ulti_a % ulti_b;
}
#include <stdio.h>
int	main()
{
	int	a;
	int	b;

	a = 10;
	b = 5;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return(0);
}
