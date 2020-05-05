/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 01:29:50 by ayajirob          #+#    #+#             */
/*   Updated: 2020/01/29 03:59:21 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
    if (alst == NULL || del == NULL)
        return;
    del((*alst)->content, (*alst)->content_size);
    free(*alst);
    *alst = NULL;
}
