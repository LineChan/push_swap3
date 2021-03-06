/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_select.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 16:09:22 by mvillemi          #+#    #+#             */
/*   Updated: 2017/10/04 16:09:26 by mvillemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Quicksort sub-routine using select sort
**
** 1st parameter : number of elements between two pivots
** 2nd parameter : pivot value
*/

void			ft_quick_select(int *pushed, int *pivot)
{
	while (*pushed)
	{
		ft_ps_push_max(&HEAD_B, *pushed);
		--*pushed;
	}
	if (ft_exec_head_is_sorted() &&
			(ft_ps_head_is_reverse_sorted(&HEAD_B) || !NB_ELEM_B))
		return ;
	while (DATA(TOP_A) < *pivot)
		ft_exec_pb();
}
