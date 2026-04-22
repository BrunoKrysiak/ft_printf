/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:54:35 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/09/30 14:54:37 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
#include <stdio.h>
int	main(void)
{
    printf("ft_isascii(0) = %d\n", ft_isascii(0));
    printf("ft_isascii(127) = %d\n", ft_isascii(127));
    printf("ft_isascii(200) = %d\n", ft_isascii(200));
    return (0);
}
*/