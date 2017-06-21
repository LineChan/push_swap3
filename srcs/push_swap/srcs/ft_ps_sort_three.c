/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_sort_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillemi <mvillemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 18:58:14 by mvillemi          #+#    #+#             */
/*   Updated: 2017/05/10 11:39:33 by mvillemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

# define CASE_1 ((C_STACK(it)->data > C_STACK(it->next)->data) && \
				(C_STACK(it->next)->data < C_STACK(it->next->next)->data) && \
				(C_STACK(it)->data < C_STACK(it->next->next)->data))

# define CASE_2 ((C_STACK(it)->data > C_STACK(it->next)->data) && \
				(C_STACK(it->next)->data < C_STACK(it->next->next)->data))

# define CASE_3 ((C_STACK(it)->data < C_STACK(it->next->next)->data) && \
				(C_STACK(it->next)->data > C_STACK(it->next->next)->data))

# define CASE_4 ((C_STACK(it)->data < C_STACK(it->next)->data) && \
					(C_STACK(it)->data > C_STACK(it->next->next)->data))

/*
** Sort a list with 3 elemets
**
*/

void			ft_ps_sort_three(void)
{
	node	it;

	it = TOP_A;
	 if (CASE_1)
		ft_exec_sa();
	else if (CASE_2)
		ft_exec_ra();
	else if (CASE_3)
	{
		ft_exec_rra();
		ft_exec_sa();
	}
	else if (CASE_4)
		ft_exec_rra();
	else if (ft_ps_head_is_reverse_sorted(&HEAD_A))
	{
		ft_exec_ra();
		ft_exec_sa();
	}
	ft_lst_moveto_prev(&HEAD_A, TOP_A);
}