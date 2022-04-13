/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_integer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:11:31 by fstupar           #+#    #+#             */
/*   Updated: 2022/03/10 11:04:34 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_top_integer(t_list *list)
{
	int	g;

	g = 0;
	if (list)
		g = list->i;
	return (g);
}

int	get_bottom_integer(t_list *list)
{
	int		g;
	t_list	*temp;

	if (list == NULL)
		return (0);
	g = 0;
	temp = list;
	while (temp->next && temp->next->next != NULL)
		temp = temp->next;
	if (temp->next)
		g = temp->next->i;
	return (g);
}

int	get_second_integer(t_list *list)
{
	int	g;

	g = 0;
	if (list->next)
		g = list->next->i;
	return (g);
}
