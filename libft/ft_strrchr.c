/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 14:12:33 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/30 01:51:44 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = (int)(ft_strlen(s));
	while (len > 0 && s[len] != (char)c)
		len--;
	if (s[len] == (char)c)
	{
		return ((char *)s + len);
	}
	return (NULL);
}
