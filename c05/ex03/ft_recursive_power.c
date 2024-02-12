/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyilma <davyilma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:11:39 by davyilma          #+#    #+#             */
/*   Updated: 2024/02/11 13:44:14 by davyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (x);
}
