/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:42:11 by fstupar           #+#    #+#             */
/*   Updated: 2022/03/07 14:53:07 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ra(t_list **head)
{
	int		g;
	t_list	*result;
	t_list	**res_head;

	res_head = &result;
	g = get_top_integer(*head);
	result = delete_top(*head);
	add_bottom(res_head, g);
	write(1, "ra\n", 3);
	return (result);
}

t_list	*rb(t_list **head)
{
	int		g;
	t_list	*result;
	t_list	**res_head;

	res_head = &result;
	g = get_top_integer(*head);
	result = delete_top(*head);
	add_bottom(res_head, g);
	write(1, "rb\n", 3);
	return (result);
}

/*p_list	*rr(t_list *list_a, t_list *list_b, t_list **head_a, t_list **head_b)
{	
	p_list	*lists;

	lists->a = ra(head_a);
	lists->b = ra(head_b);
	return (lists);
}*/
