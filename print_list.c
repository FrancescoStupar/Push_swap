/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:29:58 by fstupar           #+#    #+#             */
/*   Updated: 2022/03/07 12:29:59 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *list)
{
	char	*str;

	str = "\0";
	while (list)
	{
		str = ft_itoa(list->i);
		ft_putstr_fd(str, 1);
		list = list -> next;
	}
}
