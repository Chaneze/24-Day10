/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_nbr_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:59:41 by caroua            #+#    #+#             */
/*   Updated: 2017/08/22 11:59:47 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long nblong;

	nblong = nb;
	if (nblong < 0)
	{
		ft_putchar('-');
		nblong = -nblong;
	}
	if (nblong < 10)
	{
		ft_putchar('0' + nblong);
	}
	else
	{
		ft_putnbr(nblong / 10);
		ft_putchar('0' + (nblong % 10));
	}
}
