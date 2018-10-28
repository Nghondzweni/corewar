/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 21:55:58 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/30 00:25:50 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	size_t	x;

	x = 0;
	i = ft_strlen(dest);
	while (src[x] != '\0' && x < n)
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}
