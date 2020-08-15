/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_output_type_d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 22:20:30 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/15 20:04:23 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long	pr_read_value(t_printf *pr)
{
	long long			value;
	
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
	return (value);
}

void		pr_putstr_for_flag_d(t_printf *pr, char *buf, char sign)
{
	if (pr->flag_minus)
	{
		if (sign)
			pr_putchar(pr, sign);
		pr_putstr_repeat(pr, pr->precision, '0');
		pr_putstr_reverse(pr, buf);
		pr_putstr_repeat(pr, pr->width, ' ');
	}
	else
	{
		pr_putstr_repeat(pr, pr->width, ' ');
		if (sign)
			pr_putchar(pr, sign);
		pr_putstr_repeat(pr, pr->precision, '0');
		pr_putstr_reverse(pr, buf);
	}
}

void	pr_output_type_d(t_printf *pr)
{
	long long			value;
	unsigned long long	u_value;
	char				buf[100];
	char				sign;
	int					n;

	value = pr_read_value(pr);
	sign = '\0';
	if (pr->flag_space)
		sign = ' ';
	if (pr->flag_plus)
		sign = '+';
	if (value < 0)
		sign = '-';
	u_value = value < 0 ? -value : value;
	n = 0;
	while (u_value > 0)
	{
		buf[n] = '0' + u_value % 10;
		u_value = u_value / 10;
		n++;
	}
	if (n == 0 && pr->precision != 0)
	{
		buf[n] = '0';
		n++;
	}
	buf[n] = '\0';
	if (sign)
		pr->width -= 1;
	if (pr->flag_zero && pr->precision == -1 && !pr->flag_minus)
		pr->precision = pr->width;
	pr->precision -= n;
	pr->width -= n;
	if (pr->precision > 0)
		pr->width -= pr->precision;
	pr_putstr_for_flag_d(pr, buf, sign);
}
