/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:16:40 by fstupar           #+#    #+#             */
/*   Updated: 2021/11/04 13:06:46 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp;
	char	*dest;

	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp < dest)
	{
		while (n--)
			dest[n] = tmp[n];
	}
	else
		ft_memcpy(dest, tmp, n);
	return (dst);
}
/*
int	main(void)
{
	char s1[] = "Eu gosto da moli";
	char s2[] = "Mentira";

	printf("Meu:%s\n", ft_memmove(s1, s2, 4));
	char	s3[] = "Eu gosto da moli";
	char	s4[] = "Mentira";
	printf("Ori:%s\n", memmove(s3, s4, 4));
}*/
