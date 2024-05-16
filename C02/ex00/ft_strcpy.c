char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);	
}
#include <unistd.h>
int	main()
{
	char	src[5] = "Hello";
	char	dest[5];

	write(1, src, 5);
	write(1, "\n", 1);
	ft_strcpy(dest, src);
	write(1, dest, 5);
	return(0);
}
