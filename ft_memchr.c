
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*k;
	unsigned char	c1;
	size_t			i;

	k = (unsigned char *)s;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (k[i] == c1)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
