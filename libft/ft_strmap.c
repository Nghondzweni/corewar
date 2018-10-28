/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:59:27 by tnghondz          #+#    #+#             */
/*   Updated: 2018/06/02 16:56:55 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
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
			newstr[i] = (*f)(s[i]);
			i++;
		}
		return (newstr);
	}
	return (NULL);
}
