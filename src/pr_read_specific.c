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

void	pr_read_specific(t_printf *pr)
{
	pr->format++;
	pr_read_flags(pr);
	pr_read_width(pr);
	pr_read_precision(pr);
	pr_read_length(pr);
	pr_read_type(pr);
	printf("flag_minus = %d\n", pr->flag_minus);
}
