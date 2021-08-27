/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgwedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 14:04:49 by skgwedi           #+#    #+#             */
/*   Updated: 2018/02/15 09:46:35 by skgwedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(int nb)
{
	int num1;
	int	num2;

	if (nb > 0)
	{
		num1 = nb / 10;
		num2 = nb % 10;
		ft_putchar(num1 + 48);
		ft_putchar(num2 + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int n;

	i = 0;
	while (i <= 99)
	{
		n = i + 1;
		display(i);
		ft_putchar(' ');
		display(n);
		if (i < 98 || n < 100)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		++n;
		++i;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
