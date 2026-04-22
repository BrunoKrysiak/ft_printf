/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:20:10 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/11/20 16:20:12 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *fmt, ...);
int		parse_type(char type, va_list args);
int		print_char(int c);
int		print_string(char *s);
int		print_number(int n);
int		print_unsigned(unsigned int n);
int		print_hex(unsigned int n, char format);
int		print_pointer(unsigned long long ptr);

#endif
