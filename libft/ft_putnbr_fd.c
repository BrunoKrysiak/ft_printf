/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:16:07 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/10/06 16:16:08 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_rec(long n, int fd)
{
	char	ch;

	if (n >= 10)
		putnbr_rec(n / 10, fd);
	ch = '0' + (n % 10);
	write(fd, &ch, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = (long)n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	putnbr_rec(nb, fd);
}

/*
int	main(void)
{
	ft_putnbr_fd(1337, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-42, 1);
	write(1, "\n", 1);
}
*/