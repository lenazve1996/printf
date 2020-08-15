/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_pow10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 00:33:21 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/16 00:38:12 by ayajirob         ###   ########.fr       */
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
