/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:34:46 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/12 14:39:36 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int size, char **args)
{
	int	i;
	int	j;

	j = 1;
	while (j < size)
	{
		i = 0;
		while (args[j][i])
			write(1, &args[j][i++], 1);
		write(1, "\n", 1);
		j++;
	}
}
