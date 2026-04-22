/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:08:13 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/10/06 16:08:18 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_local(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	ft_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_subdup(const char *s, size_t start, size_t len)
{
	size_t	i;
	char	*res;

	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_subdup(s1, 0, ft_strlen_local(s1)));
	start = 0;
	end = ft_strlen_local(s1);
	while (s1[start] && ft_in_set(s1[start], set))
		start++;
	while (end > start && ft_in_set(s1[end - 1], set))
		end--;
	return (ft_subdup(s1, start, end - start));
}

/*
#include <stdio.h>

int main(void)
{
	char *s = ft_strtrim("xx 42 xx", "x ");
	printf("%s\n", s);
	free(s);
	return 0;
}
*/