/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:11:51 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/10/06 16:11:54 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*out;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	out = (char *)malloc(len + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < len)
	{
		out[i] = f((unsigned int)i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}

/*
#include <stdio.h>

static char f(unsigned int i, char c){ (void)i; return (c + 1); }

int main(void)
{
	char *s = ft_strmapi("abc", f);
	printf("%s\n", s);
	free(s);
	return 0;
}
*/