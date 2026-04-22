/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:56:36 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/09/30 14:56:37 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (!arr)
        return (1);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return (0);
}
*/