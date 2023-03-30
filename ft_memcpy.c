
#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)str1;
	b = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (str1);
}
