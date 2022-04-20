/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:09:42 by fstupar           #+#    #+#             */
/*   Updated: 2022/03/07 12:10:25 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*delete_top(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	head = head->next;
	free (tmp);
	tmp = NULL;
	return (head);
}
