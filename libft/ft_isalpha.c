/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:57:48 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/09/30 14:57:49 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*
#include <stdio.h>
int	main(void)
{
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
    printf("ft_isalpha('z') = %d\n", ft_isalpha('z'));
    printf("ft_isalpha('0') = %d\n", ft_isalpha('0'));
    printf("ft_isalpha('#') = %d\n", ft_isalpha('#'));
    return (0);
}
*/