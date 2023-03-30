
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*p;
	unsigned int		len;	
	unsigned int		i;

	len = ft_strlen(s);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		++i;
	}
	p[i] = '\0';
	return (p);
}
