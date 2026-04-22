/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrysiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:09:10 by bkrysiak          #+#    #+#             */
/*   Updated: 2025/10/06 16:09:21 by bkrysiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	cnt;
	int		in;

	i = 0;
	cnt = 0;
	in = 0;
	while (s[i])
	{
		if (s[i] != c && in == 0)
		{
			in = 1;
			cnt++;
		}
		else if (s[i] == c)
			in = 0;
		i++;
	}
	return (cnt);
}

static int	free_all(char **tab, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (-1);
}

static char	*alloc_word(const char *s, size_t start, size_t len)
{
	char	*w;
	size_t	i;

	w = (char *)malloc(len + 1);
	if (!w)
		return (NULL);
	i = 0;
	while (i < len)
	{
		w[i] = s[start + i];
		i++;
	}
	w[i] = '\0';
	return (w);
}

static int	fill_tab(char **tab, const char *s, char c)
{
	size_t	i;
	size_t	w;
	size_t	start;
	size_t	len;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		len = i - start;
		if (len)
		{
			tab[w] = alloc_word(s, start, len);
			if (!tab[w])
				return (free_all(tab, w));
			w++;
		}
	}
	return ((int)w);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	wc;
	int		k;

	if (!s)
		return (NULL);
	wc = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!tab)
		return (NULL);
	k = fill_tab(tab, s, c);
	if (k < 0)
		return (NULL);
	tab[k] = NULL;
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	char	**arr;
	size_t	i;

	arr = ft_split("one,two,,,three", ',');
	if (!arr)
		return (1);
	i = 0;
	while (arr[i])
	{
		printf("[%s]\n", arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/