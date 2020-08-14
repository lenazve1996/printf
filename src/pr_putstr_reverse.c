/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_putstr_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 17:26:46 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/11 22:08:45 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pr_putstr_reverse(char *buf)
{
	int 	n;
	n = ft_strlen(buf);
	
	while (n > 0)
	{
		n--;
		ft_putchar(buf[n]);
	}
}
