/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:19:53 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/11/20 16:19:59 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, fmt);
	i = 0;
	count = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			count += parse_type(fmt[i], args);
		}
		else
			count += print_char(fmt[i]);
		i++;
	}
	va_end(args);
	return (count);
}
