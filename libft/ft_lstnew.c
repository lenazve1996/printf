/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 00:57:32 by ayajirob          #+#    #+#             */
/*   Updated: 2020/02/22 23:37:07 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list))))
	{
		if (content == NULL)
		{
			new->content_size = 0;
			new->content = NULL;
		}
		else if ((new->content = malloc(content_size)))
		{
			ft_memcpy(new->content, content, content_size);
			new->content_size = content_size;
		}
		else
		{
			free(new);
			return (NULL);
		}
		new->next = NULL;
	}
	return (new);
}
