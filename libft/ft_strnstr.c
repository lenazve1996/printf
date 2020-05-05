/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 02:50:06 by ayajirob          #+#    #+#             */
/*   Updated: 2019/09/29 03:09:08 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	len2;

	if (*small == '\0')
		return ((char *)big);
	len2 = ft_strlen(small);
	while (*big != '\0' && len-- >= len2)
	{
		if (*big == *small && ft_strncmp(big, small, len2) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
