/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:22:46 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/30 00:17:53 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	x;

	i = ft_strlen(dest);
	x = 0;
	while (src[x] != '\0')
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}
