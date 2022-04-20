/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_bottom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:28:08 by fstupar           #+#    #+#             */
/*   Updated: 2022/03/07 11:39:36 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*add_bottom(t_list **head_ref, int new_data)
{
	t_list	*new_node;
	t_list	*last;
	t_list	*list;

	new_node = malloc(sizeof(t_list));
	last = *head_ref;
	list = NULL;
	if (last)
	{
		if (new_node)
		{
			new_node->i = new_data;
			new_node->next = NULL;
		}
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		return (last);
	}
	else
		list = add_top(head_ref, new_data);
	return (list);
}
