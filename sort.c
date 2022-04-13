/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:42:11 by fstupar           #+#    #+#             */
/*   Updated: 2022/04/13 18:37:18 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*anto(t_list **head_a)
{
	if (get_second_integer(*head_a) == 1)
	{
		s(head_a);
		*head_a = rev_r(head_a);
	}
	else
		*head_a = ra(head_a);
	return (*head_a);
}

t_list	*very_small_sort(t_list **head_a)
{
	if (get_top_integer(*head_a) == 0)
	{
		if (get_second_integer(*head_a) < get_bottom_integer(*head_a))
			return (*head_a);
		else
		{
			s(head_a);
			*head_a = ra(head_a);
			return (*head_a);
		}
	}
	else if (get_top_integer(*head_a) == 1)
	{
		if (get_second_integer(*head_a) == 2)
		{
			*head_a = rev_r(head_a);
		}
		else
			s(head_a);
	}
	else
		*head_a = anto(head_a);
	return (*head_a);
}

t_list	*kinda_small_sort(t_list **head_a, t_list **head_b)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	if (number_links(*head_a) == 4)
		g = 1;
	else
		g = 2;
	while (i++ < (number_links(*head_a) + 1))
	{
		if (get_top_integer(*head_a) > g)
			*head_a = pb(*head_a, head_b);
		else
			*head_a = ra(head_a);
	}
	*head_a = ft_system(head_a, head_b);
	return (*head_a);
}

t_list	*small_sort(t_list **head_a, t_list **head_b)
{
	int	g;

	g = number_links(*head_a);
	if (g <= 3)
		*head_a = very_small_sort(head_a);
	else
		*head_a = kinda_small_sort(head_a, head_b);
	return (*head_a);
}

typedef struct s_point
{
	int	i;
	int	max_bits;
	int	max_number;
	int	g;
	int	top_num;
}	t_point;

t_list	*big_sort(t_list **head_a, t_list **head_b)
{
	t_point	a;

	a.i = -1;
	a.max_bits = 0;
	a.max_number = number_links(*head_a) - 1;
	a.g = -1;
	while (a.max_number >> a.max_bits != 0)
		++a.max_bits;
	while (++a.i < a.max_bits)
	{
		while (++a.g < (a.max_number + 1))
		{
			a.top_num = get_top_integer(*head_a);
			if (((a.top_num >> a.i) & 1) == 1)
				*head_a = ra(head_a);
			else
				*head_a = pb(*head_a, head_b);
		}
		while (number_links(*head_b) != 0)
			*head_b = pa(*head_b, head_a);
		a.g = -1;
	}
	return (*head_a);
}
