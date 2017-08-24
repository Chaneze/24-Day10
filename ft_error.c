/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:34:00 by caroua            #+#    #+#             */
/*   Updated: 2017/08/22 10:41:08 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int		ft_div_error(void)
{
	ft_putstr("Stop : division by zero\n");
	return (0);
}

int		ft_mod_error(void)
{
	ft_putstr("Stop : modulo by zero\n");
	return (0);
}

int		ft_usage(int a, int b)
{
	int i;

	i = 0;
	a = 0;
	b = 0;
	ft_putstr("error : only [ + - * / % ] are accepted.");
	return (0);
}
