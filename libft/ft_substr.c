/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:05:59 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/10/06 16:06:02 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	rlen;
	char	*out;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	rlen = slen - start;
	if (rlen > len)
		rlen = len;
	out = (char *)malloc(rlen + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < rlen)
	{
		out[i] = s[start + i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*s = "Hello 42 Warsaw!";
	char	*sub;

	sub = ft_substr(s, 6, 2);
	printf("Result: %s\n", sub);
	free(sub);
}
*/