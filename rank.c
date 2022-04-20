/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:37:20 by fstupar           #+#    #+#             */
/*   Updated: 2022/04/13 16:25:45 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*rank_list(t_list *list_a, t_list **head_ref_a)
{
	int		x;
	int		counter;
	t_list	*ranked_list;
	t_list	*tmp;

	tmp = list_a;
	ranked_list = NULL;
	counter = -1;
	while (list_a != NULL)
	{
		x = get_top_integer(list_a);
		while (tmp != NULL)
		{
			if (x >= get_top_integer(tmp))
				counter++;
			tmp = tmp->next;
		}
		tmp = *head_ref_a;
		add_bottom(&ranked_list, counter);
		list_a = list_a->next;
		counter = -1;
	}
	return (ranked_list);
}
