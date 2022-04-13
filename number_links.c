/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_links.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:15:31 by fstupar           #+#    #+#             */
/*   Updated: 2022/03/07 12:28:58 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	number_links(t_list *list)
{
	int		count;
	t_list	*current;

	count = 0;
	current = list;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
