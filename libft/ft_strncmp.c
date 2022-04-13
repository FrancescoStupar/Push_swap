/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:27:54 by fstupar           #+#    #+#             */
/*   Updated: 2021/11/04 13:23:39 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	g;
	char	i;

	while (n)
	{
		g = *s1++;
		i = *s2++;
		if (g != i)
			return ((unsigned char)g - (unsigned char)i);
		if (!g)
			break ;
		n--;
	}
	return (0);
}
