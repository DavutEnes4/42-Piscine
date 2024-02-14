/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:25:24 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/14 11:32:43 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strslen(char **str)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j++])
			count++;
		i++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	while (dest[x])
		x++;
	y = 0;
	while (src[y])
		dest[x++] = src[y++];
	dest[x] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*str;

	if (size == 0)
	{
		str = malloc(1);
		return (str = NULL, str);
	}
	count = ft_strslen(strs) + ft_strlen(sep) * (size - 1) + 1;
	str = malloc((sizeof(char) * count) + 1);
	i = 0;
	while (strs[i])
	{
		ft_strcat(str, strs[i]);
		if (i < (size - 1))
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
