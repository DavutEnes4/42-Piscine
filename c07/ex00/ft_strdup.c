#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	while (src[index])
		index++;
	dest = ((char *)malloc(index * sizeof(char) + 1));
	if (!dest)
	{
		return (0);
	}
	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
