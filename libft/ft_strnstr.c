/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 14:04:30 by tnghondz          #+#    #+#             */
/*   Updated: 2018/06/02 19:09:48 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == needle[i])
			i++;
		else
			i = 0;
		if (needle[i] == '\0')
			return ((char *)(haystack - i + 1));
		haystack++;
		len--;
	}
	return (NULL);
}
