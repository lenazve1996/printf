/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 02:23:24 by ayajirob          #+#    #+#             */
/*   Updated: 2020/02/24 16:57:38 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new == NULL)
		return ;
	if (alst == NULL)
		alst = &new;
	else
	{
		new->next = *alst;
		*alst = new;
	}
}
