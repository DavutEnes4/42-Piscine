/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:40:35 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/12 14:41:19 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int size, char **args)
{
	int	i;
	int	j;

	j = 1;
	while (size-- > 1)
	{
		i = 0;
		while (args[size][i])
			write(1, &args[size][i++], 1);
		write(1, "\n", 1);
	}
}
