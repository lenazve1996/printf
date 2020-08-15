/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 13:45:51 by ayajirob          #+#    #+#             */
/*   Updated: 2020/02/24 16:56:11 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list **alst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *alst;
	while (tmp)
	{
		++i;
		tmp = tmp->next;
	}
	return (i);
}
