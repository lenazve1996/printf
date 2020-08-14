/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_output_type_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 17:31:08 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/13 18:35:52 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pr_output_type_u(t_printf *pr)
{
	unsigned long long	value;
	char		buf[100];
	int			n;
	
	if (pr->length == LENGTH_HH)
		value = (unsigned char)va_arg(pr->ap, unsigned int);
	else if (pr->length == LENGTH_H)
		value = (unsigned short)va_arg(pr->ap, unsigned int);
	else if (pr->length == LENGTH_L)
		value = (unsigned long)va_arg(pr->ap, unsigned long);
	else if (pr->length == LENGTH_LL)
		value = (unsigned long long)va_arg(pr->ap, unsigned long long);
	else
		value = (unsigned int)va_arg(pr->ap, unsigned int);
	
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
