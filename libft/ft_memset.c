/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:27:31 by fstupar           #+#    #+#             */
/*   Updated: 2021/11/04 12:34:06 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*y;

	y = b;
	while (len--)
	{
		*y = (unsigned char)c;
		y++;
	}
	return (b);
}
/*
int	main(void)
{
	char str[] = "kkkkkkkkkk";
	printf("%s\n", ft_memset(str, 'o', 4));
}*/
