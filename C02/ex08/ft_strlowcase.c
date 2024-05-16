char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return(str);
}

#include <stdio.h>

int	main(void)
{
	char a[] = "TEST";
	char b[] = "TeSt";
	char c[] = "teST42";
	printf("%s\n",ft_strlowcase(a));
	printf("%s\n",ft_strlowcase(b));
	printf("%s\n",ft_strlowcase(c));
}
