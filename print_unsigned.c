/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:21:20 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/11/20 16:21:21 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putuint_recursive(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += putuint_recursive(n / 10);
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

int	print_unsigned(unsigned int n)
{
	return (putuint_recursive(n));
}
