/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 02:45:40 by ayajirob          #+#    #+#             */
/*   Updated: 2019/09/29 02:46:17 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *small)
{
	size_t	len;

	if (!(*small))
		return ((char *)big);
	len = ft_strlen(small);
	while (*big && ft_strncmp(big, small, len))
	{
		big++;
	}
	if (!*big)
		return (NULL);
	return ((char *)big);
}
