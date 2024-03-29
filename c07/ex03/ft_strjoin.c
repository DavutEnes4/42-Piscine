/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2024/02/15 11:49:19 by zdonmez           #+#    #+#             */
/*   Updated: 2024/02/15 11:49:50 by zdonmez          ###   ########.fr       */
=======
/*   Created: 2024/02/15 11:56:01 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/15 11:56:03 by davyilma         ###   ########.fr       */
>>>>>>> 33906d71d782e30b54f9b6b68628803547919708
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		c;

	str = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			str[c++] = sep[j++];
		}
		i++;
	}
	str[c] = '\0';
	return (str);
}
