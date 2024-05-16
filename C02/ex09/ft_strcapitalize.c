char	*majuscule(char *str, int i)
{
	if(str[0] >= 'a' && str[i] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return(str);
}
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i]  + 32;
		}
		i++;
	}	
	i = 0;
	majuscule(str, i);
	i++;
	return(str);
}

#include <unistd.h>
int	main(void)
{
	char str[62] = "salut, comment tu vas ? 42mots quarante-deux";
	write (1, ft_strcapitalize(str), 62);
	return (0);
}
