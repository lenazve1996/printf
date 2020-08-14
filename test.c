/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 21:28:48 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/15 02:00:40 by ayajirob         ###   ########.fr       */
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

    printf("|%p|\n", 0);
    ft_printf("|%p|\n", 0);

    return (0);
}
