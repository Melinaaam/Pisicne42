#include <unistd.h>

void	ft_print_alphabet (void)
{
	char lettre;
	lettre = 'a';
	while (lettre <= 'z')
	{
		write (1, &lettre, 1);
		lettre++;
	}
}

int	main()
{
	ft_print_alphabet();
	return(0);
}
