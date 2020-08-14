/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_read_specific.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 21:54:57 by ayajirob          #+#    #+#             */
/*   Updated: 2020/05/05 22:16:1 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pr_read_flags(t_printf *pr)
{
	while (*pr->format)
	{
		if (*pr->format == '-')
		{
			pr->flag_minus = 1;
			pr->format++;
		}
		else if (*pr->format == '+')
		{
			pr->flag_plus = 1;
			pr->format++;
		}
		else if (*pr->format == ' ')
		{
			pr->flag_space = 1;
			pr->format++;
		}
		else if (*pr->format == '0')
		{
			pr->flag_zero = 1;
			pr->format++;
		}	
		else if (*pr->format == '#')
		{
			pr->flag_hash = 1;
			pr->format++;
		}
		else
			return;

	}
}

void	pr_read_width(t_printf *pr)
{
	pr->width = 0;
	
	while (*pr->format >= '0' && *pr->format <= '9')
	{
		pr->width = pr->width * 10 + (*pr->format - '0');
		pr->format++;
	}
}

void	pr_read_precision(t_printf *pr)
{
	if (*pr->format == '.')
	{
		pr->format++;
		pr->precision = 0;
	
		while (*pr->format >= '0' && *pr->format <= '9')
		{
			pr->precision = pr->precision * 10 + (*pr->format - '0');
			pr->format++;
		}
	}
}

void	pr_read_length(t_printf *pr)
{
	pr->length = LENGTH_DEFAULT;
	if (pr->format[0] == 'l' && pr->format[1] == 'l')
	{
		pr->length = LENGTH_LL;
		pr->format += 2;
	}	
	else if (*pr->format == 'l')
	{
		pr->length = LENGTH_L;
		pr->format++;
	}
	else if (*pr->format == 'L')
	{
		pr->length = LENGTH_BIGL;
		pr->format++;
	}
	else if (pr->format[0] == 'h' && pr->format[1] == 'h')
	{
		pr->length = LENGTH_HH;
		pr->format += 2;
	}	
	else if (*pr->format == 'h')
	{
		pr->length = LENGTH_H;
		pr->format++;
	}
}

void	pr_read_type(t_printf *pr)
{
	pr->type = *pr->format;
	pr->format++;
}

void	pr_read_specific(t_printf *pr)
{
	pr->format++;
	pr_read_flags(pr);
	pr_read_width(pr);
	pr_read_precision(pr);
	pr_read_length(pr);
	pr_read_type(pr);
	// printf("flag_minus = %d\n", pr->flag_minus);
	// printf("width = %d\n", pr->width);
	// printf("precision = %d\n", pr->precision);
	// printf("length = %d\n", pr->length);
	// printf("type = %c\n", pr->type);
}
