/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 20:06:54 by ayajirob          #+#    #+#             */
/*   Updated: 2019/09/29 20:07:47 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l;
	size_t	m;

	l = 0;
	m = 0;
	while (dst[l] && l < size)
		l++;
	while (src[m] && (l + m + 1) < size)
	{
		dst[l + m] = src[m];
		m++;
	}
	if (l < size)
	{
		dst[l + m] = 0;
	}
	return (l + ft_strlen(src));
}
