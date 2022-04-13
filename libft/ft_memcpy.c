/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:27:05 by fstupar           #+#    #+#             */
/*   Updated: 2021/11/04 12:35:10 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;
	int		i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char s1[] = "Eu gosto da moli";
	char s2[] = "Mentira";

	printf("Meu:%s\n", ft_memcpy(s1, s2, 4));
	char	s3[] = "Eu gosto da moli";
	char	s4[] = "Mentira";
	printf("Ori:%s\n", memcpy(s3, s4, 4));
}*/
