/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 23:08:41 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/11 22:08:38 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pr_output(t_printf *pr)
{
	if (pr->type == 'd')
	{
		pr_output_type_d(pr);
	}
	// else if (pr->type == 'i')
	// {
	// 	pr_output_type_i(pr);
	// }
	// else if (pr->type == 'o')
	// {
	// 	pr_output_type_o(pr);
	// }
	else if (pr->type == 'u')
	{
	 	pr_output_type_u(pr);
	}
	// else if (pr->type == 'x')
	// {
	// 	pr_output_type_x(pr);
	// }
	// else if (pr->type == 'X')
	// {
	// 	pr_output_type_X(pr);
	// }
}
