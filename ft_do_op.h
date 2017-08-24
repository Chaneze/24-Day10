/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 20:46:51 by caroua            #+#    #+#             */
/*   Updated: 2017/08/22 10:58:46 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H
# include <unistd.h>

typedef int		(*t_f_opp)(int, int);

typedef struct	s_opp
{
	char		*operateur;
	t_f_opp		ft;
}				t_opp;

int				ft_add(int a, int b);
int				ft_nbr(char *str);
int				ft_div(int a, int b);
int				ft_div_error(void);
int				ft_mod_error(void);
int				ft_mod(int a, int b);
int				ft_mul(int a, int b);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
int				ft_sub(int a, int b);
int				ft_usage(int a, int b);

#endif
