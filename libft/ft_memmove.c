/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 20:09:47 by ayajirob          #+#    #+#             */
/*   Updated: 2019/09/29 21:08:33 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d1;
	unsigned char	*s2;

	d1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (s2 < d1)
	{
		d1 = d1 + len;
		s2 = s2 + len;
		while (len-- > 0)
		{
			*--d1 = *--s2;
		}
	}
	else
	{
		while (len-- > 0)
		{
			*d1++ = *s2++;
		}
	}
	return (dst);
}
