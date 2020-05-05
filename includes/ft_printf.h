/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 21:31:19 by ayajirob          #+#    #+#             */
/*   Updated: 2020/05/05 23:18:54 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft.h"

typedef struct	s_printf
{
	int			result;
	const char	*format;
	va_list		ap;
	int			flag_minus;
	int			flag_plus;
	int			flag_hash;
	int			flag_zero;
	int			flag_space;
}				t_printf;

void	pr_putchar(t_printf *pr, char c);
void	pr_while(t_printf *pr);
int		ft_printf(const char *format, ...);
void	pr_read_specific(t_printf *pr);
void	pr_output(t_printf *pr)

#endif
