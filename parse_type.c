/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:20:34 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/11/20 16:20:36 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse_type(char type, va_list args)
{
	if (type == 'c')
		return (print_char(va_arg(args, int)));
	if (type == 's')
		return (print_string(va_arg(args, char *)));
	if (type == 'd' || type == 'i')
		return (print_number(va_arg(args, int)));
	if (type == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	if (type == 'x' || type == 'X')
		return (print_hex(va_arg(args, unsigned int), type));
	if (type == 'p')
		return (print_pointer(va_arg(args, unsigned long long)));
	if (type == '%')
		return (print_char('%'));
	return (0);
}
