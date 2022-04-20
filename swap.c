/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:42:52 by fstupar           #+#    #+#             */
/*   Updated: 2022/03/08 15:33:36 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	s(t_list **head)
{
	t_list	*temp;

	temp = *head;
	if (temp && temp->next)
	{
		swap(&temp->i, &temp->next->i);
		write(1, "sa\n", 3);
	}
}

void	ss(t_list **head_a, t_list **head_b)
{
	s(head_a);
	s(head_b);
}
