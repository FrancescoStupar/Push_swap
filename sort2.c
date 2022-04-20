/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:42:11 by fstupar           #+#    #+#             */
/*   Updated: 2022/04/13 17:47:13 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_system(t_list **head_a, t_list **head_b)
{
	*head_a = very_small_sort(head_a);
	if (get_second_integer(*head_b))
	{
		if (get_top_integer(*head_b) > get_bottom_integer(*head_b))
			*head_b = rb(head_b);
	}
	*head_b = pa(*head_b, head_a);
	*head_a = ra(head_a);
	*head_b = pa(*head_b, head_a);
	*head_a = ra(head_a);
	return (*head_a);
}
