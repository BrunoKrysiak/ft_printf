/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:57:30 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/09/30 14:57:30 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
    const char *s = "42 Warsaw";
    printf("find 'W': %s\n", ft_strchr(s, 'W'));
    printf("find '\\0': %p\n", (void *)ft_strchr(s, '\0'));
    printf("find 'x': %p\n", (void *)ft_strchr(s, 'x'));
    return (0);
}
*/