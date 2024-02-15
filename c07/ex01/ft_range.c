#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*repo;

	if (min >= max)
		return (0);
	range = max - min;
	repo = malloc(range * sizeof(int));
	if (!repo)
		return (0);
	index = 0;
	while (index < range)
	{
		repo[index] = min + index;
		index++;
	}
	return (repo);
}
