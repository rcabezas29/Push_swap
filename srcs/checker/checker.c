/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:36:41 by rcabezas          #+#    #+#             */
/*   Updated: 2021/04/07 15:58:04 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	t_push_swap	*ps;

	if (argc <= 1)
	{
		printf("Error\n");
		return (0);
	}
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		argc = ft_strlen(argv);
	}
	check_args(argv);
	ps = malloc(sizeof(t_push_swap));
	ft_bzero(ps, sizeof(t_push_swap));
	ps->n = argc - 1;
	init_stack_a(ps, argv);
	print_stack_a(ps);
	while (get_next_line(0, &ps->line) > 0)
	{
		if (!ft_strcmp(ps->line, ""))
			break ;
		read_line(ps);
	}
	check_order(ps);
	return (0);
}
