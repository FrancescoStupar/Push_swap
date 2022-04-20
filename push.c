/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:35:50 by fstupar           #+#    #+#             */
/*   Updated: 2022/03/07 12:36:59 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*pa(t_list *head_a, t_list **head_ref_b)
{
	int	g;

	g = get_top_integer(head_a);
	head_a = delete_top(head_a);
	add_top(head_ref_b, g);
	write(1, "pa\n", 3);
	return (head_a);
}

t_list	*pb(t_list *head_a, t_list **head_ref_b)
{
	int	g;

	g = get_top_integer(head_a);
	head_a = delete_top(head_a);
	add_top(head_ref_b, g);
	write(1, "pb\n", 3);
	return (head_a);
}
