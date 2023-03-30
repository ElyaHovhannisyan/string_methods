
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	s1 = (char *)malloc(len + 1);
	if (!s1)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			s1[j] = s[i];
			j++;
		}
		i++;
	}
	s1[j] = 0;
	return (s1);
}
