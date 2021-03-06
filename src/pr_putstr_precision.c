/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_putstr_precision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 17:26:46 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/15 01:06:47 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pr_putstr_precision(t_printf *pr, char *buf, int n)
{
	while (*buf && n > 0)
	{
		pr_putchar(pr, *buf);
		n--;
		buf++;
	}
}
