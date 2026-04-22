/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:55:11 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/09/30 14:55:12 by bkrysiak         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	if (!dst && size == 0)
		return (ft_strlen_local(src));
	slen = ft_strlen_local(src);
	dlen = 0;
	while (dlen < size && dst[dlen])
		dlen++;
	if (dlen == size)
		return (size + slen);
	i = 0;
	while (src[i] && dlen + i + 1 < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
		dst[dlen + i] = '\0';
	return (dlen + slen);
}

/*
#include <stdio.h>

int main(void)
{
	char d[6] = "Hi";
	size_t r = ft_strlcat(d, "There", sizeof d);
	printf("dst=\"%s\" ret=%zu\n", d, r);
	return 0;
}
*/