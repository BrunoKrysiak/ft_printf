/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:20:58 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/11/20 16:20:59 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putnbr_recursive(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += putnbr_recursive(n / 10);
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

int	print_number(int n)
{
	int	count;

	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		write(1, "-", 1);
		return (1 + print_number(-n));
	}
	count = putnbr_recursive(n);
	return (count);
}
