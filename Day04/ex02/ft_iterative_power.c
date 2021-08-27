/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgwedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 01:15:53 by skgwedi           #+#    #+#             */
/*   Updated: 2018/01/14 02:45:38 by skgwedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)

int ft_iterative_power(int nb, int power)
{
	int number;
	int count;

	number = 1;
	count = 1;
	if (power < 0)
		return (0);
	while (count <= power)
	{
		number = number * nb;
		count++;
	}
	return (number);
}
