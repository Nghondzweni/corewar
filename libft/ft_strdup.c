/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnghondz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:45:10 by tnghondz          #+#    #+#             */
/*   Updated: 2018/05/30 00:05:51 by tnghondz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s);
	new = (char *)malloc(len + 1 * sizeof(char));
	if (new)
		ft_strcpy(new, s);
	return (new);
}
