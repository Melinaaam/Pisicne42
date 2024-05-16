#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;	
}

int	main()
{
	int	*********i;
	int	********h;
	int	*******g;
	int	******f;
	int	*****e;
	int	****d;
	int	***c;
	int	**b;
	int	*a;
	int	nombre;

	i = &h;
	h = &g;
	g = &f;
	f = &e;
	e = &d;
	d = &c;
	c = &b;
	b = &a;
	a = &nombre;
	nombre = 42;

	ft_ultimate_ft(&h);	
	printf("%d", ********h);
	return(0);

	
}
