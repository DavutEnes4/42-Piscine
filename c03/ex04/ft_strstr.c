/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:07:59 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/08 20:08:07 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (to_find[y] == '\0' )
		return (str);
	while (str[x])
	{
		while (str[x + y] == to_find[y] && str[x + y])
			y++;
		if (to_find[y] == '\0')
			return (&str[x]);
		x++;
		y = 0;
	}
	return (0);
}
