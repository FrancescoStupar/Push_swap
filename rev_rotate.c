/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:39:21 by fstupar           #+#    #+#             */
/*   Updated: 2022/03/07 14:56:56 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*rev_r(t_list **head)
{
	int		g;
	t_list	*result;

	g = delete_bottom(*head);
	result = add_top(head, g);
	write(1, "rra\n", 4);
	return (result);
}

/*p_list	*rrr(t_list *list_a, t_list *list_b, t_list **head_a, t_list **head_b)
{	
	p_list	*lists;

	lists->a = rev_r(head_a);
	lists->b = rev_r(head_b);
	return (lists);
}*/
