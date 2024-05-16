int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= 'A') && ( str[i] <= 'Z')))
			return(0);
		i++;
	}
	return(1);
}
#include <stdio.h>

int		main()
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_str_is_uppercase("")?"OK":"Fail",
			ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXZ")?"OK":"Fail",
			!ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")?"OK":"Fail",
			!ft_str_is_uppercase("0123456789")?"OK":"Fail",
			!ft_str_is_uppercase(" ")?"OK":"Fail",
			!ft_str_is_uppercase("\\")?"OK":"Fail",
			!ft_str_is_uppercase("\n")?"OK":"Fail");
}
