/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:43:37 by fstupar           #+#    #+#             */
/*   Updated: 2022/04/13 18:46:59 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *str)
{
	long	i;
	long	g;

	i = 0;
	g = 1;
	while (*str != '\0' && ft_strchr("\t\n\v\f\r ", *str) != NULL)
		str++;
	if (*str != '\0' && ft_strchr("+-", *str) != NULL)
		if (*str++ == '-')
			g *= -1;
	i = 0;
	while (*str != '\0' && ft_strchr("0123456789", *str) != NULL)
	{
		i *= 10;
		i += *str - '0';
		str++;
	}
	return (i * g);
}
