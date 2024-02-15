/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:55:50 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/15 11:55:51 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
