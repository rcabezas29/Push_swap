/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:46:30 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/25 11:00:29 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void    check_order(t_push_swap *ps)
{
    int i;

    i = 0;
    while (i < ps->n - 1)
    {
        if (ps->a[i] > ps->a[i + 1] || ps->b[0] != 0)
        {
            printf("KO");
            return ;
        }
        i++;
    }
    printf("OK!");
    exit(EXIT_SUCCESS);
}