/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:10:52 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/10/06 16:10:54 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(long n)
{
	size_t	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*out;

	nb = (long)n;
	len = int_len(nb);
	out = (char *)malloc(len + 1);
	if (!out)
		return (NULL);
	out[len] = '\0';
	if (nb < 0)
	{
		out[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		out[--len] = '0';
	while (nb > 0)
	{
		out[--len] = '0' + (nb % 10);
		nb /= 10;
	}
	return (out);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(42));         // "42"
	printf("%s\n", ft_itoa(-42));        // "-42"
	printf("%s\n", ft_itoa(0));          // "0"
	printf("%s\n", ft_itoa(-2147483648));// "-2147483648"
}
*/