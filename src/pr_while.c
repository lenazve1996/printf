/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_while.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 22:44:23 by ayajirob          #+#    #+#             */
/*   Updated: 2020/05/05 23:19:09 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pr_while(t_printf *pr)
{

	
	while (*pr->format)
	{
		if (*pr->format == '%')
		{
			pr_read_specific(pr);
			pr_output(pr);
		}
		else
			pr_putchar(pr, *pr->format);
		pr->format++;
	}

	"%s %d", "12312", 888
}
