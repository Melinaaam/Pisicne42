void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int	main()
{
	int	a;
	int	b;

	a = 5;
	b = 100;

	printf("Avant echange :\n");
	printf("a vaut : %d\n", a);
	printf("b vaut : %d\n", b);

	ft_swap(&a, &b);

	printf("apres echange :\n");
	printf("a vaut : %d\n", a);
	printf("b vaut : %d\n", b);
	return(0);
}
