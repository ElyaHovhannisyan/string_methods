
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && i + j < len)
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
				break ;
		}
		if (needle[j] == '\0')
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
