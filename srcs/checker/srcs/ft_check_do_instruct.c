/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillemi <mvillemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 12:15:19 by mvillemi          #+#    #+#             */
/*   Updated: 2017/05/05 12:15:29 by mvillemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
/*
** Execute a move
**
** 1st parameter : move to be executed
*/
int			ft_check_do_instruct(char const *line)
{
	//ft_printf("{RED: SEGFAULT DO}\n");
	if (!ft_strcmp("pa", line))
		ft_exec_pa();
	else if (!ft_strcmp("pb", line))
		ft_exec_pb();
	else if (!ft_strcmp("ra", line))
		ft_exec_ra();
	else if (!ft_strcmp("rb", line))
		ft_exec_rb();
	else if (!ft_strcmp("rr", line))
		ft_exec_rr();
	else if (!ft_strcmp("rra", line))
		ft_exec_rra();
	else if (!ft_strcmp("rrb", line))
		ft_exec_rrb();
	else if (!ft_strcmp("rrr", line))
		ft_exec_rrr();
	else if (!ft_strcmp("sa", line))
		ft_exec_sa();
	else if (!ft_strcmp("sb", line))
		ft_exec_sb();
	else if (!ft_strcmp("ss", line))
		ft_exec_ss();
	else
		return (0);
	return (1);
}