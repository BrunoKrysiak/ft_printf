/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:57:16 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/09/30 14:57:16 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));
	printf("ft_isalnum('z') = %d\n", ft_isalnum('z'));
	printf("ft_isalnum('5') = %d\n", ft_isalnum('5'));
	printf("ft_isalnum('!') = %d\n", ft_isalnum('!'));
	return (0);
}
*/