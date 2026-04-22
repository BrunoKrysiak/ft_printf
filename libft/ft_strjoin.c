/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:07:06 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/10/06 16:07:08 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	safe_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

static size_t	add_part(char *dst, size_t off, const char *src)
{
	size_t	i;

	if (!src)
		return (off);
	i = 0;
	while (src[i])
	{
		dst[off + i] = src[i];
		i++;
	}
	return (off + i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	size_t	i;
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	l1 = safe_strlen(s1);
	l2 = safe_strlen(s2);
	res = (char *)malloc(l1 + l2 + 1);
	if (!res)
		return (NULL);
	i = 0;
	i = add_part(res, i, s1);
	i = add_part(res, i, s2);
	res[i] = '\0';
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	char *s1 = "Hello ";
	char *s2 = "World!";
	char *joined = ft_strjoin(s1, s2);
	printf("%s\n", joined);
	free(joined);
}
*/