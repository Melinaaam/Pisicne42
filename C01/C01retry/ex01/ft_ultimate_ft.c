void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
 #include <unistd.h>
int	main()
{
	int	a;
	int	*b;
	int	**c;
	int	***d;
	int	****e;
	int	*****f;
	int	******g;
	int	*******h;
	int	********i;
	int	*********j;
	
	j = &i;
	i = &h;
	h = &g;
	g = &f;
	f = &e;
	e = &d;
	d = &c;
	c = &b;
	b = &a;

	ft_ultimate_ft(j);
	if (a == 42)
	{	
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
	return(0);
}
