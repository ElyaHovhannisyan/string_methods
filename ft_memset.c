
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	k;
	unsigned char	*p;

	i = 0;
	k = (unsigned char)c;
	p = (unsigned char *)b;
	while (i < len)
	{
		p[i] = k;
		i++;
	}
	return (b);
}
