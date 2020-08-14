/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 03:26:44 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/10 20:59:10 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int znak;
	int sum;

	sum = 0;
	znak = 1;
	while (((*str >= 9) && (*str <= 13)) || (*str == 32))
	{
		str++;
	}
	if (*str == 45)
	{
		znak = -1;
		str++;
	}
	else if (*str == 43)
		str++;
	while ((*str > 47) && (*str < 58))
	{
		sum = sum * 10 + (*str - 48);
		str++;
	}
	return (sum * znak);
}
