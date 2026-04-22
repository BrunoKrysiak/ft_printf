/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:20:51 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/11/20 16:20:53 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	puthex_recursive(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += puthex_recursive(n / 16, base);
	count += write(1, &base[n % 16], 1);
	return (count);
}

int	print_hex(unsigned int n, char format)
{
	char	*base;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	return (puthex_recursive(n, base));
}
