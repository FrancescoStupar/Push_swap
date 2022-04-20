/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:26:42 by fstupar           #+#    #+#             */
/*   Updated: 2021/10/21 16:50:59 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	s;
	unsigned int	i;
	unsigned int	g;

	s = 0;
	i = 0;
	g = 0;
	while (dst[i] != '\0')
		i++;
	g = i;
	while (src[s] != '\0')
		s++;
	if (dstsize <= i)
		return (s + dstsize);
	if (dstsize > i && dstsize > 0)
	{
		while (*src != '\0' && (dstsize - i) - 1 > 0)
		{
			dst[i] = *src;
			i++;
			src++;
		}
		dst[i] = '\0';
	}
	return (s + g);
}
/*
int main()
{
	char dest[20] = "giuliettfffffffa";
	char src[43] = "lucttttttttttttttttttttttta";
	unsigned int size = 6;

	printf("%u\n", ft_strlcat(dest, src, size));
	printf("%lu\n", strlcat(dest, src, size));
}*/
