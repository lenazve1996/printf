/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_output_type_d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 22:20:30 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/11 22:08:41 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pr_output_type_d(t_printf *pr)
{
	long long	value;
	char		buf[100];
	int			n;
	
	if (pr->length == LENGTH_HH)
		value = (char)va_arg(pr->ap, int);
	else if (pr->length == LENGTH_H)
		value = (short)va_arg(pr->ap, int);
	else if (pr->length == LENGTH_L)
		value = (long)va_arg(pr->ap, long);
	else if (pr->length == LENGTH_LL)
		value = (long long)va_arg(pr->ap, long long);
	else
		value = (int)va_arg(pr->ap, int);
	
	n = 0;
	while (value > 0)
	{
		buf[n] = '0' + value % 10;
		value = value / 10;
		n++;
	}
	if (n == 0)
	{
		buf[n] = '0';
		n++;
	}

	while (n < pr->precision)
	{
		buf[n] = '0';
		n++;
	}
	if (pr->flag_plus)
	{
		buf[n] = '+';
		n++;
	}
	buf[n] = '\0';
	
	n = pr->width - ft_strlen(buf);
	
	if (pr->flag_minus)
	{
		pr_putstr_reverse(buf);
		pr_putstr_spaces(n);
	}

	else
	{
		pr_putstr_spaces(n);
		pr_putstr_reverse(buf);
	}
}
