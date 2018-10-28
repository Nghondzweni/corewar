/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:20:04 by tnghondz          #+#    #+#             */
/*   Updated: 2018/06/02 19:32:04 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*newstr;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	if (!(newstr = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		newstr[i] = s[start];
		start++;
		i++;
	}
	return (newstr);
}
