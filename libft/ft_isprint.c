/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:56:44 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/09/30 14:56:45 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
#include <stdio.h>

int main(void)
{
	printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
	printf("ft_isprint('A') = %d\n", ft_isprint('A'));
	printf("ft_isprint('~') = %d\n", ft_isprint('~'));
	printf("ft_isprint(31) = %d\n", ft_isprint(31));
	return (0);
}
*/