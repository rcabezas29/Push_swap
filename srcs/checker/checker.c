/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:36:41 by rcabezas          #+#    #+#             */
/*   Updated: 2021/03/26 15:08:06 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_push_swap	*ps;

	check_args(argv);
	ps = malloc(sizeof(t_push_swap));
	ps->n = argc - 1;
	if (argc <= 1)
    {
		printf("ERROR\nIncorrect number of arguments");
		return (0);
	}
	init_stack_a(ps, argv);
	print_stack_a(ps);
	while (get_next_line(1, &ps->line) > 0)
	{
		if (!ft_strcmp(ps->line, ""))
			break ;
		read_line(ps);
	}
	check_order(ps);
	return (0);
}