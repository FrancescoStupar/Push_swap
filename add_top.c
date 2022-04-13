/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_top.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:43:42 by fstupar           #+#    #+#             */
/*   Updated: 2022/03/07 11:45:09 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*add_top(t_list **list, int i)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		if (*list)
		{
		tmp->i = i;
		tmp->next = *list;
		}
		else
		{
		tmp->i = i;
		tmp->next = NULL;
		}
	}
	*list = tmp;
	return (*list);
}
