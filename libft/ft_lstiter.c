/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 02:36:32 by ayajirob          #+#    #+#             */
/*   Updated: 2020/01/29 05:02:37 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    t_list *tmp;

    if (lst == NULL || f == NULL)
        return;
    tmp = lst;
    while(tmp)
    {
        f(tmp);
        tmp = tmp->next;
    }
}