/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 21:28:48 by ayajirob          #+#    #+#             */
/*   Updated: 2020/08/13 18:50:05 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
    printf("|%10c|\n", 's');
    ft_printf("%10c|\n", 's');
	printf("|%-10.5d|\n", 2396830);
    ft_printf("|%-10.5d|\n", 2396830);
    return (0);
}
