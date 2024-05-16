char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	i = 0;
	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] != '\0';
		i++;
	}
	return(dest);
}
#include <unistd.h>
int		main()
{
	char	src[5] = "Hello";
	char	dest[5];
	
	write(1, src, 5);
	write(1, "\n", 1);
	ft_strncpy(dest, src, 3);
	write(1, dest, 5);
	return(0);
}
