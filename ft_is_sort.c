/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 17:50:47 by caroua            #+#    #+#             */
/*   Updated: 2017/08/22 19:36:34 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int increase;
	int decrease;

	i = 0;
	increase = 1;
	decrease = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			decrease = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			increase = 0;
		i++;
	}
	if (increase == 1 || decrease == 1)
		return (1);
	else
		return (0);
}
