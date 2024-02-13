/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:57:50 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/13 14:27:04 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	return (dest[i] = '\0', dest);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*new;

	size = ft_strlen(src);
	new = malloc(sizeof(char) * (size + 1));
	ft_strcpy(new, src);
	return (new);
}
