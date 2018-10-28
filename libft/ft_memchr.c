/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:25:19 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/29 23:34:37 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sptr;

	i = 0;
	sptr = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)c == sptr[i])
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
