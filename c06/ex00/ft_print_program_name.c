/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:31:02 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/12 14:38:54 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int size, char **args)
{
	int	i;

	i = 0;
	if (size > 0)
	{
		while (args[0][i])
			write(1, &args[0][i++], 1);
		write(1, "\n", 1);
	}
}
