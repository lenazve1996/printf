/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoindup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 18:55:12 by ayajirob          #+#    #+#             */
/*   Updated: 2019/11/30 19:00:47 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoindup(char const *s1, char const *s2)
{
	if (s1 != NULL)
		return (ft_strjoin(s1, s2));
	else
		return (ft_strdup(s2));
}
