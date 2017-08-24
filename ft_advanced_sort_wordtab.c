/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:48:43 by caroua            #+#    #+#             */
/*   Updated: 2017/08/23 20:07:34 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_table_size(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		size;
	char	*swap;

	i = 0;
	size = ft_table_size(tab);
	while (i < size)
	{
		j = 0;
		while (j < (size - i - 1))
		{
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
			{
				swap = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}
