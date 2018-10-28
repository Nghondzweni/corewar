/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 14:04:30 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/28 23:20:02 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	npos;
	unsigned int	hpos;
	size_t			nlen;

	npos = 0;
	hpos = 0;
	nlen = ft_strlen(needle);
	if (nlen == 0)
	{
		return ((char*)haystack);
	}
	while (haystack[hpos])
	{
		npos = 0;
		while (needle[npos] == haystack[npos + hpos])
		{
			if (npos == (nlen - 1))
			{
				return ((char *)haystack + hpos);
			}
			npos++;
		}
		hpos++;
	}
	return (NULL);
}
