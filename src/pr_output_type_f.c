/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_output_type_f.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 03:54:14 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/15 20:08:38 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long long	pr_pow10(int n)
{
	unsigned long long		value;

	value = 1;
	while (n > 0)
	{
		value = value * 10;
		n--;
	}
	return (value);
}

void		pr_putstr_for_flag_f(t_printf *pr, char *buf, char sign)
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

void	pr_output_type_f(t_printf *pr)
{
	double long				value;
	unsigned long long		integer_part;
	unsigned long long		fractional_part;
	unsigned long long		pow10;
	char					buf[100];
	char					sign;
	int						n;

	if (pr->length == LENGTH_BIGL)
		value = (double long)va_arg(pr->ap, double long);
	else
		value = (double long)va_arg(pr->ap, double);
	sign = '\0';
	if (pr->flag_space)
		sign = ' ';
	if (pr->flag_plus)
		sign = '+';
	if (value < 0)
	{
		sign = '-';
		value = -value;
	}
	if (pr->precision == -1)
		pr->precision = 6;
	pow10 = pr_pow10(pr->precision + 1);
	integer_part = (unsigned long long)value;
	value = (value - (double long)integer_part) * (double long)pow10;
	if ((unsigned long long)value % 10 > 4)
		value = value / 10 + 1;
	else
		value = value / 10;
	integer_part += (unsigned long long)value / (pow10 / 10);/*the rounding of the integer part*/
	fractional_part = (unsigned long long)value % (pow10 / 10);
	n = 0;
	while (fractional_part > 0)
	{
		buf[n] = '0' + fractional_part % 10;
		fractional_part = fractional_part / 10;
		n++;
	}
	while (n < pr->precision)/*fill zero*/
		buf[n++] = '0';
	if (n > 0)
		buf[n++] = '.';
	if (integer_part == 0)
		buf[n++] = '0';
	while (integer_part > 0)
	{
		buf[n] = '0' + integer_part % 10;
		integer_part = integer_part / 10;
		n++;
	}
	buf[n] = '\0';
	if (sign)
		pr->width -= 1;
	if (pr->flag_zero && !pr->flag_minus)
		pr->precision = pr->width;
	pr->precision -= n;
	pr->width -= n;
	if (pr->precision > 0)
		pr->width -= pr->precision;
	pr_putstr_for_flag_f(pr, buf, sign);
}
