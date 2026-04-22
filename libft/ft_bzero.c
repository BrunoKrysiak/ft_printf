/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:55:36 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/09/30 14:55:37 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
    char buf[10] = "abcdef";
    ft_bzero(buf + 2, 3);
    for (int i = 0; i < 10; i++)
        printf("%d ", buf[i]);
    printf("\n");
    return (0);
}
*/