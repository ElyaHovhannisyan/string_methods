
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if (s11[i] != s22[i] || s11 == 0 || s22 == 0)
			return (s11[i] - s22[i]);
		i++;
	}
	return (0);
}
