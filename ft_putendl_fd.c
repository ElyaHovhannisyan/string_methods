
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		len;
	char	b;	

	len = ft_strlen(s);
	b = '\n';
	write(fd, s, len);
	write(fd, &b, 1);
}
