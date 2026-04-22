/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:57:01 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/09/30 14:57:01 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
#include <stdio.h>

int main(void)
{
	printf("ft_strlen(\"hello\") = %zu\n", ft_strlen("hello"));
	printf("ft_strlen(\"\") = %zu\n", ft_strlen(""));
	printf("ft_strlen(\"42 Warsaw\") = %zu\n", ft_strlen("42 Warsaw"));
	return 0;
}
*/