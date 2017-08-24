/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 19:08:18 by caroua            #+#    #+#             */
/*   Updated: 2017/08/22 10:55:39 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"
#include "ft_opp.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc != 4)
		return (0);
	i = 0;
	c = argv[2][0];
	if (c == '/' && ft_nbr(argv[3]) == 0)
		return (ft_div_error());
	if (c == '%' && ft_nbr(argv[3]) == 0)
		return (ft_mod_error());
	while (i < 5)
	{
		if (*g_opptab[i].operateur == c)
		{
			ft_putnbr(g_opptab[i].ft(ft_nbr(argv[1]), ft_nbr(argv[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	g_opptab[i].ft(ft_nbr(argv[1]), ft_nbr(argv[3]));
	ft_putchar('\n');
	return (1);
}
