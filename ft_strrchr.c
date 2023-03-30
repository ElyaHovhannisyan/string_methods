
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		k;
	const char	*str;

	k = c;
	str = s;
	while (*str)
		str++;
	if (k == '\0')
		return ((char *)str);
	while (--str >= s)
		if (k == *str)
			return ((char *)str);
	return (NULL);
}
