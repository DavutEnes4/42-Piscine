/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:24:08 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/13 17:00:22 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*new;

	size = max - min;
	if (size <= 0)
		return (NULL);
	new = malloc(sizeof(int) * (size));
	i = -1;
	while (++i < size)
		new[i] = min + i;
	return (new);
}
