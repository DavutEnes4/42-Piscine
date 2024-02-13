/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:25:24 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/13 17:02:54 by davyilma         ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		count;
	int		index;
	char	*str;

	if (size == 0)
	{
		str = malloc(1);
		return (str = NULL, str);
	}
	count = ft_strslen(strs) + ft_strlen(sep) * (size - 1) + 1;
	str = malloc((sizeof(char) * count) + 1);
	i = 0;
	index = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
			str[index++] = strs[i][j++];
		j = 0;
		while (sep[j] && index < count)
			str[index++] = sep[j++];
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(int size, char **args)
{
	char *str = ft_strjoin(size,args," _ ");

	printf("%s",str);
}