/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_bottom.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:45:28 by fstupar           #+#    #+#             */
/*   Updated: 2022/03/07 12:09:23 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	delete_bottom(t_list *head)
{
	int		g;
	t_list	*temp;
	t_list	*lastnode;

	g = 0;
	temp = NULL;
	lastnode = NULL;
	if (head != NULL)
	{
		if (head->next == NULL)
			head = NULL;
		else
		{
			temp = head;
			while (temp->next->next != NULL)
				temp = temp->next;
			g = temp->next-> i;
			lastnode = temp->next;
			temp->next = NULL;
			free (lastnode);
		}
	}
	return (g);
}
