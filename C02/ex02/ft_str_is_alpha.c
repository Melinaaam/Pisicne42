int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			return (1);
		i++;
	}
		return(0);
}
#include <unistd.h>
int	main()
{
	char	str[] = "123";
	char	retour;

	retour = ft_str_is_alpha(str) + '0';
	write(1, &retour, 1);
	return(0);
}
