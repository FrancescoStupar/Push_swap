/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:14:44 by fstupar           #+#    #+#             */
/*   Updated: 2021/11/04 12:20:10 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//char	*ft_substr(char const *s, unsigned int start, size_t len)

static int	end_trim(char const *s1, char const *set)
{
	int	i;
	int	g;
	int	f;

	g = 0;
	f = 0;
	i = ft_strlen(s1) - 1;
	while (set[g] != '\0' && i != -1)
	{
		if (s1[i] == set[g])
		{
			i--;
			f++;
			g = 0;
		}
		else
			g++;
	}
	return (ft_strlen(s1) - f);
}

static int	trim(char const *s1, char const *set)
{
	int	i;
	int	g;
	int	f;

	g = 0;
	f = 0;
	i = 0;
	while (set[g] != '\0' && s1[i] != '\0')
	{
		if (s1[i] == set[g])
		{
			i++;
			f++;
			g = 0;
		}
		else
			g++;
	}
	return (f);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;
	int		len;

	start = trim(s1, set);
	end = end_trim(s1, set);
	len = end - start;
	result = ft_substr(s1, start, len);
	return (result);
}
/*
int main()
{
	printf("%s\n", ft_strtrim("54555224444244444445", "54"));
}*/
