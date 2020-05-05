/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 02:04:48 by ayajirob          #+#    #+#             */
/*   Updated: 2020/01/29 04:29:57 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list *tmp;
    t_list *next;

    if (alst == NULL || del == NULL)
        return;
    tmp = *alst;
    while(tmp)
    {
        next = tmp->next;
        del(tmp->content, tmp->content_size);
        free(tmp);
        tmp = next;
    }
    *alst = NULL;
}