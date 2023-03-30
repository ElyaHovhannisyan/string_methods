
#include "libft.h"

static char	*minus(int n)
{
	char	*str;
	int		k;

	str = malloc(12);
	if (!str)
		return (NULL);
	str[11] = '\0';
	str[0] = '-';
	k = 10;
	while (k > 0)
	{
		str[k] = (-1) * (n % 10) + 48;
		n = n / 10;
		k--;
	}
	return (str);
}

static int	length(int n)
{
	int	len;

	len = 0;
	if (n < 0 || n == 0)
	{	
		len++;
		n = n * (-1);
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		k;

	if (n == -2147483648)
		return (minus(n));
	len = length(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		k = 1;
		n = n * (-1);
	}
	else
		k = 0;
	while (len >= k)
	{
		str[len--] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
