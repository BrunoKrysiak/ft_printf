/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:55:44 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/09/30 14:55:47 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
#include <stdio.h>
int	main(void)
{
    printf("ft_isdigit('0') = %d\n", ft_isdigit('0'));
    printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
    printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
    return (0);
}
*/