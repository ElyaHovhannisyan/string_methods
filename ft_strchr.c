
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	k;

	k = c;
	while (*s)
	{
		if (*s == k)
			return ((char *) s);
		s++;
	}
	if (k == '\0')
		return ((char *) s);
	return (NULL);
}
