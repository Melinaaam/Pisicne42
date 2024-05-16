#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	neg;

	i = 0;
	nb = 0;
	neg = 1;
	while(str[i] <= 32)
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{		
	if (str[i] == '-')
		neg = neg * -1;	
	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	nb = nb * neg;
	return(nb);
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char	*str = "	---+--+1234";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);

}
