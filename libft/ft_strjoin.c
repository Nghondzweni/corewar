/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:54:54 by tnghondz          #+#    #+#             */
/*   Updated: 2018/06/02 19:05:35 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	char	*newstr;
	size_t	newlen;

	if (!s1 || !s2)
		return (NULL);
	newlen = ft_strlen(s1) + ft_strlen(s2);
	newstr = ft_strnew(newlen);
	if (newstr == NULL)
	{
		return (NULL);
	}
	ft_strcpy(newstr, s1);
	ft_strcat(newstr, s2);
	return (newstr);
}
