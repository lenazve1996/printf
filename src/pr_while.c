/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_while.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 22:44:23 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/15 18:20:48 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pr_while(t_printf *pr)
{
	if (ft_strequ(pr->format, "%"))
		return ;
	while (*pr->format)
	{
		if (*pr->format == '%')
		{
			pr_read_specific(pr);
			pr_output(pr);
		}
		else
		{
			pr_putchar(pr, *pr->format);
			pr->format++;
		}
	}
}
