/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:10:44 by fstupar           #+#    #+#             */
/*   Updated: 2022/04/13 16:03:40 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list **list_a)
{
	int		number;
	t_list	*tmp;		

	tmp = *list_a;
	while (tmp->next)
	{
		number = tmp-> i;
		tmp = tmp ->next;
		if (number > tmp -> i)
			return (1);
	}
	return (0);
}

int	check_dup(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strlen(argv[i]) == ft_strlen(argv[j]))
			{
				if (ft_strncmp(argv[i], argv[j], ft_strlen(argv[i])) == 0)
					return (0);
			}
		j++;
		}
		i++;
	}
	return (1);
}

int	ft_isdigit(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (s[i] == '-' || s[i] == '+')
		{
			if (s[i + 1] == '-' || s[i + 1] == '+')
				return (0);
			i++;
		}
		if (s[i] > '9' || s[i] < '0')
			return (0);
		i++;
	}
	return (1);
}

int	check_nbr(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(&argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_range(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_atol(argv[i]) <= 2147483647 && ft_atol(argv[i]) >= -2147483648)
			i++;
		else
			return (0);
	}
	return (1);
}
