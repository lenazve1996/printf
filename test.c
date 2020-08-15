/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 21:28:48 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/15 05:38:00 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int     main()
{
    // printf("|%#08.4x|\n", 0x12);
    // ft_printf("|%#08.4x|\n", 0x12);
    // printf("|%08x|\n", 542);
    // ft_printf("|%08x|\n", 542);
    // printf("|%-08x|\n", 542);
    // ft_printf("|%-08x|\n", 542);

    // printf("|@moulitest: %#.x %#.0x|\n", 0, 0);
    // ft_printf("|@moulitest: %#.x %#.0x|\n", 0, 0);
    // printf("|%11.8s|\n", "privet");
    // ft_printf("|%11.8s|\n", "privet");
    // printf("|%s %d %p %% %x|\n", "bonjour ", 42, &free, 42);
    // ft_printf("|%s %d %p %% %x|\n", "bonjour ", 42, &free, 42);
    // printf("|%#o|\n", 0);
    // ft_printf("|%#o|\n", 0);
    // printf("|%.o %.0o|\n", 0, 0);
    // ft_printf("|%.o %.0o|\n", 0, 0);
    // printf("|@moulitest: %#.o %#.0o|\n", 0, 0);
    // ft_printf("|@moulitest: %#.o %#.0o|\n", 0, 0);
    
    // printf("|{%f}{%lf}{%Lf}|\n", 1.42, 1.42, 1.42l);
    // ft_printf("|{%f}{%lf}{%Lf}|\n", 1.42, 1.42, 1.42l);

    printf("|{%+10.2f}|\n", 17.9998);
    ft_printf("|{%+10.2f}|\n", 17.9998);
    printf("|{%-010.2f}|\n", -17.9998);
    ft_printf("|{%-010.2f}|\n", -17.9998);
    return (0);
}
