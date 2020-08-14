/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_output_type_с.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 17:54:49 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/14 19:01:53 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pr_output_type_с(t_printf *pr)
{
	int		n;
	char	value;

	value = (char)va_arg(pr->ap, int);
	n = pr->width - 1;

	if (pr->flag_minus)
	{
		ft_putchar(value);
		pr_putstr_spaces(n);
	}

	else
	{
		pr_putstr_spaces(n);
		ft_putchar(value);
	}
}
