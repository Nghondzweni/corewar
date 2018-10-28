/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 23:02:22 by tnghondz          #+#    #+#             */
/*   Updated: 2018/06/02 16:57:56 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*newstr;

	i = 0;
	if (!s || !f)
		return (NULL);
	newstr = ft_strnew(ft_strlen(s));
	if (!newstr)
	{
		return (NULL);
	}
	if (s && f)
	{
		while (s[i])
		{
			newstr[i] = (*f)(i, s[i]);
			i++;
		}
		return (newstr);
	}
	return (NULL);
}
