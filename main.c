/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:10:44 by fstupar           #+#    #+#             */
/*   Updated: 2022/04/14 11:55:21 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_run(int argc, char **argv, t_list *list_a, t_list *list_b)
{
	int	i;

	i = 1;
	if (argc == 2 || argc == 1)
		return (0);
	while (i < argc)
	{
		add_bottom(&list_a, (ft_atoi(argv[i])));
		i++;
	}
	if (!is_sorted(&list_a))
		return (0);
	list_a = rank_list(list_a, &list_a);
	if (argc <= 6)
		list_a = small_sort(&list_a, &list_b);
	else if (argc > 6)
	{
		list_a = rank_list(list_a, &list_a);
		list_a = big_sort(&list_a, &list_b);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;

	list_a = NULL;
	list_b = NULL;
	if (argc <= 1 || !check_dup(argv) || !check_nbr(argv) || !check_range(argv))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	else
		ft_run(argc, argv, list_a, list_b);
	return (0);
}
