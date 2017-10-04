/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_head_is_sorted.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 16:00:36 by mvillemi          #+#    #+#             */
/*   Updated: 2017/10/04 16:00:38 by mvillemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Check if Stack A is sorted
*/

int				ft_exec_head_is_sorted(void)
{
	t_lst	*it;

	it = HEAD_A.next;
	while (it->next != &HEAD_A)
	{
		if (DATA(it) > DATA(it->next))
			return (0);
		it = it->next;
	}
	return (1);
}
