/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 19:52:55 by ayajirob          #+#    #+#             */
/*   Updated: 2019/09/29 20:46:03 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		*d++ = *s++;
		if (*(d - 1) == cc)
			return (d);
		i++;
	}
	return (NULL);
}
