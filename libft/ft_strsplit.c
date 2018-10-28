/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:16:54 by tnghondz          #+#    #+#             */
/*   Updated: 2018/06/02 19:25:05 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *str, char c)
{
	int	wcount;
	int	i;

	wcount = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0' && str[i] != c)
			wcount++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (wcount);
}

static int	ft_word_len(char const *str, char c)
{
	int	i;
	int	wlen;

	i = 0;
	wlen = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		wlen++;
	}
	return (wlen);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**newstr;

	if (!s || !(newstr = (char **)malloc(sizeof(*newstr) *
					(ft_word_count(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_word_count(s, c))
	{
		k = 0;
		if (!(newstr[i] = ft_strnew(ft_word_len(&s[j], c) + 1)))
			newstr[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			newstr[i][k++] = s[j++];
		newstr[i][k] = '\0';
	}
	newstr[i] = 0;
	return (newstr);
}
