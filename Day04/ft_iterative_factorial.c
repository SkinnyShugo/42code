/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgwedi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:31:59 by skgwedi           #+#    #+#             */
/*   Updated: 2018/01/14 13:35:13 by skgwedi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial (int nb)
{
  int i;

  if (nb < 1)
    return (0);
  i = nb;
  while (i > 1)
    {
      nb = nb * (i - 1);
      i--;
    }
  return (nb);
}

int	main (void)
{
  int nb;

  nb = ft_iterative_factorial (5);
  printf("%d", nb);
  return (0);
}
