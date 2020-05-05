/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 18:14:29 by ayajirob          #+#    #+#             */
/*   Updated: 2019/09/29 01:16:50 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *d;
	unsigned char g;

	d = (unsigned char *)b;
	g = (unsigned char)c;
	while (n--)
	{
		*d++ = g;
	}
	return (b);
}
