/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 02:54:47 by ayajirob          #+#    #+#             */
/*   Updated: 2020/02/23 03:52:46 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstpush_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return (new);
	if (alst == NULL)
	{
		ft_lstadd(alst, new);
		return (new);
	}
	tmp = *alst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (tmp);
}
