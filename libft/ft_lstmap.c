/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 02:43:03 by ayajirob          #+#    #+#             */
/*   Updated: 2020/01/29 04:56:37 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *tmp;
    t_list *new;
    t_list *new_head;

    if(lst == NULL || f == NULL)
        return (NULL);
    tmp = lst;
    if (!(new_head = f(tmp)))
        return (NULL);
    new = new_head;
    while(tmp->next)
    {
        new->next = f(tmp->next);
        new = new->next;
        tmp = tmp->next;
    }
    return(new_head);
}
