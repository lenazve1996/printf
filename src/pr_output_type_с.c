/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_output_type_с.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 17:54:49 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/14 23:28:42 by ayajirob         ###   ########.fr       */
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
		pr_putchar(pr, value);
		pr_putstr_repeat(pr, n, ' ');
	}
	else
	{
		pr_putstr_repeat(pr, n, ' ');
		pr_putchar(pr, value);
	}
}
